/*
FUNCTION_NAME: UnityEngine.InputForUI.KeyEvent.ButtonsState.<GetAllPressed>d__8$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 0713666c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_9;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_InputForUI_KeyEvent_ButtonsState_<GetAllPressed>d__8__System_Collections_IEnumerable_GetEnumerator
               (long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 unaff_x28;
  undefined8 *unaff_x29;
  
  *(undefined8 *)(param_1 + 0x30) = param_2;
  thunk_FUN_036b7ad0();
  *(undefined8 *)(unaff_x20 + 0x38) = *unaff_x22;
  thunk_FUN_036b7ad0();
  *(undefined8 *)(unaff_x20 + 0x40) = *unaff_x23;
  thunk_FUN_036b7ad0();
  lVar8 = thunk_FUN_0367fe20(*unaff_x24);
  FUN_0459e7d4(lVar8,*unaff_x25);
  lVar9 = thunk_FUN_0367fe20(*unaff_x19);
  FUN_07119850(lVar9,0);
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x18) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__;
    *(undefined4 *)(lVar9 + 0x10) = 0x164;
    thunk_FUN_036b7ad0();
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MobileAuthenticatedStream_<StartOperation>d__57>__
    ;
    if (lVar8 != 0) {
      lVar12 = *(long *)(lVar8 + 0x10);
      lVar13 = *(long *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MobileAuthenticatedStream_<StartOperation>d__57>__
      ;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(lVar8 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
          plVar10 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *plVar10 = lVar9;
          thunk_FUN_036b7ad0(plVar10,lVar9);
        }
        else {
          FUN_0459f03c(lVar8,lVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
        }
        lVar9 = thunk_FUN_0367fe20(*unaff_x19);
        FUN_07119850(lVar9,0);
        if (lVar9 != 0) {
          *(undefined8 *)(lVar9 + 0x18) =
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__;
          *(undefined4 *)(lVar9 + 0x10) = 0x264;
          thunk_FUN_036b7ad0();
          lVar12 = *(long *)(lVar8 + 0x10);
          lVar13 = *(long *)puVar2;
          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
          puVar3 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetResult__;
          puVar2 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<WebReadStream_<ReadAsync>d__28>__
          ;
          if (lVar12 != 0) {
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              plVar10 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *plVar10 = lVar9;
              thunk_FUN_036b7ad0(plVar10,lVar9);
            }
            else {
              FUN_0459f03c(lVar8,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x20 + 0x20) = lVar8;
            thunk_FUN_036b7ad0((long *)(unaff_x20 + 0x20),lVar8);
            lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
            FUN_0459e7d4(lVar8,*(undefined8 *)puVar2);
            puVar4 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
            ;
            lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                      );
            FUN_07119848(lVar9,0);
            puVar5 = UnityEngine_UIElements_DropdownMenuSeparator_TypeInfo;
            puVar3 = PTR_DAT_079fb380;
            puVar2 = PTR_DAT_079fb378;
            if (lVar9 != 0) {
              *(undefined8 *)(lVar9 + 0x10) =
                   *(undefined8 *)Unity_InferenceEngine_DynamicTensorShape___TypeInfo;
              thunk_FUN_036b7ad0();
              *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar5;
              thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
              uVar11 = *(undefined8 *)puVar2;
              *(undefined4 *)(lVar9 + 0x18) = 2;
              lVar12 = thunk_FUN_0367fe20(uVar11);
              FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
              puVar3 = PTR_DAT_079fb388;
              if (lVar12 != 0) {
                lVar13 = *(long *)(lVar12 + 0x10);
                uVar11 = *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
                ;
                lVar14 = *(long *)PTR_DAT_079fb388;
                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                if (lVar13 != 0) {
                  uVar1 = *(uint *)(lVar12 + 0x18);
                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                    thunk_FUN_036b7ad0();
                  }
                  else {
                    FUN_0459f03c(lVar12,uVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar9 + 0x30) = lVar12;
                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar12);
                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                             );
                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                              );
                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                             );
                  FUN_07119840(lVar13,0);
                  if (lVar13 != 0) {
                    *(undefined8 *)(lVar13 + 0x18) =
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                    ;
                    thunk_FUN_036b7ad0();
                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                    thunk_FUN_036b7ad0();
                    puVar5 = 
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                    ;
                    if (lVar12 != 0) {
                      lVar14 = *(long *)(lVar12 + 0x10);
                      lVar15 = *(long *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                      ;
                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                      if (lVar14 != 0) {
                        uVar1 = *(uint *)(lVar12 + 0x18);
                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                          plVar10 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar10 = lVar13;
                          thunk_FUN_036b7ad0(plVar10,lVar13);
                        }
                        else {
                          FUN_0459f03c(lVar12,lVar13,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar9 + 0x28) = lVar12;
                        thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar12);
                        puVar6 = 
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                        ;
                        if (lVar8 != 0) {
                          lVar12 = *(long *)(lVar8 + 0x10);
                          lVar13 = *(long *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                          ;
                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                          if (lVar12 != 0) {
                            uVar1 = *(uint *)(lVar8 + 0x18);
                            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                              plVar10 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar10 = lVar9;
                              thunk_FUN_036b7ad0(plVar10,lVar9);
                            }
                            else {
                              FUN_0459f03c(lVar8,lVar9,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                            FUN_07119848(lVar9,0);
                            puVar7 = Method_UnityEngine_UIElements_BaseField<int>_get_visualInput__;
                            if (lVar9 != 0) {
                              *(undefined8 *)(lVar9 + 0x10) =
                                   *(undefined8 *)System_Dynamic_DynamicMetaObject___TypeInfo;
                              thunk_FUN_036b7ad0();
                              *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar7;
                              thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
                              uVar11 = *(undefined8 *)puVar2;
                              *(undefined4 *)(lVar9 + 0x18) = 2;
                              lVar12 = thunk_FUN_0367fe20(uVar11);
                              FUN_0459e7d4(lVar12,*(undefined8 *)PTR_DAT_079fb380);
                              if (lVar12 != 0) {
                                lVar13 = *(long *)(lVar12 + 0x10);
                                uVar11 = *(undefined8 *)
                                          Method_UnityEngine_UIElements_BaseField<int>_SetValueWithoutNotify__
                                ;
                                lVar14 = *(long *)puVar3;
                                *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                if (lVar13 != 0) {
                                  uVar1 = *(uint *)(lVar12 + 0x18);
                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                    *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                                    thunk_FUN_036b7ad0();
                                  }
                                  else {
                                    FUN_0459f03c(lVar12,uVar11,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar9 + 0x30) = lVar12;
                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar12);
                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                              );
                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                  FUN_07119840(lVar13,0);
                                  if (lVar13 != 0) {
                                    *(undefined8 *)(lVar13 + 0x18) =
                                         *(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromPrefab>d__74>__
                                    ;
                                    thunk_FUN_036b7ad0();
                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                    thunk_FUN_036b7ad0();
                                    if (lVar12 != 0) {
                                      lVar14 = *(long *)(lVar12 + 0x10);
                                      lVar15 = *(long *)puVar5;
                                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                      if (lVar14 != 0) {
                                        uVar1 = *(uint *)(lVar12 + 0x18);
                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                          plVar10 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar10 = lVar13;
                                          thunk_FUN_036b7ad0(plVar10,lVar13);
                                        }
                                        else {
                                          FUN_0459f03c(lVar12,lVar13,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar9 + 0x28) = lVar12;
                                        thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar12);
                                        lVar12 = *(long *)(lVar8 + 0x10);
                                        lVar13 = *(long *)puVar6;
                                        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                        if (lVar12 != 0) {
                                          uVar1 = *(uint *)(lVar8 + 0x18);
                                          if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                            plVar10 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar10 = lVar9;
                                            thunk_FUN_036b7ad0(plVar10,lVar9);
                                          }
                                          else {
                                            FUN_0459f03c(lVar8,lVar9,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                                          FUN_07119848(lVar9,0);
                                          puVar4 = PTR_DAT_07a2ca78;
                                          if (lVar9 != 0) {
                                            *(undefined8 *)(lVar9 + 0x10) =
                                                 *(undefined8 *)
                                                  Unity_InferenceEngine_DynamicTensorDim___TypeInfo;
                                            thunk_FUN_036b7ad0();
                                            *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)puVar4;
                                            thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
                                            uVar11 = *(undefined8 *)puVar2;
                                            *(undefined4 *)(lVar9 + 0x18) = 1;
                                            lVar12 = thunk_FUN_0367fe20(uVar11);
                                            FUN_0459e7d4(lVar12,*(undefined8 *)PTR_DAT_079fb380);
                                            if (lVar12 != 0) {
                                              lVar13 = *(long *)(lVar12 + 0x10);
                                              uVar11 = *(undefined8 *)puVar4;
                                              lVar14 = *(long *)puVar3;
                                              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                              if (lVar13 != 0) {
                                                uVar1 = *(uint *)(lVar12 + 0x18);
                                                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                  *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                                                  thunk_FUN_036b7ad0();
                                                }
                                                else {
                                                  FUN_0459f03c(lVar12,uVar11,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar14 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                *(long *)(lVar9 + 0x30) = lVar12;
                                                thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar12);
                                                lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                FUN_07119840(lVar13,0);
                                                puVar4 = 
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromDeviceInternal>d__72>__
                                                ;
                                                if (lVar13 != 0) {
                                                  *(undefined8 *)(lVar13 + 0x18) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromDeviceInternal>d__72>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_036b7ad0(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar9,0);
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Create__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                          UnityEngine_Display___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    lVar12 = thunk_FUN_0367fe20(uVar11);
                                                    FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                         PTR_DAT_079fb380);
                                                    if (lVar12 != 0) {
                                                      lVar13 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__26>__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                    thunk_FUN_036b7ad0();
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)(lVar12 + 0x10);
                                                      lVar15 = *(long *)puVar5;
                                                      *(int *)(lVar12 + 0x1c) =
                                                           *(int *)(lVar12 + 0x1c) + 1;
                                                      if (lVar14 != 0) {
                                                        uVar1 = *(uint *)(lVar12 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                          plVar10 = (long *)(lVar14 + (long)(int)
                                                  uVar1 * 8 + 0x20);
                                                  *plVar10 = lVar13;
                                                  thunk_FUN_036b7ad0(plVar10,lVar13);
                                                  }
                                                  else {
                                                    FUN_0459f03c(lVar12,lVar13,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar15 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar9,0);
                                                  puVar4 = PTR_DAT_07a3b5d0;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a00bd8;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    lVar12 = thunk_FUN_0367fe20(uVar11);
                                                    FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                         PTR_DAT_079fb380);
                                                    if (lVar12 != 0) {
                                                      lVar13 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinOpenRoom>d__28>__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_036b7ad0(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar9,0);
                                                  puVar4 = PTR_DAT_07a2ca80;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a578d8;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar9 + 0x18) = 1;
                                                    lVar12 = thunk_FUN_0367fe20(uVar11);
                                                    FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                         PTR_DAT_079fb380);
                                                    if (lVar12 != 0) {
                                                      lVar13 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)puVar4;
                                                      lVar14 = *(long *)puVar3;
                                                      *(int *)(lVar12 + 0x1c) =
                                                           *(int *)(lVar12 + 0x1c) + 1;
                                                      if (lVar13 != 0) {
                                                        uVar1 = *(uint *)(lVar12 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_036b7ad0();
                                                        }
                                                        else {
                                                          FUN_0459f03c(lVar12,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar14 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar13,0);
                                                  puVar4 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_036b7ad0(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar9,0);
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_get_Task__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Serialization_ElementData___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                       PTR_DAT_079fb380);
                                                  if (lVar12 != 0) {
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetException__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)puVar4;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                    thunk_FUN_036b7ad0();
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)(lVar12 + 0x10);
                                                      lVar15 = *(long *)puVar5;
                                                      *(int *)(lVar12 + 0x1c) =
                                                           *(int *)(lVar12 + 0x1c) + 1;
                                                      puVar4 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                                                  FUN_07119848(lVar9,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_UIElements_BaseField<int>__ctor__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_GotoInstruction___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar9 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                       PTR_DAT_079fb380);
                                                  if (lVar12 != 0) {
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_036b7ad0(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                                                  FUN_07119848(lVar9,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_UIElements_BaseField<int>_get_rawValue__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Net_FtpMethodInfo___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    lVar12 = thunk_FUN_0367fe20(uVar11);
                                                    FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                         PTR_DAT_079fb380);
                                                    if (lVar12 != 0) {
                                                      lVar13 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_UIElements_BaseField<Hash128>_get_visualInput__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromPrefabSharedLib>d__91>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_036b7ad0(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                                                  FUN_07119848(lVar9,0);
                                                  puVar7 = 
                                                  Method_UnityEngine_UIElements_BaseField<Hash128>_get_value__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Data_Function___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar9 + 0x18) = 0;
                                                    lVar12 = thunk_FUN_0367fe20(uVar11);
                                                    FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                         PTR_DAT_079fb380);
                                                    if (lVar12 != 0) {
                                                      lVar13 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_UnityEngine_UIElements_BaseField<int>__ctor__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromSharedRooms>d__67>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_036b7ad0(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                                                  FUN_07119848(lVar9,0);
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar9 + 0x18) = 3;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                       PTR_DAT_079fb380);
                                                  if (lVar12 != 0) {
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_036b7ad0(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                                                  FUN_07119848(lVar9,0);
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a13ae0;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar9 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20))
                                                    ;
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar9 + 0x18) = 3;
                                                    lVar12 = thunk_FUN_0367fe20(uVar11);
                                                    FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                         PTR_DAT_079fb380);
                                                    if (lVar12 != 0) {
                                                      lVar13 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_036b7ad0(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
                                                  FUN_07119848(lVar9,0);
                                                  puVar4 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x20) =
                                                       *(undefined8 *)puVar4;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar9 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar9 + 0x18) = 4;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                       PTR_DAT_079fb380);
                                                  if (lVar12 != 0) {
                                                    lVar13 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                                  ;
                                                  lVar14 = *(long *)puVar3;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x30),lVar12);
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_07119840(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x29;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    lVar15 = *(long *)puVar5;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar14 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar10 = (long *)(lVar14 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar10 = lVar13;
                                                        thunk_FUN_036b7ad0(plVar10,lVar13);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x28),lVar12);
                                                  lVar12 = *(long *)(lVar8 + 0x10);
                                                  lVar13 = *(long *)puVar6;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar10,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
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


