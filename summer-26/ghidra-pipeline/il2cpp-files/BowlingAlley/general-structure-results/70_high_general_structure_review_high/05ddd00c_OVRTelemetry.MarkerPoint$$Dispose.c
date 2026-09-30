/*
FUNCTION_NAME: OVRTelemetry.MarkerPoint$$Dispose
ENTRY_POINT: 05ddd00c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


void OVRTelemetry_MarkerPoint__Dispose(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *unaff_x19;
  long unaff_x20;
  long lVar8;
  long unaff_x21;
  undefined8 *unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  
  lVar3 = thunk_FUN_032a56a0();
  FUN_059660a0(lVar3,0);
  *(undefined8 *)(lVar3 + 0x10) = DAT_0139eb10;
  puVar2 = PTR_DAT_072b3110;
  if (unaff_x21 != 0) {
    lVar5 = *(long *)(unaff_x21 + 0x10);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(unaff_x21 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
        plVar4 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        *plVar4 = lVar3;
        thunk_FUN_0333a630(plVar4,lVar3);
      }
      else {
        FUN_041e2c78();
      }
      lVar3 = thunk_FUN_032a56a0(*unaff_x23);
      FUN_059660a0(lVar3,0);
      *(undefined8 *)(lVar3 + 0x10) = DAT_0139f5c8;
      lVar5 = *(long *)(unaff_x21 + 0x10);
      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
      if (lVar5 != 0) {
        uVar1 = *(uint *)(unaff_x21 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
          plVar4 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
          *plVar4 = lVar3;
          thunk_FUN_0333a630(plVar4,lVar3);
        }
        else {
          FUN_041e2c78();
        }
        lVar3 = thunk_FUN_032a56a0(*unaff_x23);
        FUN_059660a0(lVar3,0);
        *(undefined8 *)(lVar3 + 0x10) = DAT_0139e3e8;
        lVar5 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar1 = *(uint *)(unaff_x21 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            plVar4 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
            *plVar4 = lVar3;
            thunk_FUN_0333a630(plVar4,lVar3);
          }
          else {
            FUN_041e2c78();
          }
          lVar3 = thunk_FUN_032a56a0(*unaff_x23);
          FUN_059660a0(lVar3,0);
          *(undefined8 *)(lVar3 + 0x10) = DAT_0139e910;
          lVar5 = *(long *)(unaff_x21 + 0x10);
          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar1 = *(uint *)(unaff_x21 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
              plVar4 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
              *plVar4 = lVar3;
              thunk_FUN_0333a630(plVar4,lVar3);
            }
            else {
              FUN_041e2c78();
            }
            lVar3 = thunk_FUN_032a56a0(*unaff_x23);
            FUN_059660a0(lVar3,0);
            *(undefined8 *)(lVar3 + 0x10) = DAT_0139de38;
            lVar5 = *(long *)(unaff_x21 + 0x10);
            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
            if (lVar5 != 0) {
              uVar1 = *(uint *)(unaff_x21 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                plVar4 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                *plVar4 = lVar3;
                thunk_FUN_0333a630(plVar4,lVar3);
              }
              else {
                FUN_041e2c78();
              }
              lVar3 = thunk_FUN_032a56a0(*unaff_x23);
              FUN_059660a0(lVar3,0);
              *(undefined8 *)(lVar3 + 0x10) = DAT_0139e1b0;
              lVar5 = *(long *)(unaff_x21 + 0x10);
              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
              if (lVar5 != 0) {
                uVar1 = *(uint *)(unaff_x21 + 0x18);
                if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                  plVar4 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar4 = lVar3;
                  thunk_FUN_0333a630(plVar4,lVar3);
                }
                else {
                  FUN_041e2c78();
                }
                if (unaff_x20 != 0) {
                  *(long *)(unaff_x20 + 0x18) = unaff_x21;
                  thunk_FUN_0333a630((long *)(unaff_x20 + 0x18));
                  if (*unaff_x19 != 0) {
                    lVar8 = *(long *)(*unaff_x19 + 0x38);
                    lVar3 = thunk_FUN_032a56a0(*unaff_x26);
                    System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                              (lVar3,*unaff_x25);
                    lVar5 = thunk_FUN_032a56a0(*unaff_x23);
                    FUN_059660a0(lVar5,0);
                    *(undefined8 *)(lVar5 + 0x10) = DAT_0139de30;
                    if (lVar3 != 0) {
                      lVar6 = *(long *)(lVar3 + 0x10);
                      lVar7 = *(long *)puVar2;
                      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                      if (lVar6 != 0) {
                        uVar1 = *(uint *)(lVar3 + 0x18);
                        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                          plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar4 = lVar5;
                          thunk_FUN_0333a630(plVar4,lVar5);
                        }
                        else {
                          FUN_041e2c78(lVar3,lVar5,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar5 = thunk_FUN_032a56a0(*unaff_x23);
                        FUN_059660a0(lVar5,0);
                        *(undefined8 *)(lVar5 + 0x10) = DAT_0139ec30;
                        lVar6 = *(long *)(lVar3 + 0x10);
                        lVar7 = *(long *)puVar2;
                        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                        if (lVar6 != 0) {
                          uVar1 = *(uint *)(lVar3 + 0x18);
                          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                            plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar4 = lVar5;
                            thunk_FUN_0333a630(plVar4,lVar5);
                          }
                          else {
                            FUN_041e2c78(lVar3,lVar5,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar5 = thunk_FUN_032a56a0(*unaff_x23);
                          FUN_059660a0(lVar5,0);
                          *(undefined8 *)(lVar5 + 0x10) = DAT_0139f5d0;
                          lVar6 = *(long *)(lVar3 + 0x10);
                          lVar7 = *(long *)puVar2;
                          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                          if (lVar6 != 0) {
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar4 = lVar5;
                              thunk_FUN_0333a630(plVar4,lVar5);
                            }
                            else {
                              FUN_041e2c78(lVar3,lVar5,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar5 = thunk_FUN_032a56a0(*unaff_x23);
                            FUN_059660a0(lVar5,0);
                            *(undefined8 *)(lVar5 + 0x10) = DAT_0139d910;
                            lVar6 = *(long *)(lVar3 + 0x10);
                            lVar7 = *(long *)puVar2;
                            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            if (lVar6 != 0) {
                              uVar1 = *(uint *)(lVar3 + 0x18);
                              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar4 = lVar5;
                                thunk_FUN_0333a630(plVar4,lVar5);
                              }
                              else {
                                FUN_041e2c78(lVar3,lVar5,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar5 = thunk_FUN_032a56a0(*unaff_x23);
                              FUN_059660a0(lVar5,0);
                              *(undefined8 *)(lVar5 + 0x10) = DAT_0139dcd0;
                              lVar6 = *(long *)(lVar3 + 0x10);
                              lVar7 = *(long *)puVar2;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar6 != 0) {
                                uVar1 = *(uint *)(lVar3 + 0x18);
                                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                  plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar4 = lVar5;
                                  thunk_FUN_0333a630(plVar4,lVar5);
                                }
                                else {
                                  FUN_041e2c78(lVar3,lVar5,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                                }
                                lVar5 = thunk_FUN_032a56a0(*unaff_x23);
                                FUN_059660a0(lVar5,0);
                                *(undefined8 *)(lVar5 + 0x10) = DAT_0139f0b0;
                                lVar6 = *(long *)(lVar3 + 0x10);
                                lVar7 = *(long *)puVar2;
                                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                if (lVar6 != 0) {
                                  uVar1 = *(uint *)(lVar3 + 0x18);
                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                    plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar4 = lVar5;
                                    thunk_FUN_0333a630(plVar4,lVar5);
                                  }
                                  else {
                                    FUN_041e2c78(lVar3,lVar5,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                  if (lVar8 != 0) {
                                    plVar4 = (long *)(lVar8 + 0x18);
                                    *plVar4 = lVar3;
                                    thunk_FUN_0333a630(plVar4,lVar3);
                                    if (*unaff_x19 != 0) {
                                      lVar8 = *(long *)(*unaff_x19 + 0x30);
                                      lVar3 = thunk_FUN_032a56a0(*unaff_x26);
                                      System_Collections_Generic_List<HIDParser_HIDReportData>__Clear
                                                (lVar3,*unaff_x25);
                                      lVar5 = thunk_FUN_032a56a0(*unaff_x23);
                                      FUN_059660a0(lVar5,0);
                                      *(undefined8 *)(lVar5 + 0x10) = DAT_0139d908;
                                      if (lVar3 != 0) {
                                        lVar6 = *(long *)(lVar3 + 0x10);
                                        lVar7 = *(long *)puVar2;
                                        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                        if (lVar6 != 0) {
                                          uVar1 = *(uint *)(lVar3 + 0x18);
                                          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                            plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar4 = lVar5;
                                            thunk_FUN_0333a630(plVar4,lVar5);
                                          }
                                          else {
                                            FUN_041e2c78(lVar3,lVar5,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0)
                                                          + 0x70));
                                          }
                                          lVar5 = thunk_FUN_032a56a0(*unaff_x23);
                                          FUN_059660a0(lVar5,0);
                                          *(undefined8 *)(lVar5 + 0x10) = DAT_0139e5e0;
                                          lVar6 = *(long *)(lVar3 + 0x10);
                                          lVar7 = *(long *)puVar2;
                                          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                          if (lVar6 != 0) {
                                            uVar1 = *(uint *)(lVar3 + 0x18);
                                            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                              plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar4 = lVar5;
                                              thunk_FUN_0333a630(plVar4,lVar5);
                                            }
                                            else {
                                              FUN_041e2c78(lVar3,lVar5,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar7 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar5 = thunk_FUN_032a56a0(*unaff_x23);
                                            FUN_059660a0(lVar5,0);
                                            *(undefined8 *)(lVar5 + 0x10) = DAT_0139e058;
                                            lVar6 = *(long *)(lVar3 + 0x10);
                                            lVar7 = *(long *)puVar2;
                                            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                            if (lVar6 != 0) {
                                              uVar1 = *(uint *)(lVar3 + 0x18);
                                              if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 +
                                                                 0x20);
                                                *plVar4 = lVar5;
                                                thunk_FUN_0333a630(plVar4,lVar5);
                                              }
                                              else {
                                                FUN_041e2c78(lVar3,lVar5,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar7 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              lVar5 = thunk_FUN_032a56a0(*unaff_x23);
                                              FUN_059660a0(lVar5,0);
                                              *(undefined8 *)(lVar5 + 0x10) = DAT_0139ee40;
                                              lVar6 = *(long *)(lVar3 + 0x10);
                                              lVar7 = *(long *)puVar2;
                                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                              if (lVar6 != 0) {
                                                uVar1 = *(uint *)(lVar3 + 0x18);
                                                if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                  plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 +
                                                                   0x20);
                                                  *plVar4 = lVar5;
                                                  thunk_FUN_0333a630(plVar4,lVar5);
                                                }
                                                else {
                                                  FUN_041e2c78(lVar3,lVar5,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar7 + 0x20) +
                                                                          0xc0) + 0x70));
                                                }
                                                lVar5 = thunk_FUN_032a56a0(*unaff_x23);
                                                FUN_059660a0(lVar5,0);
                                                *(undefined8 *)(lVar5 + 0x10) = DAT_0139e3f0;
                                                lVar6 = *(long *)(lVar3 + 0x10);
                                                lVar7 = *(long *)puVar2;
                                                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                                if (lVar6 != 0) {
                                                  uVar1 = *(uint *)(lVar3 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                    plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar4 = lVar5;
                                                    thunk_FUN_0333a630(plVar4,lVar5);
                                                  }
                                                  else {
                                                    FUN_041e2c78(lVar3,lVar5,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar7 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  lVar5 = thunk_FUN_032a56a0(*unaff_x23);
                                                  FUN_059660a0(lVar5,0);
                                                  *(undefined8 *)(lVar5 + 0x10) = DAT_0139e820;
                                                  lVar6 = *(long *)(lVar3 + 0x10);
                                                  lVar7 = *(long *)puVar2;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar5;
                                                      thunk_FUN_0333a630(plVar4,lVar5);
                                                    }
                                                    else {
                                                      FUN_041e2c78(lVar3,lVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar7 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  if (lVar8 != 0) {
                                                    plVar4 = (long *)(lVar8 + 0x18);
                                                    *plVar4 = lVar3;
                                                    thunk_FUN_0333a630(plVar4,lVar3);
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
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


