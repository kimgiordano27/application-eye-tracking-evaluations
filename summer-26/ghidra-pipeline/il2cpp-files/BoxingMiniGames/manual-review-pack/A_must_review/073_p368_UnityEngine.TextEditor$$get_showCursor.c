/*
FUNCTION_NAME: UnityEngine.TextEditor$$get_showCursor
ENTRY_POINT: 07131d88
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 220
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2;functionality_data_collection_or_telemetry_hits_3
*/


void UnityEngine_TextEditor__get_showCursor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
                    /* try { // try from 07131d88 to 07231d8f has its CatchHandler @ 071323c0 */
  FUN_0459f03c();
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x23;
  thunk_FUN_036b7ad0();
  lVar6 = *(long *)(unaff_x21 + 0x10);
  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
      thunk_FUN_036b7ad0();
    }
    else {
      FUN_0459f03c();
    }
    lVar6 = thunk_FUN_0367fe20(*unaff_x25);
    FUN_07119848(lVar6,0);
    puVar2 = Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__;
    if (lVar6 != 0) {
      *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)System_Reflection_FieldInfo___TypeInfo;
      thunk_FUN_036b7ad0();
      *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
      thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
      uVar3 = *unaff_x27;
      *(undefined4 *)(lVar6 + 0x18) = 0;
      lVar4 = thunk_FUN_0367fe20(uVar3);
      FUN_0459e7d4(lVar4,*unaff_x20);
      if (lVar4 != 0) {
        lVar7 = *(long *)(lVar4 + 0x10);
        uVar3 = *(undefined8 *)
                 Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetResult__
        ;
        lVar8 = *unaff_x29;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
            thunk_FUN_036b7ad0();
          }
          else {
            FUN_0459f03c(lVar4,uVar3,
                         *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(lVar6 + 0x30) = lVar4;
          thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar4);
          lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                    );
          FUN_0459e7d4(lVar4,*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                      );
          lVar7 = thunk_FUN_0367fe20(*unaff_x28);
          FUN_07119840(lVar7,0);
          if (lVar7 != 0) {
            *(undefined8 *)(lVar7 + 0x18) =
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetStateMachine__
            ;
            thunk_FUN_036b7ad0();
            *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
            thunk_FUN_036b7ad0();
            if (lVar4 != 0) {
              lVar8 = *(long *)(lVar4 + 0x10);
              lVar9 = *unaff_x19;
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar4 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                  plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar5 = lVar7;
                  thunk_FUN_036b7ad0(plVar5,lVar7);
                }
                else {
                  FUN_0459f03c(lVar4,lVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar6 + 0x28) = lVar4;
                thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar4);
                lVar4 = *(long *)(unaff_x21 + 0x10);
                *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                if (lVar4 != 0) {
                  uVar1 = *(uint *)(unaff_x21 + 0x18);
                  if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                    *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                    plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar5 = lVar6;
                    thunk_FUN_036b7ad0(plVar5,lVar6);
                  }
                  else {
                    FUN_0459f03c();
                  }
                  lVar6 = thunk_FUN_0367fe20(*unaff_x25);
                  FUN_07119848(lVar6,0);
                  puVar2 = 
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetException__
                  ;
                  if (lVar6 != 0) {
                    *(undefined8 *)(lVar6 + 0x10) =
                         *(undefined8 *)System_ComponentModel_EventDescriptor___TypeInfo;
                    thunk_FUN_036b7ad0();
                    *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                    thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                    uVar3 = *unaff_x27;
                    *(undefined4 *)(lVar6 + 0x18) = 0;
                    lVar4 = thunk_FUN_0367fe20(uVar3);
                    FUN_0459e7d4(lVar4,*unaff_x20);
                    if (lVar4 != 0) {
                      lVar7 = *(long *)(lVar4 + 0x10);
                      uVar3 = *(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__27>__
                      ;
                      lVar8 = *unaff_x29;
                      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                      if (lVar7 != 0) {
                        uVar1 = *(uint *)(lVar4 + 0x18);
                        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
                          thunk_FUN_036b7ad0();
                        }
                        else {
                          FUN_0459f03c(lVar4,uVar3,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar6 + 0x30) = lVar4;
                        thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar4);
                        lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                        FUN_0459e7d4(lVar4,*(undefined8 *)
                                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                    );
                        lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                        FUN_07119840(lVar7,0);
                        if (lVar7 != 0) {
                          *(undefined8 *)(lVar7 + 0x18) =
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetResult__
                          ;
                          thunk_FUN_036b7ad0();
                          *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                          thunk_FUN_036b7ad0();
                          if (lVar4 != 0) {
                            lVar8 = *(long *)(lVar4 + 0x10);
                            lVar9 = *unaff_x19;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar8 != 0) {
                              uVar1 = *(uint *)(lVar4 + 0x18);
                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar5 = lVar7;
                                thunk_FUN_036b7ad0(plVar5,lVar7);
                              }
                              else {
                                FUN_0459f03c(lVar4,lVar7,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar6 + 0x28) = lVar4;
                              thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar4);
                              lVar4 = *(long *)(unaff_x21 + 0x10);
                              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                              if (lVar4 != 0) {
                                uVar1 = *(uint *)(unaff_x21 + 0x18);
                                if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                  plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar5 = lVar6;
                                  thunk_FUN_036b7ad0(plVar5,lVar6);
                                }
                                else {
                                  FUN_0459f03c();
                                }
                                lVar6 = thunk_FUN_0367fe20(*unaff_x25);
                                FUN_07119848(lVar6,0);
                                puVar2 = Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__;
                                if (lVar6 != 0) {
                                  *(undefined8 *)(lVar6 + 0x10) =
                                       *(undefined8 *)
                                        UnityEngine_UIElements_EventCallbackFunctorBase___TypeInfo;
                                  thunk_FUN_036b7ad0();
                                  *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                  uVar3 = *unaff_x27;
                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                  lVar4 = thunk_FUN_0367fe20(uVar3);
                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                  if (lVar4 != 0) {
                                    lVar7 = *(long *)(lVar4 + 0x10);
                                    uVar3 = *(undefined8 *)
                                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonString>d__77>__
                                    ;
                                    lVar8 = *unaff_x29;
                                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    if (lVar7 != 0) {
                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                        ;
                                        thunk_FUN_036b7ad0();
                                      }
                                      else {
                                        FUN_0459f03c(lVar4,uVar3,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar6 + 0x30) = lVar4;
                                      thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar4);
                                      lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                      FUN_0459e7d4(lVar4,*(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                      lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                      FUN_07119840(lVar7,0);
                                      if (lVar7 != 0) {
                                        *(undefined8 *)(lVar7 + 0x18) =
                                             *(undefined8 *)
                                              Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_AwaitOnCompleted<Awaitable_Awaiter<NativeArray<int>>,_Tensor_<ReadbackAndCloneAsync>d__28>__
                                        ;
                                        thunk_FUN_036b7ad0();
                                        *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                        thunk_FUN_036b7ad0();
                                        if (lVar4 != 0) {
                                          lVar8 = *(long *)(lVar4 + 0x10);
                                          lVar9 = *unaff_x19;
                                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          if (lVar8 != 0) {
                                            uVar1 = *(uint *)(lVar4 + 0x18);
                                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                              plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar5 = lVar7;
                                              thunk_FUN_036b7ad0(plVar5,lVar7);
                                            }
                                            else {
                                              FUN_0459f03c(lVar4,lVar7,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar6 + 0x28) = lVar4;
                                            thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar4);
                                            lVar4 = *(long *)(unaff_x21 + 0x10);
                                            *(int *)(unaff_x21 + 0x1c) =
                                                 *(int *)(unaff_x21 + 0x1c) + 1;
                                            if (lVar4 != 0) {
                                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                                              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 +
                                                                 0x20);
                                                *plVar5 = lVar6;
                                                thunk_FUN_036b7ad0(plVar5,lVar6);
                                              }
                                              else {
                                                FUN_0459f03c();
                                              }
                                              lVar6 = thunk_FUN_0367fe20(*unaff_x25);
                                              FUN_07119848(lVar6,0);
                                              puVar2 = 
                                              Method_UnityEngine_Awaitable<AsyncGPUReadbackRequest>_GetManaged__
                                              ;
                                              if (lVar6 != 0) {
                                                *(undefined8 *)(lVar6 + 0x10) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__
                                                ;
                                                thunk_FUN_036b7ad0();
                                                *(undefined8 *)(lVar6 + 0x20) =
                                                     *(undefined8 *)puVar2;
                                                thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                uVar3 = *unaff_x27;
                                                *(undefined4 *)(lVar6 + 0x18) = 0;
                                                lVar4 = thunk_FUN_0367fe20(uVar3);
                                                FUN_0459e7d4(lVar4,*unaff_x20);
                                                if (lVar4 != 0) {
                                                  lVar7 = *(long *)(lVar4 + 0x10);
                                                  uVar3 = *(undefined8 *)
                                                                                                                      
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Create__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_SetException__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_036b7ad0(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_07119848(lVar6,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  uVar3 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 3;
                                                  lVar4 = thunk_FUN_0367fe20(uVar3);
                                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_036b7ad0(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_07119848(lVar6,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a13ae0;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar6 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20))
                                                    ;
                                                    uVar3 = *unaff_x27;
                                                    *(undefined4 *)(lVar6 + 0x18) = 3;
                                                    lVar4 = thunk_FUN_0367fe20(uVar3);
                                                    FUN_0459e7d4(lVar4,*unaff_x20);
                                                    if (lVar4 != 0) {
                                                      lVar7 = *(long *)(lVar4 + 0x10);
                                                      uVar3 = *(undefined8 *)
                                                                                                                              
                                                  UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_036b7ad0(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_07119848(lVar6,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  uVar3 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar4 = thunk_FUN_0367fe20(uVar3);
                                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_036b7ad0(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_07119848(lVar6,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<bool>_EndEditing__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>__ctor__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  uVar3 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_0367fe20(uVar3);
                                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseField<bool>_set_value__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_SetValueWithoutNotify__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_036b7ad0(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_07119848(lVar6,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_get_showMixedValue__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_visualInput__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  uVar3 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_0367fe20(uVar3);
                                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_get_labelElement__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_SetValueWithoutNotify__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_036b7ad0(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_07119848(lVar6,0);
                                                    puVar2 = 
                                                  Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  uVar3 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_0367fe20(uVar3);
                                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ShareResult>>_get_IsCompleted__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_mixedValueLabel__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_036b7ad0(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_07119848(lVar6,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_Create__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  uVar3 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_0367fe20(uVar3);
                                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_Awaitable_Awaiter<NativeArray<int>>_get_IsCompleted__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<BoundsInt>_SetValueWithoutNotify__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_036b7ad0(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_07119848(lVar6,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  uVar3 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_0367fe20(uVar3);
                                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<int,_UxmlIntAttributeDescription>_Init__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_036b7ad0(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_07119848(lVar6,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<StreamReader_<ReadAsyncInternal>d__66>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  uVar3 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_0367fe20(uVar3);
                                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_GetResult__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_labelElement__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_036b7ad0(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_07119848(lVar6,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>__ctor__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_showMixedValue__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  uVar3 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar4 = thunk_FUN_0367fe20(uVar3);
                                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<float,_UxmlFloatAttributeDescription>_Init__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_value__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_036b7ad0(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_07119848(lVar6,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<bool>_StartEditing__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<string,_UxmlStringAttributeDescription>__ctor__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  uVar3 = *unaff_x27;
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar4 = thunk_FUN_0367fe20(uVar3);
                                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar3 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<string,_UxmlStringAttributeDescription>_Init__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar3
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,uVar3,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_get_rawValue__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_036b7ad0(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar5,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    *(long *)(in_stack_00000000 + 0x28) = unaff_x21;
                                                    thunk_FUN_036b7ad0();
                                                    FUN_07119614(in_stack_00000008,in_stack_00000000
                                                                 ,0);
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
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


