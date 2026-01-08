# Design Choices and Assumptions

This document explains the key design decisions made in this project.

## Why a Toy Monte Carlo?
The goal of this project is to understand the kinematic features of
neutrinoless double beta decay without introducing detector or
nuclear-structure complexity.

A toy Monte Carlo allows full control over assumptions and makes
the physics transparent and explainable.

## Why Fixed Q-value?
In 0νββ decay, the total electron energy is expected to peak at the
Q-value of the decay. Using a fixed Q-value highlights this feature
clearly in the summed-energy spectrum.

## Why Flat Energy Sharing?
A uniform energy split between the two electrons was chosen as a
first-order approximation to keep the model simple and interpretable.

More realistic spectral shapes are planned as future extensions.

## What is Not Modeled?
- Nuclear matrix elements
- Weak interaction dynamics
- Detector response
- Background processes

These effects are intentionally excluded to maintain clarity and
focus on kinematics.
