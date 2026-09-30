/*
FUNCTION_NAME: UnityEngine.Internal.InputUnsafeUtility$$GetButtonDown_Injected
ENTRY_POINT: 0713ff94
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 84
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_3;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_Internal_InputUnsafeUtility__GetButtonDown_Injected(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  *(undefined8 *)(param_1 + 0x20) = unaff_x22;
                    /* catch() { ... } // from try @ 0713ff7c with catch @ 0713ff98 */
  thunk_FUN_036b7ad0();
                    /* try { // try from 0713ff9c to 0723ffa3 has its CatchHandler @ 0713ffac */
  lVar3 = thunk_FUN_0367fe20(*unaff_x29);
  FUN_07119848(lVar3,0);
  puVar2 = Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) =
         *(undefined8 *)UnityEngine_UIElements_EventCallbackFunctorBase___TypeInfo;
    thunk_FUN_036b7ad0();
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
    thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
    puVar2 = PTR_DAT_079fb378;
    *(undefined4 *)(lVar3 + 0x18) = 0;
    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
    FUN_0459e7d4(lVar4,*unaff_x26);
    puVar2 = PTR_DAT_079fb388;
    if (lVar4 != 0) {
      lVar7 = *(long *)(lVar4 + 0x10);
      uVar6 = *(undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonString>d__77>__
      ;
      *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar4 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar4 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
          thunk_FUN_036b7ad0();
        }
        else {
          FUN_0459f03c(lVar4,uVar6,
                       *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(lVar3 + 0x30) = lVar4;
        thunk_FUN_036b7ad0((long *)(lVar3 + 0x30),lVar4);
        lVar4 = thunk_FUN_0367fe20(*unaff_x20);
        FUN_0459e7d4(lVar4,*unaff_x25);
        lVar7 = thunk_FUN_0367fe20(*unaff_x19);
        FUN_07119840(lVar7,0);
        if (lVar7 != 0) {
          *(undefined8 *)(lVar7 + 0x18) =
               *(undefined8 *)
                Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_AwaitOnCompleted<Awaitable_Awaiter<NativeArray<int>>,_Tensor_<ReadbackAndCloneAsync>d__28>__
          ;
          thunk_FUN_036b7ad0();
          *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
          thunk_FUN_036b7ad0();
          if (lVar4 != 0) {
            lVar8 = *(long *)(lVar4 + 0x10);
            lVar9 = *(long *)
                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
            ;
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
              *(long *)(lVar3 + 0x28) = lVar4;
              thunk_FUN_036b7ad0((long *)(lVar3 + 0x28),lVar4);
              lVar4 = *(long *)(unaff_x21 + 0x10);
              *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
              if (lVar4 != 0) {
                uVar1 = *(uint *)(unaff_x21 + 0x18);
                if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                  *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                  plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar5 = lVar3;
                  thunk_FUN_036b7ad0(plVar5,lVar3);
                }
                else {
                  FUN_0459f03c();
                }
                lVar3 = thunk_FUN_0367fe20(*unaff_x29);
                FUN_07119848(lVar3,0);
                puVar2 = 
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonSharedLib>d__89>__
                ;
                if (lVar3 != 0) {
                  *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)System_Enum___TypeInfo;
                  thunk_FUN_036b7ad0();
                  *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                  thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                  puVar2 = PTR_DAT_079fb378;
                  *(undefined4 *)(lVar3 + 0x18) = 2;
                  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                  FUN_0459e7d4(lVar4,*unaff_x26);
                  puVar2 = PTR_DAT_079fb388;
                  if (lVar4 != 0) {
                    lVar7 = *(long *)(lVar4 + 0x10);
                    uVar6 = *(undefined8 *)
                             Method_UnityEngine_UIElements_BaseField<int>_SetValueWithoutNotify__;
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    if (lVar7 != 0) {
                      uVar1 = *(uint *)(lVar4 + 0x18);
                      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                        thunk_FUN_036b7ad0();
                      }
                      else {
                        FUN_0459f03c(lVar4,uVar6,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar3 + 0x30) = lVar4;
                      thunk_FUN_036b7ad0((long *)(lVar3 + 0x30),lVar4);
                      lVar4 = thunk_FUN_0367fe20(*unaff_x20);
                      FUN_0459e7d4(lVar4,*unaff_x25);
                      lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                      FUN_07119840(lVar7,0);
                      if (lVar7 != 0) {
                        *(undefined8 *)(lVar7 + 0x18) =
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromPrefab>d__74>__
                        ;
                        thunk_FUN_036b7ad0();
                        *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                        thunk_FUN_036b7ad0();
                        if (lVar4 != 0) {
                          lVar8 = *(long *)(lVar4 + 0x10);
                          lVar9 = *(long *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                          ;
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
                            *(long *)(lVar3 + 0x28) = lVar4;
                            thunk_FUN_036b7ad0((long *)(lVar3 + 0x28),lVar4);
                            lVar4 = *(long *)(unaff_x21 + 0x10);
                            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                            if (lVar4 != 0) {
                              uVar1 = *(uint *)(unaff_x21 + 0x18);
                              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar5 = lVar3;
                                thunk_FUN_036b7ad0(plVar5,lVar3);
                              }
                              else {
                                FUN_0459f03c();
                              }
                              lVar3 = thunk_FUN_0367fe20(*unaff_x29);
                              FUN_07119848(lVar3,0);
                              puVar2 = 
                              Method_UnityEngine_UIElements_BaseField<uint>_get_labelElement__;
                              if (lVar3 != 0) {
                                *(undefined8 *)(lVar3 + 0x10) =
                                     *(undefined8 *)
                                      Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_get_visualInput__
                                ;
                                thunk_FUN_036b7ad0();
                                *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                                puVar2 = PTR_DAT_079fb378;
                                *(undefined4 *)(lVar3 + 0x18) = 1;
                                lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                FUN_0459e7d4(lVar4,*unaff_x26);
                                puVar2 = PTR_DAT_079fb388;
                                if (lVar4 != 0) {
                                  lVar7 = *(long *)(lVar4 + 0x10);
                                  uVar6 = *(undefined8 *)
                                           Method_UnityEngine_UIElements_BaseField<uint>_get_visualInput__
                                  ;
                                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                  if (lVar7 != 0) {
                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                      thunk_FUN_036b7ad0();
                                    }
                                    else {
                                      FUN_0459f03c(lVar4,uVar6,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(*(long *)puVar2 + 0x20) +
                                                              0xc0) + 0x70));
                                    }
                                    *(long *)(lVar3 + 0x30) = lVar4;
                                    thunk_FUN_036b7ad0((long *)(lVar3 + 0x30),lVar4);
                                    lVar4 = thunk_FUN_0367fe20(*unaff_x20);
                                    FUN_0459e7d4(lVar4,*unaff_x25);
                                    lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                                    FUN_07119840(lVar7,0);
                                    if (lVar7 != 0) {
                                      *(undefined8 *)(lVar7 + 0x18) =
                                           *(undefined8 *)
                                            Method_UnityEngine_UIElements_BaseField<Vector2>_HandleEventBubbleUp__
                                      ;
                                      thunk_FUN_036b7ad0();
                                      *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                      thunk_FUN_036b7ad0();
                                      if (lVar4 != 0) {
                                        lVar8 = *(long *)(lVar4 + 0x10);
                                        lVar9 = *(long *)
                                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                        ;
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
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                          }
                                          *(long *)(lVar3 + 0x28) = lVar4;
                                          thunk_FUN_036b7ad0((long *)(lVar3 + 0x28),lVar4);
                                          lVar4 = *(long *)(unaff_x21 + 0x10);
                                          *(int *)(unaff_x21 + 0x1c) =
                                               *(int *)(unaff_x21 + 0x1c) + 1;
                                          if (lVar4 != 0) {
                                            uVar1 = *(uint *)(unaff_x21 + 0x18);
                                            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                              plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20)
                                              ;
                                              *plVar5 = lVar3;
                                              thunk_FUN_036b7ad0(plVar5,lVar3);
                                            }
                                            else {
                                              FUN_0459f03c();
                                            }
                                            lVar3 = thunk_FUN_0367fe20(*unaff_x29);
                                            FUN_07119848(lVar3,0);
                                            puVar2 = 
                                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromJsonString>d__77>__
                                            ;
                                            if (lVar3 != 0) {
                                              *(undefined8 *)(lVar3 + 0x10) =
                                                   *(undefined8 *)
                                                                                                        
                                                  System_Linq_Expressions_Interpreter_EnterFinallyInstruction___TypeInfo
                                              ;
                                              thunk_FUN_036b7ad0();
                                              *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                              thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                                              puVar2 = PTR_DAT_079fb378;
                                              *(undefined4 *)(lVar3 + 0x18) = 0;
                                              lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                              FUN_0459e7d4(lVar4,*unaff_x26);
                                              puVar2 = PTR_DAT_079fb388;
                                              if (lVar4 != 0) {
                                                lVar7 = *(long *)(lVar4 + 0x10);
                                                uVar6 = *(undefined8 *)
                                                                                                                  
                                                  Method_UnityEngine_UIElements_BaseField<int>__ctor__
                                                ;
                                                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                                if (lVar7 != 0) {
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                                    thunk_FUN_036b7ad0();
                                                  }
                                                  else {
                                                    FUN_0459f03c(lVar4,uVar6,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar4,*unaff_x25);
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromSharedRooms>d__67>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar3 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_036b7ad0(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar3 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar3,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                                                  puVar2 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar3 + 0x18) = 3;
                                                  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar4,*unaff_x26);
                                                  puVar2 = PTR_DAT_079fb388;
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
                                                  ;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar4,*unaff_x25);
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar3 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_036b7ad0(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar3 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar3,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a13ae0;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar3 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20))
                                                    ;
                                                    puVar2 = PTR_DAT_079fb378;
                                                    *(undefined4 *)(lVar3 + 0x18) = 3;
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_0459e7d4(lVar4,*unaff_x26);
                                                    puVar2 = PTR_DAT_079fb388;
                                                    if (lVar4 != 0) {
                                                      lVar7 = *(long *)(lVar4 + 0x10);
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar4,*unaff_x25);
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar3 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_036b7ad0(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar3 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar3,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                                                  puVar2 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar3 + 0x18) = 4;
                                                  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar4,*unaff_x26);
                                                  puVar2 = PTR_DAT_079fb388;
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                                  ;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar4,*unaff_x25);
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar3 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_036b7ad0(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    *(long *)(in_stack_00000008 + 0x28) = unaff_x21;
                                                    thunk_FUN_036b7ad0();
                                                    FUN_07119614(in_stack_00000000,in_stack_00000008
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
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


