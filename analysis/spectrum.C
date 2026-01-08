void spectrum() {
    TCanvas *c = new TCanvas("c","Summed Energy Spectrum",800,600);
    TH1F *h = new TH1F(
        "h",
        "Summed Electron Energy;E_{sum} (MeV);Counts",
        100, 0, 2.2
    );

    std::ifstream in("../events.dat");
    double E1, E2, Esum;

    while (in >> E1 >> E2 >> Esum) {
        h->Fill(Esum);
    }

    h->Draw();
}
