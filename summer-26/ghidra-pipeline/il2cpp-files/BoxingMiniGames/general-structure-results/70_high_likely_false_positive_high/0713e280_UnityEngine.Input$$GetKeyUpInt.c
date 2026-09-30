/*
FUNCTION_NAME: UnityEngine.Input$$GetKeyUpInt
ENTRY_POINT: 0713e280
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_9;ui_or_gameplay_sink_hits_7;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_Input__GetKeyUpInt(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *unaff_x20;
  long unaff_x26;
  undefined8 unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  
  FUN_0459e7d4(param_1,*unaff_x20);
  lVar9 = thunk_FUN_0367fe20(*unaff_x29);
  FUN_07119848(lVar9,0);
  puVar8 = Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_set_visualInput__;
  puVar6 = PTR_DAT_079fb380;
  puVar2 = PTR_DAT_079fb378;
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)PTR_DAT_07a40df0;
    thunk_FUN_036b7ad0();
    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar8;
    thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
    uVar10 = *(undefined8 *)puVar2;
    *(undefined4 *)(lVar9 + 0x18) = 0;
    lVar11 = thunk_FUN_0367fe20(uVar10);
    FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
    if (lVar11 != 0) {
      lVar13 = *(long *)(lVar11 + 0x10);
      uVar10 = *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinOpenRoom>d__28>__
      ;
      lVar14 = *(long *)PTR_DAT_079fb388;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      puVar8 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__;
      puVar6 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__;
      puVar2 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
      ;
      if (lVar13 != 0) {
        uVar1 = *(uint *)(lVar11 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
          thunk_FUN_036b7ad0();
        }
        else {
          FUN_0459f03c(lVar11,uVar10,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(lVar9 + 0x30) = lVar11;
        thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
        lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8);
        FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
        lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
        FUN_07119840(lVar13,0);
        if (lVar13 != 0) {
          *(undefined8 *)(lVar13 + 0x18) =
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromJsonSharedLib>d__89>__
          ;
          thunk_FUN_036b7ad0();
          *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
          thunk_FUN_036b7ad0();
          if (lVar11 != 0) {
            lVar14 = *(long *)(lVar11 + 0x10);
            lVar15 = *(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
            ;
            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
            puVar5 = PTR_DAT_079fb380;
            if (lVar14 != 0) {
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                *plVar12 = lVar13;
                thunk_FUN_036b7ad0(plVar12,lVar13);
              }
              else {
                FUN_0459f03c(lVar11,lVar13,
                             *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar9 + 0x28) = lVar11;
              thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
              puVar7 = 
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
              ;
              if (param_1 != 0) {
                lVar11 = *(long *)(param_1 + 0x10);
                lVar13 = *(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                ;
                *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
                if (lVar11 != 0) {
                  uVar1 = *(uint *)(param_1 + 0x18);
                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                    *(uint *)(param_1 + 0x18) = uVar1 + 1;
                    plVar12 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar12 = lVar9;
                    thunk_FUN_036b7ad0(plVar12,lVar9);
                  }
                  else {
                    FUN_0459f03c(param_1,lVar9,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                  FUN_07119848(lVar9,0);
                  puVar3 = Method_UnityEngine_UIElements_BaseField<string>_set_value__;
                  if (lVar9 != 0) {
                    *(undefined8 *)(lVar9 + 0x10) =
                         *(undefined8 *)
                          Method_UnityEngine_UIElements_BaseField<Vector2>_EndEditing__;
                    thunk_FUN_036b7ad0();
                    *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar3;
                    thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
                    puVar3 = PTR_DAT_079fb378;
                    *(undefined4 *)(lVar9 + 0x18) = 0;
                    lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                    FUN_0459e7d4(lVar11,*(undefined8 *)puVar5);
                    puVar3 = PTR_DAT_079fb388;
                    if (lVar11 != 0) {
                      lVar13 = *(long *)(lVar11 + 0x10);
                      uVar10 = *(undefined8 *)
                                Method_UnityEngine_UIElements_BaseField<ulong>_get_labelElement__;
                      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                      if (lVar13 != 0) {
                        uVar1 = *(uint *)(lVar11 + 0x18);
                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                          thunk_FUN_036b7ad0();
                        }
                        else {
                          FUN_0459f03c(lVar11,uVar10,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70)
                                      );
                        }
                        *(long *)(lVar9 + 0x30) = lVar11;
                        thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                        lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8);
                        FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                        lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                        FUN_07119840(lVar13,0);
                        if (lVar13 != 0) {
                          *(undefined8 *)(lVar13 + 0x18) =
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_get_showMixedValue__
                          ;
                          thunk_FUN_036b7ad0();
                          *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                          thunk_FUN_036b7ad0();
                          if (lVar11 != 0) {
                            lVar14 = *(long *)(lVar11 + 0x10);
                            lVar15 = *(long *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                            ;
                            *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                            if (lVar14 != 0) {
                              uVar1 = *(uint *)(lVar11 + 0x18);
                              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar12 = lVar13;
                                thunk_FUN_036b7ad0(plVar12,lVar13);
                              }
                              else {
                                FUN_0459f03c(lVar11,lVar13,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar9 + 0x28) = lVar11;
                              thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                              lVar11 = *(long *)(param_1 + 0x10);
                              lVar13 = *(long *)puVar7;
                              *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
                              if (lVar11 != 0) {
                                uVar1 = *(uint *)(param_1 + 0x18);
                                if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                  *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                  plVar12 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar12 = lVar9;
                                  thunk_FUN_036b7ad0(plVar12,lVar9);
                                }
                                else {
                                  FUN_0459f03c(param_1,lVar9,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                                FUN_07119848(lVar9,0);
                                puVar3 = 
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetResult__
                                ;
                                if (lVar9 != 0) {
                                  *(undefined8 *)(lVar9 + 0x10) =
                                       *(undefined8 *)
                                        System_Runtime_CompilerServices_Ephemeron___TypeInfo;
                                  thunk_FUN_036b7ad0();
                                  *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar3;
                                  thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
                                  puVar3 = PTR_DAT_079fb378;
                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar5);
                                  puVar3 = PTR_DAT_079fb388;
                                  if (lVar11 != 0) {
                                    lVar13 = *(long *)(lVar11 + 0x10);
                                    uVar10 = *(undefined8 *)
                                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__25>__
                                    ;
                                    *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                    if (lVar13 != 0) {
                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                             uVar10;
                                        thunk_FUN_036b7ad0();
                                      }
                                      else {
                                        FUN_0459f03c(lVar11,uVar10,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(*(long *)puVar3 + 0x20) +
                                                                0xc0) + 0x70));
                                      }
                                      *(long *)(lVar9 + 0x30) = lVar11;
                                      thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                                      lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8);
                                      FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                                      lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                      FUN_07119840(lVar13,0);
                                      if (lVar13 != 0) {
                                        *(undefined8 *)(lVar13 + 0x18) =
                                             *(undefined8 *)
                                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinOpenRoom>d__28>__
                                        ;
                                        thunk_FUN_036b7ad0();
                                        *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                        thunk_FUN_036b7ad0();
                                        if (lVar11 != 0) {
                                          lVar14 = *(long *)(lVar11 + 0x10);
                                          lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                          ;
                                          *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                                          if (lVar14 != 0) {
                                            uVar1 = *(uint *)(lVar11 + 0x18);
                                            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                              *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                              plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                              *plVar12 = lVar13;
                                              thunk_FUN_036b7ad0(plVar12,lVar13);
                                            }
                                            else {
                                              FUN_0459f03c(lVar11,lVar13,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar15 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar9 + 0x28) = lVar11;
                                            thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                                            lVar11 = *(long *)(param_1 + 0x10);
                                            lVar13 = *(long *)puVar7;
                                            *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
                                            if (lVar11 != 0) {
                                              uVar1 = *(uint *)(param_1 + 0x18);
                                              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                plVar12 = (long *)(lVar11 + (long)(int)uVar1 * 8 +
                                                                  0x20);
                                                *plVar12 = lVar9;
                                                thunk_FUN_036b7ad0(plVar12,lVar9);
                                              }
                                              else {
                                                FUN_0459f03c(param_1,lVar9,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar13 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                                              FUN_07119848(lVar9,0);
                                              puVar3 = 
                                              Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_Start<Tensor_<ReadbackAndCloneAsync>d__28>__
                                              ;
                                              if (lVar9 != 0) {
                                                *(undefined8 *)(lVar9 + 0x10) =
                                                     *(undefined8 *)
                                                                                                            
                                                  UnityEngine_UIElements_FilterParameterDeclaration___TypeInfo
                                                ;
                                                thunk_FUN_036b7ad0();
                                                *(undefined8 *)(lVar9 + 0x20) =
                                                     *(undefined8 *)puVar3;
                                                thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
                                                puVar3 = PTR_DAT_079fb378;
                                                *(undefined4 *)(lVar9 + 0x18) = 0;
                                                lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                                FUN_0459e7d4(lVar11,*(undefined8 *)puVar5);
                                                puVar3 = PTR_DAT_079fb388;
                                                if (lVar11 != 0) {
                                                  lVar13 = *(long *)(lVar11 + 0x10);
                                                  uVar10 = *(undefined8 *)
                                                                                                                        
                                                  Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_Awaiter<NativeArray<int>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar12,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(param_1 + 0x10);
                                                  lVar13 = *(long *)puVar7;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(param_1,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_07119848(lVar9,0);
                                                  puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Start<WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Globalization_EraInfo___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    puVar3 = PTR_DAT_079fb378;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    lVar11 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_0459e7d4(lVar11,*(undefined8 *)puVar5);
                                                    puVar3 = PTR_DAT_079fb388;
                                                    if (lVar11 != 0) {
                                                      lVar13 = *(long *)(lVar11 + 0x10);
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetResult__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar12,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(param_1 + 0x10);
                                                  lVar13 = *(long *)puVar7;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(param_1,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_07119848(lVar9,0);
                                                  puVar3 = 
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>_GetResult__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_IO_LowLevel_Unsafe_FileReadType___TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
                                                  puVar3 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_079fb388;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_Awaitable<NativeArray<int>>_GetAwaiter__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_get_IsCompleted__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar12,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(param_1 + 0x10);
                                                  lVar13 = *(long *)puVar7;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(param_1,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_07119848(lVar9,0);
                                                  puVar3 = PTR_DAT_07a2ca78;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_InferenceEngine_DynamicTensorDim___TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
                                                  puVar4 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar5);
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)puVar3;
                                                    lVar14 = *(long *)PTR_DAT_079fb388;
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    if (lVar13 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar10;
                                                        thunk_FUN_036b7ad0();
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar11,uVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_07119840(lVar13,0);
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetStateMachine__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar12,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(param_1 + 0x10);
                                                  lVar13 = *(long *)puVar7;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(param_1,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_07119848(lVar9,0);
                                                  puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Create__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                          UnityEngine_Display___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    puVar3 = PTR_DAT_079fb378;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    lVar11 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar3);
                                                    FUN_0459e7d4(lVar11,*(undefined8 *)
                                                                         PTR_DAT_079fb380);
                                                    puVar3 = PTR_DAT_079fb388;
                                                    if (lVar11 != 0) {
                                                      lVar13 = *(long *)(lVar11 + 0x10);
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__26>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                    thunk_FUN_036b7ad0();
                                                    puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    *(int *)(lVar11 + 0x1c) =
                                                         *(int *)(lVar11 + 0x1c) + 1;
                                                    puVar3 = PTR_DAT_079fb380;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar11 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                        plVar12 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar12 = lVar13;
                                                        thunk_FUN_036b7ad0(plVar12,lVar13);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar11,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(param_1 + 0x10);
                                                  lVar13 = *(long *)puVar7;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(param_1,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_07119848(lVar9,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_SetValueWithoutNotify__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>__ctor__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
                                                  puVar5 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar3);
                                                  puVar5 = PTR_DAT_079fb388;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_OnViewDataReady__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<Vector2>__ctor__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar12,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(param_1 + 0x10);
                                                  lVar13 = *(long *)puVar7;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(param_1,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_07119848(lVar9,0);
                                                  puVar5 = PTR_DAT_07a2ca80;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a578d8;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    puVar4 = PTR_DAT_079fb378;
                                                    *(undefined4 *)(lVar9 + 0x18) = 1;
                                                    lVar11 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar4);
                                                    FUN_0459e7d4(lVar11,*(undefined8 *)puVar3);
                                                    if (lVar11 != 0) {
                                                      lVar13 = *(long *)(lVar11 + 0x10);
                                                      uVar10 = *(undefined8 *)puVar5;
                                                      lVar14 = *(long *)PTR_DAT_079fb388;
                                                      *(int *)(lVar11 + 0x1c) =
                                                           *(int *)(lVar11 + 0x1c) + 1;
                                                      if (lVar13 != 0) {
                                                        uVar1 = *(uint *)(lVar11 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar10;
                                                          thunk_FUN_036b7ad0();
                                                        }
                                                        else {
                                                          FUN_0459f03c(lVar11,uVar10,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar14 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar12,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(param_1 + 0x10);
                                                  lVar13 = *(long *)puVar7;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(param_1,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_07119848(lVar9,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_UIElements_BaseField<ulong>_get_rawValue__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Serialization_ElementData___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
                                                  puVar5 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar3);
                                                  puVar5 = PTR_DAT_079fb388;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetException__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromPrefab>d__74>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar12,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(param_1 + 0x10);
                                                  lVar13 = *(long *)puVar7;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(param_1,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_07119848(lVar9,0);
                                                  puVar5 = 
                                                  Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Reflection_FieldInfo___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    puVar5 = PTR_DAT_079fb378;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    lVar11 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_0459e7d4(lVar11,*(undefined8 *)puVar3);
                                                    puVar5 = PTR_DAT_079fb388;
                                                    if (lVar11 != 0) {
                                                      lVar13 = *(long *)(lVar11 + 0x10);
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetResult__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar12,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(param_1 + 0x10);
                                                  lVar13 = *(long *)puVar7;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(param_1,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_07119848(lVar9,0);
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__26>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a29538;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    puVar5 = PTR_DAT_079fb378;
                                                    *(undefined4 *)(lVar9 + 0x18) = 2;
                                                    lVar11 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_0459e7d4(lVar11,*(undefined8 *)puVar3);
                                                    puVar5 = PTR_DAT_079fb388;
                                                    if (lVar11 != 0) {
                                                      lVar13 = *(long *)(lVar11 + 0x10);
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar12,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(param_1 + 0x10);
                                                  lVar13 = *(long *)puVar7;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(param_1,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_07119848(lVar9,0);
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetException__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_ComponentModel_EventDescriptor___TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
                                                  puVar5 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar3);
                                                  puVar5 = PTR_DAT_079fb388;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar12,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(param_1 + 0x10);
                                                  lVar13 = *(long *)puVar7;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(param_1,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_07119848(lVar9,0);
                                                  puVar5 = 
                                                  Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallbackFunctorBase___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
                                                  puVar5 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar3);
                                                  puVar5 = PTR_DAT_079fb388;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonString>d__77>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_AwaitOnCompleted<Awaitable_Awaiter<NativeArray<int>>,_Tensor_<ReadbackAndCloneAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar12,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(param_1 + 0x10);
                                                  lVar13 = *(long *)puVar7;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(param_1,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_07119848(lVar9,0);
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonSharedLib>d__89>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)System_Enum___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    puVar5 = PTR_DAT_079fb378;
                                                    *(undefined4 *)(lVar9 + 0x18) = 2;
                                                    lVar11 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_0459e7d4(lVar11,*(undefined8 *)puVar3);
                                                    puVar5 = PTR_DAT_079fb388;
                                                    if (lVar11 != 0) {
                                                      lVar13 = *(long *)(lVar11 + 0x10);
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_UIElements_BaseField<int>_SetValueWithoutNotify__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromPrefab>d__74>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar12,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(param_1 + 0x10);
                                                  lVar13 = *(long *)puVar7;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(param_1,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_07119848(lVar9,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_UIElements_BaseField<uint>_get_labelElement__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_get_visualInput__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
                                                  puVar5 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar9 + 0x18) = 1;
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar3);
                                                  puVar5 = PTR_DAT_079fb388;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_BaseField<uint>_get_visualInput__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<Vector2>_HandleEventBubbleUp__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar12,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(param_1 + 0x10);
                                                  lVar13 = *(long *)puVar7;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(param_1,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_07119848(lVar9,0);
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromJsonString>d__77>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_EnterFinallyInstruction___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
                                                  puVar5 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar3);
                                                  puVar5 = PTR_DAT_079fb388;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_BaseField<int>__ctor__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromSharedRooms>d__67>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar12,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(param_1 + 0x10);
                                                  lVar13 = *(long *)puVar7;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(param_1,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_07119848(lVar9,0);
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
                                                  puVar5 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar9 + 0x18) = 3;
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar3);
                                                  puVar5 = PTR_DAT_079fb388;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar12,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(param_1 + 0x10);
                                                  lVar13 = *(long *)puVar7;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(param_1,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_07119848(lVar9,0);
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a13ae0;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    puVar5 = PTR_DAT_079fb378;
                                                    *(undefined4 *)(lVar9 + 0x18) = 3;
                                                    lVar11 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                 puVar5);
                                                    FUN_0459e7d4(lVar11,*(undefined8 *)puVar3);
                                                    puVar5 = PTR_DAT_079fb388;
                                                    if (lVar11 != 0) {
                                                      lVar13 = *(long *)(lVar11 + 0x10);
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar12,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(param_1 + 0x10);
                                                  lVar13 = *(long *)puVar7;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(param_1,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_07119848(lVar9,0);
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
                                                  puVar5 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar9 + 0x18) = 4;
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar3);
                                                  puVar5 = PTR_DAT_079fb388;
                                                  if (lVar11 != 0) {
                                                    lVar13 = *(long *)(lVar11 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar5 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar11);
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar11,*(undefined8 *)puVar6);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar11 != 0) {
                                                    lVar14 = *(long *)(lVar11 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar11 + 0x1c) =
                                                       *(int *)(lVar11 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar11 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar12,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar11,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar11;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar11);
                                                  lVar11 = *(long *)(param_1 + 0x10);
                                                  lVar13 = *(long *)puVar7;
                                                  *(int *)(param_1 + 0x1c) =
                                                       *(int *)(param_1 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(param_1 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(param_1 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar12,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(param_1,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x26 + 0x28) = param_1;
                                                  thunk_FUN_036b7ad0((long *)(unaff_x26 + 0x28),
                                                                     param_1);
                                                  FUN_07119614(unaff_x27,unaff_x26,0);
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
  FUN_03642c18();
}


