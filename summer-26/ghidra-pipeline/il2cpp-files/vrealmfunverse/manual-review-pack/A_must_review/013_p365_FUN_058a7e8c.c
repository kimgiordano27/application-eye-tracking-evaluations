/*
FUNCTION_NAME: FUN_058a7e8c
ENTRY_POINT: 058a7e8c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 217
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_9;weak_xr_or_state_hits_11;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_19;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_8
*/


/* WARNING: Removing unreachable block (ram,0x058a8934) */
/* WARNING: Removing unreachable block (ram,0x058a8500) */
/* WARNING: Removing unreachable block (ram,0x058aa1dc) */
/* WARNING: Removing unreachable block (ram,0x058aa1ac) */
/* WARNING: Removing unreachable block (ram,0x058a86b0) */
/* WARNING: Removing unreachable block (ram,0x058aa1cc) */
/* WARNING: Removing unreachable block (ram,0x058a8aec) */
/* WARNING: Type propagation algorithm not settling */

void FUN_058a7e8c(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  long *plVar20;
  undefined8 uVar21;
  undefined4 *puVar22;
  undefined8 *puVar23;
  int *piVar24;
  char *pcVar25;
  int *piVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  int iVar32;
  int iVar33;
  ulong uVar34;
  uint uVar35;
  int iVar36;
  ulong uVar37;
  ushort *puVar38;
  ulong local_3d0;
  ulong local_3a0 [17];
  undefined8 local_318;
  ulong local_310 [4];
  ulong local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  long local_290;
  long *plStack_288;
  ulong local_280;
  ulong uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  long local_260;
  long local_250 [3];
  long *plStack_238;
  ulong local_230;
  ulong uStack_228;
  undefined8 local_220;
  undefined8 local_210;
  undefined8 uStack_208;
  long *local_200;
  long *local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  long local_1d8 [3];
  undefined4 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  long local_1a0;
  undefined8 uStack_198;
  ulong local_190;
  ulong local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  long local_170;
  ulong uStack_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  long local_140;
  long *plStack_138;
  ulong local_130;
  ulong local_128;
  long local_120;
  long *plStack_118;
  ulong local_110;
  long local_100;
  long *plStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  long lStack_d0;
  ulong uStack_c8;
  long local_b0;
  long *plStack_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  ulong local_78;
  
  if ((DAT_066d31b7 & 1) == 0) {
    FUN_02b3c81c(Method_System_Nullable<JsonPosition>__ctor__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRSceneManager_Metrics>_get_Task__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                );
    FUN_02b3c81c(Method_System_Nullable<MissingMemberHandling>_get_HasValue__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_Start<OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                );
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_Create__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetException__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetResult__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetStateMachine__);
    FUN_02b3c81c(Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_get_Task__);
    FUN_02b3c81c(
                Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                );
    FUN_02b3c81c(Method_System_Nullable<short>_GetValueOrDefault__);
    FUN_02b3c81c(Method_System_Nullable<GeneralNameType>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<Ease>_get_HasValue__);
    FUN_02b3c81c(Method_System_Nullable<short>_get_HasValue__);
    FUN_02b3c81c(Method_System_Nullable<GeneralNameType>_get_HasValue__);
    FUN_02b3c81c(Method_System_Nullable<Ease>_get_Value__);
    FUN_02b3c81c(Method_System_Nullable<int>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<EventDispatcherGate>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<GeneralNameType>_get_Value__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_AwaitOnCompleted<OVRTask_Awaiter<OVRPlugin_Result>,_OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__64>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
                );
    FUN_02b3c81c(Method_System_Nullable<ValueTuple<int,_int>>_GetValueOrDefault__);
    FUN_02b3c81c(PTR_DAT_06316c50);
    FUN_02b3c81c(Method_OVRTask<List<bool>>_GetAwaiter__);
    FUN_02b3c81c(Method_System_Nullable<MonoSslPolicyErrors>__ctor__);
    FUN_02b3c81c(Method_System_Nullable<MouseButton>__ctor__);
    FUN_02b3c81c(Method_System_Collections_Generic_List<XmlQualifiedName>_Clear__);
    FUN_02b3c81c(Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
    FUN_02b3c81c(Method_System_Nullable<EventDispatcherGate>_get_HasValue__);
    FUN_02b3c81c(Method_System_Nullable<int>_GetValueOrDefault__);
    FUN_02b3c81c(PTR_DAT_06316c58);
    FUN_02b3c81c(Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
    FUN_02b3c81c(PTR_DAT_06316cb8);
    FUN_02b3c81c(Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__);
    FUN_02b3c81c(Method_System_Nullable<NativeArray<ShaderTagId>>__ctor__);
    FUN_02b3c81c(PTR_DAT_06316cc0);
    FUN_02b3c81c(Method_OVRTask<OVRResult<OVRAnchor_ConfigureTrackerResult>>_GetAwaiter__);
    FUN_02b3c81c(PTR_DAT_06316c60);
    FUN_02b3c81c(Method_OVRTask<OVRResult<OVRAnchor_EraseResult>>_GetAwaiter__);
    FUN_02b3c81c(Method_OVRTask<OVRResult<OVRAnchor_SaveResult>>_GetAwaiter__);
    FUN_02b3c81c(Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Status__);
    FUN_02b3c81c(Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
    FUN_02b3c81c(Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Value__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                );
    FUN_02b3c81c(Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__);
    FUN_02b3c81c(
                Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_ContinueWith<IEnumerable<OVRSpatialAnchor>>__
                );
    FUN_02b3c81c(Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_GetAwaiter__);
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchSharedAnchorsAsync>d__9>__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_get_Task__
                );
    FUN_02b3c81c(
                Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Start<OVRAnchor_<FetchTrackablesAsync>d__66>__
                );
    FUN_02b3c81c(PTR_DAT_06322b80);
    FUN_02b3c81c(Method_System_Nullable<NullValueHandling>__ctor__);
    FUN_02b3c81c(Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__);
    FUN_02b3c81c(Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__);
    FUN_02b3c81c(
                Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TryGetInternalData<OVRAnchor_FetchTaskData>__
                );
    FUN_02b3c81c(Method_System_Nullable<NullValueHandling>_GetValueOrDefault__);
    FUN_02b3c81c(PTR_DAT_0632d930);
    DAT_066d31b7 = 1;
  }
  puVar10 = Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_get_Task__;
  puVar7 = 
  Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_Start<OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
  ;
  plStack_118 = (long *)0x0;
  local_120 = 0;
  local_110 = 0;
  local_148 = 0;
  local_3a0[5] = 0;
  local_3a0[4] = 0;
  local_3a0[7] = 0;
  local_3a0[6] = 0;
  local_3a0[9] = 0;
  local_3a0[8] = 0;
  local_3a0[0xb] = 0;
  local_3a0[10] = 0;
  local_3a0[0xd] = 0;
  local_3a0[0xc] = 0;
  local_3a0[0xf] = 0;
  local_3a0[0xe] = 0;
  local_310[3] = 0;
  local_310[2] = 0;
  uStack_2e8 = 0;
  local_2f0 = 0;
  uStack_2d8 = 0;
  local_2e0 = 0;
  uStack_2c8 = 0;
  uStack_2d0 = 0;
  uStack_2b8 = 0;
  local_2c0 = 0;
  uStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  local_2a0 = 0;
  plStack_288 = (long *)0x0;
  local_290 = 0;
  uStack_278 = 0;
  local_280 = 0;
  uStack_268 = 0;
  local_270 = 0;
  plStack_238 = (long *)0x0;
  local_250[2] = 0;
  uStack_228 = 0;
  local_230 = 0;
  uStack_208 = 0;
  local_210 = 0;
  local_1f8 = (long *)0x0;
  local_200 = (long *)0x0;
  uStack_1e8 = 0;
  local_1f0 = 0;
  local_1d8[0] = 0;
  local_1e0 = 0;
  uStack_198 = (long *)0x0;
  local_1a0 = 0;
  local_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  local_170 = 0;
  plStack_138 = (long *)0x0;
  local_140 = 0;
  local_128 = 0;
  local_130 = 0;
  local_150 = 0;
  local_158 = 0;
  local_1b0 = 0;
  local_1b8 = 0;
  local_1a8 = 0;
  local_1c0 = 0;
  local_1d8[2] = 0;
  local_1d8[1] = 0;
  local_220 = 0;
  local_250[0] = 0;
  local_250[1] = 0;
  local_260 = 0;
  local_310[1] = 0;
  local_310[0] = 0;
  local_3a0[0x10] = 0;
  local_318 = 0;
  local_3a0[1] = 0;
  local_3a0[0] = 0;
  local_3a0[3] = 0;
  local_3a0[2] = 0;
  if (*param_2 != 0) {
    *(undefined1 *)(*param_2 + 0x20) = 1;
    lVar14 = thunk_FUN_02b79644(*(undefined8 *)puVar10);
    System_Collections_Generic_Dictionary<int,_Int32Enum>___ctor(lVar14,*(undefined8 *)puVar7);
    local_3d0 = thunk_FUN_02b79644(*(undefined8 *)puVar10);
    System_Collections_Generic_Dictionary<int,_Int32Enum>___ctor(local_3d0,*(undefined8 *)puVar7);
    puVar12 = Method_System_Nullable<GeneralNameType>_get_HasValue__;
    puVar11 = Method_System_Collections_Generic_List<XmlQualifiedName>_Clear__;
    puVar10 = PTR_DAT_06322b80;
    puVar7 = PTR_DAT_06316c50;
    if (*(long *)(param_1 + 0x18) != 0) {
      FUN_037a6fdc(&local_b0,*(long *)(param_1 + 0x18),
                   *(undefined8 *)Method_System_Nullable<EventDispatcherGate>_get_HasValue__);
      local_100 = 0;
      local_110 = local_a0;
      plStack_f8 = &local_120;
      plStack_118 = plStack_a8;
      local_120 = local_b0;
      while (uVar15 = FUN_0472eaf4(&local_120,
                                   *(undefined8 *)Method_System_Nullable<Ease>_get_Value__),
            lVar27 = local_100, uVar34 = local_110, (uVar15 & 1) != 0) {
        uVar15 = 0;
        do {
          if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar27 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
          if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          lVar27 = *(long *)(lVar27 + 0x10);
          if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          if (*(uint *)(lVar27 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cacc();
          }
          lVar27 = *(long *)(lVar27 + uVar15 * 8 + 0x20);
          if ((*(ushort *)
                (*(long *)(*(long *)
                            Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_ContinueWith<IEnumerable<OVRSpatialAnchor>>__
                          + 0x20) + 0x135) & 1) == 0) {
            FUN_02b76218();
          }
          uVar3 = *(uint *)(lVar27 + 8);
          if (0 < (int)uVar3) {
            if (uVar34 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            uVar35 = 0;
            do {
              lVar27 = *(long *)(uVar34 + 0xa8);
              if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(uint *)(lVar27 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              lVar27 = *(long *)(lVar27 + uVar15 * 8 + 0x20);
              if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              FUN_03816fc8(&local_b0,lVar27,
                           *(undefined8 *)
                            Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
              local_140 = local_b0;
              local_b0 = 0;
              plStack_138 = plStack_a8;
              local_128 = uStack_98;
              local_130 = local_a0;
              plStack_a8 = &local_140;
LAB_058a8384:
              uVar16 = FUN_04738544(&local_140,*(undefined8 *)puVar12);
              uVar17 = local_130;
              if ((uVar16 & 1) != 0) {
                if (*(long *)(uVar34 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                uVar37 = local_128 & 0xffffffff;
                uVar16 = FUN_03816854(*(long *)(uVar34 + 0xd8),local_130,uVar37,
                                      *(undefined8 *)puVar11);
                if ((uVar16 & 1) == 0) {
                  if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  if (uVar15 == uVar37) {
                    if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    if (uVar35 == ((uint)uVar17 & 0xffff)) {
                      FUN_041797f8(&local_148,uVar15 & 0xffffffff,uVar35,
                                   *(undefined8 *)
                                    Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__
                                  );
                      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02b3cac4();
                      }
                      uVar17 = FUN_04352180(lVar14,local_148,
                                            *(undefined8 *)
                                             Method_OVRTaskBuilder<OVRSceneManager_Metrics>_get_Task__
                                           );
                      uVar21 = local_148;
                      if ((uVar17 & 1) == 0) {
                        uVar18 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
                        FUN_03752884(uVar18,*(undefined8 *)PTR_DAT_06316c58);
                        System_Collections_Generic_Dictionary<int,_Int32Enum>__Add
                                  (lVar14,uVar21,uVar18,
                                   *(undefined8 *)
                                    Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetResult__);
                      }
                      lVar27 = FUN_04351eec(lVar14,local_148,
                                            *(undefined8 *)
                                             Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetException__
                                           );
                      if (lVar27 != 0) {
                        lVar28 = *(long *)(lVar27 + 0x10);
                        uVar13 = *(undefined4 *)(uVar34 + 0x18);
                        lVar30 = *(long *)puVar7;
                        *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
                        if (lVar28 != 0) {
                          uVar6 = *(uint *)(lVar27 + 0x18);
                          if (uVar6 < *(uint *)(lVar28 + 0x18)) {
                            *(uint *)(lVar27 + 0x18) = uVar6 + 1;
                            *(undefined4 *)(lVar28 + (long)(int)uVar6 * 4 + 0x20) = uVar13;
                          }
                          else {
                            FUN_03753114(lVar27,uVar13,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
                          }
                          goto LAB_058a8384;
                        }
                      }
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                  }
                }
                goto LAB_058a8384;
              }
              FUN_04738540(&local_140,*(undefined8 *)Method_System_Nullable<GeneralNameType>__ctor__
                          );
              lVar27 = *(long *)(uVar34 + 0xb0);
              if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(uint *)(lVar27 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              lVar27 = *(long *)(lVar27 + uVar15 * 8 + 0x20);
              if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              FUN_03816fc8(&local_b0,lVar27,
                           *(undefined8 *)
                            Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
              local_140 = local_b0;
              local_b0 = 0;
              plStack_138 = plStack_a8;
              local_128 = uStack_98;
              local_130 = local_a0;
              plStack_a8 = &local_140;
LAB_058a854c:
              uVar17 = FUN_04738544(&local_140,*(undefined8 *)puVar12);
              if ((uVar17 & 1) != 0) {
                uVar6 = (uint)local_130;
                uVar17 = local_128 & 0xffffffff;
                if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                if (uVar15 == uVar17) {
                  if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  if (uVar35 == (uVar6 & 0xffff)) {
                    FUN_041797f8(&local_150,uVar15 & 0xffffffff,uVar35,
                                 *(undefined8 *)
                                  Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__
                                );
                    if (local_3d0 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    uVar17 = FUN_04352180(local_3d0,local_150,
                                          *(undefined8 *)
                                           Method_OVRTaskBuilder<OVRSceneManager_Metrics>_get_Task__
                                         );
                    uVar21 = local_150;
                    if ((uVar17 & 1) == 0) {
                      uVar18 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
                      FUN_03752884(uVar18,*(undefined8 *)PTR_DAT_06316c58);
                      System_Collections_Generic_Dictionary<int,_Int32Enum>__Add
                                (local_3d0,uVar21,uVar18,
                                 *(undefined8 *)
                                  Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetResult__);
                    }
                    lVar27 = FUN_04351eec(local_3d0,local_150,
                                          *(undefined8 *)
                                           Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetException__
                                         );
                    if (lVar27 != 0) {
                      lVar28 = *(long *)(lVar27 + 0x10);
                      uVar13 = *(undefined4 *)(uVar34 + 0x18);
                      lVar30 = *(long *)puVar7;
                      *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
                      if (lVar28 != 0) {
                        uVar6 = *(uint *)(lVar27 + 0x18);
                        if (uVar6 < *(uint *)(lVar28 + 0x18)) {
                          *(uint *)(lVar27 + 0x18) = uVar6 + 1;
                          *(undefined4 *)(lVar28 + (long)(int)uVar6 * 4 + 0x20) = uVar13;
                        }
                        else {
                          FUN_03753114(lVar27,uVar13,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
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
              FUN_04738540(&local_140,*(undefined8 *)Method_System_Nullable<GeneralNameType>__ctor__
                          );
              lVar27 = *(long *)(uVar34 + 0xb8);
              if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(uint *)(lVar27 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              lVar27 = *(long *)(lVar27 + uVar15 * 8 + 0x20);
              if (lVar27 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              FUN_03816fc8(&local_b0,lVar27,
                           *(undefined8 *)
                            Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
              local_140 = local_b0;
              local_b0 = 0;
              plStack_138 = plStack_a8;
              local_128 = uStack_98;
              local_130 = local_a0;
              plStack_a8 = &local_140;
LAB_058a86fc:
              uVar17 = FUN_04738544(&local_140,*(undefined8 *)puVar12);
              if ((uVar17 & 1) != 0) {
                uVar6 = (uint)local_130;
                uVar17 = local_128 & 0xffffffff;
                if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                if (uVar15 == uVar17) {
                  if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
                    thunk_FUN_02b9ad44();
                  }
                  if (uVar35 == (uVar6 & 0xffff)) {
                    FUN_041797f8(&local_158,uVar15 & 0xffffffff,uVar35,
                                 *(undefined8 *)
                                  Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__
                                );
                    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02b3cac4();
                    }
                    uVar17 = FUN_04352180(lVar14,local_158,
                                          *(undefined8 *)
                                           Method_OVRTaskBuilder<OVRSceneManager_Metrics>_get_Task__
                                         );
                    uVar21 = local_158;
                    if ((uVar17 & 1) == 0) {
                      uVar18 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
                      FUN_03752884(uVar18,*(undefined8 *)PTR_DAT_06316c58);
                      System_Collections_Generic_Dictionary<int,_Int32Enum>__Add
                                (lVar14,uVar21,uVar18,
                                 *(undefined8 *)
                                  Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetResult__);
                    }
                    lVar27 = FUN_04351eec(lVar14,local_158,
                                          *(undefined8 *)
                                           Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetException__
                                         );
                    if (lVar27 != 0) {
                      lVar28 = *(long *)(lVar27 + 0x10);
                      uVar13 = *(undefined4 *)(uVar34 + 0x18);
                      lVar30 = *(long *)puVar7;
                      *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
                      if (lVar28 != 0) {
                        uVar6 = *(uint *)(lVar27 + 0x18);
                        if (uVar6 < *(uint *)(lVar28 + 0x18)) {
                          *(uint *)(lVar27 + 0x18) = uVar6 + 1;
                          *(undefined4 *)(lVar28 + (long)(int)uVar6 * 4 + 0x20) = uVar13;
                        }
                        else {
                          FUN_03753114(lVar27,uVar13,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
                        }
                        if (local_3d0 == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02b3cac4();
                        }
                        uVar17 = FUN_04352180(local_3d0,local_158,
                                              *(undefined8 *)
                                               Method_OVRTaskBuilder<OVRSceneManager_Metrics>_get_Task__
                                             );
                        uVar21 = local_158;
                        if ((uVar17 & 1) == 0) {
                          uVar18 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
                          FUN_03752884(uVar18,*(undefined8 *)PTR_DAT_06316c58);
                          System_Collections_Generic_Dictionary<int,_Int32Enum>__Add
                                    (local_3d0,uVar21,uVar18,
                                     *(undefined8 *)
                                      Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetResult__
                                    );
                        }
                        lVar27 = FUN_04351eec(local_3d0,local_158,
                                              *(undefined8 *)
                                               Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetException__
                                             );
                        if (lVar27 != 0) {
                          lVar28 = *(long *)(lVar27 + 0x10);
                          uVar13 = *(undefined4 *)(uVar34 + 0x18);
                          lVar30 = *(long *)puVar7;
                          *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
                          if (lVar28 != 0) {
                            uVar6 = *(uint *)(lVar27 + 0x18);
                            if (uVar6 < *(uint *)(lVar28 + 0x18)) {
                              *(uint *)(lVar27 + 0x18) = uVar6 + 1;
                              *(undefined4 *)(lVar28 + (long)(int)uVar6 * 4 + 0x20) = uVar13;
                            }
                            else {
                              FUN_03753114(lVar27,uVar13,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
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
              FUN_04738540(&local_140,*(undefined8 *)Method_System_Nullable<GeneralNameType>__ctor__
                          );
              uVar35 = uVar35 + 1;
            } while (uVar35 != uVar3);
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != 3);
      }
      FUN_0472eaf0(plStack_f8,*(undefined8 *)Method_System_Nullable<Ease>_get_HasValue__);
      if (lVar27 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cabc(lVar27);
      }
      uVar34 = 0;
      do {
        if (((*(long *)(param_1 + 0x30) == 0) ||
            (lVar27 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar27 == 0)) ||
           (lVar27 = *(long *)(lVar27 + 0x10), lVar27 == 0)) goto thunk_FUN_02b3cac4;
        if (*(uint *)(lVar27 + 0x18) <= uVar34) {
LAB_058aa19c:
                    /* WARNING: Subroutine does not return */
          FUN_02b3cacc();
        }
        lVar27 = *(long *)(lVar27 + uVar34 * 8 + 0x20);
        if ((*(ushort *)
              (*(long *)(*(long *)
                          Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_ContinueWith<IEnumerable<OVRSpatialAnchor>>__
                        + 0x20) + 0x135) & 1) == 0) {
          FUN_02b76218();
        }
        iVar33 = *(int *)(lVar27 + 8);
        if (0 < iVar33) {
          iVar36 = 0;
          do {
            if (((*(long *)(param_1 + 0x30) == 0) ||
                (lVar27 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar27 == 0)) ||
               (lVar27 = *(long *)(lVar27 + 0x10), lVar27 == 0)) goto thunk_FUN_02b3cac4;
            if (*(uint *)(lVar27 + 0x18) <= uVar34) goto LAB_058aa19c;
            puVar19 = (undefined1 *)
                      FUN_03ab61ec(lVar27 + uVar34 * 8 + 0x20,iVar36,
                                   *(undefined8 *)
                                    Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Status__
                                  );
            uStack_198 = (long *)0x0;
            local_1a0 = 0;
            local_188 = 0;
            local_190 = 0;
            uStack_178 = 0;
            local_180 = 0;
            uStack_168 = 0;
            local_170 = 0;
            if (iVar36 == 0) {
              local_1a0 = *(long *)PTR_DAT_0632d930;
              thunk_FUN_02bb0e9c(&local_1a0);
              local_1a8 = 0;
              uStack_198 = (long *)CONCAT71(uStack_198._1_7_,1);
              local_1b8 = 0;
              local_1b0 = 0;
            }
            else {
              if (((*(long *)(param_1 + 0x30) == 0) ||
                  (lVar27 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar27 == 0)) ||
                 (lVar27 = *(long *)(lVar27 + 0x30), lVar27 == 0)) goto thunk_FUN_02b3cac4;
              if (*(uint *)(lVar27 + 0x18) <= uVar34) goto LAB_058aa19c;
              lVar27 = *(long *)(lVar27 + uVar34 * 8 + 0x20);
              if (lVar27 == 0) goto thunk_FUN_02b3cac4;
              plVar20 = (long *)FUN_0463ca1c(lVar27,iVar36,
                                             *(undefined8 *)
                                              Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                                            );
              lVar27 = *plVar20;
              uVar15 = FUN_04c09ac4(lVar27,0);
              local_1a0 = *(long *)Method_System_Nullable<NullValueHandling>_GetValueOrDefault__;
              if ((uVar15 & 1) == 0) {
                local_1a0 = lVar27;
              }
              thunk_FUN_02bb0e9c(&local_1a0);
              local_1a8 = 0;
              local_1b8 = 0;
              uStack_198 = (long *)CONCAT71(uStack_198._1_7_,*puVar19);
              local_1b0 = 0;
              if (uVar34 == 0) {
                if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                FUN_0589b900(local_1d8 + 2,iVar36,0,0);
                if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                FUN_0589896c(*(long *)(param_1 + 0x10),local_1d8 + 2,&local_1b8);
              }
            }
            uStack_198 = (long *)CONCAT44(*(undefined4 *)(puVar19 + 0x10),(undefined4)uStack_198);
            local_190 = CONCAT44(local_190._4_4_,*(undefined4 *)(puVar19 + 8));
            lVar27 = thunk_FUN_02b79644(*(undefined8 *)
                                         Method_System_Nullable<NullValueHandling>__ctor__);
            FUN_0588c804(lVar27,0);
            local_170 = lVar27;
            thunk_FUN_02bb0e9c(&local_170,lVar27);
            if ((((local_170 == 0) ||
                 (*(undefined4 *)(local_170 + 0x10) = *(undefined4 *)(puVar19 + 0x18),
                 local_170 == 0)) ||
                (*(undefined4 *)(local_170 + 0x14) = *(undefined4 *)(puVar19 + 0x1c), local_170 == 0
                )) || ((*(undefined4 *)(local_170 + 0x18) = *(undefined4 *)(puVar19 + 0x20),
                       local_170 == 0 ||
                       (*(undefined4 *)(local_170 + 0x20) = *(undefined4 *)(puVar19 + 0x24),
                       local_170 == 0)))) goto thunk_FUN_02b3cac4;
            *(undefined4 *)(local_170 + 0x24) = (undefined4)local_1a8;
            if ((local_170 == 0) ||
               (*(undefined1 *)(local_170 + 0x1c) = puVar19[0x2e], local_170 == 0))
            goto thunk_FUN_02b3cac4;
            *(undefined1 *)(local_170 + 0x28) = puVar19[0x2c];
            puVar9 = PTR_DAT_06316c60;
            uStack_178 = CONCAT71(uStack_178._1_7_,puVar19[0x14]);
            uVar15 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
            puVar8 = PTR_DAT_06316c58;
            FUN_03752884(uVar15,*(undefined8 *)PTR_DAT_06316c58);
            local_188 = uVar15;
            thunk_FUN_02bb0e9c(&local_188,uVar15);
            uVar21 = thunk_FUN_02b79644(*(undefined8 *)puVar9);
            FUN_03752884(uVar21,*(undefined8 *)puVar8);
            local_180 = uVar21;
            thunk_FUN_02bb0e9c(&local_180,uVar21);
            local_b0 = 0;
            FUN_041797f8(&local_b0,uVar34 & 0xffffffff,iVar36,
                         *(undefined8 *)
                          Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__);
            if (lVar14 == 0) goto thunk_FUN_02b3cac4;
            uVar15 = FUN_04352180(lVar14,local_b0,
                                  *(undefined8 *)
                                   Method_OVRTaskBuilder<OVRSceneManager_Metrics>_get_Task__);
            if ((uVar15 & 1) != 0) {
              local_b0 = 0;
              FUN_041797f8(&local_b0,uVar34 & 0xffffffff,iVar36,
                           *(undefined8 *)
                            Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__);
              local_188 = FUN_04351eec(lVar14,local_b0,
                                       *(undefined8 *)
                                        Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetException__
                                      );
              thunk_FUN_02bb0e9c(&local_188,local_188);
            }
            local_b0 = 0;
            FUN_041797f8(&local_b0,uVar34 & 0xffffffff,iVar36,
                         *(undefined8 *)
                          Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__);
            if (local_3d0 == 0) goto thunk_FUN_02b3cac4;
            uVar15 = FUN_04352180(local_3d0,local_b0,
                                  *(undefined8 *)
                                   Method_OVRTaskBuilder<OVRSceneManager_Metrics>_get_Task__);
            if ((uVar15 & 1) != 0) {
              local_b0 = 0;
              FUN_041797f8(&local_b0,uVar34 & 0xffffffff,iVar36,
                           *(undefined8 *)
                            Method_OVRTask<OVRResult<OVRColocationSession_Result>>_GetAwaiter__);
              local_180 = FUN_04351eec(local_3d0,local_b0,
                                       *(undefined8 *)
                                        Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetException__
                                      );
              thunk_FUN_02bb0e9c(&local_180,local_180);
            }
            puVar8 = Method_System_Nullable<MouseButton>__ctor__;
            if ((*param_2 == 0) || (lVar27 = *(long *)(*param_2 + 0x18), lVar27 == 0))
            goto thunk_FUN_02b3cac4;
            if (*(uint *)(lVar27 + 0x18) <= uVar34) goto LAB_058aa19c;
            lVar27 = *(long *)(lVar27 + uVar34 * 8 + 0x20);
            if (lVar27 == 0) goto thunk_FUN_02b3cac4;
            lVar28 = *(long *)(lVar27 + 0x10);
            plStack_f8 = uStack_198;
            local_100 = local_1a0;
            uStack_e8 = local_188;
            uStack_f0 = local_190;
            uStack_d8 = uStack_178;
            local_e0 = local_180;
            uStack_c8 = uStack_168;
            lStack_d0 = local_170;
            *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
            if (lVar28 == 0) goto thunk_FUN_02b3cac4;
            uVar3 = *(uint *)(lVar27 + 0x18);
            if (uVar3 < *(uint *)(lVar28 + 0x18)) {
              lVar28 = lVar28 + (long)(int)uVar3 * 0x40;
              *(uint *)(lVar27 + 0x18) = uVar3 + 1;
              *(long **)(lVar28 + 0x28) = uStack_198;
              *(long *)(lVar28 + 0x20) = local_1a0;
              *(ulong *)(lVar28 + 0x38) = local_188;
              *(ulong *)(lVar28 + 0x30) = local_190;
              *(undefined8 *)(lVar28 + 0x48) = uStack_178;
              *(undefined8 *)(lVar28 + 0x40) = local_180;
              *(ulong *)(lVar28 + 0x58) = uStack_168;
              *(long *)(lVar28 + 0x50) = local_170;
              thunk_FUN_02bb0e9c(lVar28 + 0x20,0);
            }
            else {
              plStack_a8 = uStack_198;
              local_b0 = local_1a0;
              uStack_98 = local_188;
              local_a0 = local_190;
              uStack_88 = uStack_178;
              local_90 = local_180;
              local_78 = uStack_168;
              local_80 = local_170;
              FUN_039b9384(lVar27,&local_b0,
                           *(undefined8 *)
                            (*(long *)(*(long *)(*(long *)puVar8 + 0x20) + 0xc0) + 0x70));
            }
            iVar36 = iVar36 + 1;
          } while (iVar33 != iVar36);
        }
        uVar34 = uVar34 + 1;
      } while (uVar34 != 3);
      lVar14 = *(long *)(param_1 + 0x30);
      if (lVar14 != 0) {
        iVar33 = 0;
        while( true ) {
          lVar14 = *(long *)(lVar14 + 0x18);
          if ((*(ushort *)
                (*(long *)(*(long *)
                            Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__ +
                          0x20) + 0x135) & 1) == 0) {
            FUN_02b76218();
          }
          if (*(int *)(lVar14 + 8) <= iVar33) break;
          if (*(long *)(param_1 + 0x18) == 0) goto thunk_FUN_02b3cac4;
          lVar14 = FUN_037a6268(*(long *)(param_1 + 0x18),iVar33,
                                *(undefined8 *)
                                 Method_System_Nullable<NativeArray<ShaderTagId>>__ctor__);
          if (*(long *)(param_1 + 0x30) == 0) goto thunk_FUN_02b3cac4;
          local_3d0 = CONCAT44(local_3d0._4_4_,iVar33);
          puVar22 = (undefined4 *)
                    FUN_03ab2128(*(long *)(param_1 + 0x30) + 0x18,iVar33,
                                 *(undefined8 *)
                                  Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__);
          lVar27 = *(long *)(param_1 + 0x30);
          if (lVar27 == 0) goto thunk_FUN_02b3cac4;
          uVar13 = *puVar22;
          if (DAT_066d31dc == '\0') {
            FUN_02b3c81c(
                        Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                        );
            DAT_066d31dc = '\x01';
          }
          lVar27 = *(long *)(lVar27 + 0x28);
          if (lVar27 == 0) goto thunk_FUN_02b3cac4;
          puVar23 = (undefined8 *)
                    FUN_0463ca1c(lVar27,uVar13,
                                 *(undefined8 *)
                                  Method_OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>_get_Status__
                                );
          local_210 = FUN_058a7d14(*puVar23);
          local_1d8[1] = 0;
          uStack_208 = 0;
          local_1f8 = (long *)0x0;
          local_200 = (long *)0x0;
          uStack_1e8 = 0;
          local_1f0 = 0;
          local_1d8[0] = 0;
          local_1e0 = 0;
          thunk_FUN_02bb0e9c(&local_210,local_210);
          puVar8 = Method_System_Nullable<ValueTuple<int,_int>>_GetValueOrDefault__;
          uStack_208 = CONCAT44(uStack_208._4_4_,puVar22[1]);
          local_1f0._0_2_ =
               CONCAT11(*(undefined1 *)(puVar22 + 0x1e),*(undefined1 *)((long)puVar22 + 0x7a));
          local_1f0 = CONCAT44(puVar22[9],(undefined4)local_1f0);
          if (lVar14 == 0) goto thunk_FUN_02b3cac4;
          local_1e0 = CONCAT71(local_1e0._1_7_,*(undefined1 *)(lVar14 + 0xa4));
          local_200 = (long *)FUN_02b3c908(*(undefined8 *)
                                            Method_System_Nullable<ValueTuple<int,_int>>_GetValueOrDefault__
                                           ,3);
          thunk_FUN_02bb0e9c(&local_200,local_200);
          local_1f8 = (long *)FUN_02b3c908(*(undefined8 *)puVar8,3);
          thunk_FUN_02bb0e9c(&local_1f8,local_1f8);
          lVar27 = *(long *)Method_System_Nullable<JsonPosition>__ctor__;
          if (*(int *)(lVar27 + 0xe4) == 0) {
            thunk_FUN_02b9ad44();
            lVar27 = *(long *)Method_System_Nullable<JsonPosition>__ctor__;
          }
          if (**(long **)(lVar27 + 0xb8) == 0) goto thunk_FUN_02b3cac4;
          FUN_0452f928(**(long **)(lVar27 + 0xb8),lVar14,local_1d8 + 1,
                       *(undefined8 *)Method_System_Nullable<MissingMemberHandling>_get_HasValue__);
          uStack_1e8 = 0xffffffffffffffff;
          lVar27 = thunk_FUN_02b79644(*(undefined8 *)
                                       Method_OVRTask<OVRResult<OVRAnchor_SaveResult>>_GetAwaiter__)
          ;
          FUN_0588d214(lVar27,0);
          local_1d8[0] = lVar27;
          thunk_FUN_02bb0e9c(local_1d8,lVar27);
          if ((((local_1d8[0] == 0) ||
               (*(undefined4 *)(local_1d8[0] + 0x28) = puVar22[0x19], local_1d8[0] == 0)) ||
              (*(undefined4 *)(local_1d8[0] + 0x2c) = puVar22[0x1a], local_1d8[0] == 0)) ||
             ((*(undefined4 *)(local_1d8[0] + 0x30) = puVar22[0x1b], local_1d8[0] == 0 ||
              (*(undefined4 *)(local_1d8[0] + 0x34) = puVar22[0x1c], local_1d8[0] == 0))))
          goto thunk_FUN_02b3cac4;
          *(undefined1 *)(local_1d8[0] + 0x38) = *(undefined1 *)((long)puVar22 + 0x7d);
          if (*(long *)(lVar14 + 200) == 0) goto thunk_FUN_02b3cac4;
          FUN_036b96a4(&local_b0,*(long *)(lVar14 + 200),
                       *(undefined8 *)Method_System_Nullable<int>_GetValueOrDefault__);
          local_250[2] = local_b0;
          local_b0 = 0;
          local_220 = local_90;
          plStack_238 = plStack_a8;
          uStack_228 = uStack_98;
          local_230 = local_a0;
          plStack_a8 = local_250 + 2;
          while (uVar34 = FUN_0470872c(local_250 + 2,
                                       *(undefined8 *)Method_System_Nullable<short>_get_HasValue__),
                (uVar34 & 1) != 0) {
            if (local_1d8[0] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            uVar5 = (ushort)local_230;
            uVar34 = local_230 & 0xffff;
            lVar27 = *(long *)(local_1d8[0] + 0x20);
            if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
              thunk_FUN_02b9ad44();
            }
            if (lVar27 == 0) {
LAB_058a9898:
                    /* WARNING: Subroutine does not return */
              FUN_02b3cac4();
            }
            lVar28 = *(long *)(lVar27 + 0x10);
            lVar30 = *(long *)puVar7;
            *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
            if (lVar28 == 0) goto LAB_058a9898;
            uVar3 = *(uint *)(lVar27 + 0x18);
            if (uVar3 < *(uint *)(lVar28 + 0x18)) {
              *(uint *)(lVar27 + 0x18) = uVar3 + 1;
              *(uint *)(lVar28 + (long)(int)uVar3 * 4 + 0x20) = (uint)uVar5;
            }
            else {
              FUN_03753114(lVar27,uVar34,
                           *(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
            }
          }
          FUN_04708728(local_250 + 2,
                       *(undefined8 *)Method_System_Nullable<short>_GetValueOrDefault__);
          uVar34 = 0;
          do {
            plVar20 = local_200;
            lVar27 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
            FUN_03752884(lVar27,*(undefined8 *)PTR_DAT_06316c58);
            if (plVar20 == (long *)0x0) goto thunk_FUN_02b3cac4;
            if ((lVar27 != 0) &&
               (lVar28 = thunk_FUN_02b79548(lVar27,*(undefined8 *)(*plVar20 + 0x40)), lVar28 == 0))
            {
LAB_058aa1a0:
              uVar21 = thunk_FUN_02b870ec();
                    /* WARNING: Subroutine does not return */
              FUN_02b3c988(uVar21,0);
            }
            if (*(uint *)(plVar20 + 3) <= uVar34) goto LAB_058aa19c;
            plVar20[uVar34 + 4] = lVar27;
            thunk_FUN_02bb0e9c(plVar20 + uVar34 + 4,lVar27);
            plVar20 = local_1f8;
            lVar27 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
            FUN_03752884(lVar27,*(undefined8 *)PTR_DAT_06316c58);
            if (plVar20 == (long *)0x0) goto thunk_FUN_02b3cac4;
            if ((lVar27 != 0) &&
               (lVar28 = thunk_FUN_02b79548(lVar27,*(undefined8 *)(*plVar20 + 0x40)), lVar28 == 0))
            goto LAB_058aa1a0;
            if (*(uint *)(plVar20 + 3) <= uVar34) goto LAB_058aa19c;
            plVar20[uVar34 + 4] = lVar27;
            thunk_FUN_02bb0e9c(plVar20 + uVar34 + 4,lVar27);
            lVar27 = *(long *)(lVar14 + 0xa8);
            if (lVar27 == 0) goto thunk_FUN_02b3cac4;
            if (*(uint *)(lVar27 + 0x18) <= uVar34) goto LAB_058aa19c;
            lVar27 = *(long *)(lVar27 + uVar34 * 8 + 0x20);
            if (lVar27 == 0) goto thunk_FUN_02b3cac4;
            FUN_03816fc8(&local_b0,lVar27,
                         *(undefined8 *)
                          Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
            local_140 = local_b0;
            local_b0 = 0;
            plStack_138 = plStack_a8;
            local_128 = uStack_98;
            local_130 = local_a0;
            plStack_a8 = &local_140;
LAB_058a9424:
            uVar17 = FUN_04738544(&local_140,*(undefined8 *)puVar12);
            uVar15 = local_130;
            if ((uVar17 & 1) != 0) {
              if (*(long *)(lVar14 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              uVar17 = FUN_03816854(*(long *)(lVar14 + 0xd8),local_130,local_128 & 0xffffffff,
                                    *(undefined8 *)puVar11);
              if ((uVar17 & 1) == 0) {
                if (local_200 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cac4();
                }
                if (*(uint *)(local_200 + 3) <= uVar34) {
                    /* WARNING: Subroutine does not return */
                  FUN_02b3cacc();
                }
                lVar27 = local_200[uVar34 + 4];
                if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
                  thunk_FUN_02b9ad44();
                }
                if (lVar27 != 0) {
                  lVar28 = *(long *)(lVar27 + 0x10);
                  lVar30 = *(long *)puVar7;
                  *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
                  if (lVar28 != 0) {
                    uVar35 = *(uint *)(lVar27 + 0x18);
                    uVar3 = (uint)uVar15 & 0xffff;
                    if (uVar35 < *(uint *)(lVar28 + 0x18)) {
                      *(uint *)(lVar27 + 0x18) = uVar35 + 1;
                      *(uint *)(lVar28 + (long)(int)uVar35 * 4 + 0x20) = uVar3;
                    }
                    else {
                      FUN_03753114(lVar27,uVar3,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
                    }
                    goto LAB_058a9424;
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              goto LAB_058a9424;
            }
            FUN_04738540(&local_140,*(undefined8 *)Method_System_Nullable<GeneralNameType>__ctor__);
            lVar27 = *(long *)(lVar14 + 0xb0);
            if (lVar27 == 0) goto thunk_FUN_02b3cac4;
            if (*(uint *)(lVar27 + 0x18) <= uVar34) goto LAB_058aa19c;
            lVar27 = *(long *)(lVar27 + uVar34 * 8 + 0x20);
            if (lVar27 == 0) goto thunk_FUN_02b3cac4;
            FUN_03816fc8(&local_b0,lVar27,
                         *(undefined8 *)
                          Method_System_Nullable<GlobalDynamicResolutionSettings>_get_HasValue__);
            local_140 = local_b0;
            local_b0 = 0;
            plStack_138 = plStack_a8;
            local_128 = uStack_98;
            local_130 = local_a0;
            plStack_a8 = &local_140;
            while (uVar15 = FUN_04738544(&local_140,*(undefined8 *)puVar12), (uVar15 & 1) != 0) {
              if (local_1f8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              if (*(uint *)(local_1f8 + 3) <= uVar34) {
                    /* WARNING: Subroutine does not return */
                FUN_02b3cacc();
              }
              uVar3 = (uint)local_130;
              lVar27 = local_1f8[uVar34 + 4];
              if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              if (lVar27 == 0) {
LAB_058a95f4:
                    /* WARNING: Subroutine does not return */
                FUN_02b3cac4();
              }
              lVar28 = *(long *)(lVar27 + 0x10);
              lVar30 = *(long *)puVar7;
              *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
              if (lVar28 == 0) goto LAB_058a95f4;
              uVar35 = *(uint *)(lVar27 + 0x18);
              if (uVar35 < *(uint *)(lVar28 + 0x18)) {
                *(uint *)(lVar27 + 0x18) = uVar35 + 1;
                *(uint *)(lVar28 + (long)(int)uVar35 * 4 + 0x20) = uVar3 & 0xffff;
              }
              else {
                FUN_03753114(lVar27,uVar3 & 0xffff,
                             *(undefined8 *)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
              }
            }
            FUN_04738540(&local_140,*(undefined8 *)Method_System_Nullable<GeneralNameType>__ctor__);
            uVar34 = uVar34 + 1;
          } while (uVar34 != 3);
          lVar14 = *(long *)(param_1 + 0x30);
          if (DAT_066d31da == '\0') {
            FUN_02b3c81c(
                        Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
                        );
            DAT_066d31da = '\x01';
          }
          if (lVar14 == 0) goto thunk_FUN_02b3cac4;
          iVar36 = puVar22[0x10];
          uVar3 = puVar22[0x11];
          uVar34 = (ulong)uVar3;
          lVar28 = *(long *)
                    Method_OVRTaskBuilder<OVRResult<ulong,_OVRPlugin_Result>>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>,_OVRAnchor_Tracker_<<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync_5_1>d>__
          ;
          lVar27 = *(long *)(lVar28 + 0x38);
          if (lVar27 == 0) {
            FUN_02b76274(lVar28);
            lVar27 = *(long *)(lVar28 + 0x38);
          }
          lVar14 = FUN_0322b7a0(*(undefined8 *)(lVar14 + 0x40),*(undefined8 *)(lVar27 + 0x10));
          if ((int)uVar3 < 0) {
            FUN_04d9bcc4(0);
          }
          else if (uVar3 != 0) {
            puVar38 = (ushort *)(lVar14 + (long)iVar36 * 0x18);
            do {
              if (local_1d8[0] == 0) goto thunk_FUN_02b3cac4;
              uVar5 = *puVar38;
              lVar14 = *(long *)(local_1d8[0] + 0x18);
              if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
                thunk_FUN_02b9ad44();
              }
              if (lVar14 == 0) goto thunk_FUN_02b3cac4;
              lVar27 = *(long *)(lVar14 + 0x10);
              lVar28 = *(long *)puVar7;
              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
              if (lVar27 == 0) goto thunk_FUN_02b3cac4;
              uVar3 = *(uint *)(lVar14 + 0x18);
              if (uVar3 < *(uint *)(lVar27 + 0x18)) {
                *(uint *)(lVar14 + 0x18) = uVar3 + 1;
                *(uint *)(lVar27 + (long)(int)uVar3 * 4 + 0x20) = (uint)uVar5;
              }
              else {
                FUN_03753114(lVar14,uVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
              }
              uVar34 = uVar34 - 1;
              puVar38 = puVar38 + 0xc;
            } while (uVar34 != 0);
          }
          if ((*param_2 == 0) || (lVar14 = *(long *)(*param_2 + 0x10), lVar14 == 0))
          goto thunk_FUN_02b3cac4;
          memcpy(&local_100,&local_210,0x48);
          lVar27 = *(long *)(lVar14 + 0x10);
          lVar28 = *(long *)Method_System_Nullable<MonoSslPolicyErrors>__ctor__;
          *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
          if (lVar27 == 0) goto thunk_FUN_02b3cac4;
          uVar3 = *(uint *)(lVar14 + 0x18);
          if (uVar3 < *(uint *)(lVar27 + 0x18)) {
            lVar27 = lVar27 + (long)(int)uVar3 * 0x48;
            *(uint *)(lVar14 + 0x18) = uVar3 + 1;
            memcpy((void *)(lVar27 + 0x20),&local_100,0x48);
            thunk_FUN_02bb0e9c(lVar27 + 0x20,0);
          }
          else {
            uVar21 = *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70);
            memcpy(&local_b0,&local_100,0x48);
            Unity_Collections_NativeList<ResourceUnversionedData>__get_IsEmpty
                      (lVar14,&local_b0,uVar21);
          }
          lVar14 = *(long *)(param_1 + 0x30);
          iVar33 = iVar33 + 1;
          if (lVar14 == 0) goto thunk_FUN_02b3cac4;
        }
        if (*(long *)(param_1 + 0x30) != 0) {
          local_250[1] = 0xffffffff;
          local_250[0] = *(long *)(param_1 + 0x30);
          uVar34 = FUN_058a14e4(local_250);
          puVar12 = Method_OVRTask<List<bool>>_GetAwaiter__;
          puVar11 = 
          Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_Start<OVRSpatialAnchor_<LoadUnboundSharedAnchorsAsync>d__63>__
          ;
          if ((uVar34 & 1) != 0) goto LAB_058a9924;
          goto LAB_058a9c3c;
        }
      }
    }
  }
  goto thunk_FUN_02b3cac4;
  while( true ) {
    if (0 < *(int *)(lVar14 + 0x2a0)) {
      lVar28 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTask<OVRResult<OVRAnchor_ShareResult>>_GetAwaiter__);
      FUN_0588d2c0(lVar28,0);
      uVar21 = FUN_058a7208(*(undefined8 *)(param_1 + 0x30),lVar14);
      if (lVar28 == 0) goto thunk_FUN_02b3cac4;
      *(undefined8 *)(lVar28 + 0x10) = uVar21;
      thunk_FUN_02bb0e9c();
      lVar30 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTask<OVRResult<OVRAnchor_EraseResult>>_GetAwaiter__);
      FUN_037a5cd0(lVar30,*(undefined8 *)Method_OVRTask<List<OVRPlugin_Result>>_GetAwaiter__);
      plVar20 = (long *)(lVar28 + 0x18);
      *plVar20 = lVar30;
      thunk_FUN_02bb0e9c(plVar20,lVar30);
      iVar33 = 0;
      while( true ) {
        iVar36 = *(int *)(lVar14 + 0x294);
        if (*(int *)(*(long *)puVar11 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        if (iVar36 <= iVar33) break;
        lVar30 = *plVar20;
        uVar21 = FUN_058a6d28(*(undefined8 *)(param_1 + 0x30),lVar14,iVar33);
        if (lVar30 == 0) goto thunk_FUN_02b3cac4;
        lVar29 = *(long *)(lVar30 + 0x10);
        lVar31 = *(long *)puVar12;
        *(int *)(lVar30 + 0x1c) = *(int *)(lVar30 + 0x1c) + 1;
        if (lVar29 == 0) goto thunk_FUN_02b3cac4;
        uVar3 = *(uint *)(lVar30 + 0x18);
        if (uVar3 < *(uint *)(lVar29 + 0x18)) {
          *(uint *)(lVar30 + 0x18) = uVar3 + 1;
          *(undefined8 *)(lVar29 + (long)(int)uVar3 * 8 + 0x20) = uVar21;
          thunk_FUN_02bb0e9c();
        }
        else {
          FUN_037a6538(lVar30,uVar21,
                       *(undefined8 *)(*(long *)(*(long *)(lVar31 + 0x20) + 0xc0) + 0x70));
        }
        iVar33 = iVar33 + 1;
      }
      uVar21 = thunk_FUN_02b79644(*(undefined8 *)
                                   Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_SetStateMachine__
                                 );
      FUN_044a5fa0(uVar21,*(undefined8 *)Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_Create__
                  );
      *(undefined8 *)(lVar28 + 0x20) = uVar21;
      thunk_FUN_02bb0e9c((undefined8 *)(lVar28 + 0x20),uVar21);
      *(long *)(lVar28 + 0x28) = lVar27;
      thunk_FUN_02bb0e9c((long *)(lVar28 + 0x28),lVar27);
      puVar8 = Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__;
      if (lVar27 == 0) goto thunk_FUN_02b3cac4;
      if (0 < *(int *)(lVar27 + 0x18)) {
        iVar33 = 0;
        do {
          uVar13 = FUN_03752e1c(lVar27,iVar33,*(undefined8 *)PTR_DAT_06316cc0);
          if (*param_2 == 0) goto thunk_FUN_02b3cac4;
          lVar14 = *(long *)(*param_2 + 0x10);
          if (lVar14 == 0) goto thunk_FUN_02b3cac4;
          FUN_039b61b8(&local_b0,lVar14,uVar13,*(undefined8 *)puVar8);
          uVar34 = local_78;
          plStack_288 = plStack_a8;
          local_290 = local_b0;
          uStack_278 = uStack_98;
          local_280 = local_a0;
          uStack_268 = uStack_88;
          local_270 = local_90;
          local_260 = local_80;
          if (local_78 == 0) goto thunk_FUN_02b3cac4;
          local_3d0 = local_78;
          *(long *)(local_78 + 0x10) = lVar28;
          thunk_FUN_02bb0e9c((long *)(local_78 + 0x10),lVar28);
          if ((*param_2 == 0) || (lVar14 = *(long *)(*param_2 + 0x10), lVar14 == 0))
          goto thunk_FUN_02b3cac4;
          plStack_a8 = plStack_288;
          local_b0 = local_290;
          uStack_98 = uStack_278;
          local_a0 = local_280;
          uStack_88 = uStack_268;
          local_90 = local_270;
          local_80 = local_260;
          local_78 = uVar34;
          FUN_039b621c(lVar14,uVar13,&local_b0,
                       *(undefined8 *)
                        Method_OVRTask<OVRResult<OVRAnchor_ConfigureTrackerResult>>_GetAwaiter__);
          iVar33 = iVar33 + 1;
        } while (iVar33 < *(int *)(lVar27 + 0x18));
      }
    }
    uVar34 = FUN_058a14e4(local_250);
    if ((uVar34 & 1) == 0) break;
LAB_058a9924:
    lVar14 = FUN_058a148c(local_250);
    lVar27 = thunk_FUN_02b79644(*(undefined8 *)PTR_DAT_06316c60);
    FUN_03752884(lVar27,*(undefined8 *)PTR_DAT_06316c58);
    iVar33 = *(int *)(lVar14 + 0x298);
    if (iVar33 < *(int *)(lVar14 + 0x29c) + 1) {
      if (lVar27 == 0) goto thunk_FUN_02b3cac4;
      lVar28 = *(long *)puVar7;
      do {
        lVar30 = *(long *)(lVar27 + 0x10);
        *(int *)(lVar27 + 0x1c) = *(int *)(lVar27 + 0x1c) + 1;
        if (lVar30 == 0) goto thunk_FUN_02b3cac4;
        uVar3 = *(uint *)(lVar27 + 0x18);
        if (uVar3 < *(uint *)(lVar30 + 0x18)) {
          *(uint *)(lVar27 + 0x18) = uVar3 + 1;
          *(int *)(lVar30 + (long)(int)uVar3 * 4 + 0x20) = iVar33;
        }
        else {
          FUN_03753114(lVar27,iVar33,
                       *(undefined8 *)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
          lVar28 = *(long *)puVar7;
        }
        iVar33 = iVar33 + 1;
      } while (iVar33 < *(int *)(lVar14 + 0x29c) + 1);
    }
  }
LAB_058a9c3c:
  lVar14 = *(long *)(param_1 + 0x30);
  if (lVar14 != 0) {
    iVar33 = 0;
    do {
      lVar14 = *(long *)(lVar14 + 0x18);
      if ((*(ushort *)
            (*(long *)(*(long *)Method_System_Nullable<NativeArray<ShaderTagId>>_GetValueOrDefault__
                      + 0x20) + 0x135) & 1) == 0) {
        FUN_02b76218();
      }
      if (*(int *)(lVar14 + 8) <= iVar33) {
        return;
      }
      if (*(long *)(param_1 + 0x30) == 0) break;
      piVar24 = (int *)FUN_03ab2128(*(long *)(param_1 + 0x30) + 0x18,iVar33,
                                    *(undefined8 *)
                                     Method_System_Nullable<NativeArray<ShaderTagId>>_GetHashCode__)
      ;
      if (((*param_2 == 0) || (lVar14 = *(long *)(*param_2 + 0x10), lVar14 == 0)) ||
         (FUN_039b61b8(&local_b0,lVar14,*piVar24,
                       *(undefined8 *)Method_OVRTask<List<OVRSceneManager_Metrics>>_GetAwaiter__),
         local_78 == 0)) break;
      lVar14 = *(long *)(local_78 + 0x10);
      if (lVar14 != 0) {
        lVar27 = *(long *)(param_1 + 0x30);
        if (DAT_066d31d0 == '\0') {
          FUN_02b3c81c(
                      Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__
                      );
          DAT_066d31d0 = '\x01';
        }
        puVar7 = 
        Method_OVRTask<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_TryGetInternalData<OVRAnchor_FetchTaskData>__
        ;
        if (lVar27 == 0) break;
        iVar36 = piVar24[10];
        uVar3 = piVar24[0xb];
        uVar34 = (ulong)uVar3;
        lVar30 = *(long *)
                  Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_Create__;
        lVar28 = *(long *)(lVar30 + 0x38);
        if (lVar28 == 0) {
          FUN_02b76274(lVar30);
          lVar28 = *(long *)(lVar30 + 0x38);
        }
        lVar27 = FUN_0322b7b4(*(undefined8 *)(lVar27 + 0x30),*(undefined8 *)(lVar28 + 0x10));
        if ((int)uVar3 < 0) {
          FUN_04d9bcc4(0);
        }
        else if (uVar3 != 0) {
          puVar22 = (undefined4 *)(lVar27 + (long)iVar36 * 0xc + 8);
          do {
            if ((*(long *)(param_1 + 0x30) == 0) ||
               (lVar27 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar27 == 0))
            goto thunk_FUN_02b3cac4;
            pcVar25 = (char *)UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                        (lVar27,*(undefined8 *)(puVar22 + -2),*puVar22,0);
            if (*pcVar25 != '\0') {
              if (*(long *)(param_1 + 0x30) == 0) goto thunk_FUN_02b3cac4;
              iVar36 = *(int *)(pcVar25 + 4);
              plVar20 = *(long **)(*(long *)(param_1 + 0x30) + 0x18);
              if ((*(ushort *)
                    (*(long *)(*(long *)
                                Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                              + 0x20) + 0x135) & 1) == 0) {
                FUN_02b76218(*(long *)(*(long *)
                                        Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                      + 0x20));
              }
              memcpy(local_310,(void *)(*plVar20 + (long)iVar36 * 0x80),0x80);
              if ((int)local_2f0 < 0) {
                local_b0 = 0;
                FUN_058ac454(&local_b0,4,*piVar24,0);
                lVar27 = local_b0;
              }
              else {
                lVar27 = FUN_058ad664(*(undefined8 *)(param_1 + 0x30),local_2f0 & 0xffffffff,
                                      *piVar24,0);
              }
              uVar21 = FUN_058a7328(*(undefined8 *)(param_1 + 0x30),piVar24,local_310,lVar27);
              local_3a0[0x10] = FUN_04bffdac(*(undefined8 *)puVar7,uVar21,0);
              uVar15 = local_310[0];
              lVar28 = *(long *)(lVar14 + 0x20);
              local_318 = 0;
              thunk_FUN_02bb0e9c(local_3a0 + 0x10,local_3a0[0x10]);
              local_318 = CONCAT71(local_318._1_7_,(int)lVar27 == 0xd);
              if (lVar28 == 0) goto thunk_FUN_02b3cac4;
              FUN_044a87e4(lVar28,uVar15 & 0xffffffff,local_3a0[0x10],local_318,
                           *(undefined8 *)
                            Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                          );
            }
            uVar34 = uVar34 - 1;
            puVar22 = puVar22 + 3;
          } while (uVar34 != 0);
        }
        if (-1 < piVar24[8]) {
          lVar27 = *(long *)(param_1 + 0x30);
          if (DAT_066d31d1 == '\0') {
            FUN_02b3c81c(
                        Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
                        );
            DAT_066d31d1 = '\x01';
          }
          if (lVar27 == 0) break;
          iVar36 = piVar24[0xc];
          uVar3 = piVar24[0xd];
          lVar30 = *(long *)
                    Method_OVRTaskBuilder<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_SetException__
          ;
          lVar28 = *(long *)(lVar30 + 0x38);
          if (lVar28 == 0) {
            FUN_02b76274(lVar30);
            lVar28 = *(long *)(lVar30 + 0x38);
          }
          lVar27 = FUN_0322b7c8(*(undefined8 *)(lVar27 + 0x38),*(undefined8 *)(lVar28 + 0x10));
          if ((int)uVar3 < 0) {
            FUN_04d9bcc4(0);
          }
          else if (uVar3 != 0) {
            uVar34 = 0;
            do {
              if (*(long *)(param_1 + 0x30) == 0) goto thunk_FUN_02b3cac4;
              puVar23 = (undefined8 *)(lVar27 + (long)iVar36 * 0xc + uVar34 * 0xc);
              local_3d0 = local_3d0 & 0xffffffff00000000 | (ulong)*(uint *)(puVar23 + 1);
              lVar28 = FUN_058ab2a4(*(long *)(param_1 + 0x30),*puVar23,local_3d0,0);
              if (*(int *)(lVar28 + 8) != *piVar24) {
                if ((*(long *)(param_1 + 0x30) == 0) ||
                   (lVar28 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar28 == 0))
                goto thunk_FUN_02b3cac4;
                lVar28 = UnityEngine_Rendering_Universal_Internal_ForwardLights___ctor
                                   (lVar28,*puVar23,*(undefined4 *)(puVar23 + 1),0);
                iVar4 = *(int *)(lVar28 + 8);
                if (0 < iVar4) {
                  iVar32 = 0;
                  do {
                    if ((*(long *)(param_1 + 0x30) == 0) ||
                       (lVar28 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar28 == 0))
                    goto thunk_FUN_02b3cac4;
                    uVar21 = *puVar23;
                    if (DAT_066d31cb == '\0') {
                      FUN_02b3c81c(puVar10);
                      DAT_066d31cb = '\x01';
                    }
                    if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    if ((*(long *)(param_1 + 0x30) == 0) ||
                       (lVar30 = *(long *)(*(long *)(param_1 + 0x30) + 0x10), lVar30 == 0))
                    goto thunk_FUN_02b3cac4;
                    lVar30 = *(long *)(lVar30 + 0x20);
                    iVar1 = *(int *)(lVar28 + 0x28);
                    iVar2 = *(int *)(lVar28 + 0x2c);
                    if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    if (DAT_066d2bb3 == '\0') {
                      FUN_02b3c81c(puVar10);
                      DAT_066d2bb3 = '\x01';
                    }
                    if (*(int *)(*(long *)puVar10 + 0xe4) == 0) {
                      thunk_FUN_02b9ad44();
                    }
                    if (lVar30 == 0) goto thunk_FUN_02b3cac4;
                    if (*(uint *)(lVar30 + 0x18) <= *(uint *)(puVar23 + 1)) goto LAB_058aa19c;
                    piVar26 = (int *)FUN_03ab59e0(lVar30 + (long)(int)*(uint *)(puVar23 + 1) * 8 +
                                                  0x20,iVar32 + ((int)((ulong)uVar21 >> 0x20) +
                                                                iVar1 * ((uint)uVar21 & 0xffff)) *
                                                                iVar2,
                                                  *(undefined8 *)
                                                                                                      
                                                  Method_OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>_get_Value__
                                                 );
                    lVar28 = *(long *)(param_1 + 0x30);
                    if (lVar28 == 0) goto thunk_FUN_02b3cac4;
                    iVar1 = *piVar26;
                    plVar20 = *(long **)(lVar28 + 0x18);
                    if ((*(ushort *)
                          (*(long *)(*(long *)
                                      Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                    + 0x20) + 0x135) & 1) == 0) {
                      FUN_02b76218(*(long *)(*(long *)
                                              Method_OVRTaskBuilder<OVRResult<List<OVRSpatialAnchor_UnboundAnchor>,_OVRSpatialAnchor_OperationResult>>_SetStateMachine__
                                            + 0x20));
                      lVar28 = *(long *)(param_1 + 0x30);
                    }
                    memcpy(local_3a0,(void *)(*plVar20 + (long)iVar1 * 0x80),0x80);
                    uVar15 = local_3a0[0];
                    uVar21 = FUN_058ad664(lVar28,piVar24[8],local_3a0[0] & 0xffffffff,0);
                    uVar18 = FUN_058a7328(*(undefined8 *)(param_1 + 0x30),local_3a0,piVar24,uVar21);
                    local_3a0[0x10] =
                         FUN_04bffdac(*(undefined8 *)
                                       Method_OVRTask<OVRResult<OVRPlugin_Result>>_GetAwaiter__,
                                      uVar18,0);
                    lVar28 = *(long *)(lVar14 + 0x20);
                    local_318 = 0;
                    thunk_FUN_02bb0e9c(local_3a0 + 0x10,local_3a0[0x10]);
                    local_318 = CONCAT71(local_318._1_7_,(int)uVar21 == 0xd);
                    if (lVar28 == 0) goto thunk_FUN_02b3cac4;
                    FUN_044a87e4(lVar28,uVar15 & 0xffffffff,local_3a0[0x10],local_318,
                                 *(undefined8 *)
                                  Method_OVRTaskBuilder<OVRAnchor_Tracker_AsyncLock>_AwaitUnsafeOnCompleted<YieldAwaitable_YieldAwaiter,_OVRAnchor_Tracker_AsyncLock_<AcquireAsync>d__3>__
                                );
                    iVar32 = iVar32 + 1;
                  } while (iVar4 != iVar32);
                }
              }
              uVar34 = uVar34 + 1;
            } while (uVar34 != uVar3);
          }
        }
      }
      lVar14 = *(long *)(param_1 + 0x30);
      iVar33 = iVar33 + 1;
    } while (lVar14 != 0);
  }
thunk_FUN_02b3cac4:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


