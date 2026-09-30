/*
FUNCTION_NAME: UnityEngine.InputForUI.InputEventPartialProvider$$ToTextInputEvent
ENTRY_POINT: 071398dc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 177
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_15;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_16;paired_field_refs_with_eye_source;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_7
*/


void UnityEngine_InputForUI_InputEventPartialProvider__ToTextInputEvent(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                            );
  FUN_0459e7d4(lVar4,*(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__);
  lVar5 = thunk_FUN_0367fe20(*unaff_x28);
  FUN_07119840(lVar5,0);
  if (lVar5 != 0) {
    *(undefined8 *)(lVar5 + 0x18) = *unaff_x25;
    thunk_FUN_036b7ad0();
    *(undefined8 *)(lVar5 + 0x10) = *unaff_x26;
    thunk_FUN_036b7ad0();
    if (lVar4 != 0) {
      lVar8 = *(long *)(lVar4 + 0x10);
      lVar10 = *unaff_x20;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *plVar6 = lVar5;
          thunk_FUN_036b7ad0(plVar6,lVar5);
        }
        else {
          FUN_0459f03c(lVar4,lVar5,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(unaff_x22 + 0x28) = lVar4;
        thunk_FUN_036b7ad0((long *)(unaff_x22 + 0x28),lVar4);
        lVar4 = *(long *)(unaff_x21 + 0x10);
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
        if (lVar4 != 0) {
          uVar1 = *(uint *)(unaff_x21 + 0x18);
          if (uVar1 < *(uint *)(lVar4 + 0x18)) {
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
            *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
            thunk_FUN_036b7ad0();
          }
          else {
            FUN_0459f03c();
          }
          lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                    );
          FUN_07119848(lVar4,0);
          puVar2 = PTR_DAT_07a3b5d0;
          if (lVar4 != 0) {
            *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)PTR_DAT_07a00bd8;
            thunk_FUN_036b7ad0();
            *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
            thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
            uVar7 = *unaff_x29;
            *(undefined4 *)(lVar4 + 0x18) = 0;
            lVar5 = thunk_FUN_0367fe20(uVar7);
            FUN_0459e7d4(lVar5,*unaff_x27);
            if (lVar5 != 0) {
              lVar8 = *(long *)(lVar5 + 0x10);
              uVar7 = *(undefined8 *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinOpenRoom>d__28>__
              ;
              lVar10 = *unaff_x19;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                  thunk_FUN_036b7ad0();
                }
                else {
                  FUN_0459f03c(lVar5,uVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar4 + 0x30) = lVar5;
                thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                lVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                          );
                FUN_0459e7d4(lVar5,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                            );
                lVar8 = thunk_FUN_0367fe20(*unaff_x28);
                FUN_07119840(lVar8,0);
                if (lVar8 != 0) {
                  *(undefined8 *)(lVar8 + 0x18) =
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetResult__
                  ;
                  thunk_FUN_036b7ad0();
                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                  thunk_FUN_036b7ad0();
                  lVar10 = thunk_FUN_0367fe20(*unaff_x29);
                  FUN_0459e7d4(lVar10,*unaff_x27);
                  if (lVar10 != 0) {
                    lVar9 = *(long *)(lVar10 + 0x10);
                    uVar7 = *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                    ;
                    lVar11 = *unaff_x19;
                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    if (lVar9 != 0) {
                      uVar1 = *(uint *)(lVar10 + 0x18);
                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                        thunk_FUN_036b7ad0();
                      }
                      else {
                        FUN_0459f03c(lVar10,uVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar8 + 0x20) = lVar10;
                      thunk_FUN_036b7ad0((long *)(lVar8 + 0x20),lVar10);
                      if (lVar5 != 0) {
                        lVar10 = *(long *)(lVar5 + 0x10);
                        lVar9 = *unaff_x20;
                        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                        if (lVar10 != 0) {
                          uVar1 = *(uint *)(lVar5 + 0x18);
                          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                            plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar6 = lVar8;
                            thunk_FUN_036b7ad0(plVar6,lVar8);
                          }
                          else {
                            FUN_0459f03c(lVar5,lVar8,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          }
                          lVar8 = thunk_FUN_0367fe20(*unaff_x28);
                          FUN_07119840(lVar8,0);
                          if (lVar8 != 0) {
                            *(undefined8 *)(lVar8 + 0x18) =
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromJsonSharedLib>d__89>__
                            ;
                            thunk_FUN_036b7ad0();
                            *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                            thunk_FUN_036b7ad0();
                            lVar10 = thunk_FUN_0367fe20(*unaff_x29);
                            FUN_0459e7d4(lVar10,*unaff_x27);
                            if (lVar10 != 0) {
                              lVar9 = *(long *)(lVar10 + 0x10);
                              uVar7 = *(undefined8 *)
                                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                              ;
                              lVar11 = *unaff_x19;
                              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                              if (lVar9 != 0) {
                                uVar1 = *(uint *)(lVar10 + 0x18);
                                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                  *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                                  thunk_FUN_036b7ad0();
                                }
                                else {
                                  FUN_0459f03c(lVar10,uVar7,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                *(long *)(lVar8 + 0x20) = lVar10;
                                thunk_FUN_036b7ad0((long *)(lVar8 + 0x20),lVar10);
                                lVar10 = *(long *)(lVar5 + 0x10);
                                lVar9 = *unaff_x20;
                                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                if (lVar10 != 0) {
                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                    plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar6 = lVar8;
                                    thunk_FUN_036b7ad0(plVar6,lVar8);
                                  }
                                  else {
                                    FUN_0459f03c(lVar5,lVar8,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                                );
                                  }
                                  *(long *)(lVar4 + 0x28) = lVar5;
                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                  *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                  if (lVar5 != 0) {
                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar6 = lVar4;
                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                    }
                                    else {
                                      FUN_0459f03c();
                                    }
                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                    FUN_07119848(lVar4,0);
                                    puVar2 = 
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetResult__
                                    ;
                                    if (lVar4 != 0) {
                                      *(undefined8 *)(lVar4 + 0x10) =
                                           *(undefined8 *)
                                            System_Runtime_CompilerServices_Ephemeron___TypeInfo;
                                      thunk_FUN_036b7ad0();
                                      *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                                      thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                      uVar7 = *unaff_x29;
                                      *(undefined4 *)(lVar4 + 0x18) = 0;
                                      lVar5 = thunk_FUN_0367fe20(uVar7);
                                      FUN_0459e7d4(lVar5,*unaff_x27);
                                      if (lVar5 != 0) {
                                        lVar8 = *(long *)(lVar5 + 0x10);
                                        uVar7 = *(undefined8 *)
                                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__25>__
                                        ;
                                        lVar10 = *unaff_x19;
                                        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                        if (lVar8 != 0) {
                                          uVar1 = *(uint *)(lVar5 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                 uVar7;
                                            thunk_FUN_036b7ad0();
                                          }
                                          else {
                                            FUN_0459f03c(lVar5,uVar7,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar4 + 0x30) = lVar5;
                                          thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                          lVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                          FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                          lVar8 = thunk_FUN_0367fe20(*unaff_x28);
                                          FUN_07119840(lVar8,0);
                                          if (lVar8 != 0) {
                                            *(undefined8 *)(lVar8 + 0x18) =
                                                 *(undefined8 *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetException__
                                            ;
                                            thunk_FUN_036b7ad0();
                                            *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                            thunk_FUN_036b7ad0();
                                            lVar10 = thunk_FUN_0367fe20(*unaff_x29);
                                            FUN_0459e7d4(lVar10,*unaff_x27);
                                            if (lVar10 != 0) {
                                              lVar9 = *(long *)(lVar10 + 0x10);
                                              uVar7 = *(undefined8 *)
                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                              ;
                                              lVar11 = *unaff_x19;
                                              *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                              if (lVar9 != 0) {
                                                uVar1 = *(uint *)(lVar10 + 0x18);
                                                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                  *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                                                  thunk_FUN_036b7ad0();
                                                }
                                                else {
                                                  FUN_0459f03c(lVar10,uVar7,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar11 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                *(long *)(lVar8 + 0x20) = lVar10;
                                                thunk_FUN_036b7ad0((long *)(lVar8 + 0x20),lVar10);
                                                if (lVar5 != 0) {
                                                  lVar10 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *unaff_x20;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinOpenRoom>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar10 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_0459e7d4(lVar10,*unaff_x27);
                                                  if (lVar10 != 0) {
                                                    lVar9 = *(long *)(lVar10 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar11 = *unaff_x19;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x20) = lVar10;
                                                  thunk_FUN_036b7ad0((long *)(lVar8 + 0x20),lVar10);
                                                  lVar10 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *unaff_x20;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar4,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_Start<Tensor_<ReadbackAndCloneAsync>d__28>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_FilterParameterDeclaration___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar7 = *unaff_x29;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_0367fe20(uVar7);
                                                  FUN_0459e7d4(lVar5,*unaff_x27);
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__
                                                  ;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar10 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_0459e7d4(lVar10,*unaff_x27);
                                                  if (lVar10 != 0) {
                                                    lVar9 = *(long *)(lVar10 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar11 = *unaff_x19;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x20) = lVar10;
                                                  thunk_FUN_036b7ad0((long *)(lVar8 + 0x20),lVar10);
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_036b7ad0(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_Awaiter<NativeArray<int>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar10 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_0459e7d4(lVar10,*unaff_x27);
                                                  if (lVar10 != 0) {
                                                    lVar9 = *(long *)(lVar10 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar11 = *unaff_x19;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x20) = lVar10;
                                                  thunk_FUN_036b7ad0((long *)(lVar8 + 0x20),lVar10);
                                                  lVar10 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *unaff_x20;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar4,0);
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Start<WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Globalization_EraInfo___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    uVar7 = *unaff_x29;
                                                    *(undefined4 *)(lVar4 + 0x18) = 0;
                                                    lVar5 = thunk_FUN_0367fe20(uVar7);
                                                    FUN_0459e7d4(lVar5,*unaff_x27);
                                                    if (lVar5 != 0) {
                                                      lVar8 = *(long *)(lVar5 + 0x10);
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetResult__
                                                  ;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__25>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar10 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_0459e7d4(lVar10,*unaff_x27);
                                                  if (lVar10 != 0) {
                                                    lVar9 = *(long *)(lVar10 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar11 = *unaff_x19;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x20) = lVar10;
                                                  thunk_FUN_036b7ad0((long *)(lVar8 + 0x20),lVar10);
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_036b7ad0(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar10 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_0459e7d4(lVar10,*unaff_x27);
                                                  if (lVar10 != 0) {
                                                    lVar9 = *(long *)(lVar10 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar11 = *unaff_x19;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x20) = lVar10;
                                                  thunk_FUN_036b7ad0((long *)(lVar8 + 0x20),lVar10);
                                                  lVar10 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *unaff_x20;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar4,0);
                                                  puVar2 = 
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>_GetResult__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_IO_LowLevel_Unsafe_FileReadType___TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar7 = *unaff_x29;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_0367fe20(uVar7);
                                                  FUN_0459e7d4(lVar5,*unaff_x27);
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_Awaitable<NativeArray<int>>_GetAwaiter__
                                                  ;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<List<bool>>_GetResult__;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar10 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_0459e7d4(lVar10,*unaff_x27);
                                                  if (lVar10 != 0) {
                                                    lVar9 = *(long *)(lVar10 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar11 = *unaff_x19;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x20) = lVar10;
                                                  thunk_FUN_036b7ad0((long *)(lVar8 + 0x20),lVar10);
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_036b7ad0(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_get_IsCompleted__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar10 = thunk_FUN_0367fe20(*unaff_x29);
                                                  FUN_0459e7d4(lVar10,*unaff_x27);
                                                  if (lVar10 != 0) {
                                                    lVar9 = *(long *)(lVar10 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar11 = *unaff_x19;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x20) = lVar10;
                                                  thunk_FUN_036b7ad0((long *)(lVar8 + 0x20),lVar10);
                                                  lVar10 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *unaff_x20;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar4,0);
                                                  puVar2 = PTR_DAT_07a2ca80;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a578d8;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    uVar7 = *unaff_x29;
                                                    *(undefined4 *)(lVar4 + 0x18) = 1;
                                                    lVar5 = thunk_FUN_0367fe20(uVar7);
                                                    FUN_0459e7d4(lVar5,*unaff_x27);
                                                    if (lVar5 != 0) {
                                                      lVar8 = *(long *)(lVar5 + 0x10);
                                                      uVar7 = *(undefined8 *)puVar2;
                                                      lVar10 = *unaff_x19;
                                                      *(int *)(lVar5 + 0x1c) =
                                                           *(int *)(lVar5 + 0x1c) + 1;
                                                      if (lVar8 != 0) {
                                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar7;
                                                          thunk_FUN_036b7ad0();
                                                        }
                                                        else {
                                                          FUN_0459f03c(lVar5,uVar7,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar10 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar8,0);
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_036b7ad0(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar4,0);
                                                  puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_get_Task__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Serialization_ElementData___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar7 = *unaff_x29;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_0367fe20(uVar7);
                                                  FUN_0459e7d4(lVar5,*unaff_x27);
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetException__
                                                  ;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                    thunk_FUN_036b7ad0();
                                                    if (lVar5 != 0) {
                                                      lVar10 = *(long *)(lVar5 + 0x10);
                                                      lVar9 = *unaff_x20;
                                                      *(int *)(lVar5 + 0x1c) =
                                                           *(int *)(lVar5 + 0x1c) + 1;
                                                      if (lVar10 != 0) {
                                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                          plVar6 = (long *)(lVar10 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar6 = lVar8;
                                                  thunk_FUN_036b7ad0(plVar6,lVar8);
                                                  }
                                                  else {
                                                    FUN_0459f03c(lVar5,lVar8,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar4,0);
                                                  puVar2 = 
                                                  Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Reflection_FieldInfo___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    uVar7 = *unaff_x29;
                                                    *(undefined4 *)(lVar4 + 0x18) = 0;
                                                    lVar5 = thunk_FUN_0367fe20(uVar7);
                                                    FUN_0459e7d4(lVar5,*unaff_x27);
                                                    if (lVar5 != 0) {
                                                      lVar8 = *(long *)(lVar5 + 0x10);
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetResult__
                                                  ;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_036b7ad0(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar4,0);
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetException__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_ComponentModel_EventDescriptor___TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar7 = *unaff_x29;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_0367fe20(uVar7);
                                                  FUN_0459e7d4(lVar5,*unaff_x27);
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_036b7ad0(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar4,0);
                                                  puVar2 = 
                                                  Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallbackFunctorBase___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar7 = *unaff_x29;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_0367fe20(uVar7);
                                                  FUN_0459e7d4(lVar5,*unaff_x27);
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonString>d__77>__
                                                  ;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_AwaitOnCompleted<Awaitable_Awaiter<NativeArray<int>>,_Tensor_<ReadbackAndCloneAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_036b7ad0(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar4,0);
                                                  puVar2 = 
                                                  Method_UnityEngine_Awaitable<AsyncGPUReadbackRequest>_GetManaged__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar7 = *unaff_x29;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_0367fe20(uVar7);
                                                  FUN_0459e7d4(lVar5,*unaff_x27);
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Create__
                                                  ;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_SetException__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_036b7ad0(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar4,0);
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar7 = *unaff_x29;
                                                  *(undefined4 *)(lVar4 + 0x18) = 3;
                                                  lVar5 = thunk_FUN_0367fe20(uVar7);
                                                  FUN_0459e7d4(lVar5,*unaff_x27);
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
                                                  ;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_036b7ad0(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar4,0);
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a13ae0;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    uVar7 = *unaff_x29;
                                                    *(undefined4 *)(lVar4 + 0x18) = 3;
                                                    lVar5 = thunk_FUN_0367fe20(uVar7);
                                                    FUN_0459e7d4(lVar5,*unaff_x27);
                                                    if (lVar5 != 0) {
                                                      lVar8 = *(long *)(lVar5 + 0x10);
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_036b7ad0(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar4,0);
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar7 = *unaff_x29;
                                                  *(undefined4 *)(lVar4 + 0x18) = 4;
                                                  lVar5 = thunk_FUN_0367fe20(uVar7);
                                                  FUN_0459e7d4(lVar5,*unaff_x27);
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                                  ;
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *unaff_x20;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar8;
                                                        thunk_FUN_036b7ad0(plVar6,lVar8);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar8,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
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
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


