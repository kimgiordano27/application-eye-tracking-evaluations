/*
FUNCTION_NAME: OVRManager$$StaticUpdateMixedRealityCapture
ENTRY_POINT: 0692fac8
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


void OVRManager__StaticUpdateMixedRealityCapture(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined8 *unaff_x23;
  long *unaff_x24;
  
  FUN_03ac43c4();
  FUN_05e42d5c();
  if (unaff_x21 != 0) {
    FUN_070a1194();
    if (*unaff_x20 != 0) {
      lVar4 = *(long *)(*unaff_x20 + 0x70);
      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
      if (uVar2 != 0) {
        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
        do {
          if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_0692fb70;
          uVar2 = uVar2 - 1;
          lVar3 = lVar3 + 0x10;
        } while (uVar2 != 0);
      }
      FUN_03ac43c4();
LAB_0692fb70:
      FUN_05e42d5c(uVar1);
      if (lVar4 != 0) {
        FUN_070a12f4(lVar4,uVar1,0);
        if (*unaff_x20 != 0) {
          lVar4 = *(long *)(*unaff_x20 + 0x70);
          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
          uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
          if (uVar2 != 0) {
            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
            do {
              if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_0692fc00;
              uVar2 = uVar2 - 1;
              lVar3 = lVar3 + 0x10;
            } while (uVar2 != 0);
          }
          FUN_03ac43c4();
LAB_0692fc00:
          FUN_05e42d5c(uVar1);
          if (lVar4 != 0) {
            FUN_070a1244(lVar4,uVar1,0);
            if (*unaff_x20 != 0) {
              lVar4 = *(long *)(*unaff_x20 + 0x78);
              uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
              uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
              if (uVar2 != 0) {
                lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                do {
                  if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_0692fc90;
                  uVar2 = uVar2 - 1;
                  lVar3 = lVar3 + 0x10;
                } while (uVar2 != 0);
              }
              FUN_03ac43c4();
LAB_0692fc90:
              FUN_05e42d5c(uVar1);
              if (lVar4 != 0) {
                FUN_070a1194(lVar4,uVar1,0);
                if (*unaff_x20 != 0) {
                  lVar4 = *(long *)(*unaff_x20 + 0x78);
                  uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                  if (uVar2 != 0) {
                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                    do {
                      if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_0692fd20;
                      uVar2 = uVar2 - 1;
                      lVar3 = lVar3 + 0x10;
                    } while (uVar2 != 0);
                  }
                  FUN_03ac43c4();
LAB_0692fd20:
                  FUN_05e42d5c(uVar1);
                  if (lVar4 != 0) {
                    FUN_070a12f4(lVar4,uVar1,0);
                    if (*unaff_x20 != 0) {
                      lVar4 = *(long *)(*unaff_x20 + 0x78);
                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                      if (uVar2 != 0) {
                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                        do {
                          if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_0692fdb0;
                          uVar2 = uVar2 - 1;
                          lVar3 = lVar3 + 0x10;
                        } while (uVar2 != 0);
                      }
                      FUN_03ac43c4();
LAB_0692fdb0:
                      FUN_05e42d5c(uVar1);
                      if (lVar4 != 0) {
                        FUN_070a1244(lVar4,uVar1,0);
                        if (*unaff_x20 != 0) {
                          lVar4 = *(long *)(*unaff_x20 + 0x80);
                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                          uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                          if (uVar2 != 0) {
                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                            do {
                              if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_0692fe40;
                              uVar2 = uVar2 - 1;
                              lVar3 = lVar3 + 0x10;
                            } while (uVar2 != 0);
                          }
                          FUN_03ac43c4();
LAB_0692fe40:
                          FUN_05e42d5c(uVar1);
                          if (lVar4 != 0) {
                            FUN_070a1194(lVar4,uVar1,0);
                            if (*unaff_x20 != 0) {
                              lVar4 = *(long *)(*unaff_x20 + 0x80);
                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                              uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                              if (uVar2 != 0) {
                                lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                do {
                                  if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_0692fed0;
                                  uVar2 = uVar2 - 1;
                                  lVar3 = lVar3 + 0x10;
                                } while (uVar2 != 0);
                              }
                              FUN_03ac43c4();
LAB_0692fed0:
                              FUN_05e42d5c(uVar1);
                              if (lVar4 != 0) {
                                FUN_070a12f4(lVar4,uVar1,0);
                                if (*unaff_x20 != 0) {
                                  lVar4 = *(long *)(*unaff_x20 + 0x80);
                                  uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                  uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                  if (uVar2 != 0) {
                                    lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                    do {
                                      if (*(long *)(lVar3 + -8) == *unaff_x24) goto LAB_0692ff60;
                                      uVar2 = uVar2 - 1;
                                      lVar3 = lVar3 + 0x10;
                                    } while (uVar2 != 0);
                                  }
                                  FUN_03ac43c4();
LAB_0692ff60:
                                  FUN_05e42d5c(uVar1);
                                  if (lVar4 != 0) {
                                    FUN_070a1244(lVar4,uVar1,0);
                                    if (*unaff_x20 != 0) {
                                      lVar4 = *(long *)(*unaff_x20 + 0x88);
                                      uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                      uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                      if (uVar2 != 0) {
                                        lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                        do {
                                          if (*(long *)(lVar3 + -8) == *unaff_x24)
                                          goto LAB_0692fff0;
                                          uVar2 = uVar2 - 1;
                                          lVar3 = lVar3 + 0x10;
                                        } while (uVar2 != 0);
                                      }
                                      FUN_03ac43c4();
LAB_0692fff0:
                                      FUN_05e42d5c(uVar1);
                                      if (lVar4 != 0) {
                                        FUN_070a1194(lVar4,uVar1,0);
                                        if (*unaff_x20 != 0) {
                                          lVar4 = *(long *)(*unaff_x20 + 0x88);
                                          uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                          uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                          if (uVar2 != 0) {
                                            lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                            do {
                                              if (*(long *)(lVar3 + -8) == *unaff_x24)
                                              goto LAB_06930080;
                                              uVar2 = uVar2 - 1;
                                              lVar3 = lVar3 + 0x10;
                                            } while (uVar2 != 0);
                                          }
                                          FUN_03ac43c4();
LAB_06930080:
                                          FUN_05e42d5c(uVar1);
                                          if (lVar4 != 0) {
                                            FUN_070a12f4(lVar4,uVar1,0);
                                            if (*unaff_x20 != 0) {
                                              lVar4 = *(long *)(*unaff_x20 + 0x88);
                                              uVar1 = thunk_FUN_03ac74bc(*unaff_x23);
                                              uVar2 = (ulong)*(ushort *)(*unaff_x19 + 0x12e);
                                              if (uVar2 != 0) {
                                                lVar3 = *(long *)(*unaff_x19 + 0xb0) + 8;
                                                do {
                                                  if (*(long *)(lVar3 + -8) == *unaff_x24)
                                                  goto LAB_06930110;
                                                  uVar2 = uVar2 - 1;
                                                  lVar3 = lVar3 + 0x10;
                                                } while (uVar2 != 0);
                                              }
                                              FUN_03ac43c4();
LAB_06930110:
                                              FUN_05e42d5c(uVar1);
                                              if (lVar4 != 0) {
                                                FUN_070a1244(lVar4,uVar1,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


