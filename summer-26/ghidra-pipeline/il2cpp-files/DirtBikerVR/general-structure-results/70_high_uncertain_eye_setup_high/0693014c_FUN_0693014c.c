/*
FUNCTION_NAME: FUN_0693014c
ENTRY_POINT: 0693014c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_0693014c(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  
  if ((DAT_0897cf07 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_08488c00);
    FUN_03a8a718(PTR_DAT_084b5bd0);
    DAT_0897cf07 = 1;
  }
  puVar1 = PTR_DAT_08488c00;
  if (*param_1 != 0) {
    lVar7 = *(long *)(*param_1 + 0x68);
    uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08488c00);
    puVar2 = PTR_DAT_084b5bd0;
    if (param_2 != (long *)0x0) {
      lVar4 = *param_2;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_084b5bd0) {
            lVar4 = lVar4 + (long)*piVar6 * 0x10 + 0x138;
            goto OVRManager__UpdateBoundary;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      lVar4 = FUN_03ac43c4(param_2,*(long *)PTR_DAT_084b5bd0,0);
OVRManager__UpdateBoundary:
      FUN_05e42d5c(uVar3,param_2,*(undefined8 *)(lVar4 + 8),0);
      if (lVar7 != 0) {
        FUN_070a11ec(lVar7,uVar3,0);
        if (*param_1 != 0) {
          lVar4 = *(long *)(*param_1 + 0x68);
          uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
          lVar7 = *param_2;
          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar5 != 0) {
            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                lVar7 = lVar7 + (long)*piVar6 * 0x10 + 0x138;
                goto LAB_06930294;
              }
              uVar5 = uVar5 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar5 != 0);
          }
          lVar7 = FUN_03ac43c4(param_2,*(long *)puVar2,0);
LAB_06930294:
          FUN_05e42d5c(uVar3,param_2,*(undefined8 *)(lVar7 + 8),0);
          if (lVar4 != 0) {
            FUN_070a134c(lVar4,uVar3,0);
            if (*param_1 != 0) {
              lVar4 = *(long *)(*param_1 + 0x68);
              uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
              lVar7 = *param_2;
              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar5 != 0) {
                piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                    lVar7 = lVar7 + (long)*piVar6 * 0x10 + 0x138;
                    goto LAB_06930320;
                  }
                  uVar5 = uVar5 - 1;
                  piVar6 = piVar6 + 4;
                } while (uVar5 != 0);
              }
              lVar7 = FUN_03ac43c4(param_2,*(long *)puVar2,0);
LAB_06930320:
              FUN_05e42d5c(uVar3,param_2,*(undefined8 *)(lVar7 + 8),0);
              if (lVar4 != 0) {
                FUN_070a129c(lVar4,uVar3,0);
                if (*param_1 != 0) {
                  lVar4 = *(long *)(*param_1 + 0x70);
                  uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                  lVar7 = *param_2;
                  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                  if (uVar5 != 0) {
                    piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                        lVar7 = lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138;
                        goto LAB_069303b0;
                      }
                      uVar5 = uVar5 - 1;
                      piVar6 = piVar6 + 4;
                    } while (uVar5 != 0);
                  }
                  lVar7 = FUN_03ac43c4(param_2,*(long *)puVar2,1);
LAB_069303b0:
                  FUN_05e42d5c(uVar3,param_2,*(undefined8 *)(lVar7 + 8),0);
                  if (lVar4 != 0) {
                    FUN_070a11ec(lVar4,uVar3,0);
                    if (*param_1 != 0) {
                      lVar4 = *(long *)(*param_1 + 0x70);
                      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                      lVar7 = *param_2;
                      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                      if (uVar5 != 0) {
                        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                        do {
                          if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                            lVar7 = lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138;
                            goto LAB_06930440;
                          }
                          uVar5 = uVar5 - 1;
                          piVar6 = piVar6 + 4;
                        } while (uVar5 != 0);
                      }
                      lVar7 = FUN_03ac43c4(param_2,*(long *)puVar2,1);
LAB_06930440:
                      FUN_05e42d5c(uVar3,param_2,*(undefined8 *)(lVar7 + 8),0);
                      if (lVar4 != 0) {
                        FUN_070a134c(lVar4,uVar3,0);
                        if (*param_1 != 0) {
                          lVar4 = *(long *)(*param_1 + 0x70);
                          uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                          lVar7 = *param_2;
                          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                          if (uVar5 != 0) {
                            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                            do {
                              if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                                lVar7 = lVar7 + (long)(*piVar6 + 1) * 0x10 + 0x138;
                                goto LAB_069304d0;
                              }
                              uVar5 = uVar5 - 1;
                              piVar6 = piVar6 + 4;
                            } while (uVar5 != 0);
                          }
                          lVar7 = FUN_03ac43c4(param_2,*(long *)puVar2,1);
LAB_069304d0:
                          FUN_05e42d5c(uVar3,param_2,*(undefined8 *)(lVar7 + 8),0);
                          if (lVar4 != 0) {
                            FUN_070a129c(lVar4,uVar3,0);
                            if (*param_1 != 0) {
                              lVar4 = *(long *)(*param_1 + 0x78);
                              uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                              lVar7 = *param_2;
                              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                              if (uVar5 != 0) {
                                piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                do {
                                  if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                                    lVar7 = lVar7 + (long)(*piVar6 + 2) * 0x10 + 0x138;
                                    goto LAB_06930560;
                                  }
                                  uVar5 = uVar5 - 1;
                                  piVar6 = piVar6 + 4;
                                } while (uVar5 != 0);
                              }
                              lVar7 = FUN_03ac43c4(param_2,*(long *)puVar2,2);
LAB_06930560:
                              FUN_05e42d5c(uVar3,param_2,*(undefined8 *)(lVar7 + 8),0);
                              if (lVar4 != 0) {
                                FUN_070a11ec(lVar4,uVar3,0);
                                if (*param_1 != 0) {
                                  lVar4 = *(long *)(*param_1 + 0x78);
                                  uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                                  lVar7 = *param_2;
                                  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                  if (uVar5 != 0) {
                                    piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                    do {
                                      if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                                        lVar7 = lVar7 + (long)(*piVar6 + 2) * 0x10 + 0x138;
                                        goto LAB_069305f0;
                                      }
                                      uVar5 = uVar5 - 1;
                                      piVar6 = piVar6 + 4;
                                    } while (uVar5 != 0);
                                  }
                                  lVar7 = FUN_03ac43c4(param_2,*(long *)puVar2,2);
LAB_069305f0:
                                  FUN_05e42d5c(uVar3,param_2,*(undefined8 *)(lVar7 + 8),0);
                                  if (lVar4 != 0) {
                                    FUN_070a134c(lVar4,uVar3,0);
                                    if (*param_1 != 0) {
                                      lVar4 = *(long *)(*param_1 + 0x78);
                                      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                                      lVar7 = *param_2;
                                      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                      if (uVar5 != 0) {
                                        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                        do {
                                          if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                                            lVar7 = lVar7 + (long)(*piVar6 + 2) * 0x10 + 0x138;
                                            goto LAB_06930680;
                                          }
                                          uVar5 = uVar5 - 1;
                                          piVar6 = piVar6 + 4;
                                        } while (uVar5 != 0);
                                      }
                                      lVar7 = FUN_03ac43c4(param_2,*(long *)puVar2,2);
LAB_06930680:
                                      FUN_05e42d5c(uVar3,param_2,*(undefined8 *)(lVar7 + 8),0);
                                      if (lVar4 != 0) {
                                        FUN_070a129c(lVar4,uVar3,0);
                                        if (*param_1 != 0) {
                                          lVar4 = *(long *)(*param_1 + 0x80);
                                          uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                                          lVar7 = *param_2;
                                          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                          if (uVar5 != 0) {
                                            piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                            do {
                                              if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                                                lVar7 = lVar7 + (long)(*piVar6 + 3) * 0x10 + 0x138;
                                                goto LAB_06930710;
                                              }
                                              uVar5 = uVar5 - 1;
                                              piVar6 = piVar6 + 4;
                                            } while (uVar5 != 0);
                                          }
                                          lVar7 = FUN_03ac43c4(param_2,*(long *)puVar2,3);
LAB_06930710:
                                          FUN_05e42d5c(uVar3,param_2,*(undefined8 *)(lVar7 + 8),0);
                                          if (lVar4 != 0) {
                                            FUN_070a11ec(lVar4,uVar3,0);
                                            if (*param_1 != 0) {
                                              lVar4 = *(long *)(*param_1 + 0x80);
                                              uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                                              lVar7 = *param_2;
                                              uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                              if (uVar5 != 0) {
                                                piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                                do {
                                                  if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
                                                    lVar7 = lVar7 + (long)(*piVar6 + 3) * 0x10 +
                                                            0x138;
                                                    goto LAB_069307a0;
                                                  }
                                                  uVar5 = uVar5 - 1;
                                                  piVar6 = piVar6 + 4;
                                                } while (uVar5 != 0);
                                              }
                                              lVar7 = FUN_03ac43c4(param_2,*(long *)puVar2,3);
LAB_069307a0:
                                              FUN_05e42d5c(uVar3,param_2,*(undefined8 *)(lVar7 + 8),
                                                           0);
                                              if (lVar4 != 0) {
                                                FUN_070a134c(lVar4,uVar3,0);
                                                if (*param_1 != 0) {
                                                  lVar4 = *(long *)(*param_1 + 0x80);
                                                  uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)puVar1);
                                                  lVar7 = *param_2;
                                                  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                                  if (uVar5 != 0) {
                                                    piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
                                                    do {
                                                      if (*(long *)(piVar6 + -2) == *(long *)puVar2)
                                                      {
                                                        lVar7 = lVar7 + (long)(*piVar6 + 3) * 0x10 +
                                                                0x138;
                                                        goto LAB_06930830;
                                                      }
                                                      uVar5 = uVar5 - 1;
                                                      piVar6 = piVar6 + 4;
                                                    } while (uVar5 != 0);
                                                  }
                                                  lVar7 = FUN_03ac43c4(param_2,*(long *)puVar2,3);
LAB_06930830:
                                                  FUN_05e42d5c(uVar3,param_2,
                                                               *(undefined8 *)(lVar7 + 8),0);
                                                  if (lVar4 != 0) {
                                                    FUN_070a129c(lVar4,uVar3,0);
                                                    if (*param_1 != 0) {
                                                      lVar4 = *(long *)(*param_1 + 0x88);
                                                      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                                                                  puVar1);
                                                      lVar7 = *param_2;
                                                      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                                      if (uVar5 != 0) {
                                                        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8
                                                                        );
                                                        do {
                                                          if (*(long *)(piVar6 + -2) ==
                                                              *(long *)puVar2) {
                                                            lVar7 = lVar7 + (long)(*piVar6 + 4) *
                                                                            0x10 + 0x138;
                                                            goto LAB_069308c0;
                                                          }
                                                          uVar5 = uVar5 - 1;
                                                          piVar6 = piVar6 + 4;
                                                        } while (uVar5 != 0);
                                                      }
                                                      lVar7 = FUN_03ac43c4(param_2,*(long *)puVar2,4
                                                                          );
LAB_069308c0:
                                                      FUN_05e42d5c(uVar3,param_2,
                                                                   *(undefined8 *)(lVar7 + 8),0);
                                                      if (lVar4 != 0) {
                                                        FUN_070a11ec(lVar4,uVar3,0);
                                                        if (*param_1 != 0) {
                                                          lVar4 = *(long *)(*param_1 + 0x88);
                                                          uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                                                                      puVar1);
                                                          lVar7 = *param_2;
                                                          uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                                          if (uVar5 != 0) {
                                                            piVar6 = (int *)(*(long *)(lVar7 + 0xb0)
                                                                            + 8);
                                                            do {
                                                              if (*(long *)(piVar6 + -2) ==
                                                                  *(long *)puVar2) {
                                                                lVar7 = lVar7 + (long)(*piVar6 + 4)
                                                                                * 0x10 + 0x138;
                                                                goto LAB_06930950;
                                                              }
                                                              uVar5 = uVar5 - 1;
                                                              piVar6 = piVar6 + 4;
                                                            } while (uVar5 != 0);
                                                          }
                                                          lVar7 = FUN_03ac43c4(param_2,*(long *)
                                                  puVar2,4);
LAB_06930950:
                                                  FUN_05e42d5c(uVar3,param_2,
                                                               *(undefined8 *)(lVar7 + 8),0);
                                                  if (lVar4 != 0) {
                                                    FUN_070a134c(lVar4,uVar3,0);
                                                    if (*param_1 != 0) {
                                                      lVar4 = *(long *)(*param_1 + 0x88);
                                                      uVar3 = thunk_FUN_03ac74bc(*(undefined8 *)
                                                                                  puVar1);
                                                      lVar7 = *param_2;
                                                      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
                                                      if (uVar5 != 0) {
                                                        piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8
                                                                        );
                                                        do {
                                                          if (*(long *)(piVar6 + -2) ==
                                                              *(long *)puVar2) {
                                                            lVar7 = lVar7 + (long)(*piVar6 + 4) *
                                                                            0x10 + 0x138;
                                                            goto LAB_069309e0;
                                                          }
                                                          uVar5 = uVar5 - 1;
                                                          piVar6 = piVar6 + 4;
                                                        } while (uVar5 != 0);
                                                      }
                                                      lVar7 = FUN_03ac43c4(param_2,*(long *)puVar2,4
                                                                          );
LAB_069309e0:
                                                      FUN_05e42d5c(uVar3,param_2,
                                                                   *(undefined8 *)(lVar7 + 8),0);
                                                      if (lVar4 != 0) {
                                                        FUN_070a129c(lVar4,uVar3,0);
                                                        return;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


