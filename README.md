# Toy Monte Carlo Study of Neutrinoless Double Beta Decay

This repository contains a simple Monte Carlo simulation to study
the kinematic features of neutrinoless double beta decay (0νββ).

## Physics Motivation
In 0νββ decay, two electrons are emitted from the same nucleus
without accompanying neutrinos. As a result, the sum of the
electron energies peaks at the decay Q-value.

## Model Description
- Two electrons generated per event
- Total energy conserved using a fixed Q-value
- Idealized kinematics (toy model)
- No detector or nuclear structure effects

## Analysis
The generated events are analyzed using CERN ROOT to obtain
the summed-energy spectrum of the two electrons.

## How to Run

### 1. Compile and run the Monte Carlo generator
The C++ program generates toy double beta decay events and writes
electron energies to a text file.

...bash
g++ src/generator.cpp -o generator
./generator


## Limitations
This is a learning-oriented toy model and does not include:
- Nuclear matrix elements
- Detector effects
- Background modeling

## Future Work
Possible extensions of this project include:
- Implementing a more realistic 2νββ energy spectrum
- Extending the generator to Geant4-based detector simulations
- Studying detector energy resolution effects
- Comparing idealized spectra with experimental signatures

## Tools Used
- C++
- CERN ROOT
- Git

## Author
Keshav Sharma
