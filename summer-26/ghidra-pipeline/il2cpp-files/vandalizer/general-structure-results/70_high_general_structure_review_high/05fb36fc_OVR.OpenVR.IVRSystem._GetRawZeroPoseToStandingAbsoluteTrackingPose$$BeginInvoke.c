/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$BeginInvoke
ENTRY_POINT: 05fb36fc
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


void OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__BeginInvoke(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int in_w10;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  undefined8 uVar6;
  undefined4 unaff_s8;
  float unaff_s9;
  float fVar7;
  undefined4 unaff_s10;
  float fVar8;
  float unaff_s11;
  float unaff_s12;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar4 = *unaff_x22;
  *(int *)(param_1 + 0x1c) = in_w10 + 1;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    fVar7 = unaff_s9 * unaff_s11;
    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)uVar1 * 0xc;
      *(uint *)(param_1 + 0x18) = uVar1 + 1;
      *(undefined4 *)(lVar3 + 0x20) = unaff_s10;
      *(float *)(lVar3 + 0x24) = fVar7;
      *(undefined4 *)(lVar3 + 0x28) = 0;
    }
    else {
      FUN_0487b438(param_1,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
    }
    lVar3 = *unaff_x21;
    if (lVar3 != 0) {
      lVar4 = *(long *)(lVar3 + 0x10);
      lVar5 = *unaff_x22;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar4 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        fVar8 = unaff_s12 * unaff_s11;
        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
          lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(float *)(lVar4 + 0x20) = fVar8;
          *(float *)(lVar4 + 0x24) = fVar7;
          *(undefined4 *)(lVar4 + 0x28) = 0;
        }
        else {
          FUN_0487b438(fVar8,fVar7,0,lVar3,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        lVar3 = *unaff_x21;
        if (lVar3 != 0) {
          lVar4 = *(long *)(lVar3 + 0x10);
          lVar5 = *unaff_x22;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar4 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              lVar4 = lVar4 + (long)(int)uVar1 * 0xc;
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              *(float *)(lVar4 + 0x20) = fVar8;
              *(undefined4 *)(lVar4 + 0x24) = unaff_s8;
              *(undefined4 *)(lVar4 + 0x28) = 0;
            }
            else {
              FUN_0487b438(fVar8,lVar3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
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
                      *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 2;
                    }
                    else {
                      FUN_0474ff10(lVar3,2,*(undefined8 *)
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
                          *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 2;
                        }
                        else {
                          FUN_0474ff10(lVar3,2,*(undefined8 *)
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
                            *(undefined4 *)(lVar4 + (long)(int)uVar1 * 4 + 0x20) = 3;
                          }
                          else {
                            FUN_0474ff10(lVar3,3,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                        );
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
                                              (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar3 = *unaff_x19;
                              if (lVar3 != 0) {
                                lVar4 = *(long *)(lVar3 + 0x10);
                                lVar5 = *(long *)puVar2;
                                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                uVar6 = DAT_014bc198;
                                if (lVar4 != 0) {
                                  uVar1 = *(uint *)(lVar3 + 0x18);
                                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                  }
                                  else {
                                    FUN_04878b40(0,0x3f800000,lVar3,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                  lVar3 = *unaff_x19;
                                  if (lVar3 != 0) {
                                    lVar4 = *(long *)(lVar3 + 0x10);
                                    lVar5 = *(long *)puVar2;
                                    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                    if (lVar4 != 0) {
                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                        uVar6 = NEON_fmov(0x3f800000,4);
                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                        ;
                                      }
                                      else {
                                        FUN_04878b40(0x3f800000,0x3f800000,lVar3,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      lVar3 = *unaff_x19;
                                      if (lVar3 != 0) {
                                        lVar4 = *(long *)(lVar3 + 0x10);
                                        lVar5 = *(long *)puVar2;
                                        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                        uVar6 = DAT_014bb328;
                                        if (lVar4 != 0) {
                                          uVar1 = *(uint *)(lVar3 + 0x18);
                                          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                            *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) =
                                                 uVar6;
                                            return;
                                          }
                                          FUN_04878b40(0x3f800000,0,lVar3,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                        0x70));
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
LAB_05fb3c2c:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


