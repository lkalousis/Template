
#include "TApplication.h"

#include "iostream"
#include "iomanip"

//#include "fstream"
//#include "sstream"

#include "TROOT.h"
#include "TStyle.h"
#include "TColor.h"

#include "TMath.h"
//#include "TCanvas.h"

using namespace std;

Int_t project()
{  
  time_t start;  
  time( &start );

  cout << "" << endl;
  cout << " the macro now begins ... ( project.cc )" << endl;
  cout << "" << endl;

  gROOT->Reset();
  gStyle->SetCanvasBorderMode( 0 );
  gStyle->SetCanvasColor( 0 );
  gStyle->SetPadColor( 0 );
  gStyle->SetPadBorderMode( 0 );
  gStyle->SetFrameBorderMode( 0 );
  gStyle->SetTitleColor( 0 );   
  gStyle->SetTitleFillColor( 0 );  
  gStyle->SetTitleBorderSize( 0 );
  gStyle->SetTitleX( 0.10 );
  gStyle->SetTitleY( 0.98 );
  gStyle->SetTitleFont( 22, "" );
  gStyle->SetTitleSize( 0.055, ""  );
  gStyle->SetStatColor( 0 );
  gStyle->SetStatFont( 22 );
  gStyle->SetStatBorderSize( 1 );
  gStyle->SetStatX( 0.90 );
  gStyle->SetStatY( 0.90 );
  gStyle->SetStatFontSize( 0.04 );
  gStyle->SetOptStat( 1110 );
  gStyle->SetTitleFont( 22, "XYZ"  );
  gStyle->SetTitleSize( 0.05, "XYZ"  );
  gStyle->SetTitleColor( kBlack, "XYZ"  );
  gStyle->SetTitleAlign(13);
  gStyle->SetLabelFont( 22, "XYZ"  );
  gStyle->SetLabelSize( 0.04, "XYZ"  );
  gStyle->SetOptStat( 1110 ); 
  gStyle->SetOptFit( 0 ); 
  
  gStyle->SetPalette( 1 ); // Standard
  //gStyle->SetPalette( 51, 0 ); // DeepSea
  //gStyle->SetPalette( 53, 0 ); // Black body
  
  const Int_t NRGBs = 5;
  const Int_t NCont = 255;
  Double_t stops[NRGBs] = { 0.00, 0.34, 0.61, 0.84, 1.00 };
  Double_t red[NRGBs]   = { 0.00, 0.00, 0.87, 1.00, 0.51 };
  Double_t green[NRGBs] = { 0.00, 0.81, 1.00, 0.20, 0.00 };
  Double_t blue[NRGBs]  = { 0.51, 1.00, 0.12, 0.00, 0.00 };
  TColor::CreateGradientColorTable( NRGBs, stops, red, green, blue, NCont );
  gStyle->SetNumberContours( NCont );

  gROOT->ForceStyle();

  //TCanvas *c1 = new TCanvas( "c1", "" );
  //c1->cd();
  //c1->SetLogy();

  //c1->Update();
  //c1->WaitPrimitive();
  
  
  cout << "" << endl;
  cout << "" << endl;
   
  
  time_t end;      
  time( &end );
      
  Int_t dura = difftime( end, start );      
  Int_t min = dura / 60; Int_t sec = dura % 60;
    
  cout << " ---> " << Form( "%02d:%02d", min, sec ) << endl;  
  cout << "" << endl;
  
  return 0;
  
}

int main()//int argc, char *argv[] )  
{
  //argc *= 1.0;
  //Int_t arg1 = atoi( argv[1] );
  //Float_t arg2 = atof( argv[2] );
  //Double_t arg3 = atof( argv[3] );
  
  TApplication theApp( "App", 0, 0 );
    
  project();

}

//TFile *f = new TFile( "output.root", "RECREATE" );
//Form( "out/%s-Events.root", name.c_str() ) // string name;
//f->cd();

//TFile *f1 = new TFile( "input.root", "read" );
//TTree *tr = (TTree*)f1->Get( "tr" );

/*
  Float_t branch;
  tr->SetBranchStatus( "*", 0 ); 
  tr->SetBranchStatus( "branch", 1 );
  tr->SetBranchAddress( "branch", &branch );

  Int_t ntot = tr->GetEntries();
  for ( Int_t i=0; i<ntot; i++ )
  {
  tr->GetEntry( i );
  cout << branch << endl;
  }		  
*/

/*
  TTree *tr1 = new TTree( "tr1", "" );
  Float_t branch1;      
  tr1->Branch( "branch1", &branch1, "branch1/F" ); or
  tr1->Branch( "branch1", &branch1 );
  
*/
  
  
/*
  TLegend *leg = new TLegend( 0.55, 0.67, 0.85, 0.85 );
  leg->SetTextFont( 22 );
  leg->SetBorderSize( 0 );
  leg->AddEntry( h1, "Data", "PE" );
  leg->AddEntry( h2, "Background", "L" );
  leg->AddEntry( h3, "Best Fit", "LF" );
  leg->SetFillColor( 0 ); 
  leg->Draw();
*/

/*
  ifstream input; 
  string sline; 
  istringstream iss;
  
  input.open( "file.txt", ios::in );
  ofstream output( "file2.txt" );
      
  while ( getline( input, sline ) ) 
    {
      iss.str( sline );
            
      Float_t phi;
      Float_t gamma;
      Float_t chi2;
      
      iss >> gamma >> phi >> chi2;
      //cout << gamma << ", " << phi << ", " << chi2 << endl;
      //getchar();

      output << setw(10) << Form( "%.3f", gamma ) << setw(10) << Form( "%.3f", phi ) << setw(10) << Form( "%.3f", chi2 ) << endl;
      iss.clear();
      
    }
  
    input.clear();
  input.close();
*/
