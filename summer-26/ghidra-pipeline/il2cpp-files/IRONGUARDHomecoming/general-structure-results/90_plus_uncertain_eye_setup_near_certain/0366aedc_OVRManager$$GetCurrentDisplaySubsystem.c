/*
FUNCTION_NAME: OVRManager$$GetCurrentDisplaySubsystem
ENTRY_POINT: 0366aedc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 103
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetCurrentDisplaySubsystem(double param_1)

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
  long lVar6;
  long unaff_x24;
  long unaff_x25;
  long *unaff_x26;
  float fVar7;
  double dVar8;
  undefined8 uVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  double in_stack_00000008;
  
  if (unaff_x23 == 0) goto LAB_0366b5dc;
  iVar13 = *(int *)(unaff_x23 + 0x3c);
  lVar6 = *(long *)(unaff_x22 + 0x20);
  fVar10 = -2.1474836e+09;
  if (param_1 != INFINITY) {
    fVar10 = (float)(int)param_1;
  }
  if (*(char *)(unaff_x25 + 0xbb) == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    *(undefined1 *)(unaff_x25 + 0xbb) = 1;
  }
  if (*(int *)(*unaff_x26 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  dVar11 = (double)(int)((ulong)unaff_x24 >> 0x20);
  dVar8 = modf(dVar11,&stack0x00000008);
  if (unaff_x24 < 0) {
    if (dVar8 == -0.5) {
      dVar8 = -1.0;
      goto LAB_0366af8c;
    }
    dVar11 = (double)(long)(dVar11 + -0.5);
  }
  else if (dVar8 == 0.5) {
    dVar8 = 1.0;
LAB_0366af8c:
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
    lVar6 = FUN_04070398();
    if (lVar6 != 0) {
      fVar12 = -2.1474836e+09;
      fVar14 = -2.1474836e+09;
      if (dVar11 != INFINITY) {
        fVar14 = (float)(int)dVar11;
      }
      fVar7 = (float)FUN_0407ec3c(lVar6,0);
      puVar3 = 
      Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<MeshUtils_Edge>_Create__
      ;
      lVar6 = *unaff_x21;
      if (lVar6 != 0) {
        lVar4 = *(long *)(lVar6 + 0x10);
        lVar5 = *(long *)
                 Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<MeshUtils_Edge>_Create__
        ;
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
            FUN_031800a8(fVar14,fVar10,0,lVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          lVar6 = *unaff_x21;
          if (lVar6 != 0) {
            lVar4 = *(long *)(lVar6 + 0x10);
            lVar5 = *(long *)puVar3;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar4 != 0) {
              uVar2 = *(uint *)(lVar6 + 0x18);
              fVar12 = fVar12 * 0.5;
              if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                lVar4 = lVar4 + (long)(int)uVar2 * 0xc;
                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                *(float *)(lVar4 + 0x20) = fVar14;
                *(float *)(lVar4 + 0x24) = fVar12;
                *(undefined4 *)(lVar4 + 0x28) = 0;
              }
              else {
                FUN_031800a8(fVar14,fVar12,0,lVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              lVar6 = *unaff_x21;
              if (lVar6 != 0) {
                lVar4 = *(long *)(lVar6 + 0x10);
                lVar5 = *(long *)puVar3;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar4 != 0) {
                  uVar2 = *(uint *)(lVar6 + 0x18);
                  fVar7 = fVar7 * 0.5;
                  if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                    lVar4 = lVar4 + (long)(int)uVar2 * 0xc;
                    *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                    *(float *)(lVar4 + 0x20) = fVar7;
                    *(float *)(lVar4 + 0x24) = fVar12;
                    *(undefined4 *)(lVar4 + 0x28) = 0;
                  }
                  else {
                    FUN_031800a8(fVar7,fVar12,0,lVar6,
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
                        FUN_031800a8(fVar7,fVar10,0,lVar6,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                      }
                      puVar3 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
                      lVar6 = *unaff_x20;
                      if (lVar6 != 0) {
                        lVar4 = *(long *)(lVar6 + 0x10);
                        lVar5 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                        if (lVar4 != 0) {
                          uVar2 = *(uint *)(lVar6 + 0x18);
                          if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                            *(undefined4 *)(lVar4 + (long)(int)uVar2 * 4 + 0x20) = 0;
                          }
                          else {
                            FUN_030ba904(lVar6,0,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                        );
                            lVar6 = *unaff_x20;
                            if (lVar6 == 0) goto LAB_0366b5dc;
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
                              FUN_030ba904(lVar6,1,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                    0x70));
                              lVar6 = *unaff_x20;
                              if (lVar6 == 0) goto LAB_0366b5dc;
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
                                FUN_030ba904(lVar6,2,*(undefined8 *)
                                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                      0x70));
                                lVar6 = *unaff_x20;
                                if (lVar6 == 0) goto LAB_0366b5dc;
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
                                  FUN_030ba904(lVar6,0,*(undefined8 *)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                        0x70));
                                  lVar6 = *unaff_x20;
                                  if (lVar6 == 0) goto LAB_0366b5dc;
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
                                    FUN_030ba904(lVar6,2,*(undefined8 *)
                                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                          + 0x70));
                                    lVar6 = *unaff_x20;
                                    if (lVar6 == 0) goto LAB_0366b5dc;
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
                                      FUN_030ba904(lVar6,3,*(undefined8 *)
                                                            (*(long *)(*(long *)(lVar5 + 0x20) +
                                                                      0xc0) + 0x70));
                                    }
                                    puVar3 = Method_TMPro_TMP_ListPool<Canvas>_Get__;
                                    lVar6 = *unaff_x19;
                                    if (lVar6 != 0) {
                                      lVar4 = *(long *)(lVar6 + 0x10);
                                      lVar5 = *(long *)Method_TMPro_TMP_ListPool<Canvas>_Get__;
                                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                      if (lVar4 != 0) {
                                        uVar2 = *(uint *)(lVar6 + 0x18);
                                        if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                          *(undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20) = 0;
                                        }
                                        else {
                                          FUN_0317d87c(0,0,lVar6,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                        0x70));
                                        }
                                        lVar6 = *unaff_x19;
                                        if (lVar6 != 0) {
                                          lVar4 = *(long *)(lVar6 + 0x10);
                                          lVar5 = *(long *)puVar3;
                                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                          uVar9 = DAT_00c8e790;
                                          if (lVar4 != 0) {
                                            uVar2 = *(uint *)(lVar6 + 0x18);
                                            if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                              *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                              *(undefined8 *)(lVar4 + (long)(int)uVar2 * 8 + 0x20) =
                                                   uVar9;
                                            }
                                            else {
                                              FUN_0317d87c(0,0x3f800000,lVar6,
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
                                                  FUN_0317d87c(0x3f800000,0x3f800000,lVar6,
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
                                                  uVar9 = DAT_00c8d7f0;
                                                  if (lVar4 != 0) {
                                                    uVar2 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar4 + (long)(int)uVar2 * 8 + 0x20) = uVar9
                                                      ;
                                                      return;
                                                    }
                                                    FUN_0317d87c(0x3f800000,0,lVar6,
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
LAB_0366b5dc:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


