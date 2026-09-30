/*
FUNCTION_NAME: UnityEngine.Rendering.Universal.Internal.DeferredLights.ShaderConstants$$.cctor
ENTRY_POINT: 058a8464
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 183
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_12;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_1;functionality_data_collection_or_telemetry_hits_7
*/


/* WARNING: Removing unreachable block (ram,0x058aa1cc) */
/* WARNING: Removing unreachable block (ram,0x058aa1dc) */
/* WARNING: Removing unreachable block (ram,0x058a8500) */
/* WARNING: Removing unreachable block (ram,0x058a86b0) */
/* WARNING: Removing unreachable block (ram,0x058aa1ac) */
/* WARNING: Removing unreachable block (ram,0x058a8934) */
/* WARNING: Removing unreachable block (ram,0x058a8aec) */

void UnityEngine_Rendering_Universal_Internal_DeferredLights_ShaderConstants___cctor
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte *pbVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined4 *puVar17;
  long *plVar18;
  long *plVar19;
  ulong uVar20;
  int *piVar21;
  char *pcVar22;
  int *piVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  int iVar30;
  ulong unaff_x25;
  uint unaff_w26;
  undefined8 uVar31;
  int iVar32;
  ushort *puVar33;
  long unaff_x29;
  uint in_stack_00000018;
  long in_stack_00000020;
  long *in_stack_00000028;
  ulong in_stack_00000030;
  long in_stack_00000048;
  undefined4 in_stack_00000060;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined4 in_stack_000000f0;
  int in_stack_00000110;
  undefined8 in_stack_00000170;
  undefined1 *in_stack_00000178;
  ulong in_stack_00000180;
  ulong in_stack_00000188;
  undefined8 in_stack_00000190;
  ulong in_stack_00000198;
  long in_stack_000001a0;
  long in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined1 *in_stack_000001c8;
  ushort uStack00000000000001d0;
  ulong in_stack_000001d8;
  undefined8 in_stack_000001e0;
  uint uVar34;
  undefined1 *puVar35;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  undefined8 in_stack_000002b8;
  ulong in_stack_000002d0;
  ulong in_stack_000002d8;
  long in_stack_000002f0;
  long in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined1 *puVar36;
  ulong in_stack_00000360;
  ulong in_stack_00000368;
  ulong uVar37;
  undefined8 in_stack_00000370;
  ulong in_stack_00000378;
  ulong uVar38;
  long in_stack_00000380;
  ulong in_stack_00000388;
  
  do {
    System_Collections_Generic_Dictionary<int,_Int32Enum>__Add(param_1,param_2,param_3,param_4);
    param_1 = unaff_x20;
    do {
      lVar11 = FUN_04351eec(param_1,in_stack_000002b8,
                            *(undefined8 *)
                             Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetException__);
      if (lVar11 == 0) {
LAB_058a896c:
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      lVar24 = *(long *)(lVar11 + 0x10);
      uVar9 = *(undefined4 *)(unaff_x29 + 0x18);
      lVar26 = *unaff_x19;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar24 == 0) goto LAB_058a896c;
      uVar34 = *(uint *)(lVar11 + 0x18);
      if (uVar34 < *(uint *)(lVar24 + 0x18)) {
        *(uint *)(lVar11 + 0x18) = uVar34 + 1;
        *(undefined4 *)(lVar24 + (long)(int)uVar34 * 4 + 0x20) = uVar9;
      }
      else {
        FUN_03753114(lVar11,uVar9,*(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70)
                    );
      }
      do {
        do {
          do {
            while (uVar10 = FUN_04738544(&stack0x000002c0,*unaff_x22), (uVar10 & 1) == 0) {
              FUN_04738540(&stack0x000002c0,
                           *(undefined8 *)Method_System_Nullable<GeneralNameType>__ctor__);
              lVar11 = *(long *)(unaff_x29 + 0xb0);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(uint *)(lVar11 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              lVar11 = *(long *)(lVar11 + unaff_x25 * 8 + 0x20);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              FUN_03816fc8(&stack0x00000350,lVar11,
                           *(undefined8 *)
                            Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
LAB_058a854c:
              uVar10 = FUN_04738544(&stack0x000002c0,*unaff_x22);
              if ((uVar10 & 1) != 0) {
                if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                if (unaff_x25 == (in_stack_00000368 & 0xffffffff)) {
                  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  if (unaff_w26 == ((uint)in_stack_00000360 & 0xffff)) {
                    FUN_041797f8(&stack0x000002b0,unaff_x25 & 0xffffffff,unaff_w26,
                                 *(undefined8 *)
                                  Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__
                                );
                    if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    uVar10 = FUN_04352180(in_stack_00000030,in_stack_000002b0,
                                          *(undefined8 *)
                                           Method_OVRTaskBuilder<OVRSceneManager_Metrics>_get_Task__
                                         );
                    if ((uVar10 & 1) == 0) {
                      uVar12 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
                      FUN_03752884(uVar12,*(undefined8 *)PTR_DAT_06316c58);
                      System_Collections_Generic_Dictionary<int,_Int32Enum>__Add
                                (in_stack_00000030,in_stack_000002b0,uVar12,
                                 *(undefined8 *)
                                  Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetResult__);
                    }
                    lVar11 = FUN_04351eec(in_stack_00000030,in_stack_000002b0,
                                          *(undefined8 *)
                                           Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetException__
                                         );
                    if (lVar11 != 0) {
                      lVar24 = *(long *)(lVar11 + 0x10);
                      uVar9 = *(undefined4 *)(unaff_x29 + 0x18);
                      lVar26 = *unaff_x19;
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar24 != 0) {
                        uVar34 = *(uint *)(lVar11 + 0x18);
                        if (uVar34 < *(uint *)(lVar24 + 0x18)) {
                          *(uint *)(lVar11 + 0x18) = uVar34 + 1;
                          *(undefined4 *)(lVar24 + (long)(int)uVar34 * 4 + 0x20) = uVar9;
                        }
                        else {
                          FUN_03753114(lVar11,uVar9,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                        }
                        goto LAB_058a854c;
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                }
                goto LAB_058a854c;
              }
              FUN_04738540(&stack0x000002c0,
                           *(undefined8 *)Method_System_Nullable<GeneralNameType>__ctor__);
              lVar11 = *(long *)(unaff_x29 + 0xb8);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(uint *)(lVar11 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              lVar11 = *(long *)(lVar11 + unaff_x25 * 8 + 0x20);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              FUN_03816fc8(&stack0x00000350,lVar11,
                           *(undefined8 *)
                            Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
              puVar35 = &stack0x000002c0;
              uVar12 = 0;
LAB_058a86fc:
              uVar10 = FUN_04738544(&stack0x000002c0,*unaff_x22);
              if ((uVar10 & 1) != 0) {
                if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                if (unaff_x25 == (in_stack_00000368 & 0xffffffff)) {
                  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  if (unaff_w26 == ((uint)in_stack_00000360 & 0xffff)) {
                    FUN_041797f8(&stack0x000002a8,unaff_x25 & 0xffffffff,unaff_w26,
                                 *(undefined8 *)
                                  Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__
                                );
                    if (in_stack_00000020 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    uVar10 = FUN_04352180(in_stack_00000020,in_stack_000002a8,
                                          *(undefined8 *)
                                           Method_OVRTaskBuilder<OVRSceneManager_Metrics>_get_Task__
                                         );
                    if ((uVar10 & 1) == 0) {
                      uVar13 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
                      FUN_03752884(uVar13,*(undefined8 *)PTR_DAT_06316c58);
                      System_Collections_Generic_Dictionary<int,_Int32Enum>__Add
                                (in_stack_00000020,in_stack_000002a8,uVar13,
                                 *(undefined8 *)
                                  Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetResult__);
                    }
                    lVar11 = FUN_04351eec(in_stack_00000020,in_stack_000002a8,
                                          *(undefined8 *)
                                           Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetException__
                                         );
                    if (lVar11 != 0) {
                      lVar24 = *(long *)(lVar11 + 0x10);
                      uVar9 = *(undefined4 *)(unaff_x29 + 0x18);
                      lVar26 = *unaff_x19;
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar24 != 0) {
                        uVar34 = *(uint *)(lVar11 + 0x18);
                        if (uVar34 < *(uint *)(lVar24 + 0x18)) {
                          *(uint *)(lVar11 + 0x18) = uVar34 + 1;
                          *(undefined4 *)(lVar24 + (long)(int)uVar34 * 4 + 0x20) = uVar9;
                        }
                        else {
                          FUN_03753114(lVar11,uVar9,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                        }
                        if (in_stack_00000030 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02b3cac4();
                        }
                        uVar10 = FUN_04352180(in_stack_00000030,in_stack_000002a8,
                                              *(undefined8 *)
                                               Method_OVRTaskBuilder<OVRSceneManager_Metrics>_get_Task__
                                             );
                        if ((uVar10 & 1) == 0) {
                          uVar13 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
                          FUN_03752884(uVar13,*(undefined8 *)PTR_DAT_06316c58);
                          System_Collections_Generic_Dictionary<int,_Int32Enum>__Add
                                    (in_stack_00000030,in_stack_000002a8,uVar13,
                                     *(undefined8 *)
                                      Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetResult__
                                    );
                        }
                        lVar11 = FUN_04351eec(in_stack_00000030,in_stack_000002a8,
                                              *(undefined8 *)
                                               Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetException__
                                             );
                        if (lVar11 != 0) {
                          lVar24 = *(long *)(lVar11 + 0x10);
                          uVar9 = *(undefined4 *)(unaff_x29 + 0x18);
                          lVar26 = *unaff_x19;
                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                          if (lVar24 != 0) {
                            uVar34 = *(uint *)(lVar11 + 0x18);
                            if (uVar34 < *(uint *)(lVar24 + 0x18)) {
                              *(uint *)(lVar11 + 0x18) = uVar34 + 1;
                              *(undefined4 *)(lVar24 + (long)(int)uVar34 * 4 + 0x20) = uVar9;
                            }
                            else {
                              FUN_03753114(lVar11,uVar9,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
                            }
                            goto LAB_058a86fc;
                          }
                        }
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4();
                      }
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                }
                goto LAB_058a86fc;
              }
              FUN_04738540(&stack0x000002c0,
                           *(undefined8 *)Method_System_Nullable<GeneralNameType>__ctor__);
              unaff_w26 = unaff_w26 + 1;
              if (unaff_w26 == in_stack_00000018) {
                do {
                  unaff_x25 = unaff_x25 + 1;
                  if (unaff_x25 == 3) {
                    uVar10 = FUN_0472eaf4(&stack0x000002e0,
                                          *(undefined8 *)Method_System_Nullable<Ease>_get_Value__);
                    if ((uVar10 & 1) == 0) {
                      FUN_0472eaf0(in_stack_00000308,
                                   *(undefined8 *)Method_System_Nullable<Ease>_get_HasValue__);
                      if (in_stack_00000300 != 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cabc(in_stack_00000300);
                      }
                      uVar10 = 0;
                      goto LAB_058a8af8;
                    }
                    unaff_x25 = 0;
                    unaff_x29 = in_stack_000002f0;
                  }
                  if (*(long *)(in_stack_00000048 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  lVar11 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  lVar11 = *(long *)(lVar11 + 0x10);
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cac4();
                  }
                  if (*(uint *)(lVar11 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
                    FUN_02b3cacc();
                  }
                  lVar11 = *(long *)(lVar11 + unaff_x25 * 8 + 0x20);
                  if ((*(ushort *)
                        (*(long *)(*(long *)
                                    Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_ContinueWith<IEnumerable<OVRSpatialAnchor>>__
                                  + 0x20) + 0x135) & 1) == 0) {
                    FUN_02b76218();
                  }
                  in_stack_00000018 = *(uint *)(lVar11 + 8);
                } while ((int)in_stack_00000018 < 1);
                if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                unaff_w26 = 0;
              }
              lVar11 = *(long *)(unaff_x29 + 0xa8);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(uint *)(lVar11 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              lVar11 = *(long *)(lVar11 + unaff_x25 * 8 + 0x20);
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              FUN_03816fc8(&stack0x00000350,lVar11,
                           *(undefined8 *)
                            Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
              param_1 = in_stack_00000020;
              in_stack_000002d0 = in_stack_00000360;
              in_stack_000002d8 = in_stack_00000368;
            }
            if (*(long *)(unaff_x29 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            uVar10 = FUN_03816854(*(long *)(unaff_x29 + 0xd8),in_stack_000002d0,
                                  in_stack_000002d8 & 0xffffffff,*unaff_x23);
          } while ((uVar10 & 1) != 0);
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
        } while (unaff_x25 != (in_stack_000002d8 & 0xffffffff));
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
      } while (unaff_w26 != ((uint)in_stack_000002d0 & 0xffff));
      FUN_041797f8(&stack0x000002b8,unaff_x25 & 0xffffffff,unaff_w26,
                   *(undefined8 *)
                    Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__);
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      uVar10 = FUN_04352180(param_1,in_stack_000002b8,
                            *(undefined8 *)Method_OVRTaskBuilder<OVRSceneManager_Metrics>_get_Task__
                           );
    } while ((uVar10 & 1) != 0);
    param_3 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
    FUN_03752884(param_3,*(undefined8 *)PTR_DAT_06316c58);
    param_4 = *(undefined8 *)Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetResult__;
    param_2 = in_stack_000002b8;
    unaff_x20 = param_1;
  } while( true );
LAB_058a8af8:
  do {
    if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
        (lVar11 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar11 == 0)) ||
       (lVar11 = *(long *)(lVar11 + 0x10), lVar11 == 0)) goto thunk_FUN_02b3cac4;
    if (*(uint *)(lVar11 + 0x18) <= uVar10) {
LAB_058aa19c:
                    /* WARNING: Subroutine does not return */
      FUN_02b3cacc();
    }
    lVar11 = *(long *)(lVar11 + uVar10 * 8 + 0x20);
    if ((*(ushort *)
          (*(long *)(*(long *)
                      Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_ContinueWith<IEnumerable<OVRSpatialAnchor>>__
                    + 0x20) + 0x135) & 1) == 0) {
      FUN_02b76218();
    }
    iVar30 = *(int *)(lVar11 + 8);
    if (0 < iVar30) {
      iVar32 = 0;
      puVar36 = puVar35;
      uVar20 = in_stack_00000360;
      uVar37 = in_stack_00000368;
      uVar13 = in_stack_00000370;
      uVar38 = in_stack_00000378;
      lVar11 = in_stack_00000380;
      do {
        if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
            (lVar24 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar24 == 0)) ||
           (lVar24 = *(long *)(lVar24 + 0x10), lVar24 == 0)) goto thunk_FUN_02b3cac4;
        if (*(uint *)(lVar24 + 0x18) <= uVar10) goto LAB_058aa19c;
        pbVar14 = (byte *)FUN_03ab61ec(lVar24 + uVar10 * 8 + 0x20,iVar32,
                                       *(undefined8 *)
                                        Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Status__
                                      );
        if (iVar32 == 0) {
          uVar12 = *(undefined8 *)PTR_DAT_0632d930;
          thunk_FUN_02bb0e9c(&stack0x00000260);
          uVar34 = 1;
        }
        else {
          if (((*(long *)(in_stack_00000048 + 0x30) == 0) ||
              (lVar24 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar24 == 0)) ||
             (lVar24 = *(long *)(lVar24 + 0x30), lVar24 == 0)) goto thunk_FUN_02b3cac4;
          if (*(uint *)(lVar24 + 0x18) <= uVar10) goto LAB_058aa19c;
          lVar24 = *(long *)(lVar24 + uVar10 * 8 + 0x20);
          if (lVar24 == 0) goto thunk_FUN_02b3cac4;
          puVar15 = (undefined8 *)
                    FUN_0463ca1c(lVar24,iVar32,
                                 *(undefined8 *)
                                  Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                                );
          uVar31 = *puVar15;
          uVar16 = FUN_04c09ac4(uVar31,0);
          uVar12 = *(undefined8 *)Method_System_Nullable<NullValueHandling>_GetValueOrDefault__;
          if ((uVar16 & 1) == 0) {
            uVar12 = uVar31;
          }
          thunk_FUN_02bb0e9c(&stack0x00000260);
          uVar34 = (uint)*pbVar14;
          if (uVar10 == 0) {
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            FUN_0589b900(&stack0x00000238,iVar32,0,0);
            if (*(long *)(in_stack_00000048 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            FUN_0589896c(*(long *)(in_stack_00000048 + 0x10),&stack0x00000238,&stack0x00000248);
          }
        }
        puVar35 = (undefined1 *)CONCAT44(*(undefined4 *)(pbVar14 + 0x10),uVar34);
        in_stack_00000360 = (ulong)*(uint *)(pbVar14 + 8);
        in_stack_00000380 =
             thunk_FUN_02b79644(*(undefined8 *)Method_System_Nullable<NullValueHandling>__ctor__);
        FUN_0588c804(in_stack_00000380,0);
        thunk_FUN_02bb0e9c(&stack0x00000290,in_stack_00000380);
        if ((((((in_stack_00000380 == 0) ||
               (*(undefined4 *)(in_stack_00000380 + 0x10) = *(undefined4 *)(pbVar14 + 0x18),
               in_stack_00000380 == 0)) ||
              (*(undefined4 *)(in_stack_00000380 + 0x14) = *(undefined4 *)(pbVar14 + 0x1c),
              in_stack_00000380 == 0)) ||
             ((*(undefined4 *)(in_stack_00000380 + 0x18) = *(undefined4 *)(pbVar14 + 0x20),
              in_stack_00000380 == 0 ||
              (*(undefined4 *)(in_stack_00000380 + 0x20) = *(undefined4 *)(pbVar14 + 0x24),
              in_stack_00000380 == 0)))) ||
            (*(undefined4 *)(in_stack_00000380 + 0x24) = 0, in_stack_00000380 == 0)) ||
           (*(byte *)(in_stack_00000380 + 0x1c) = pbVar14[0x2e], in_stack_00000380 == 0))
        goto thunk_FUN_02b3cac4;
        *(byte *)(in_stack_00000380 + 0x28) = pbVar14[0x2c];
        puVar7 = PTR_DAT_06316c60;
        in_stack_00000378 = (ulong)pbVar14[0x14];
        in_stack_00000368 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
        puVar6 = PTR_DAT_06316c58;
        FUN_03752884(in_stack_00000368,*(undefined8 *)PTR_DAT_06316c58);
        thunk_FUN_02bb0e9c(&stack0x00000278,in_stack_00000368);
        in_stack_00000370 = thunk_FUN_02b79644(*(undefined8 *)puVar7);
        FUN_03752884(in_stack_00000370,*(undefined8 *)puVar6);
        thunk_FUN_02bb0e9c(&stack0x00000280,in_stack_00000370);
        FUN_041797f8(&stack0x00000350,uVar10 & 0xffffffff,iVar32,
                     *(undefined8 *)
                      Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__);
        if (in_stack_00000020 == 0) goto thunk_FUN_02b3cac4;
        uVar16 = FUN_04352180(in_stack_00000020,0,
                              *(undefined8 *)
                               Method_OVRTaskBuilder<OVRSceneManager_Metrics>_get_Task__);
        if ((uVar16 & 1) != 0) {
          FUN_041797f8(&stack0x00000350,uVar10 & 0xffffffff,iVar32,
                       *(undefined8 *)
                        Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__);
          in_stack_00000368 =
               FUN_04351eec(in_stack_00000020,0,
                            *(undefined8 *)
                             Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetException__);
          thunk_FUN_02bb0e9c(&stack0x00000278,in_stack_00000368);
        }
        FUN_041797f8(&stack0x00000350,uVar10 & 0xffffffff,iVar32,
                     *(undefined8 *)
                      Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__);
        if (in_stack_00000030 == 0) goto thunk_FUN_02b3cac4;
        uVar16 = FUN_04352180(in_stack_00000030,0,
                              *(undefined8 *)
                               Method_OVRTaskBuilder<OVRSceneManager_Metrics>_get_Task__);
        if ((uVar16 & 1) != 0) {
          FUN_041797f8(&stack0x00000350,uVar10 & 0xffffffff,iVar32,
                       *(undefined8 *)
                        Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__);
          in_stack_00000370 =
               FUN_04351eec(in_stack_00000030,0,
                            *(undefined8 *)
                             Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetException__);
          thunk_FUN_02bb0e9c(&stack0x00000280,in_stack_00000370);
        }
        puVar6 = Method_System_Nullable<MouseButton>__ctor__;
        if ((*in_stack_00000028 == 0) ||
           (lVar24 = *(long *)(*in_stack_00000028 + 0x18), lVar24 == 0)) goto thunk_FUN_02b3cac4;
        if (*(uint *)(lVar24 + 0x18) <= uVar10) goto LAB_058aa19c;
        lVar24 = *(long *)(lVar24 + uVar10 * 8 + 0x20);
        if (lVar24 == 0) goto thunk_FUN_02b3cac4;
        lVar26 = *(long *)(lVar24 + 0x10);
        *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
        if (lVar26 == 0) goto thunk_FUN_02b3cac4;
        uVar34 = *(uint *)(lVar24 + 0x18);
        if (uVar34 < *(uint *)(lVar26 + 0x18)) {
          lVar26 = lVar26 + (long)(int)uVar34 * 0x40;
          *(uint *)(lVar24 + 0x18) = uVar34 + 1;
          *(undefined1 **)(lVar26 + 0x28) = puVar35;
          *(undefined8 *)(lVar26 + 0x20) = uVar12;
          *(ulong *)(lVar26 + 0x38) = in_stack_00000368;
          *(ulong *)(lVar26 + 0x30) = in_stack_00000360;
          *(ulong *)(lVar26 + 0x48) = in_stack_00000378;
          *(undefined8 *)(lVar26 + 0x40) = in_stack_00000370;
          *(undefined8 *)(lVar26 + 0x58) = 0;
          *(long *)(lVar26 + 0x50) = in_stack_00000380;
          thunk_FUN_02bb0e9c(lVar26 + 0x20,0);
          uVar12 = 0;
          puVar35 = puVar36;
          in_stack_00000360 = uVar20;
          in_stack_00000368 = uVar37;
          in_stack_00000370 = uVar13;
          in_stack_00000378 = uVar38;
          in_stack_00000380 = lVar11;
        }
        else {
          in_stack_00000388 = 0;
          FUN_039b9384(lVar24,&stack0x00000350,
                       *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar6 + 0x20) + 0xc0) + 0x70));
        }
        iVar32 = iVar32 + 1;
        puVar36 = puVar35;
        uVar20 = in_stack_00000360;
        uVar37 = in_stack_00000368;
        uVar13 = in_stack_00000370;
        uVar38 = in_stack_00000378;
        lVar11 = in_stack_00000380;
      } while (iVar30 != iVar32);
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != 3);
  lVar11 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar11 != 0) {
    iVar30 = 0;
    while( true ) {
      lVar11 = *(long *)(lVar11 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      if (*(int *)(lVar11 + 8) <= iVar30) break;
      if (*(long *)(in_stack_00000048 + 0x18) == 0) goto thunk_FUN_02b3cac4;
      lVar11 = FUN_037a6268(*(long *)(in_stack_00000048 + 0x18),iVar30,
                            *(undefined8 *)Method_System_Nullable<NativeArray<ShaderTagId>>__ctor__)
      ;
      if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
      in_stack_00000030 = CONCAT44(in_stack_00000030._4_4_,iVar30);
      puVar17 = (undefined4 *)
                FUN_03ab2128(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar30,
                             *(undefined8 *)
                              Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
      lVar24 = *(long *)(in_stack_00000048 + 0x30);
      if (lVar24 == 0) goto thunk_FUN_02b3cac4;
      uVar9 = *puVar17;
      if (DAT_066d31dc == '\0') {
        FUN_02b3c81c(
                    Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                    );
        DAT_066d31dc = '\x01';
      }
      lVar24 = *(long *)(lVar24 + 0x28);
      if (lVar24 == 0) goto thunk_FUN_02b3cac4;
      puVar15 = (undefined8 *)
                FUN_0463ca1c(lVar24,uVar9,
                             *(undefined8 *)
                              Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                            );
      uVar13 = FUN_058a7d14(*puVar15);
      thunk_FUN_02bb0e9c(&stack0x000001f0,uVar13);
      puVar6 = Method_System_Nullable<ValueTuple<int,_int>>_GetValueOrDefault__;
      if (lVar11 == 0) goto thunk_FUN_02b3cac4;
      plVar18 = (long *)FUN_02b3c908(*(undefined8 *)
                                      Method_System_Nullable<ValueTuple<int,_int>>_GetValueOrDefault__
                                     ,3);
      thunk_FUN_02bb0e9c(&stack0x00000200,plVar18);
      plVar19 = (long *)FUN_02b3c908(*(undefined8 *)puVar6,3);
      thunk_FUN_02bb0e9c(&stack0x00000208,plVar19);
      lVar24 = *(long *)Method_System_Nullable<JsonPosition>__ctor__;
      if (*(int *)(lVar24 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        lVar24 = *(long *)Method_System_Nullable<JsonPosition>__ctor__;
      }
      if (**(long **)(lVar24 + 0xb8) == 0) goto thunk_FUN_02b3cac4;
      FUN_0452f928(**(long **)(lVar24 + 0xb8),lVar11,&stack0x00000230,
                   *(undefined8 *)Method_System_Nullable<MissingMemberHandling>_get_HasValue__);
      lVar24 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTask<OVRResult<OVRAnchor_SaveResult>>_GetAwaiter__);
      FUN_0588d214(lVar24,0);
      thunk_FUN_02bb0e9c(&stack0x00000228,lVar24);
      if ((((lVar24 == 0) || (*(undefined4 *)(lVar24 + 0x28) = puVar17[0x19], lVar24 == 0)) ||
          (*(undefined4 *)(lVar24 + 0x2c) = puVar17[0x1a], lVar24 == 0)) ||
         ((*(undefined4 *)(lVar24 + 0x30) = puVar17[0x1b], lVar24 == 0 ||
          (*(undefined4 *)(lVar24 + 0x34) = puVar17[0x1c], lVar24 == 0)))) goto thunk_FUN_02b3cac4;
      *(undefined1 *)(lVar24 + 0x38) = *(undefined1 *)((long)puVar17 + 0x7d);
      if (*(long *)(lVar11 + 200) == 0) goto thunk_FUN_02b3cac4;
      FUN_036b96a4(&stack0x00000350,*(long *)(lVar11 + 200),
                   *(undefined8 *)Method_System_Nullable<int>_GetValueOrDefault__);
      in_stack_000001c0 = uVar12;
      in_stack_000001c8 = puVar35;
      _uStack00000000000001d0 = in_stack_00000360;
      in_stack_000001d8 = in_stack_00000368;
      in_stack_000001e0 = in_stack_00000370;
      while (uVar10 = FUN_0470872c(&stack0x000001c0,
                                   *(undefined8 *)Method_System_Nullable<short>_get_HasValue__),
            (uVar10 & 1) != 0) {
        if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        uVar4 = uStack00000000000001d0;
        uVar10 = _uStack00000000000001d0 & 0xffff;
        lVar26 = *(long *)(lVar24 + 0x20);
        if (*(int *)(*unaff_x21 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (lVar26 == 0) {
LAB_058a9898:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cac4();
        }
        lVar25 = *(long *)(lVar26 + 0x10);
        lVar27 = *unaff_x19;
        *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
        if (lVar25 == 0) goto LAB_058a9898;
        uVar34 = *(uint *)(lVar26 + 0x18);
        if (uVar34 < *(uint *)(lVar25 + 0x18)) {
          *(uint *)(lVar26 + 0x18) = uVar34 + 1;
          *(uint *)(lVar25 + (long)(int)uVar34 * 4 + 0x20) = (uint)uVar4;
        }
        else {
          FUN_03753114(lVar26,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_04708728(&stack0x000001c0,*(undefined8 *)Method_System_Nullable<short>_GetValueOrDefault__
                  );
      uVar10 = 0;
      do {
        lVar26 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
        FUN_03752884(lVar26,*(undefined8 *)PTR_DAT_06316c58);
        if (plVar18 == (long *)0x0) goto thunk_FUN_02b3cac4;
        if ((lVar26 != 0) &&
           (lVar25 = thunk_FUN_02b79548(lVar26,*(undefined8 *)(*plVar18 + 0x40)), lVar25 == 0)) {
LAB_058aa1a0:
          uVar12 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
          FUN_02b3c988(uVar12,0);
        }
        if (*(uint *)(plVar18 + 3) <= uVar10) goto LAB_058aa19c;
        plVar18[uVar10 + 4] = lVar26;
        thunk_FUN_02bb0e9c(plVar18 + uVar10 + 4,lVar26);
        lVar26 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
        FUN_03752884(lVar26,*(undefined8 *)PTR_DAT_06316c58);
        if (plVar19 == (long *)0x0) goto thunk_FUN_02b3cac4;
        if ((lVar26 != 0) &&
           (lVar25 = thunk_FUN_02b79548(lVar26,*(undefined8 *)(*plVar19 + 0x40)), lVar25 == 0))
        goto LAB_058aa1a0;
        if (*(uint *)(plVar19 + 3) <= uVar10) goto LAB_058aa19c;
        plVar19[uVar10 + 4] = lVar26;
        thunk_FUN_02bb0e9c(plVar19 + uVar10 + 4,lVar26);
        lVar26 = *(long *)(lVar11 + 0xa8);
        if (lVar26 == 0) goto thunk_FUN_02b3cac4;
        if (*(uint *)(lVar26 + 0x18) <= uVar10) goto LAB_058aa19c;
        lVar26 = *(long *)(lVar26 + uVar10 * 8 + 0x20);
        if (lVar26 == 0) goto thunk_FUN_02b3cac4;
        FUN_03816fc8(&stack0x00000350,lVar26,
                     *(undefined8 *)
                      Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
LAB_058a9424:
        uVar20 = FUN_04738544(&stack0x000002c0,*unaff_x22);
        if ((uVar20 & 1) != 0) {
          if (*(long *)(lVar11 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          uVar20 = FUN_03816854(*(long *)(lVar11 + 0xd8),in_stack_00000360,
                                in_stack_00000368 & 0xffffffff,*unaff_x23);
          if ((uVar20 & 1) == 0) {
            if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            if (*(uint *)(plVar18 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cacc();
            }
            lVar26 = plVar18[uVar10 + 4];
            if (*(int *)(*unaff_x21 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            if (lVar26 != 0) {
              lVar25 = *(long *)(lVar26 + 0x10);
              lVar27 = *unaff_x19;
              *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
              if (lVar25 != 0) {
                uVar5 = *(uint *)(lVar26 + 0x18);
                uVar34 = (uint)in_stack_00000360 & 0xffff;
                if (uVar5 < *(uint *)(lVar25 + 0x18)) {
                  *(uint *)(lVar26 + 0x18) = uVar5 + 1;
                  *(uint *)(lVar25 + (long)(int)uVar5 * 4 + 0x20) = uVar34;
                }
                else {
                  FUN_03753114(lVar26,uVar34,
                               *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
                }
                goto LAB_058a9424;
              }
            }
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_058a9424;
        }
        FUN_04738540(&stack0x000002c0,*(undefined8 *)Method_System_Nullable<GeneralNameType>__ctor__
                    );
        lVar26 = *(long *)(lVar11 + 0xb0);
        if (lVar26 == 0) goto thunk_FUN_02b3cac4;
        if (*(uint *)(lVar26 + 0x18) <= uVar10) goto LAB_058aa19c;
        lVar26 = *(long *)(lVar26 + uVar10 * 8 + 0x20);
        if (lVar26 == 0) goto thunk_FUN_02b3cac4;
        FUN_03816fc8(&stack0x00000350,lVar26,
                     *(undefined8 *)
                      Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
        uVar12 = 0;
        while (uVar20 = FUN_04738544(&stack0x000002c0,*unaff_x22), (uVar20 & 1) != 0) {
          if (plVar19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (*(uint *)(plVar19 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          lVar26 = plVar19[uVar10 + 4];
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (lVar26 == 0) {
LAB_058a95f4:
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar25 = *(long *)(lVar26 + 0x10);
          lVar27 = *unaff_x19;
          *(int *)(lVar26 + 0x1c) = *(int *)(lVar26 + 0x1c) + 1;
          if (lVar25 == 0) goto LAB_058a95f4;
          uVar5 = *(uint *)(lVar26 + 0x18);
          uVar34 = (uint)in_stack_00000360 & 0xffff;
          if (uVar5 < *(uint *)(lVar25 + 0x18)) {
            *(uint *)(lVar26 + 0x18) = uVar5 + 1;
            *(uint *)(lVar25 + (long)(int)uVar5 * 4 + 0x20) = uVar34;
          }
          else {
            FUN_03753114(lVar26,uVar34,
                         *(undefined8 *)(*(long *)(*(long *)(lVar27 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_04738540(&stack0x000002c0,*(undefined8 *)Method_System_Nullable<GeneralNameType>__ctor__
                    );
        uVar10 = uVar10 + 1;
      } while (uVar10 != 3);
      lVar11 = *(long *)(in_stack_00000048 + 0x30);
      if (DAT_066d31da == '\0') {
        FUN_02b3c81c(
                    Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                    );
        DAT_066d31da = '\x01';
      }
      if (lVar11 == 0) goto thunk_FUN_02b3cac4;
      iVar32 = puVar17[0x10];
      uVar34 = puVar17[0x11];
      uVar10 = (ulong)uVar34;
      lVar25 = *(long *)
                Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
      ;
      lVar26 = *(long *)(lVar25 + 0x38);
      if (lVar26 == 0) {
        FUN_02b76274(lVar25);
        lVar26 = *(long *)(lVar25 + 0x38);
      }
      lVar11 = FUN_0322b7a0(*(undefined8 *)(lVar11 + 0x40),*(undefined8 *)(lVar26 + 0x10));
      if ((int)uVar34 < 0) {
        FUN_04d9bcc4(0);
      }
      else if (uVar34 != 0) {
        puVar33 = (ushort *)(lVar11 + (long)iVar32 * 0x18);
        do {
          if (lVar24 == 0) goto thunk_FUN_02b3cac4;
          uVar4 = *puVar33;
          lVar11 = *(long *)(lVar24 + 0x18);
          if (*(int *)(*unaff_x21 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
          }
          if (lVar11 == 0) goto thunk_FUN_02b3cac4;
          lVar26 = *(long *)(lVar11 + 0x10);
          lVar25 = *unaff_x19;
          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
          if (lVar26 == 0) goto thunk_FUN_02b3cac4;
          uVar34 = *(uint *)(lVar11 + 0x18);
          if (uVar34 < *(uint *)(lVar26 + 0x18)) {
            *(uint *)(lVar11 + 0x18) = uVar34 + 1;
            *(uint *)(lVar26 + (long)(int)uVar34 * 4 + 0x20) = (uint)uVar4;
          }
          else {
            FUN_03753114(lVar11,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar25 + 0x20) + 0xc0) + 0x70));
          }
          uVar10 = uVar10 - 1;
          puVar33 = puVar33 + 0xc;
        } while (uVar10 != 0);
      }
      if ((*in_stack_00000028 == 0) || (lVar11 = *(long *)(*in_stack_00000028 + 0x10), lVar11 == 0))
      goto thunk_FUN_02b3cac4;
      memcpy(&stack0x00000300,&stack0x000001f0,0x48);
      lVar24 = *(long *)(lVar11 + 0x10);
      lVar26 = *(long *)Method_System_Nullable<MonoSslPolicyErrors>__ctor__;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar24 == 0) goto thunk_FUN_02b3cac4;
      uVar34 = *(uint *)(lVar11 + 0x18);
      if (uVar34 < *(uint *)(lVar24 + 0x18)) {
        lVar24 = lVar24 + (long)(int)uVar34 * 0x48;
        *(uint *)(lVar11 + 0x18) = uVar34 + 1;
        memcpy((void *)(lVar24 + 0x20),&stack0x00000300,0x48);
        thunk_FUN_02bb0e9c(lVar24 + 0x20,0);
      }
      else {
        uVar13 = *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70);
        memcpy(&stack0x00000350,&stack0x00000300,0x48);
        Unity_Collections_NativeList<ResourceUnversionedData>__get_IsEmpty
                  (lVar11,&stack0x00000350,uVar13);
      }
      lVar11 = *(long *)(in_stack_00000048 + 0x30);
      iVar30 = iVar30 + 1;
      puVar35 = &stack0x000002c0;
      if (lVar11 == 0) goto thunk_FUN_02b3cac4;
    }
    if (*(long *)(in_stack_00000048 + 0x30) != 0) {
      in_stack_000001b8 = 0xffffffff;
      in_stack_000001b0 = *(long *)(in_stack_00000048 + 0x30);
      uVar10 = FUN_058a14e4(&stack0x000001b0);
      puVar7 = Method_OVRTask<List<bool>>_GetAwaiter__;
      puVar6 = 
      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
      ;
      if ((uVar10 & 1) != 0) goto LAB_058a9924;
      goto LAB_058a9c3c;
    }
  }
  goto thunk_FUN_02b3cac4;
  while( true ) {
    if (0 < *(int *)(lVar11 + 0x2a0)) {
      lVar26 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_GetAwaiter__);
      FUN_0588d2c0(lVar26,0);
      uVar13 = FUN_058a7208(*(undefined8 *)(in_stack_00000048 + 0x30),lVar11);
      if (lVar26 == 0) goto thunk_FUN_02b3cac4;
      *(undefined8 *)(lVar26 + 0x10) = uVar13;
      thunk_FUN_02bb0e9c();
      lVar25 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTask<OVRResult<OVRAnchor_EraseResult>>_GetAwaiter__);
      FUN_037a5cd0(lVar25,*(undefined8 *)Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
      plVar18 = (long *)(lVar26 + 0x18);
      *plVar18 = lVar25;
      thunk_FUN_02bb0e9c(plVar18,lVar25);
      iVar30 = 0;
      while( true ) {
        iVar32 = *(int *)(lVar11 + 0x294);
        if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (iVar32 <= iVar30) break;
        lVar25 = *plVar18;
        uVar13 = FUN_058a6d28(*(undefined8 *)(in_stack_00000048 + 0x30),lVar11,iVar30);
        if (lVar25 == 0) goto thunk_FUN_02b3cac4;
        lVar27 = *(long *)(lVar25 + 0x10);
        lVar28 = *(long *)puVar7;
        *(int *)(lVar25 + 0x1c) = *(int *)(lVar25 + 0x1c) + 1;
        if (lVar27 == 0) goto thunk_FUN_02b3cac4;
        uVar34 = *(uint *)(lVar25 + 0x18);
        if (uVar34 < *(uint *)(lVar27 + 0x18)) {
          *(uint *)(lVar25 + 0x18) = uVar34 + 1;
          *(undefined8 *)(lVar27 + (long)(int)uVar34 * 8 + 0x20) = uVar13;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar25,uVar13,
                       *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
        }
        iVar30 = iVar30 + 1;
      }
      uVar13 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetStateMachine__
                                 );
      FUN_044a5fa0(uVar13,*(undefined8 *)Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_Create__
                  );
      *(undefined8 *)(lVar26 + 0x20) = uVar13;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar26 + 0x20),uVar13);
      *(long *)(lVar26 + 0x28) = lVar24;
      thunk_FUN_02bb0e9c((long *)(lVar26 + 0x28),lVar24);
      puVar8 = Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__;
      if (lVar24 == 0) goto thunk_FUN_02b3cac4;
      if (0 < *(int *)(lVar24 + 0x18)) {
        iVar30 = 0;
        do {
          uVar9 = FUN_03752e1c(lVar24,iVar30,*(undefined8 *)PTR_DAT_06316cc0);
          if (*in_stack_00000028 == 0) goto thunk_FUN_02b3cac4;
          lVar11 = *(long *)(*in_stack_00000028 + 0x10);
          if ((lVar11 == 0) ||
             (FUN_039b61b8(&stack0x00000350,lVar11,uVar9,*(undefined8 *)puVar8),
             in_stack_00000170 = uVar12, in_stack_00000178 = puVar35,
             in_stack_00000180 = in_stack_00000360, in_stack_00000188 = in_stack_00000368,
             in_stack_00000190 = in_stack_00000370, in_stack_00000198 = in_stack_00000378,
             in_stack_000001a0 = in_stack_00000380, in_stack_00000388 == 0))
          goto thunk_FUN_02b3cac4;
          *(long *)(in_stack_00000388 + 0x10) = lVar26;
          thunk_FUN_02bb0e9c((long *)(in_stack_00000388 + 0x10),lVar26);
          in_stack_00000380 = in_stack_000001a0;
          in_stack_00000378 = in_stack_00000198;
          in_stack_00000370 = in_stack_00000190;
          in_stack_00000368 = in_stack_00000188;
          in_stack_00000360 = in_stack_00000180;
          puVar35 = in_stack_00000178;
          uVar12 = in_stack_00000170;
          if ((*in_stack_00000028 == 0) ||
             (lVar11 = *(long *)(*in_stack_00000028 + 0x10), lVar11 == 0)) goto thunk_FUN_02b3cac4;
          FUN_039b621c(lVar11,uVar9,&stack0x00000350,
                       *(undefined8 *)
                        Method_OVRTask<OVRResult<OVRAnchor_ConfigureTrackerResult>>_GetAwaiter__);
          iVar30 = iVar30 + 1;
          in_stack_00000030 = in_stack_00000388;
        } while (iVar30 < *(int *)(lVar24 + 0x18));
      }
    }
    uVar10 = FUN_058a14e4(&stack0x000001b0);
    if ((uVar10 & 1) == 0) break;
LAB_058a9924:
    lVar11 = FUN_058a148c(&stack0x000001b0);
    lVar24 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
    FUN_03752884(lVar24,*(undefined8 *)PTR_DAT_06316c58);
    iVar30 = *(int *)(lVar11 + 0x298);
    if (iVar30 < *(int *)(lVar11 + 0x29c) + 1) {
      if (lVar24 == 0) goto thunk_FUN_02b3cac4;
      lVar26 = *unaff_x19;
      do {
        lVar25 = *(long *)(lVar24 + 0x10);
        *(int *)(lVar24 + 0x1c) = *(int *)(lVar24 + 0x1c) + 1;
        if (lVar25 == 0) goto thunk_FUN_02b3cac4;
        uVar34 = *(uint *)(lVar24 + 0x18);
        if (uVar34 < *(uint *)(lVar25 + 0x18)) {
          *(uint *)(lVar24 + 0x18) = uVar34 + 1;
          *(int *)(lVar25 + (long)(int)uVar34 * 4 + 0x20) = iVar30;
        }
        else {
          FUN_03753114(lVar24,iVar30,
                       *(undefined8 *)(*(long *)(*(long *)(lVar26 + 0x20) + 0xc0) + 0x70));
          lVar26 = *unaff_x19;
        }
        iVar30 = iVar30 + 1;
      } while (iVar30 < *(int *)(lVar11 + 0x29c) + 1);
    }
  }
LAB_058a9c3c:
  lVar11 = *(long *)(in_stack_00000048 + 0x30);
  if (lVar11 != 0) {
    iVar30 = 0;
    do {
      lVar11 = *(long *)(lVar11 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      if (*(int *)(lVar11 + 8) <= iVar30) {
        return;
      }
      if (*(long *)(in_stack_00000048 + 0x30) == 0) break;
      piVar21 = (int *)FUN_03ab2128(*(long *)(in_stack_00000048 + 0x30) + 0x18,iVar30,
                                    *(undefined8 *)
                                     Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__)
      ;
      if (((*in_stack_00000028 == 0) || (lVar11 = *(long *)(*in_stack_00000028 + 0x10), lVar11 == 0)
          ) || (FUN_039b61b8(&stack0x00000350,lVar11,*piVar21,
                             *(undefined8 *)
                              Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__),
               in_stack_00000388 == 0)) break;
      lVar11 = *(long *)(in_stack_00000388 + 0x10);
      if (lVar11 != 0) {
        lVar24 = *(long *)(in_stack_00000048 + 0x30);
        if (DAT_066d31d0 == '\0') {
          FUN_02b3c81c(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__
                      );
          DAT_066d31d0 = '\x01';
        }
        puVar6 = 
        Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TryGetInternalData<OVRAnchor_FetchTaskData>__
        ;
        if (lVar24 == 0) break;
        iVar32 = piVar21[10];
        uVar34 = piVar21[0xb];
        uVar10 = (ulong)uVar34;
        lVar25 = *(long *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__;
        lVar26 = *(long *)(lVar25 + 0x38);
        if (lVar26 == 0) {
          FUN_02b76274(lVar25);
          lVar26 = *(long *)(lVar25 + 0x38);
        }
        lVar24 = FUN_0322b7b4(*(undefined8 *)(lVar24 + 0x30),*(undefined8 *)(lVar26 + 0x10));
        if ((int)uVar34 < 0) {
          FUN_04d9bcc4(0);
        }
        else if (uVar34 != 0) {
          puVar17 = (undefined4 *)(lVar24 + (long)iVar32 * 0xc + 8);
          do {
            if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
               (lVar24 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar24 == 0))
            goto thunk_FUN_02b3cac4;
            pcVar22 = (char *)UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                        (lVar24,*(undefined8 *)(puVar17 + -2),*puVar17,0);
            if (*pcVar22 != '\0') {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
              iVar32 = *(int *)(pcVar22 + 4);
              plVar18 = *(long **)(*(long *)(in_stack_00000048 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02b76218(*(long *)(*(long *)
                                        Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                      + 0x20));
              }
              memcpy(&stack0x000000f0,(void *)(*plVar18 + (long)iVar32 * 0x80),0x80);
              if (in_stack_00000110 < 0) {
                FUN_058ac454(&stack0x00000350,4,*piVar21,0);
                uVar12 = 0;
              }
              else {
                uVar12 = FUN_058ad664(*(undefined8 *)(in_stack_00000048 + 0x30),in_stack_00000110,
                                      *piVar21,0);
              }
              uVar13 = FUN_058a7328(*(undefined8 *)(in_stack_00000048 + 0x30),piVar21,
                                    &stack0x000000f0,uVar12);
              in_stack_000000e0 = FUN_04bffdac(*(undefined8 *)puVar6,uVar13,0);
              uVar9 = in_stack_000000f0;
              lVar24 = *(long *)(lVar11 + 0x20);
              in_stack_000000e8 = 0;
              thunk_FUN_02bb0e9c(&stack0x000000e0,in_stack_000000e0);
              in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar12 == 0xd);
              if (lVar24 == 0) goto thunk_FUN_02b3cac4;
              FUN_044a87e4(lVar24,uVar9,in_stack_000000e0,in_stack_000000e8,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                          );
            }
            uVar10 = uVar10 - 1;
            puVar17 = puVar17 + 3;
          } while (uVar10 != 0);
        }
        if (-1 < piVar21[8]) {
          lVar24 = *(long *)(in_stack_00000048 + 0x30);
          if (DAT_066d31d1 == '\0') {
            FUN_02b3c81c(
                        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
                        );
            DAT_066d31d1 = '\x01';
          }
          if (lVar24 == 0) break;
          iVar32 = piVar21[0xc];
          uVar34 = piVar21[0xd];
          lVar25 = *(long *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
          ;
          lVar26 = *(long *)(lVar25 + 0x38);
          if (lVar26 == 0) {
            FUN_02b76274(lVar25);
            lVar26 = *(long *)(lVar25 + 0x38);
          }
          lVar24 = FUN_0322b7c8(*(undefined8 *)(lVar24 + 0x38),*(undefined8 *)(lVar26 + 0x10));
          if ((int)uVar34 < 0) {
            FUN_04d9bcc4(0);
          }
          else if (uVar34 != 0) {
            uVar10 = 0;
            do {
              if (*(long *)(in_stack_00000048 + 0x30) == 0) goto thunk_FUN_02b3cac4;
              puVar15 = (undefined8 *)(lVar24 + (long)iVar32 * 0xc + uVar10 * 0xc);
              in_stack_00000030 =
                   in_stack_00000030 & 0xffffffff00000000 | (ulong)*(uint *)(puVar15 + 1);
              lVar26 = FUN_058ab2a4(*(long *)(in_stack_00000048 + 0x30),*puVar15,in_stack_00000030,0
                                   );
              if (*(int *)(lVar26 + 8) != *piVar21) {
                if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                   (lVar26 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar26 == 0))
                goto thunk_FUN_02b3cac4;
                lVar26 = UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                   (lVar26,*puVar15,*(undefined4 *)(puVar15 + 1),0);
                iVar3 = *(int *)(lVar26 + 8);
                if (0 < iVar3) {
                  iVar29 = 0;
                  do {
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar26 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar26 == 0)
                       ) goto thunk_FUN_02b3cac4;
                    uVar12 = *puVar15;
                    if (DAT_066d31cb == '\0') {
                      FUN_02b3c81c();
                      DAT_066d31cb = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    if ((*(long *)(in_stack_00000048 + 0x30) == 0) ||
                       (lVar25 = *(long *)(*(long *)(in_stack_00000048 + 0x30) + 0x10), lVar25 == 0)
                       ) goto thunk_FUN_02b3cac4;
                    lVar25 = *(long *)(lVar25 + 0x20);
                    iVar1 = *(int *)(lVar26 + 0x28);
                    iVar2 = *(int *)(lVar26 + 0x2c);
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    if (DAT_066d2bb3 == '\0') {
                      FUN_02b3c81c();
                      DAT_066d2bb3 = '\x01';
                    }
                    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    if (lVar25 == 0) goto thunk_FUN_02b3cac4;
                    if (*(uint *)(lVar25 + 0x18) <= *(uint *)(puVar15 + 1)) goto LAB_058aa19c;
                    piVar23 = (int *)FUN_03ab59e0(lVar25 + (long)(int)*(uint *)(puVar15 + 1) * 8 +
                                                  0x20,iVar29 + ((int)((ulong)uVar12 >> 0x20) +
                                                                iVar1 * ((uint)uVar12 & 0xffff)) *
                                                                iVar2,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Value__
                                                 );
                    lVar26 = *(long *)(in_stack_00000048 + 0x30);
                    if (lVar26 == 0) goto thunk_FUN_02b3cac4;
                    iVar1 = *piVar23;
                    plVar18 = *(long **)(lVar26 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02b76218(*(long *)(*(long *)
                                              Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                            + 0x20));
                      lVar26 = *(long *)(in_stack_00000048 + 0x30);
                    }
                    memcpy(&stack0x00000060,(void *)(*plVar18 + (long)iVar1 * 0x80),0x80);
                    uVar9 = in_stack_00000060;
                    uVar12 = FUN_058ad664(lVar26,piVar21[8],in_stack_00000060,0);
                    uVar13 = FUN_058a7328(*(undefined8 *)(in_stack_00000048 + 0x30),&stack0x00000060
                                          ,piVar21,uVar12);
                    in_stack_000000e0 =
                         FUN_04bffdac(*(undefined8 *)
                                       Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__,
                                      uVar13,0);
                    lVar26 = *(long *)(lVar11 + 0x20);
                    in_stack_000000e8 = 0;
                    thunk_FUN_02bb0e9c(&stack0x000000e0,in_stack_000000e0);
                    in_stack_000000e8 = CONCAT71(in_stack_000000e8._1_7_,(int)uVar12 == 0xd);
                    if (lVar26 == 0) goto thunk_FUN_02b3cac4;
                    FUN_044a87e4(lVar26,uVar9,in_stack_000000e0,in_stack_000000e8,
                                 *(undefined8 *)
                                  Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                                );
                    iVar29 = iVar29 + 1;
                  } while (iVar3 != iVar29);
                }
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 != uVar34);
          }
        }
      }
      lVar11 = *(long *)(in_stack_00000048 + 0x30);
      iVar30 = iVar30 + 1;
    } while (lVar11 != 0);
  }
thunk_FUN_02b3cac4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


