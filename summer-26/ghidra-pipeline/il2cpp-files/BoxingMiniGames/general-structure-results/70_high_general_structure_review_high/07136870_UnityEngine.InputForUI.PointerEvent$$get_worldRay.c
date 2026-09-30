/*
FUNCTION_NAME: UnityEngine.InputForUI.PointerEvent$$get_worldRay
ENTRY_POINT: 07136870
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_7;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_InputForUI_PointerEvent__get_worldRay(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 unaff_x28;
  undefined8 *unaff_x29;
  
  thunk_FUN_036b7ad0();
  uVar6 = *unaff_x25;
  *(undefined4 *)(unaff_x23 + -8) = 2;
  lVar7 = thunk_FUN_0367fe20(uVar6);
  FUN_0459e7d4(lVar7,*unaff_x24);
  puVar2 = PTR_DAT_079fb388;
  if (lVar7 != 0) {
    lVar9 = *(long *)(lVar7 + 0x10);
    uVar6 = *(undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
    ;
    lVar10 = *(long *)PTR_DAT_079fb388;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
        thunk_FUN_036b7ad0();
      }
      else {
        FUN_0459f03c(lVar7,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      *(long *)(unaff_x22 + 0x30) = lVar7;
      thunk_FUN_036b7ad0((long *)(unaff_x22 + 0x30),lVar7);
      lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                );
      FUN_0459e7d4(lVar7,*(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                  );
      lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                );
      FUN_07119840(lVar9,0);
      if (lVar9 != 0) {
        *(undefined8 *)(lVar9 + 0x18) =
             *(undefined8 *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
        ;
        thunk_FUN_036b7ad0();
        *(undefined8 *)(lVar9 + 0x10) = *unaff_x29;
        thunk_FUN_036b7ad0();
        puVar4 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
        ;
        if (lVar7 != 0) {
          lVar10 = *(long *)(lVar7 + 0x10);
          lVar11 = *(long *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
          ;
          *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
          if (lVar10 != 0) {
            uVar1 = *(uint *)(lVar7 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar7 + 0x18) = uVar1 + 1;
              plVar8 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
              *plVar8 = lVar9;
              thunk_FUN_036b7ad0(plVar8,lVar9);
            }
            else {
              FUN_0459f03c(lVar7,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x22 + 0x28) = lVar7;
            thunk_FUN_036b7ad0((long *)(unaff_x22 + 0x28),lVar7);
            if (unaff_x21 != 0) {
              lVar7 = *(long *)(unaff_x21 + 0x10);
              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar1 = *(uint *)(unaff_x21 + 0x18);
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                  *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
                  thunk_FUN_036b7ad0();
                }
                else {
                  FUN_0459f03c();
                }
                lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                FUN_07119848(lVar7,0);
                puVar3 = Method_UnityEngine_UIElements_BaseField<int>_get_visualInput__;
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x10) =
                       *(undefined8 *)System_Dynamic_DynamicMetaObject___TypeInfo;
                  thunk_FUN_036b7ad0();
                  *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar3;
                  thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x20));
                  uVar6 = *unaff_x25;
                  *(undefined4 *)(lVar7 + 0x18) = 2;
                  lVar9 = thunk_FUN_0367fe20(uVar6);
                  FUN_0459e7d4(lVar9,*(undefined8 *)PTR_DAT_079fb380);
                  if (lVar9 != 0) {
                    lVar10 = *(long *)(lVar9 + 0x10);
                    uVar6 = *(undefined8 *)
                             Method_UnityEngine_UIElements_BaseField<int>_SetValueWithoutNotify__;
                    lVar11 = *(long *)puVar2;
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar10 != 0) {
                      uVar1 = *(uint *)(lVar9 + 0x18);
                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                        thunk_FUN_036b7ad0();
                      }
                      else {
                        FUN_0459f03c(lVar9,uVar6,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar7 + 0x30) = lVar9;
                      thunk_FUN_036b7ad0((long *)(lVar7 + 0x30),lVar9);
                      lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                );
                      FUN_0459e7d4(lVar9,*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                  );
                      lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                      
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                 );
                      FUN_07119840(lVar10,0);
                      if (lVar10 != 0) {
                        *(undefined8 *)(lVar10 + 0x18) =
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromPrefab>d__74>__
                        ;
                        thunk_FUN_036b7ad0();
                        *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                        thunk_FUN_036b7ad0();
                        if (lVar9 != 0) {
                          lVar11 = *(long *)(lVar9 + 0x10);
                          lVar12 = *(long *)puVar4;
                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                          if (lVar11 != 0) {
                            uVar1 = *(uint *)(lVar9 + 0x18);
                            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                              plVar8 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar8 = lVar10;
                              thunk_FUN_036b7ad0(plVar8,lVar10);
                            }
                            else {
                              FUN_0459f03c(lVar9,lVar10,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar7 + 0x28) = lVar9;
                            thunk_FUN_036b7ad0((long *)(lVar7 + 0x28),lVar9);
                            lVar9 = *(long *)(unaff_x21 + 0x10);
                            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                            if (lVar9 != 0) {
                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar8 = lVar7;
                                thunk_FUN_036b7ad0(plVar8,lVar7);
                              }
                              else {
                                FUN_0459f03c();
                              }
                              lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                              FUN_07119848(lVar7,0);
                              puVar3 = PTR_DAT_07a2ca78;
                              if (lVar7 != 0) {
                                *(undefined8 *)(lVar7 + 0x10) =
                                     *(undefined8 *)
                                      Unity_InferenceEngine_DynamicTensorDim___TypeInfo;
                                thunk_FUN_036b7ad0();
                                *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar3;
                                thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x20));
                                uVar6 = *unaff_x25;
                                *(undefined4 *)(lVar7 + 0x18) = 1;
                                lVar9 = thunk_FUN_0367fe20(uVar6);
                                FUN_0459e7d4(lVar9,*(undefined8 *)PTR_DAT_079fb380);
                                if (lVar9 != 0) {
                                  lVar10 = *(long *)(lVar9 + 0x10);
                                  uVar6 = *(undefined8 *)puVar3;
                                  lVar11 = *(long *)puVar2;
                                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                  if (lVar10 != 0) {
                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                      thunk_FUN_036b7ad0();
                                    }
                                    else {
                                      FUN_0459f03c(lVar9,uVar6,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar7 + 0x30) = lVar9;
                                    thunk_FUN_036b7ad0((long *)(lVar7 + 0x30),lVar9);
                                    lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                    FUN_0459e7d4(lVar9,*(undefined8 *)
                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                );
                                    lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                  
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                    FUN_07119840(lVar10,0);
                                    puVar3 = 
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromDeviceInternal>d__72>__
                                    ;
                                    if (lVar10 != 0) {
                                      *(undefined8 *)(lVar10 + 0x18) =
                                           *(undefined8 *)
                                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromDeviceInternal>d__72>__
                                      ;
                                      thunk_FUN_036b7ad0();
                                      *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                      thunk_FUN_036b7ad0();
                                      if (lVar9 != 0) {
                                        lVar11 = *(long *)(lVar9 + 0x10);
                                        lVar12 = *(long *)puVar4;
                                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                        if (lVar11 != 0) {
                                          uVar1 = *(uint *)(lVar9 + 0x18);
                                          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                            plVar8 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar8 = lVar10;
                                            thunk_FUN_036b7ad0(plVar8,lVar10);
                                          }
                                          else {
                                            FUN_0459f03c(lVar9,lVar10,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar7 + 0x28) = lVar9;
                                          thunk_FUN_036b7ad0((long *)(lVar7 + 0x28),lVar9);
                                          lVar9 = *(long *)(unaff_x21 + 0x10);
                                          *(int *)(unaff_x21 + 0x1c) =
                                               *(int *)(unaff_x21 + 0x1c) + 1;
                                          if (lVar9 != 0) {
                                            uVar1 = *(uint *)(unaff_x21 + 0x18);
                                            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                              plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar8 = lVar7;
                                              thunk_FUN_036b7ad0(plVar8,lVar7);
                                            }
                                            else {
                                              FUN_0459f03c();
                                            }
                                            lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                            FUN_07119848(lVar7,0);
                                            puVar5 = 
                                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Create__
                                            ;
                                            if (lVar7 != 0) {
                                              *(undefined8 *)(lVar7 + 0x10) =
                                                   *(undefined8 *)UnityEngine_Display___TypeInfo;
                                              thunk_FUN_036b7ad0();
                                              *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)puVar5;
                                              thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x20));
                                              uVar6 = *unaff_x25;
                                              *(undefined4 *)(lVar7 + 0x18) = 0;
                                              lVar9 = thunk_FUN_0367fe20(uVar6);
                                              FUN_0459e7d4(lVar9,*(undefined8 *)PTR_DAT_079fb380);
                                              if (lVar9 != 0) {
                                                lVar10 = *(long *)(lVar9 + 0x10);
                                                uVar6 = *(undefined8 *)
                                                                                                                  
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__26>__
                                                ;
                                                lVar11 = *(long *)puVar2;
                                                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                                if (lVar10 != 0) {
                                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                                    thunk_FUN_036b7ad0();
                                                  }
                                                  else {
                                                    FUN_0459f03c(lVar9,uVar6,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar11 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                    thunk_FUN_036b7ad0();
                                                    if (lVar9 != 0) {
                                                      lVar11 = *(long *)(lVar9 + 0x10);
                                                      lVar12 = *(long *)puVar4;
                                                      *(int *)(lVar9 + 0x1c) =
                                                           *(int *)(lVar9 + 0x1c) + 1;
                                                      if (lVar11 != 0) {
                                                        uVar1 = *(uint *)(lVar9 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                          plVar8 = (long *)(lVar11 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar8 = lVar10;
                                                  thunk_FUN_036b7ad0(plVar8,lVar10);
                                                  }
                                                  else {
                                                    FUN_0459f03c(lVar9,lVar10,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar7,0);
                                                  puVar3 = PTR_DAT_07a3b5d0;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a00bd8;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    uVar6 = *unaff_x25;
                                                    *(undefined4 *)(lVar7 + 0x18) = 0;
                                                    lVar9 = thunk_FUN_0367fe20(uVar6);
                                                    FUN_0459e7d4(lVar9,*(undefined8 *)
                                                                        PTR_DAT_079fb380);
                                                    if (lVar9 != 0) {
                                                      lVar10 = *(long *)(lVar9 + 0x10);
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinOpenRoom>d__28>__
                                                  ;
                                                  lVar11 = *(long *)puVar2;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar6;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar9 != 0) {
                                                    lVar11 = *(long *)(lVar9 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar10;
                                                        thunk_FUN_036b7ad0(plVar8,lVar10);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar7,0);
                                                  puVar3 = PTR_DAT_07a2ca80;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a578d8;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    uVar6 = *unaff_x25;
                                                    *(undefined4 *)(lVar7 + 0x18) = 1;
                                                    lVar9 = thunk_FUN_0367fe20(uVar6);
                                                    FUN_0459e7d4(lVar9,*(undefined8 *)
                                                                        PTR_DAT_079fb380);
                                                    if (lVar9 != 0) {
                                                      lVar10 = *(long *)(lVar9 + 0x10);
                                                      uVar6 = *(undefined8 *)puVar3;
                                                      lVar11 = *(long *)puVar2;
                                                      *(int *)(lVar9 + 0x1c) =
                                                           *(int *)(lVar9 + 0x1c) + 1;
                                                      if (lVar10 != 0) {
                                                        uVar1 = *(uint *)(lVar9 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                          *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar6;
                                                          thunk_FUN_036b7ad0();
                                                        }
                                                        else {
                                                          FUN_0459f03c(lVar9,uVar6,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar11 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar10,0);
                                                  puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar9 != 0) {
                                                    lVar11 = *(long *)(lVar9 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar10;
                                                        thunk_FUN_036b7ad0(plVar8,lVar10);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar7,0);
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_get_Task__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Serialization_ElementData___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x20));
                                                  uVar6 = *unaff_x25;
                                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_0367fe20(uVar6);
                                                  FUN_0459e7d4(lVar9,*(undefined8 *)PTR_DAT_079fb380
                                                              );
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetException__
                                                  ;
                                                  lVar11 = *(long *)puVar2;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar6;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                    thunk_FUN_036b7ad0();
                                                    if (lVar9 != 0) {
                                                      lVar11 = *(long *)(lVar9 + 0x10);
                                                      lVar12 = *(long *)puVar4;
                                                      *(int *)(lVar9 + 0x1c) =
                                                           *(int *)(lVar9 + 0x1c) + 1;
                                                      puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar11 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar8 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar8,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_07119848(lVar7,0);
                                                    puVar5 = 
                                                  Method_UnityEngine_UIElements_BaseField<int>__ctor__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_GotoInstruction___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x20));
                                                  uVar6 = *unaff_x25;
                                                  *(undefined4 *)(lVar7 + 0x18) = 0;
                                                  lVar9 = thunk_FUN_0367fe20(uVar6);
                                                  FUN_0459e7d4(lVar9,*(undefined8 *)PTR_DAT_079fb380
                                                              );
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  lVar11 = *(long *)puVar2;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar6;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar9 != 0) {
                                                    lVar11 = *(long *)(lVar9 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar10;
                                                        thunk_FUN_036b7ad0(plVar8,lVar10);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_07119848(lVar7,0);
                                                    puVar5 = 
                                                  Method_UnityEngine_UIElements_BaseField<int>_get_rawValue__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Net_FtpMethodInfo___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    uVar6 = *unaff_x25;
                                                    *(undefined4 *)(lVar7 + 0x18) = 0;
                                                    lVar9 = thunk_FUN_0367fe20(uVar6);
                                                    FUN_0459e7d4(lVar9,*(undefined8 *)
                                                                        PTR_DAT_079fb380);
                                                    if (lVar9 != 0) {
                                                      lVar10 = *(long *)(lVar9 + 0x10);
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__
                                                  ;
                                                  lVar11 = *(long *)puVar2;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar6;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromPrefabSharedLib>d__91>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar9 != 0) {
                                                    lVar11 = *(long *)(lVar9 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar10;
                                                        thunk_FUN_036b7ad0(plVar8,lVar10);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_07119848(lVar7,0);
                                                    puVar5 = 
                                                  Method_UnityEngine_UIElements_BaseField<Hash128>_get_value__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Data_Function___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    uVar6 = *unaff_x25;
                                                    *(undefined4 *)(lVar7 + 0x18) = 0;
                                                    lVar9 = thunk_FUN_0367fe20(uVar6);
                                                    FUN_0459e7d4(lVar9,*(undefined8 *)
                                                                        PTR_DAT_079fb380);
                                                    if (lVar9 != 0) {
                                                      lVar10 = *(long *)(lVar9 + 0x10);
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_UIElements_BaseField<int>__ctor__
                                                  ;
                                                  lVar11 = *(long *)puVar2;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar6;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromSharedRooms>d__67>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar9 != 0) {
                                                    lVar11 = *(long *)(lVar9 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar10;
                                                        thunk_FUN_036b7ad0(plVar8,lVar10);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_07119848(lVar7,0);
                                                    puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x20));
                                                  uVar6 = *unaff_x25;
                                                  *(undefined4 *)(lVar7 + 0x18) = 3;
                                                  lVar9 = thunk_FUN_0367fe20(uVar6);
                                                  FUN_0459e7d4(lVar9,*(undefined8 *)PTR_DAT_079fb380
                                                              );
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
                                                  ;
                                                  lVar11 = *(long *)puVar2;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar6;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar9 != 0) {
                                                    lVar11 = *(long *)(lVar9 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar10;
                                                        thunk_FUN_036b7ad0(plVar8,lVar10);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_07119848(lVar7,0);
                                                    puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a13ae0;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar7 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x20))
                                                    ;
                                                    uVar6 = *unaff_x25;
                                                    *(undefined4 *)(lVar7 + 0x18) = 3;
                                                    lVar9 = thunk_FUN_0367fe20(uVar6);
                                                    FUN_0459e7d4(lVar9,*(undefined8 *)
                                                                        PTR_DAT_079fb380);
                                                    if (lVar9 != 0) {
                                                      lVar10 = *(long *)(lVar9 + 0x10);
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                                  lVar11 = *(long *)puVar2;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar6;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar9 != 0) {
                                                    lVar11 = *(long *)(lVar9 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar10;
                                                        thunk_FUN_036b7ad0(plVar8,lVar10);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar7 = thunk_FUN_0367fe20(*(undefined8 *)puVar3
                                                                              );
                                                    FUN_07119848(lVar7,0);
                                                    puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x20));
                                                  uVar6 = *unaff_x25;
                                                  *(undefined4 *)(lVar7 + 0x18) = 4;
                                                  lVar9 = thunk_FUN_0367fe20(uVar6);
                                                  FUN_0459e7d4(lVar9,*(undefined8 *)PTR_DAT_079fb380
                                                              );
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                                  ;
                                                  lVar11 = *(long *)puVar2;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar6;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x30) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x30),lVar9);
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar9,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar10,0);
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar9 != 0) {
                                                    lVar11 = *(long *)(lVar9 + 0x10);
                                                    lVar12 = *(long *)puVar4;
                                                    *(int *)(lVar9 + 0x1c) =
                                                         *(int *)(lVar9 + 0x1c) + 1;
                                                    if (lVar11 != 0) {
                                                      uVar1 = *(uint *)(lVar9 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                        plVar8 = (long *)(lVar11 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar8 = lVar10;
                                                        thunk_FUN_036b7ad0(plVar8,lVar10);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar9,lVar10,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x28) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x28),lVar9);
                                                  lVar9 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar8 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar8 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar8,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    *(long *)(unaff_x20 + 0x28) = unaff_x21;
                                                    thunk_FUN_036b7ad0();
                                                    FUN_07119614(unaff_x28);
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
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


