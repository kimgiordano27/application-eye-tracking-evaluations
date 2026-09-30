/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetRawZeroPoseToStandingAbsoluteTrackingPose$$EndInvoke
ENTRY_POINT: 052c6e94
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRSystem__GetRawZeroPoseToStandingAbsoluteTrackingPose__EndInvoke
               (ulong param_1,double param_2,double param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float unaff_s9;
  float fVar10;
  int unaff_s10;
  float fVar11;
  
  if ((param_1 & 1) != 0) {
    param_2 = param_2 + param_3;
  }
  if (unaff_x24 != 0) {
    iVar1 = *(int *)(unaff_x24 + 0x3c);
    lVar4 = FUN_060ed7ac();
    if (lVar4 != 0) {
      fVar10 = 0.0;
      fVar9 = -2.1474836e+09;
      if (param_2 != INFINITY) {
        fVar9 = (float)(int)param_2;
      }
      fVar7 = (float)FUN_06101d4c(lVar4,0);
      puVar3 = PTR_DAT_067d1478;
      lVar4 = *unaff_x21;
      if (lVar4 != 0) {
        lVar5 = *(long *)(lVar4 + 0x10);
        lVar6 = *(long *)PTR_DAT_067d1478;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar2 = *(uint *)(lVar4 + 0x18);
          fVar7 = (unaff_s9 * (1.0 / (float)unaff_s10)) / fVar7;
          fVar10 = (fVar9 * (1.0 / (float)iVar1)) / fVar10;
          fVar11 = -(fVar7 * 0.5);
          fVar9 = -(fVar10 * 0.5);
          if (uVar2 < *(uint *)(lVar5 + 0x18)) {
            lVar5 = lVar5 + (long)(int)uVar2 * 0xc;
            *(uint *)(lVar4 + 0x18) = uVar2 + 1;
            *(float *)(lVar5 + 0x20) = fVar11;
            *(float *)(lVar5 + 0x24) = fVar9;
            *(undefined4 *)(lVar5 + 0x28) = 0;
          }
          else {
            FUN_03b63838(fVar11,fVar9,0,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          lVar4 = *unaff_x21;
          if (lVar4 != 0) {
            lVar5 = *(long *)(lVar4 + 0x10);
            lVar6 = *(long *)puVar3;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar5 != 0) {
              fVar10 = fVar10 * 0.5;
              uVar2 = *(uint *)(lVar4 + 0x18);
              if (uVar2 < *(uint *)(lVar5 + 0x18)) {
                lVar5 = lVar5 + (long)(int)uVar2 * 0xc;
                *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                *(float *)(lVar5 + 0x20) = fVar11;
                *(float *)(lVar5 + 0x24) = fVar10;
                *(undefined4 *)(lVar5 + 0x28) = 0;
              }
              else {
                FUN_03b63838(fVar11,fVar10,0,lVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
              }
              lVar4 = *unaff_x21;
              if (lVar4 != 0) {
                lVar5 = *(long *)(lVar4 + 0x10);
                lVar6 = *(long *)puVar3;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar5 != 0) {
                  fVar7 = fVar7 * 0.5;
                  uVar2 = *(uint *)(lVar4 + 0x18);
                  if (uVar2 < *(uint *)(lVar5 + 0x18)) {
                    lVar5 = lVar5 + (long)(int)uVar2 * 0xc;
                    *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                    *(float *)(lVar5 + 0x20) = fVar7;
                    *(float *)(lVar5 + 0x24) = fVar10;
                    *(undefined4 *)(lVar5 + 0x28) = 0;
                  }
                  else {
                    FUN_03b63838(fVar7,fVar10,0,lVar4,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar4 = *unaff_x21;
                  if (lVar4 != 0) {
                    lVar5 = *(long *)(lVar4 + 0x10);
                    lVar6 = *(long *)puVar3;
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    if (lVar5 != 0) {
                      uVar2 = *(uint *)(lVar4 + 0x18);
                      if (uVar2 < *(uint *)(lVar5 + 0x18)) {
                        lVar5 = lVar5 + (long)(int)uVar2 * 0xc;
                        *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                        *(float *)(lVar5 + 0x20) = fVar7;
                        *(float *)(lVar5 + 0x24) = fVar9;
                        *(undefined4 *)(lVar5 + 0x28) = 0;
                      }
                      else {
                        FUN_03b63838(fVar7,fVar9,0,lVar4,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                      }
                      puVar3 = PTR_DAT_067cc9f8;
                      lVar4 = *unaff_x20;
                      if (lVar4 != 0) {
                        lVar5 = *(long *)(lVar4 + 0x10);
                        lVar6 = *(long *)PTR_DAT_067cc9f8;
                        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                        if (lVar5 != 0) {
                          uVar2 = *(uint *)(lVar4 + 0x18);
                          if (uVar2 < *(uint *)(lVar5 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                            *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x20) = 0;
                          }
                          else {
                            FUN_03a6c18c(lVar4,0,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                                        );
                            lVar4 = *unaff_x20;
                            if (lVar4 == 0) goto LAB_052c74dc;
                          }
                          lVar5 = *(long *)(lVar4 + 0x10);
                          lVar6 = *(long *)puVar3;
                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          if (lVar5 != 0) {
                            uVar2 = *(uint *)(lVar4 + 0x18);
                            if (uVar2 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                              *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x20) = 1;
                            }
                            else {
                              FUN_03a6c18c(lVar4,1,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                    0x70));
                              lVar4 = *unaff_x20;
                              if (lVar4 == 0) goto LAB_052c74dc;
                            }
                            lVar5 = *(long *)(lVar4 + 0x10);
                            lVar6 = *(long *)puVar3;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar5 != 0) {
                              uVar2 = *(uint *)(lVar4 + 0x18);
                              if (uVar2 < *(uint *)(lVar5 + 0x18)) {
                                *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x20) = 2;
                              }
                              else {
                                FUN_03a6c18c(lVar4,2,*(undefined8 *)
                                                      (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                      0x70));
                                lVar4 = *unaff_x20;
                                if (lVar4 == 0) goto LAB_052c74dc;
                              }
                              lVar5 = *(long *)(lVar4 + 0x10);
                              lVar6 = *(long *)puVar3;
                              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                              if (lVar5 != 0) {
                                uVar2 = *(uint *)(lVar4 + 0x18);
                                if (uVar2 < *(uint *)(lVar5 + 0x18)) {
                                  *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                  *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x20) = 0;
                                }
                                else {
                                  FUN_03a6c18c(lVar4,0,*(undefined8 *)
                                                        (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                        0x70));
                                  lVar4 = *unaff_x20;
                                  if (lVar4 == 0) goto LAB_052c74dc;
                                }
                                lVar5 = *(long *)(lVar4 + 0x10);
                                lVar6 = *(long *)puVar3;
                                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                if (lVar5 != 0) {
                                  uVar2 = *(uint *)(lVar4 + 0x18);
                                  if (uVar2 < *(uint *)(lVar5 + 0x18)) {
                                    *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                    *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x20) = 2;
                                  }
                                  else {
                                    FUN_03a6c18c(lVar4,2,*(undefined8 *)
                                                          (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0)
                                                          + 0x70));
                                    lVar4 = *unaff_x20;
                                    if (lVar4 == 0) goto LAB_052c74dc;
                                  }
                                  lVar5 = *(long *)(lVar4 + 0x10);
                                  lVar6 = *(long *)puVar3;
                                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                  if (lVar5 != 0) {
                                    uVar2 = *(uint *)(lVar4 + 0x18);
                                    if (uVar2 < *(uint *)(lVar5 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                      *(undefined4 *)(lVar5 + (long)(int)uVar2 * 4 + 0x20) = 3;
                                    }
                                    else {
                                      FUN_03a6c18c(lVar4,3,*(undefined8 *)
                                                            (*(long *)(*(long *)(lVar6 + 0x20) +
                                                                      0xc0) + 0x70));
                                    }
                                    puVar3 = PTR_DAT_067d1480;
                                    lVar4 = *unaff_x19;
                                    if (lVar4 != 0) {
                                      lVar5 = *(long *)(lVar4 + 0x10);
                                      lVar6 = *(long *)PTR_DAT_067d1480;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar5 != 0) {
                                        uVar2 = *(uint *)(lVar4 + 0x18);
                                        if (uVar2 < *(uint *)(lVar5 + 0x18)) {
                                          *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                          *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) = 0;
                                        }
                                        else {
                                          FUN_03b61054(0,0,lVar4,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) +
                                                        0x70));
                                        }
                                        lVar4 = *unaff_x19;
                                        if (lVar4 != 0) {
                                          lVar5 = *(long *)(lVar4 + 0x10);
                                          lVar6 = *(long *)puVar3;
                                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          uVar8 = DAT_011b0bc8;
                                          if (lVar5 != 0) {
                                            uVar2 = *(uint *)(lVar4 + 0x18);
                                            if (uVar2 < *(uint *)(lVar5 + 0x18)) {
                                              *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                              *(undefined8 *)(lVar5 + (long)(int)uVar2 * 8 + 0x20) =
                                                   uVar8;
                                            }
                                            else {
                                              FUN_03b61054(0,0x3f800000,lVar4,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar6 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar4 = *unaff_x19;
                                            if (lVar4 != 0) {
                                              lVar5 = *(long *)(lVar4 + 0x10);
                                              lVar6 = *(long *)puVar3;
                                              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                              if (lVar5 != 0) {
                                                uVar2 = *(uint *)(lVar4 + 0x18);
                                                if (uVar2 < *(uint *)(lVar5 + 0x18)) {
                                                  uVar8 = NEON_fmov(0x3f800000,4);
                                                  *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                                  *(undefined8 *)
                                                   (lVar5 + (long)(int)uVar2 * 8 + 0x20) = uVar8;
                                                }
                                                else {
                                                  FUN_03b61054(0x3f800000,0x3f800000,lVar4,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar6 + 0x20) +
                                                                          0xc0) + 0x70));
                                                }
                                                lVar4 = *unaff_x19;
                                                if (lVar4 != 0) {
                                                  lVar5 = *(long *)(lVar4 + 0x10);
                                                  lVar6 = *(long *)puVar3;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  uVar8 = DAT_011b0bd0;
                                                  if (lVar5 != 0) {
                                                    uVar2 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar5 + (long)(int)uVar2 * 8 + 0x20) = uVar8
                                                      ;
                                                      return;
                                                    }
                                                    FUN_03b61054(0x3f800000,0,lVar4,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar6 + 0x20)
                                                                            + 0xc0) + 0x70));
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
LAB_052c74dc:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


