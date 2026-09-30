/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetSeatedZeroPoseToStandingAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 05fb3614
PROGRAM: vandalizer-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose__EndInvoke(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  int unaff_w23;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  double unaff_d8;
  float unaff_s9;
  float fVar9;
  int unaff_s10;
  float fVar10;
  
  lVar3 = FUN_06e5502c();
  if (lVar3 != 0) {
    fVar9 = -2.1474836e+09;
    fVar8 = -2.1474836e+09;
    if (unaff_d8 != INFINITY) {
      fVar8 = (float)(int)unaff_d8;
    }
    fVar6 = (float)FUN_06e6e3cc(lVar3,0);
    puVar2 = PTR_DAT_075de7a8;
    lVar3 = *unaff_x21;
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x10);
      lVar5 = *(long *)PTR_DAT_075de7a8;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        fVar6 = (unaff_s9 * (1.0 / (float)unaff_s10)) / fVar6;
        fVar9 = (fVar8 * (1.0 / (float)unaff_w23)) / fVar9;
        fVar10 = -(fVar6 * 0.5);
        fVar8 = -(fVar9 * 0.5);
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(float *)(lVar4 + 0x20) = fVar10;
          *(float *)(lVar4 + 0x24) = fVar8;
          *(undefined4 *)(lVar4 + 0x28) = 0;
        }
        else {
          FUN_0487b438(fVar10,fVar8,0,lVar3,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        lVar3 = *unaff_x21;
        if (lVar3 != 0) {
          lVar4 = *(long *)(lVar3 + 0x10);
          lVar5 = *(long *)puVar2;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            fVar9 = fVar9 * 0.5;
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              *(float *)(lVar4 + 0x20) = fVar10;
              *(float *)(lVar4 + 0x24) = fVar9;
              *(undefined4 *)(lVar4 + 0x28) = 0;
            }
            else {
              FUN_0487b438(fVar10,fVar9,0,lVar3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            lVar3 = *unaff_x21;
            if (lVar3 != 0) {
              lVar4 = *(long *)(lVar3 + 0x10);
              lVar5 = *(long *)puVar2;
              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
              if (lVar4 != 0) {
                uVar1 = *(uint *)(lVar3 + 0x18);
                fVar6 = fVar6 * 0.5;
                if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                  lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                  *(float *)(lVar4 + 0x20) = fVar6;
                  *(float *)(lVar4 + 0x24) = fVar9;
                  *(undefined4 *)(lVar4 + 0x28) = 0;
                }
                else {
                  FUN_0487b438(fVar6,fVar9,0,lVar3,
                               *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
                lVar3 = *unaff_x21;
                if (lVar3 != 0) {
                  lVar4 = *(long *)(lVar3 + 0x10);
                  lVar5 = *(long *)puVar2;
                  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                  if (lVar4 != 0) {
                    uVar1 = *(uint *)(lVar3 + 0x18);
                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                      lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                      *(float *)(lVar4 + 0x20) = fVar6;
                      *(float *)(lVar4 + 0x24) = fVar8;
                      *(undefined4 *)(lVar4 + 0x28) = 0;
                    }
                    else {
                      FUN_0487b438(fVar6,fVar8,0,lVar3,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    puVar2 = PTR_DAT_0759b6c0;
                    lVar3 = *unaff_x20;
                    if (lVar3 != 0) {
                      lVar4 = *(long *)(lVar3 + 0x10);
                      lVar5 = *(long *)PTR_DAT_0759b6c0;
                      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                      if (lVar4 != 0) {
                        uVar1 = *(uint *)(lVar3 + 0x18);
                        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                          *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0;
                        }
                        else {
                          FUN_0474ff10(lVar3,0,*(undefined8 *)
                                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                          lVar3 = *unaff_x20;
                          if (lVar3 == 0) goto LAB_05fb3c2c;
                        }
                        lVar4 = *(long *)(lVar3 + 0x10);
                        lVar5 = *(long *)puVar2;
                        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                        if (lVar4 != 0) {
                          uVar1 = *(uint *)(lVar3 + 0x18);
                          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                            *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 1;
                          }
                          else {
                            FUN_0474ff10(lVar3,1,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                        );
                            lVar3 = *unaff_x20;
                            if (lVar3 == 0) goto LAB_05fb3c2c;
                          }
                          lVar4 = *(long *)(lVar3 + 0x10);
                          lVar5 = *(long *)puVar2;
                          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                          if (lVar4 != 0) {
                            uVar1 = *(uint *)(lVar3 + 0x18);
                            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                              *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 2;
                            }
                            else {
                              FUN_0474ff10(lVar3,2,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                    0x70));
                              lVar3 = *unaff_x20;
                              if (lVar3 == 0) goto LAB_05fb3c2c;
                            }
                            lVar4 = *(long *)(lVar3 + 0x10);
                            lVar5 = *(long *)puVar2;
                            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                            if (lVar4 != 0) {
                              uVar1 = *(uint *)(lVar3 + 0x18);
                              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 0;
                              }
                              else {
                                FUN_0474ff10(lVar3,0,*(undefined8 *)
                                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                      0x70));
                                lVar3 = *unaff_x20;
                                if (lVar3 == 0) goto LAB_05fb3c2c;
                              }
                              lVar4 = *(long *)(lVar3 + 0x10);
                              lVar5 = *(long *)puVar2;
                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                              if (lVar4 != 0) {
                                uVar1 = *(uint *)(lVar3 + 0x18);
                                if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                  *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 2;
                                }
                                else {
                                  FUN_0474ff10(lVar3,2,*(undefined8 *)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                        0x70));
                                  lVar3 = *unaff_x20;
                                  if (lVar3 == 0) goto LAB_05fb3c2c;
                                }
                                lVar4 = *(long *)(lVar3 + 0x10);
                                lVar5 = *(long *)puVar2;
                                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                if (lVar4 != 0) {
                                  uVar1 = *(uint *)(lVar3 + 0x18);
                                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                    *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 3;
                                  }
                                  else {
                                    FUN_0474ff10(lVar3,3,*(undefined8 *)
                                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                          + 0x70));
                                  }
                                  puVar2 = PTR_DAT_075de7b0;
                                  lVar3 = *unaff_x19;
                                  if (lVar3 != 0) {
                                    lVar4 = *(long *)(lVar3 + 0x10);
                                    lVar5 = *(long *)PTR_DAT_075de7b0;
                                    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                    if (lVar4 != 0) {
                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = 0;
                                      }
                                      else {
                                        FUN_04878b40(0,0,lVar3,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      lVar3 = *unaff_x19;
                                      if (lVar3 != 0) {
                                        lVar4 = *(long *)(lVar3 + 0x10);
                                        lVar5 = *(long *)puVar2;
                                        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                        uVar7 = DAT_014bc198;
                                        if (lVar4 != 0) {
                                          uVar1 = *(uint *)(lVar3 + 0x18);
                                          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                            *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) =
                                                 uVar7;
                                          }
                                          else {
                                            FUN_04878b40(0,0x3f800000,lVar3,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                          + 0x70));
                                          }
                                          lVar3 = *unaff_x19;
                                          if (lVar3 != 0) {
                                            lVar4 = *(long *)(lVar3 + 0x10);
                                            lVar5 = *(long *)puVar2;
                                            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                            if (lVar4 != 0) {
                                              uVar1 = *(uint *)(lVar3 + 0x18);
                                              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                uVar7 = NEON_fmov(0x3f800000,4);
                                                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20)
                                                     = uVar7;
                                              }
                                              else {
                                                FUN_04878b40(0x3f800000,0x3f800000,lVar3,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar5 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              lVar3 = *unaff_x19;
                                              if (lVar3 != 0) {
                                                lVar4 = *(long *)(lVar3 + 0x10);
                                                lVar5 = *(long *)puVar2;
                                                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                                uVar7 = DAT_014bb328;
                                                if (lVar4 != 0) {
                                                  uVar1 = *(uint *)(lVar3 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                                                    return;
                                                  }
                                                  FUN_04878b40(0x3f800000,0,lVar3,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar5 + 0x20) +
                                                                          0xc0) + 0x70));
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
LAB_05fb3c2c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


