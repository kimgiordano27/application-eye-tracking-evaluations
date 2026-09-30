/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetSeatedZeroPoseToStandingAbsoluteTrackingPose$$BeginInvoke
ENTRY_POINT: 052c6d88
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


void OVR_OpenVR_IVRSystem__GetSeatedZeroPoseToStandingAbsoluteTrackingPose__BeginInvoke(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long unaff_x24;
  long lVar6;
  long unaff_x25;
  long *unaff_x26;
  float fVar7;
  double dVar8;
  undefined8 uVar9;
  float fVar10;
  double unaff_d8;
  double dVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  double in_stack_00000008;
  
  dVar8 = modf(unaff_d8,&stack0x00000008);
  if ((int)unaff_x23 < 0) {
    if (dVar8 == -0.5) {
      dVar8 = -1.0;
      goto LAB_052c6dc4;
    }
    dVar11 = (double)(long)(unaff_d8 + -0.5);
  }
  else if (dVar8 == 0.5) {
    dVar8 = 1.0;
LAB_052c6dc4:
    dVar11 = in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      dVar11 = in_stack_00000008 + dVar8;
    }
  }
  else {
    dVar11 = (double)(long)(unaff_d8 + 0.5);
  }
  if (unaff_x24 == 0) goto LAB_052c74dc;
  iVar13 = *(int *)(unaff_x24 + 0x3c);
  lVar6 = *(long *)(unaff_x22 + 0x20);
  fVar10 = -2.1474836e+09;
  if (dVar11 != INFINITY) {
    fVar10 = (float)(int)dVar11;
  }
  if (*(char *)(unaff_x25 + 0xd8a) == '\0') {
    FUN_02f08768(PTR_DAT_067c8f80);
    *(undefined1 *)(unaff_x25 + 0xd8a) = 1;
  }
  if (*(int *)(*unaff_x26 + 0xe4) == 0) {
    thunk_FUN_02f6670c();
  }
  dVar11 = (double)(int)((ulong)unaff_x23 >> 0x20);
  dVar8 = modf(dVar11,&stack0x00000008);
  if (unaff_x23 < 0) {
    if (dVar8 == -0.5) {
      dVar8 = -1.0;
      goto FUN_052c6e90;
    }
    dVar11 = (double)(long)(dVar11 + -0.5);
  }
  else if (dVar8 == 0.5) {
    dVar8 = 1.0;
FUN_052c6e90:
    dVar11 = in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      dVar11 = in_stack_00000008 + dVar8;
    }
  }
  else {
    dVar11 = (double)(long)(dVar11 + 0.5);
  }
  if (lVar6 != 0) {
    iVar1 = *(int *)(lVar6 + 0x3c);
    lVar6 = FUN_060ed7ac();
    if (lVar6 != 0) {
      fVar12 = 0.0;
      fVar14 = -2.1474836e+09;
      if (dVar11 != INFINITY) {
        fVar14 = (float)(int)dVar11;
      }
      fVar7 = (float)FUN_06101d4c(lVar6,0);
      puVar3 = PTR_DAT_067d1478;
      lVar6 = *unaff_x21;
      if (lVar6 != 0) {
        lVar4 = *(long *)(lVar6 + 0x10);
        lVar5 = *(long *)PTR_DAT_067d1478;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar2 = *(uint *)(lVar6 + 0x18);
          fVar7 = (fVar10 * (1.0 / (float)iVar13)) / fVar7;
          fVar12 = (fVar14 * (1.0 / (float)iVar1)) / fVar12;
          fVar14 = -(fVar7 * 0.5);
          fVar10 = -(fVar12 * 0.5);
          if (uVar2 < *(uint *)(lVar4 + 0x18)) {
            lVar4 = lVar4 + (long)(int)uVar2 * 0xc;
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            *(float *)(lVar4 + 0x20) = fVar14;
            *(float *)(lVar4 + 0x24) = fVar10;
            *(undefined4 *)(lVar4 + 0x28) = 0;
          }
          else {
            FUN_03b63838(fVar14,fVar10,0,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          lVar6 = *unaff_x21;
          if (lVar6 != 0) {
            lVar4 = *(long *)(lVar6 + 0x10);
            lVar5 = *(long *)puVar3;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar4 != 0) {
              fVar12 = fVar12 * 0.5;
              uVar2 = *(uint *)(lVar6 + 0x18);
              if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                lVar4 = lVar4 + (long)(int)uVar2 * 0xc;
                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                *(float *)(lVar4 + 0x20) = fVar14;
                *(float *)(lVar4 + 0x24) = fVar12;
                *(undefined4 *)(lVar4 + 0x28) = 0;
              }
              else {
                FUN_03b63838(fVar14,fVar12,0,lVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              lVar6 = *unaff_x21;
              if (lVar6 != 0) {
                lVar4 = *(long *)(lVar6 + 0x10);
                lVar5 = *(long *)puVar3;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar4 != 0) {
                  fVar7 = fVar7 * 0.5;
                  uVar2 = *(uint *)(lVar6 + 0x18);
                  if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                    lVar4 = lVar4 + (long)(int)uVar2 * 0xc;
                    *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                    *(float *)(lVar4 + 0x20) = fVar7;
                    *(float *)(lVar4 + 0x24) = fVar12;
                    *(undefined4 *)(lVar4 + 0x28) = 0;
                  }
                  else {
                    FUN_03b63838(fVar7,fVar12,0,lVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar6 = *unaff_x21;
                  if (lVar6 != 0) {
                    lVar4 = *(long *)(lVar6 + 0x10);
                    lVar5 = *(long *)puVar3;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar4 != 0) {
                      uVar2 = *(uint *)(lVar6 + 0x18);
                      if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                        lVar4 = lVar4 + (long)(int)uVar2 * 0xc;
                        *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                        *(float *)(lVar4 + 0x20) = fVar7;
                        *(float *)(lVar4 + 0x24) = fVar10;
                        *(undefined4 *)(lVar4 + 0x28) = 0;
                      }
                      else {
                        FUN_03b63838(fVar7,fVar10,0,lVar6,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                      }
                      puVar3 = PTR_DAT_067cc9f8;
                      lVar6 = *unaff_x20;
                      if (lVar6 != 0) {
                        lVar4 = *(long *)(lVar6 + 0x10);
                        lVar5 = *(long *)PTR_DAT_067cc9f8;
                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                        if (lVar4 != 0) {
                          uVar2 = *(uint *)(lVar6 + 0x18);
                          if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                            *(undefined4 *)(lVar4 + (long)(int)uVar2 * 4 + 0x20) = 0;
                          }
                          else {
                            FUN_03a6c18c(lVar6,0,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                        );
                            lVar6 = *unaff_x20;
                            if (lVar6 == 0) goto LAB_052c74dc;
                          }
                          lVar4 = *(long *)(lVar6 + 0x10);
                          lVar5 = *(long *)puVar3;
                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                          if (lVar4 != 0) {
                            uVar2 = *(uint *)(lVar6 + 0x18);
                            if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                              *(undefined4 *)(lVar4 + (long)(int)uVar2 * 4 + 0x20) = 1;
                            }
                            else {
                              FUN_03a6c18c(lVar6,1,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                    0x70));
                              lVar6 = *unaff_x20;
                              if (lVar6 == 0) goto LAB_052c74dc;
                            }
                            lVar4 = *(long *)(lVar6 + 0x10);
                            lVar5 = *(long *)puVar3;
                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                            if (lVar4 != 0) {
                              uVar2 = *(uint *)(lVar6 + 0x18);
                              if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                *(undefined4 *)(lVar4 + (long)(int)uVar2 * 4 + 0x20) = 2;
                              }
                              else {
                                FUN_03a6c18c(lVar6,2,*(undefined8 *)
                                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                      0x70));
                                lVar6 = *unaff_x20;
                                if (lVar6 == 0) goto LAB_052c74dc;
                              }
                              lVar4 = *(long *)(lVar6 + 0x10);
                              lVar5 = *(long *)puVar3;
                              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                              if (lVar4 != 0) {
                                uVar2 = *(uint *)(lVar6 + 0x18);
                                if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                  *(undefined4 *)(lVar4 + (long)(int)uVar2 * 4 + 0x20) = 0;
                                }
                                else {
                                  FUN_03a6c18c(lVar6,0,*(undefined8 *)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                        0x70));
                                  lVar6 = *unaff_x20;
                                  if (lVar6 == 0) goto LAB_052c74dc;
                                }
                                lVar4 = *(long *)(lVar6 + 0x10);
                                lVar5 = *(long *)puVar3;
                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                if (lVar4 != 0) {
                                  uVar2 = *(uint *)(lVar6 + 0x18);
                                  if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                    *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                    *(undefined4 *)(lVar4 + (long)(int)uVar2 * 4 + 0x20) = 2;
                                  }
                                  else {
                                    FUN_03a6c18c(lVar6,2,*(undefined8 *)
                                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                          + 0x70));
                                    lVar6 = *unaff_x20;
                                    if (lVar6 == 0) goto LAB_052c74dc;
                                  }
                                  lVar4 = *(long *)(lVar6 + 0x10);
                                  lVar5 = *(long *)puVar3;
                                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                  if (lVar4 != 0) {
                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                      *(undefined4 *)(lVar4 + (long)(int)uVar2 * 4 + 0x20) = 3;
                                    }
                                    else {
                                      FUN_03a6c18c(lVar6,3,*(undefined8 *)
                                                            (*(long *)(*(long *)(lVar5 + 0x20) +
                                                                      0xc0) + 0x70));
                                    }
                                    puVar3 = PTR_DAT_067d1480;
                                    lVar6 = *unaff_x19;
                                    if (lVar6 != 0) {
                                      lVar4 = *(long *)(lVar6 + 0x10);
                                      lVar5 = *(long *)PTR_DAT_067d1480;
                                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                      if (lVar4 != 0) {
                                        uVar2 = *(uint *)(lVar6 + 0x18);
                                        if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                          *(undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20) = 0;
                                        }
                                        else {
                                          FUN_03b61054(0,0,lVar6,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                        0x70));
                                        }
                                        lVar6 = *unaff_x19;
                                        if (lVar6 != 0) {
                                          lVar4 = *(long *)(lVar6 + 0x10);
                                          lVar5 = *(long *)puVar3;
                                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                          uVar9 = DAT_011b0bc8;
                                          if (lVar4 != 0) {
                                            uVar2 = *(uint *)(lVar6 + 0x18);
                                            if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                              *(undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20) =
                                                   uVar9;
                                            }
                                            else {
                                              FUN_03b61054(0,0x3f800000,lVar6,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar5 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar6 = *unaff_x19;
                                            if (lVar6 != 0) {
                                              lVar4 = *(long *)(lVar6 + 0x10);
                                              lVar5 = *(long *)puVar3;
                                              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                              if (lVar4 != 0) {
                                                uVar2 = *(uint *)(lVar6 + 0x18);
                                                if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                                  uVar9 = NEON_fmov(0x3f800000,4);
                                                  *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                  *(undefined8 *)
                                                   (lVar4 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
                                                }
                                                else {
                                                  FUN_03b61054(0x3f800000,0x3f800000,lVar6,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar5 + 0x20) +
                                                                          0xc0) + 0x70));
                                                }
                                                lVar6 = *unaff_x19;
                                                if (lVar6 != 0) {
                                                  lVar4 = *(long *)(lVar6 + 0x10);
                                                  lVar5 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  uVar9 = DAT_011b0bd0;
                                                  if (lVar4 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar4 + (long)(int)uVar2 * 8 + 0x20) = uVar9
                                                      ;
                                                      return;
                                                    }
                                                    FUN_03b61054(0x3f800000,0,lVar6,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar5 + 0x20)
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


