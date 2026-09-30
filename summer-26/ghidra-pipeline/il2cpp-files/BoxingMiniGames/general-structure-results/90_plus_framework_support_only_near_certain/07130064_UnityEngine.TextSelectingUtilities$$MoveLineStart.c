/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$MoveLineStart
ENTRY_POINT: 07130064
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 183
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_16;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_18;telemetry_or_network_hits_10;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_10
*/


void UnityEngine_TextSelectingUtilities__MoveLineStart
               (long param_1,undefined8 param_2,undefined8 param_3)

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
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x28;
  
  FUN_0459f03c(param_2,param_3,*(undefined8 *)(param_1 + 0x70));
  *(undefined8 *)(unaff_x28 + 0x20) = unaff_x21;
  thunk_FUN_036b7ad0();
  lVar9 = thunk_FUN_0367fe20(*unaff_x19);
  FUN_0459e7d4(lVar9,*unaff_x20);
  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                             );
  FUN_07119848(lVar10,0);
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__26>__
  ;
  puVar3 = PTR_DAT_079fb380;
  puVar2 = PTR_DAT_079fb378;
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)PTR_DAT_07a29538;
    thunk_FUN_036b7ad0();
    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar4;
    thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
    uVar11 = *(undefined8 *)puVar2;
    *(undefined4 *)(lVar10 + 0x18) = 2;
    lVar12 = thunk_FUN_0367fe20(uVar11);
    FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
    puVar4 = PTR_DAT_079fb388;
    if (lVar12 != 0) {
      lVar14 = *(long *)(lVar12 + 0x10);
      uVar11 = *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
      ;
      lVar15 = *(long *)PTR_DAT_079fb388;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      puVar5 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
      ;
      puVar6 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
      ;
      if (lVar14 != 0) {
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
          thunk_FUN_036b7ad0();
        }
        else {
          FUN_0459f03c(lVar12,uVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(lVar10 + 0x30) = lVar12;
        thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12);
        lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                   );
        FUN_0459e7d4(lVar12,*(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                    );
        lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
        FUN_07119840(lVar14,0);
        if (lVar14 != 0) {
          *(undefined8 *)(lVar14 + 0x18) =
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
          ;
          thunk_FUN_036b7ad0();
          *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
          thunk_FUN_036b7ad0();
          puVar7 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
          ;
          if (lVar12 != 0) {
            lVar15 = *(long *)(lVar12 + 0x10);
            lVar16 = *(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
            ;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar15 != 0) {
              uVar1 = *(uint *)(lVar12 + 0x18);
              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                *plVar13 = lVar14;
                thunk_FUN_036b7ad0(plVar13,lVar14);
              }
              else {
                FUN_0459f03c(lVar12,lVar14,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar10 + 0x28) = lVar12;
              thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12);
              if (lVar9 != 0) {
                lVar12 = *(long *)(lVar9 + 0x10);
                lVar14 = *(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                ;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar12 != 0) {
                  uVar1 = *(uint *)(lVar9 + 0x18);
                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                    plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar13 = lVar10;
                    thunk_FUN_036b7ad0(plVar13,lVar10);
                  }
                  else {
                    FUN_0459f03c(lVar9,lVar10,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
                  FUN_07119848(lVar10,0);
                  puVar5 = PTR_DAT_07a2ca78;
                  if (lVar10 != 0) {
                    *(undefined8 *)(lVar10 + 0x10) =
                         *(undefined8 *)Unity_InferenceEngine_DynamicTensorDim___TypeInfo;
                    thunk_FUN_036b7ad0();
                    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar5;
                    thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                    uVar11 = *(undefined8 *)puVar2;
                    *(undefined4 *)(lVar10 + 0x18) = 1;
                    lVar12 = thunk_FUN_0367fe20(uVar11);
                    FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                    if (lVar12 != 0) {
                      lVar14 = *(long *)(lVar12 + 0x10);
                      uVar11 = *(undefined8 *)puVar5;
                      lVar15 = *(long *)puVar4;
                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                      if (lVar14 != 0) {
                        uVar1 = *(uint *)(lVar12 + 0x18);
                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                          thunk_FUN_036b7ad0();
                        }
                        else {
                          FUN_0459f03c(lVar12,uVar11,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar10 + 0x30) = lVar12;
                        thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12);
                        lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                        FUN_0459e7d4(lVar12,*(undefined8 *)
                                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                    );
                        lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
                        FUN_07119840(lVar14,0);
                        puVar5 = 
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetStateMachine__
                        ;
                        if (lVar14 != 0) {
                          *(undefined8 *)(lVar14 + 0x18) =
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetStateMachine__
                          ;
                          thunk_FUN_036b7ad0();
                          *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                          thunk_FUN_036b7ad0();
                          if (lVar12 != 0) {
                            lVar15 = *(long *)(lVar12 + 0x10);
                            lVar16 = *(long *)puVar7;
                            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                            if (lVar15 != 0) {
                              uVar1 = *(uint *)(lVar12 + 0x18);
                              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar13 = lVar14;
                                thunk_FUN_036b7ad0(plVar13,lVar14);
                              }
                              else {
                                FUN_0459f03c(lVar12,lVar14,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar10 + 0x28) = lVar12;
                              thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12);
                              lVar12 = *(long *)(lVar9 + 0x10);
                              lVar14 = *(long *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                              ;
                              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                              if (lVar12 != 0) {
                                uVar1 = *(uint *)(lVar9 + 0x18);
                                if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                  *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                  plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar13 = lVar10;
                                  thunk_FUN_036b7ad0(plVar13,lVar10);
                                }
                                else {
                                  FUN_0459f03c(lVar9,lVar10,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                FUN_07119848(lVar10,0);
                                puVar8 = 
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Create__
                                ;
                                if (lVar10 != 0) {
                                  *(undefined8 *)(lVar10 + 0x10) =
                                       *(undefined8 *)UnityEngine_Display___TypeInfo;
                                  thunk_FUN_036b7ad0();
                                  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar8;
                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                  uVar11 = *(undefined8 *)puVar2;
                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                  if (lVar12 != 0) {
                                    lVar14 = *(long *)(lVar12 + 0x10);
                                    uVar11 = *(undefined8 *)
                                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__26>__
                                    ;
                                    lVar15 = *(long *)puVar4;
                                    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                    if (lVar14 != 0) {
                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                             uVar11;
                                        thunk_FUN_036b7ad0();
                                      }
                                      else {
                                        FUN_0459f03c(lVar12,uVar11,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar10 + 0x30) = lVar12;
                                      thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12);
                                      lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                      
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                      FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                      
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                      lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
                                      FUN_07119840(lVar14,0);
                                      if (lVar14 != 0) {
                                        *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)puVar5;
                                        thunk_FUN_036b7ad0();
                                        *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                        thunk_FUN_036b7ad0();
                                        if (lVar12 != 0) {
                                          lVar15 = *(long *)(lVar12 + 0x10);
                                          lVar16 = *(long *)puVar7;
                                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                          puVar5 = 
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                          ;
                                          if (lVar15 != 0) {
                                            uVar1 = *(uint *)(lVar12 + 0x18);
                                            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                              plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                              *plVar13 = lVar14;
                                              thunk_FUN_036b7ad0(plVar13,lVar14);
                                            }
                                            else {
                                              FUN_0459f03c(lVar12,lVar14,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar16 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar10 + 0x28) = lVar12;
                                            thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12);
                                            lVar12 = *(long *)(lVar9 + 0x10);
                                            lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                            ;
                                            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                            if (lVar12 != 0) {
                                              uVar1 = *(uint *)(lVar9 + 0x18);
                                              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 +
                                                                  0x20);
                                                *plVar13 = lVar10;
                                                thunk_FUN_036b7ad0(plVar13,lVar10);
                                              }
                                              else {
                                                FUN_0459f03c(lVar9,lVar10,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar14 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
                                              FUN_07119848(lVar10,0);
                                              puVar5 = PTR_DAT_07a3b5d0;
                                              if (lVar10 != 0) {
                                                *(undefined8 *)(lVar10 + 0x10) =
                                                     *(undefined8 *)PTR_DAT_07a00bd8;
                                                thunk_FUN_036b7ad0();
                                                *(undefined8 *)(lVar10 + 0x20) =
                                                     *(undefined8 *)puVar5;
                                                thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                uVar11 = *(undefined8 *)puVar2;
                                                *(undefined4 *)(lVar10 + 0x18) = 0;
                                                lVar12 = thunk_FUN_0367fe20(uVar11);
                                                FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                if (lVar12 != 0) {
                                                  lVar14 = *(long *)(lVar12 + 0x10);
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinOpenRoom>d__28>__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromJsonSharedLib>d__89>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar12 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar13,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetResult__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_CompilerServices_Ephemeron___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__25>__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetException__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinOpenRoom>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar12 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar13,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_Start<Tensor_<ReadbackAndCloneAsync>d__28>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_FilterParameterDeclaration___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_Awaiter<NativeArray<int>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar12 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar13,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Start<WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Globalization_EraInfo___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar10 + 0x18) = 0;
                                                    lVar12 = thunk_FUN_0367fe20(uVar11);
                                                    FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetResult__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__25>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar12 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar13,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar5 = 
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>_GetResult__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_IO_LowLevel_Unsafe_FileReadType___TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_Awaitable<NativeArray<int>>_GetAwaiter__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<List<bool>>_GetResult__;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_get_IsCompleted__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar12 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar13,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar5 = PTR_DAT_07a2ca80;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a578d8;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar10 + 0x18) = 1;
                                                    lVar12 = thunk_FUN_0367fe20(uVar11);
                                                    FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)puVar5;
                                                      lVar15 = *(long *)puVar4;
                                                      *(int *)(lVar12 + 0x1c) =
                                                           *(int *)(lVar12 + 0x1c) + 1;
                                                      if (lVar14 != 0) {
                                                        uVar1 = *(uint *)(lVar12 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_036b7ad0();
                                                        }
                                                        else {
                                                          FUN_0459f03c(lVar12,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar15 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_get_Task__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Serialization_ElementData___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetException__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                    thunk_FUN_036b7ad0();
                                                    if (lVar12 != 0) {
                                                      lVar15 = *(long *)(lVar12 + 0x10);
                                                      lVar16 = *(long *)puVar7;
                                                      *(int *)(lVar12 + 0x1c) =
                                                           *(int *)(lVar12 + 0x1c) + 1;
                                                      puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar13,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar8 = 
                                                  Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Reflection_FieldInfo___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar10 + 0x18) = 0;
                                                    lVar12 = thunk_FUN_0367fe20(uVar11);
                                                    FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetResult__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetException__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_ComponentModel_EventDescriptor___TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar8 = 
                                                  Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallbackFunctorBase___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonString>d__77>__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_AwaitOnCompleted<Awaitable_Awaiter<NativeArray<int>>,_Tensor_<ReadbackAndCloneAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar8 = 
                                                  Method_UnityEngine_Awaitable<AsyncGPUReadbackRequest>_GetManaged__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Create__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_SetException__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 3;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a13ae0;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar10 + 0x18) = 3;
                                                    lVar12 = thunk_FUN_0367fe20(uVar11);
                                                    FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 4;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar8 = 
                                                  Method_UnityEngine_UIElements_BaseField<bool>_EndEditing__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>__ctor__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_BaseField<bool>_set_value__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_SetValueWithoutNotify__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar8 = 
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_get_showMixedValue__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_visualInput__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_get_labelElement__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_SetValueWithoutNotify__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar8 = 
                                                  Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ShareResult>>_get_IsCompleted__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_mixedValueLabel__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar8 = 
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_Create__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 1;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_Awaitable_Awaiter<NativeArray<int>>_get_IsCompleted__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<BoundsInt>_SetValueWithoutNotify__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<int,_UxmlIntAttributeDescription>_Init__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar8 = 
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<StreamReader_<ReadAsyncInternal>d__66>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_GetResult__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_labelElement__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar8 = 
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>__ctor__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_showMixedValue__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 4;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<float,_UxmlFloatAttributeDescription>_Init__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_value__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_07119848(lVar10,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_UIElements_BaseField<bool>_StartEditing__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<string,_UxmlStringAttributeDescription>__ctor__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 4;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<string,_UxmlStringAttributeDescription>_Init__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_07119840(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_get_rawValue__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x28 + 0x28) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(unaff_x28 + 0x28),
                                                                     lVar9);
                                                  FUN_07119614(unaff_x25,unaff_x28,0);
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
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


