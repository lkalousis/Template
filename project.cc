
#include "TApplication.h"

#include "iostream"
#include "iomanip"

#include "TROOT.h"
#include "TStyle.h"
#include "TColor.h"

//#include "TMath.h"
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
  
  gStyle->SetPalette( 1 ); 
  
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
