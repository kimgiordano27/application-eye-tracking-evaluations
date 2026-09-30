/*
FUNCTION_NAME: OVRManager$$Awake
ENTRY_POINT: 0366ad20
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 173
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_10;telemetry_or_network_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void OVRManager__Awake(ulong param_1,long param_2,long *param_3,long *param_4,long *param_5)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 *unaff_x23;
  long unaff_x24;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  float fVar8;
  double dVar9;
  undefined8 uVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  double in_stack_00000008;
  
  puVar6 = *(undefined8 **)(unaff_x24 + 0x8b8);
  if ((param_1 & 1) == 0) {
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<MeshUtils_Edge>_Create__
                      );
    thunk_FUN_01efb3a4(Method_TMPro_TMP_ListPool<Canvas>_Get__);
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BezierKnot>_GetEnumerator__);
    thunk_FUN_01efb3a4(Method_TMPro_TMP_ListPool<Canvas>_Release__);
    thunk_FUN_01efb3a4(
                      Method_UnityEngine_Rendering_ObjectPool_PooledObject<List<GUIContent>>_System_IDisposable_Dispose__
                      );
    thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<BoneWeight>__ctor__);
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<TouchHandGrabInteractor,_TouchHandGrabInteractable>_DoPostprocess__
                      );
    thunk_FUN_01efb3a4(Method_TMPro_TMP_ListPool<IMaterialModifier>_Get__);
    *(undefined1 *)(unaff_x28 + 0xd56) = 1;
  }
  lVar4 = thunk_FUN_01f117cc(*unaff_x29);
  FUN_0317f814(lVar4,*unaff_x23);
  *param_3 = lVar4;
  thunk_FUN_01f51358(param_3,lVar4);
  lVar4 = thunk_FUN_01f117cc(*unaff_x27);
  FUN_030ba0b0(lVar4,*unaff_x26);
  *param_4 = lVar4;
  thunk_FUN_01f51358(param_4,lVar4);
  lVar4 = thunk_FUN_01f117cc(*unaff_x25);
  FUN_0317d014(lVar4,*puVar6);
  *param_5 = lVar4;
  thunk_FUN_01f51358(param_5,lVar4);
  lVar4 = *(long *)(param_2 + 0x20);
  if (lVar4 == 0) goto LAB_0366b5dc;
  if (*(int *)(lVar4 + 0x2c) == 0) {
    lVar7 = FUN_0366b948(lVar4);
    lVar4 = *(long *)(param_2 + 0x20);
  }
  else {
    lVar7 = *(long *)(lVar4 + 0x30);
  }
  if (DAT_0482f0bb == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f0bb = '\x01';
  }
  puVar3 = Method_Oculus_Platform_Message<LeaderboardList>__ctor__;
  if (*(int *)(*(long *)Method_Oculus_Platform_Message<LeaderboardList>__ctor__ + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  dVar12 = (double)(int)lVar7;
  dVar9 = modf(dVar12,&stack0x00000008);
  if ((int)lVar7 < 0) {
    if (dVar9 == -0.5) {
      dVar9 = -1.0;
      goto LAB_0366aebc;
    }
    dVar12 = (double)(long)(dVar12 + -0.5);
  }
  else if (dVar9 == 0.5) {
    dVar9 = 1.0;
LAB_0366aebc:
    dVar12 = in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      dVar12 = in_stack_00000008 + dVar9;
    }
  }
  else {
    dVar12 = (double)(long)(dVar12 + 0.5);
  }
  if (lVar4 == 0) goto LAB_0366b5dc;
  iVar14 = *(int *)(lVar4 + 0x3c);
  lVar4 = *(long *)(param_2 + 0x20);
  fVar11 = -2.1474836e+09;
  if (dVar12 != INFINITY) {
    fVar11 = (float)(int)dVar12;
  }
  if (DAT_0482f0bb == '\0') {
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LeaderboardList>__ctor__);
    DAT_0482f0bb = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c();
  }
  dVar12 = (double)(int)((ulong)lVar7 >> 0x20);
  dVar9 = modf(dVar12,&stack0x00000008);
  if (lVar7 < 0) {
    if (dVar9 == -0.5) {
      dVar9 = -1.0;
      goto LAB_0366af8c;
    }
    dVar12 = (double)(long)(dVar12 + -0.5);
  }
  else if (dVar9 == 0.5) {
    dVar9 = 1.0;
LAB_0366af8c:
    dVar12 = in_stack_00000008;
    if (((long)in_stack_00000008 & 1U) != 0) {
      dVar12 = in_stack_00000008 + dVar9;
    }
  }
  else {
    dVar12 = (double)(long)(dVar12 + 0.5);
  }
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar4 + 0x3c);
    lVar4 = FUN_04070398(param_2,0);
    if (lVar4 != 0) {
      fVar13 = -2.1474836e+09;
      fVar15 = -2.1474836e+09;
      if (dVar12 != INFINITY) {
        fVar15 = (float)(int)dVar12;
      }
      fVar8 = (float)FUN_0407ec3c(lVar4,0);
      puVar3 = 
      Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<MeshUtils_Edge>_Create__
      ;
      lVar4 = *param_3;
      if (lVar4 != 0) {
        lVar7 = *(long *)(lVar4 + 0x10);
        lVar5 = *(long *)
                 Method_UnityEngine_Rendering_Universal_LibTessDotNet_MeshUtils_Pooled<MeshUtils_Edge>_Create__
        ;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar2 = *(uint *)(lVar4 + 0x18);
          fVar8 = (fVar11 * (1.0 / (float)iVar14)) / fVar8;
          fVar13 = (fVar15 * (1.0 / (float)iVar1)) / fVar13;
          fVar15 = -(fVar8 * 0.5);
          fVar11 = -(fVar13 * 0.5);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            lVar7 = lVar7 + (long)(int)uVar2 * 0xc;
            *(uint *)(lVar4 + 0x18) = uVar2 + 1;
            *(float *)(lVar7 + 0x20) = fVar15;
            *(float *)(lVar7 + 0x24) = fVar11;
            *(undefined4 *)(lVar7 + 0x28) = 0;
          }
          else {
            FUN_031800a8(fVar15,fVar11,0,lVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          lVar4 = *param_3;
          if (lVar4 != 0) {
            lVar7 = *(long *)(lVar4 + 0x10);
            lVar5 = *(long *)puVar3;
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar7 != 0) {
              uVar2 = *(uint *)(lVar4 + 0x18);
              fVar13 = fVar13 * 0.5;
              if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                lVar7 = lVar7 + (long)(int)uVar2 * 0xc;
                *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                *(float *)(lVar7 + 0x20) = fVar15;
                *(float *)(lVar7 + 0x24) = fVar13;
                *(undefined4 *)(lVar7 + 0x28) = 0;
              }
              else {
                FUN_031800a8(fVar15,fVar13,0,lVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              lVar4 = *param_3;
              if (lVar4 != 0) {
                lVar7 = *(long *)(lVar4 + 0x10);
                lVar5 = *(long *)puVar3;
                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                if (lVar7 != 0) {
                  uVar2 = *(uint *)(lVar4 + 0x18);
                  fVar8 = fVar8 * 0.5;
                  if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                    lVar7 = lVar7 + (long)(int)uVar2 * 0xc;
                    *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                    *(float *)(lVar7 + 0x20) = fVar8;
                    *(float *)(lVar7 + 0x24) = fVar13;
                    *(undefined4 *)(lVar7 + 0x28) = 0;
                  }
                  else {
                    FUN_031800a8(fVar8,fVar13,0,lVar4,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar4 = *param_3;
                  if (lVar4 != 0) {
                    lVar7 = *(long *)(lVar4 + 0x10);
                    lVar5 = *(long *)puVar3;
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    if (lVar7 != 0) {
                      uVar2 = *(uint *)(lVar4 + 0x18);
                      if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                        lVar7 = lVar7 + (long)(int)uVar2 * 0xc;
                        *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                        *(float *)(lVar7 + 0x20) = fVar8;
                        *(float *)(lVar7 + 0x24) = fVar11;
                        *(undefined4 *)(lVar7 + 0x28) = 0;
                      }
                      else {
                        FUN_031800a8(fVar8,fVar11,0,lVar4,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                      }
                      puVar3 = Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
                      lVar4 = *param_4;
                      if (lVar4 != 0) {
                        lVar7 = *(long *)(lVar4 + 0x10);
                        lVar5 = *(long *)Method_Unity_Collections_NativeArray<BezierKnot>_Dispose__;
                        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                        if (lVar7 != 0) {
                          uVar2 = *(uint *)(lVar4 + 0x18);
                          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                            *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                            *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = 0;
                          }
                          else {
                            FUN_030ba904(lVar4,0,*(undefined8 *)
                                                  (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                                        );
                            lVar4 = *param_4;
                            if (lVar4 == 0) goto LAB_0366b5dc;
                          }
                          lVar7 = *(long *)(lVar4 + 0x10);
                          lVar5 = *(long *)puVar3;
                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          if (lVar7 != 0) {
                            uVar2 = *(uint *)(lVar4 + 0x18);
                            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                              *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                              *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = 1;
                            }
                            else {
                              FUN_030ba904(lVar4,1,*(undefined8 *)
                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                    0x70));
                              lVar4 = *param_4;
                              if (lVar4 == 0) goto LAB_0366b5dc;
                            }
                            lVar7 = *(long *)(lVar4 + 0x10);
                            lVar5 = *(long *)puVar3;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar7 != 0) {
                              uVar2 = *(uint *)(lVar4 + 0x18);
                              if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = 2;
                              }
                              else {
                                FUN_030ba904(lVar4,2,*(undefined8 *)
                                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                      0x70));
                                lVar4 = *param_4;
                                if (lVar4 == 0) goto LAB_0366b5dc;
                              }
                              lVar7 = *(long *)(lVar4 + 0x10);
                              lVar5 = *(long *)puVar3;
                              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                              if (lVar7 != 0) {
                                uVar2 = *(uint *)(lVar4 + 0x18);
                                if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                  *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                  *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = 0;
                                }
                                else {
                                  FUN_030ba904(lVar4,0,*(undefined8 *)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                        0x70));
                                  lVar4 = *param_4;
                                  if (lVar4 == 0) goto LAB_0366b5dc;
                                }
                                lVar7 = *(long *)(lVar4 + 0x10);
                                lVar5 = *(long *)puVar3;
                                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                if (lVar7 != 0) {
                                  uVar2 = *(uint *)(lVar4 + 0x18);
                                  if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                    *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                    *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = 2;
                                  }
                                  else {
                                    FUN_030ba904(lVar4,2,*(undefined8 *)
                                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0)
                                                          + 0x70));
                                    lVar4 = *param_4;
                                    if (lVar4 == 0) goto LAB_0366b5dc;
                                  }
                                  lVar7 = *(long *)(lVar4 + 0x10);
                                  lVar5 = *(long *)puVar3;
                                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                  if (lVar7 != 0) {
                                    uVar2 = *(uint *)(lVar4 + 0x18);
                                    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                      *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = 3;
                                    }
                                    else {
                                      FUN_030ba904(lVar4,3,*(undefined8 *)
                                                            (*(long *)(*(long *)(lVar5 + 0x20) +
                                                                      0xc0) + 0x70));
                                    }
                                    puVar3 = Method_TMPro_TMP_ListPool<Canvas>_Get__;
                                    lVar4 = *param_5;
                                    if (lVar4 != 0) {
                                      lVar7 = *(long *)(lVar4 + 0x10);
                                      lVar5 = *(long *)Method_TMPro_TMP_ListPool<Canvas>_Get__;
                                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                      if (lVar7 != 0) {
                                        uVar2 = *(uint *)(lVar4 + 0x18);
                                        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                          *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                          *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = 0;
                                        }
                                        else {
                                          FUN_0317d87c(0,0,lVar4,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) +
                                                        0x70));
                                        }
                                        lVar4 = *param_5;
                                        if (lVar4 != 0) {
                                          lVar7 = *(long *)(lVar4 + 0x10);
                                          lVar5 = *(long *)puVar3;
                                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          uVar10 = DAT_00c8e790;
                                          if (lVar7 != 0) {
                                            uVar2 = *(uint *)(lVar4 + 0x18);
                                            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                              *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                              *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) =
                                                   uVar10;
                                            }
                                            else {
                                              FUN_0317d87c(0,0x3f800000,lVar4,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar5 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            lVar4 = *param_5;
                                            if (lVar4 != 0) {
                                              lVar7 = *(long *)(lVar4 + 0x10);
                                              lVar5 = *(long *)puVar3;
                                              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                              if (lVar7 != 0) {
                                                uVar2 = *(uint *)(lVar4 + 0x18);
                                                if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                                  uVar10 = NEON_fmov(0x3f800000,4);
                                                  *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                                  *(undefined8 *)
                                                   (lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar10;
                                                }
                                                else {
                                                  FUN_0317d87c(0x3f800000,0x3f800000,lVar4,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar5 + 0x20) +
                                                                          0xc0) + 0x70));
                                                }
                                                lVar4 = *param_5;
                                                if (lVar4 != 0) {
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  lVar5 = *(long *)puVar3;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  uVar10 = DAT_00c8d7f0;
                                                  if (lVar7 != 0) {
                                                    uVar2 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar2 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar2 * 8 + 0x20) =
                                                           uVar10;
                                                      return;
                                                    }
                                                    FUN_0317d87c(0x3f800000,0,lVar4,
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


