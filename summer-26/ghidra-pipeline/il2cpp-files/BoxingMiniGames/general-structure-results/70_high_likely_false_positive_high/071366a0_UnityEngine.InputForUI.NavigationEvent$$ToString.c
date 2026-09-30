/*
FUNCTION_NAME: UnityEngine.InputForUI.NavigationEvent$$ToString
ENTRY_POINT: 071366a0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_InputForUI_NavigationEvent__ToString(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x28;
  undefined8 *unaff_x29;
  
  FUN_0459e7d4();
  lVar8 = thunk_FUN_0367fe20(*unaff_x19);
  FUN_07119850(lVar8,0);
  if (lVar8 != 0) {
    *(undefined8 *)(lVar8 + 0x18) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__;
    *(undefined4 *)(lVar8 + 0x10) = 0x164;
    thunk_FUN_036b7ad0();
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MobileAuthenticatedStream_<StartOperation>d__57>__
    ;
    if (param_1 != 0) {
      lVar11 = *(long *)(param_1 + 0x10);
      lVar13 = *(long *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MobileAuthenticatedStream_<StartOperation>d__57>__
      ;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      if (lVar11 != 0) {
        uVar1 = *(uint *)(param_1 + 0x18);
        if (uVar1 < *(uint *)(lVar11 + 0x18)) {
          *(uint *)(param_1 + 0x18) = uVar1 + 1;
          plVar9 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
          *plVar9 = lVar8;
          thunk_FUN_036b7ad0(plVar9,lVar8);
        }
        else {
          FUN_0459f03c(param_1,lVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        lVar8 = thunk_FUN_0367fe20(*unaff_x19);
        FUN_07119850(lVar8,0);
        if (lVar8 != 0) {
          *(undefined8 *)(lVar8 + 0x18) =
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__;
          *(undefined4 *)(lVar8 + 0x10) = 0x264;
          thunk_FUN_036b7ad0();
          lVar11 = *(long *)(param_1 + 0x10);
          lVar13 = *(long *)puVar2;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          puVar3 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetResult__;
          puVar2 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<WebReadStream_<ReadAsync>d__28>__
          ;
          if (lVar11 != 0) {
            uVar1 = *(uint *)(param_1 + 0x18);
            if (uVar1 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(param_1 + 0x18) = uVar1 + 1;
              plVar9 = (long *)(lVar11 + (long)(int)uVar1 * 8 + 0x20);
              *plVar9 = lVar8;
              thunk_FUN_036b7ad0(plVar9,lVar8);
            }
            else {
              FUN_0459f03c(param_1,lVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x20 + 0x20) = param_1;
            thunk_FUN_036b7ad0((long *)(unaff_x20 + 0x20),param_1);
            lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
            FUN_0459e7d4(lVar8,*(undefined8 *)puVar2);
            puVar4 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
            ;
            lVar11 = thunk_FUN_0367fe20(*(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                       );
            FUN_07119848(lVar11,0);
            puVar5 = UnityEngine_UIElements_DropdownMenuSeparator_TypeInfo;
            puVar3 = PTR_DAT_079fb380;
            puVar2 = PTR_DAT_079fb378;
            if (lVar11 != 0) {
              *(undefined8 *)(lVar11 + 0x10) =
                   *(undefined8 *)Unity_InferenceEngine_DynamicTensorShape___TypeInfo;
              thunk_FUN_036b7ad0();
              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar5;
              thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20));
              uVar10 = *(undefined8 *)puVar2;
              *(undefined4 *)(lVar11 + 0x18) = 2;
              lVar13 = thunk_FUN_0367fe20(uVar10);
              FUN_0459e7d4(lVar13,*(undefined8 *)puVar3);
              puVar3 = PTR_DAT_079fb388;
              if (lVar13 != 0) {
                lVar12 = *(long *)(lVar13 + 0x10);
                uVar10 = *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
                ;
                lVar14 = *(long *)PTR_DAT_079fb388;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                if (lVar12 != 0) {
                  uVar1 = *(uint *)(lVar13 + 0x18);
                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                    thunk_FUN_036b7ad0();
                  }
                  else {
                    FUN_0459f03c(lVar13,uVar10,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar11 + 0x30) = lVar13;
                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar13);
                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                             );
                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                              );
                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                             );
                  FUN_07119840(lVar12,0);
                  if (lVar12 != 0) {
                    *(undefined8 *)(lVar12 + 0x18) =
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                    ;
                    thunk_FUN_036b7ad0();
                    *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                    thunk_FUN_036b7ad0();
                    puVar5 = 
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                    ;
                    if (lVar13 != 0) {
                      lVar14 = *(long *)(lVar13 + 0x10);
                      lVar15 = *(long *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                      ;
                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                      if (lVar14 != 0) {
                        uVar1 = *(uint *)(lVar13 + 0x18);
                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                          plVar9 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar9 = lVar12;
                          thunk_FUN_036b7ad0(plVar9,lVar12);
                        }
                        else {
                          FUN_0459f03c(lVar13,lVar12,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar11 + 0x28) = lVar13;
                        thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar13);
                        puVar6 = 
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                        ;
                        if (lVar8 != 0) {
                          lVar13 = *(long *)(lVar8 + 0x10);
                          lVar12 = *(long *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                          ;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar13 != 0) {
                            uVar1 = *(uint *)(lVar8 + 0x18);
                            if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                              plVar9 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar9 = lVar11;
                              thunk_FUN_036b7ad0(plVar9,lVar11);
                            }
                            else {
                              FUN_0459f03c(lVar8,lVar11,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                            FUN_07119848(lVar11,0);
                            puVar7 = Method_UnityEngine_UIElements_BaseField<int>_get_visualInput__;
                            if (lVar11 != 0) {
                              *(undefined8 *)(lVar11 + 0x10) =
                                   *(undefined8 *)System_Dynamic_DynamicMetaObject___TypeInfo;
                              thunk_FUN_036b7ad0();
                              *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar7;
                              thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20));
                              uVar10 = *(undefined8 *)puVar2;
                              *(undefined4 *)(lVar11 + 0x18) = 2;
                              lVar13 = thunk_FUN_0367fe20(uVar10);
                              FUN_0459e7d4(lVar13,*(undefined8 *)PTR_DAT_079fb380);
                              if (lVar13 != 0) {
                                lVar12 = *(long *)(lVar13 + 0x10);
                                uVar10 = *(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseField<int>_SetValueWithoutNotify__
                                ;
                                lVar14 = *(long *)puVar3;
                                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                if (lVar12 != 0) {
                                  uVar1 = *(uint *)(lVar13 + 0x18);
                                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                                    thunk_FUN_036b7ad0();
                                  }
                                  else {
                                    FUN_0459f03c(lVar13,uVar10,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar11 + 0x30) = lVar13;
                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar13);
                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                              );
                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                  FUN_07119840(lVar12,0);
                                  if (lVar12 != 0) {
                                    *(undefined8 *)(lVar12 + 0x18) =
                                         *(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromPrefab>d__74>__
                                    ;
                                    thunk_FUN_036b7ad0();
                                    *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                    thunk_FUN_036b7ad0();
                                    if (lVar13 != 0) {
                                      lVar14 = *(long *)(lVar13 + 0x10);
                                      lVar15 = *(long *)puVar5;
                                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                      if (lVar14 != 0) {
                                        uVar1 = *(uint *)(lVar13 + 0x18);
                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                          plVar9 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar9 = lVar12;
                                          thunk_FUN_036b7ad0(plVar9,lVar12);
                                        }
                                        else {
                                          FUN_0459f03c(lVar13,lVar12,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar11 + 0x28) = lVar13;
                                        thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar13);
                                        lVar13 = *(long *)(lVar8 + 0x10);
                                        lVar12 = *(long *)puVar6;
                                        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                        if (lVar13 != 0) {
                                          uVar1 = *(uint *)(lVar8 + 0x18);
                                          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                            plVar9 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar9 = lVar11;
                                            thunk_FUN_036b7ad0(plVar9,lVar11);
                                          }
                                          else {
                                            FUN_0459f03c(lVar8,lVar11,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar12 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                                          FUN_07119848(lVar11,0);
                                          puVar4 = PTR_DAT_07a2ca78;
                                          if (lVar11 != 0) {
                                            *(undefined8 *)(lVar11 + 0x10) =
                                                 *(undefined8 *)
                                                  Unity_InferenceEngine_DynamicTensorDim___TypeInfo;
                                            thunk_FUN_036b7ad0();
                                            *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar4;
                                            thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20));
                                            uVar10 = *(undefined8 *)puVar2;
                                            *(undefined4 *)(lVar11 + 0x18) = 1;
                                            lVar13 = thunk_FUN_0367fe20(uVar10);
                                            FUN_0459e7d4(lVar13,*(undefined8 *)PTR_DAT_079fb380);
                                            if (lVar13 != 0) {
                                              lVar12 = *(long *)(lVar13 + 0x10);
                                              uVar10 = *(undefined8 *)puVar4;
                                              lVar14 = *(long *)puVar3;
                                              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                              if (lVar12 != 0) {
                                                uVar1 = *(uint *)(lVar13 + 0x18);
                                                if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                  *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar12 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
                                                  thunk_FUN_036b7ad0();
                                                }
                                                else {
                                                  FUN_0459f03c(lVar13,uVar10,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar14 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                *(long *)(lVar11 + 0x30) = lVar13;
                                                thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar13);
                                                lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                FUN_07119840(lVar12,0);
                                                puVar4 = 
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromDeviceInternal>d__72>__
                                                ;
                                                if (lVar12 != 0) {
                                                  *(undefined8 *)(lVar12 + 0x18) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromDeviceInternal>d__72>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar9 = (long *)(lVar14 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar9 = lVar12;
                                                        thunk_FUN_036b7ad0(plVar9,lVar12);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar9,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar11,0);
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Create__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                          UnityEngine_Display___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    uVar10 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar13 = thunk_FUN_0367fe20(uVar10);
                                                    FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                         PTR_DAT_079fb380);
                                                    if (lVar13 != 0) {
                                                      lVar12 = *(long *)(lVar13 + 0x10);
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__26>__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                    thunk_FUN_036b7ad0();
                                                    if (lVar13 != 0) {
                                                      lVar14 = *(long *)(lVar13 + 0x10);
                                                      lVar15 = *(long *)puVar5;
                                                      *(int *)(lVar13 + 0x1c) =
                                                           *(int *)(lVar13 + 0x1c) + 1;
                                                      if (lVar14 != 0) {
                                                        uVar1 = *(uint *)(lVar13 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                          plVar9 = (long *)(lVar14 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar9 = lVar12;
                                                  thunk_FUN_036b7ad0(plVar9,lVar12);
                                                  }
                                                  else {
                                                    FUN_0459f03c(lVar13,lVar12,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar15 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar9,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar11,0);
                                                  puVar4 = PTR_DAT_07a3b5d0;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a00bd8;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    uVar10 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar13 = thunk_FUN_0367fe20(uVar10);
                                                    FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                         PTR_DAT_079fb380);
                                                    if (lVar13 != 0) {
                                                      lVar12 = *(long *)(lVar13 + 0x10);
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinOpenRoom>d__28>__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar9 = (long *)(lVar14 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar9 = lVar12;
                                                        thunk_FUN_036b7ad0(plVar9,lVar12);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar9,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar11,0);
                                                  puVar4 = PTR_DAT_07a2ca80;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a578d8;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    uVar10 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar11 + 0x18) = 1;
                                                    lVar13 = thunk_FUN_0367fe20(uVar10);
                                                    FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                         PTR_DAT_079fb380);
                                                    if (lVar13 != 0) {
                                                      lVar12 = *(long *)(lVar13 + 0x10);
                                                      uVar10 = *(undefined8 *)puVar4;
                                                      lVar14 = *(long *)puVar3;
                                                      *(int *)(lVar13 + 0x1c) =
                                                           *(int *)(lVar13 + 0x1c) + 1;
                                                      if (lVar12 != 0) {
                                                        uVar1 = *(uint *)(lVar13 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                          *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar10;
                                                          thunk_FUN_036b7ad0();
                                                        }
                                                        else {
                                                          FUN_0459f03c(lVar13,uVar10,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar14 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar12,0);
                                                  puVar4 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar9 = (long *)(lVar14 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar9 = lVar12;
                                                        thunk_FUN_036b7ad0(plVar9,lVar12);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar9,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar11,0);
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_get_Task__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Serialization_ElementData___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20));
                                                  uVar10 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_0367fe20(uVar10);
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                       PTR_DAT_079fb380);
                                                  if (lVar13 != 0) {
                                                    lVar12 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetException__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                    thunk_FUN_036b7ad0();
                                                    if (lVar13 != 0) {
                                                      lVar14 = *(long *)(lVar13 + 0x10);
                                                      lVar15 = *(long *)puVar5;
                                                      *(int *)(lVar13 + 0x1c) =
                                                           *(int *)(lVar13 + 0x1c) + 1;
                                                      puVar4 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar12;
                                                      thunk_FUN_036b7ad0(plVar9,lVar12);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar13,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar9,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_07119848(lVar11,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_UIElements_BaseField<int>__ctor__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_GotoInstruction___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20));
                                                  uVar10 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_0367fe20(uVar10);
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                       PTR_DAT_079fb380);
                                                  if (lVar13 != 0) {
                                                    lVar12 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar9 = (long *)(lVar14 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar9 = lVar12;
                                                        thunk_FUN_036b7ad0(plVar9,lVar12);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar9,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_07119848(lVar11,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_UIElements_BaseField<int>_get_rawValue__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Net_FtpMethodInfo___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    uVar10 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar13 = thunk_FUN_0367fe20(uVar10);
                                                    FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                         PTR_DAT_079fb380);
                                                    if (lVar13 != 0) {
                                                      lVar12 = *(long *)(lVar13 + 0x10);
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromPrefabSharedLib>d__91>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar9 = (long *)(lVar14 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar9 = lVar12;
                                                        thunk_FUN_036b7ad0(plVar9,lVar12);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar9,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_07119848(lVar11,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_UIElements_BaseField<Hash128>_get_value__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Data_Function___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    uVar10 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar13 = thunk_FUN_0367fe20(uVar10);
                                                    FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                         PTR_DAT_079fb380);
                                                    if (lVar13 != 0) {
                                                      lVar12 = *(long *)(lVar13 + 0x10);
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_UIElements_BaseField<int>__ctor__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromSharedRooms>d__67>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar9 = (long *)(lVar14 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar9 = lVar12;
                                                        thunk_FUN_036b7ad0(plVar9,lVar12);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar9,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_07119848(lVar11,0);
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20));
                                                  uVar10 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar11 + 0x18) = 3;
                                                  lVar13 = thunk_FUN_0367fe20(uVar10);
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                       PTR_DAT_079fb380);
                                                  if (lVar13 != 0) {
                                                    lVar12 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar9 = (long *)(lVar14 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar9 = lVar12;
                                                        thunk_FUN_036b7ad0(plVar9,lVar12);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar9,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_07119848(lVar11,0);
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a13ae0;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    uVar10 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar11 + 0x18) = 3;
                                                    lVar13 = thunk_FUN_0367fe20(uVar10);
                                                    FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                         PTR_DAT_079fb380);
                                                    if (lVar13 != 0) {
                                                      lVar12 = *(long *)(lVar13 + 0x10);
                                                      uVar10 = *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar9 = (long *)(lVar14 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar9 = lVar12;
                                                        thunk_FUN_036b7ad0(plVar9,lVar12);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar9,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar4)
                                                  ;
                                                  FUN_07119848(lVar11,0);
                                                  puVar4 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20));
                                                  uVar10 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar11 + 0x18) = 4;
                                                  lVar13 = thunk_FUN_0367fe20(uVar10);
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                       PTR_DAT_079fb380);
                                                  if (lVar13 != 0) {
                                                    lVar12 = *(long *)(lVar13 + 0x10);
                                                    uVar10 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar13 + 0x1c) =
                                                       *(int *)(lVar13 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar13 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar12 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar10;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar13,uVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar12,0);
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar12 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar13 != 0) {
                                                    lVar14 = *(long *)(lVar13 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar9 = (long *)(lVar14 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar9 = lVar12;
                                                        thunk_FUN_036b7ad0(plVar9,lVar12);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,lVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar8 + 0x10);
                                                  lVar12 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar9 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar9 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar9,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x20 + 0x28) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(unaff_x20 + 0x28),
                                                                     lVar8);
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
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


