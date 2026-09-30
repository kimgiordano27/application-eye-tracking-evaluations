/*
FUNCTION_NAME: UnityEngineInternal.Input.NativeInputSystem$$.cctor
ENTRY_POINT: 07140238
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;telemetry_or_network_hits_1;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngineInternal_Input_NativeInputSystem___cctor(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  if (unaff_x23 != 0) {
    lVar6 = *(long *)(unaff_x23 + 0x10);
    uVar5 = *(undefined8 *)Method_UnityEngine_UIElements_BaseField<int>_SetValueWithoutNotify__;
    *(int *)(unaff_x23 + 0x1c) = *(int *)(unaff_x23 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(unaff_x23 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(unaff_x23 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
        thunk_FUN_036b7ad0();
      }
      else {
        FUN_0459f03c();
      }
      *(long *)(unaff_x22 + 0x30) = unaff_x23;
      thunk_FUN_036b7ad0();
      lVar6 = thunk_FUN_0367fe20(*unaff_x20);
      FUN_0459e7d4(lVar6,*unaff_x25);
      lVar3 = thunk_FUN_0367fe20(*unaff_x19);
      FUN_07119840(lVar3,0);
      if (lVar3 != 0) {
        *(undefined8 *)(lVar3 + 0x18) =
             *(undefined8 *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromPrefab>d__74>__
        ;
        thunk_FUN_036b7ad0();
        *(undefined8 *)(lVar3 + 0x10) = *unaff_x28;
        thunk_FUN_036b7ad0();
        if (lVar6 != 0) {
          lVar7 = *(long *)(lVar6 + 0x10);
          lVar8 = *(long *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
          ;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              plVar4 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
              *plVar4 = lVar3;
              thunk_FUN_036b7ad0(plVar4,lVar3);
            }
            else {
              FUN_0459f03c(lVar6,lVar3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x22 + 0x28) = lVar6;
            thunk_FUN_036b7ad0((long *)(unaff_x22 + 0x28),lVar6);
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
              lVar6 = thunk_FUN_0367fe20(*unaff_x29);
              FUN_07119848(lVar6,0);
              puVar2 = Method_UnityEngine_UIElements_BaseField<uint>_get_labelElement__;
              if (lVar6 != 0) {
                *(undefined8 *)(lVar6 + 0x10) =
                     *(undefined8 *)
                      Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_get_visualInput__
                ;
                thunk_FUN_036b7ad0();
                *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                puVar2 = PTR_DAT_079fb378;
                *(undefined4 *)(lVar6 + 0x18) = 1;
                lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                FUN_0459e7d4(lVar3,*unaff_x26);
                puVar2 = PTR_DAT_079fb388;
                if (lVar3 != 0) {
                  lVar7 = *(long *)(lVar3 + 0x10);
                  uVar5 = *(undefined8 *)
                           Method_UnityEngine_UIElements_BaseField<uint>_get_visualInput__;
                  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                  if (lVar7 != 0) {
                    uVar1 = *(uint *)(lVar3 + 0x18);
                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                      thunk_FUN_036b7ad0();
                    }
                    else {
                      FUN_0459f03c(lVar3,uVar5,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar6 + 0x30) = lVar3;
                    thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                    lVar3 = thunk_FUN_0367fe20(*unaff_x20);
                    FUN_0459e7d4(lVar3,*unaff_x25);
                    lVar7 = thunk_FUN_0367fe20(*unaff_x19);
                    FUN_07119840(lVar7,0);
                    if (lVar7 != 0) {
                      *(undefined8 *)(lVar7 + 0x18) =
                           *(undefined8 *)
                            Method_UnityEngine_UIElements_BaseField<Vector2>_HandleEventBubbleUp__;
                      thunk_FUN_036b7ad0();
                      *(undefined8 *)(lVar7 + 0x10) = *unaff_x28;
                      thunk_FUN_036b7ad0();
                      if (lVar3 != 0) {
                        lVar8 = *(long *)(lVar3 + 0x10);
                        lVar9 = *(long *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                        ;
                        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                        if (lVar8 != 0) {
                          uVar1 = *(uint *)(lVar3 + 0x18);
                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                            plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar4 = lVar7;
                            thunk_FUN_036b7ad0(plVar4,lVar7);
                          }
                          else {
                            FUN_0459f03c(lVar3,lVar7,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar6 + 0x28) = lVar3;
                          thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar3);
                          lVar3 = *(long *)(unaff_x21 + 0x10);
                          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                          if (lVar3 != 0) {
                            uVar1 = *(uint *)(unaff_x21 + 0x18);
                            if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                              plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar4 = lVar6;
                              thunk_FUN_036b7ad0(plVar4,lVar6);
                            }
                            else {
                              FUN_0459f03c();
                            }
                            lVar6 = thunk_FUN_0367fe20(*unaff_x29);
                            FUN_07119848(lVar6,0);
                            puVar2 = 
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromJsonString>d__77>__
                            ;
                            if (lVar6 != 0) {
                              *(undefined8 *)(lVar6 + 0x10) =
                                   *(undefined8 *)
                                    System_Linq_Expressions_Interpreter_EnterFinallyInstruction___TypeInfo
                              ;
                              thunk_FUN_036b7ad0();
                              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                              thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                              puVar2 = PTR_DAT_079fb378;
                              *(undefined4 *)(lVar6 + 0x18) = 0;
                              lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                              FUN_0459e7d4(lVar3,*unaff_x26);
                              puVar2 = PTR_DAT_079fb388;
                              if (lVar3 != 0) {
                                lVar7 = *(long *)(lVar3 + 0x10);
                                uVar5 = *(undefined8 *)
                                         Method_UnityEngine_UIElements_BaseField<int>__ctor__;
                                *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                if (lVar7 != 0) {
                                  uVar1 = *(uint *)(lVar3 + 0x18);
                                  if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                    *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                                    thunk_FUN_036b7ad0();
                                  }
                                  else {
                                    FUN_0459f03c(lVar3,uVar5,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(*(long *)puVar2 + 0x20) +
                                                            0xc0) + 0x70));
                                  }
                                  *(long *)(lVar6 + 0x30) = lVar3;
                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                  lVar3 = thunk_FUN_0367fe20(*unaff_x20);
                                  FUN_0459e7d4(lVar3,*unaff_x25);
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
                                    if (lVar3 != 0) {
                                      lVar8 = *(long *)(lVar3 + 0x10);
                                      lVar9 = *(long *)
                                               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                      ;
                                      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                      if (lVar8 != 0) {
                                        uVar1 = *(uint *)(lVar3 + 0x18);
                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                          plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar4 = lVar7;
                                          thunk_FUN_036b7ad0(plVar4,lVar7);
                                        }
                                        else {
                                          FUN_0459f03c(lVar3,lVar7,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                        0x70));
                                        }
                                        *(long *)(lVar6 + 0x28) = lVar3;
                                        thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar3);
                                        lVar3 = *(long *)(unaff_x21 + 0x10);
                                        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                        if (lVar3 != 0) {
                                          uVar1 = *(uint *)(unaff_x21 + 0x18);
                                          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                            plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar4 = lVar6;
                                            thunk_FUN_036b7ad0(plVar4,lVar6);
                                          }
                                          else {
                                            FUN_0459f03c();
                                          }
                                          lVar6 = thunk_FUN_0367fe20(*unaff_x29);
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
                                            *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                                            thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                            puVar2 = PTR_DAT_079fb378;
                                            *(undefined4 *)(lVar6 + 0x18) = 3;
                                            lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                            FUN_0459e7d4(lVar3,*unaff_x26);
                                            puVar2 = PTR_DAT_079fb388;
                                            if (lVar3 != 0) {
                                              lVar7 = *(long *)(lVar3 + 0x10);
                                              uVar5 = *(undefined8 *)
                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
                                              ;
                                              *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                              if (lVar7 != 0) {
                                                uVar1 = *(uint *)(lVar3 + 0x18);
                                                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                  *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                                                  thunk_FUN_036b7ad0();
                                                }
                                                else {
                                                  FUN_0459f03c(lVar3,uVar5,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(*(long *)puVar2
                                                                                    + 0x20) + 0xc0)
                                                                + 0x70));
                                                }
                                                *(long *)(lVar6 + 0x30) = lVar3;
                                                thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                                lVar3 = thunk_FUN_0367fe20(*unaff_x20);
                                                FUN_0459e7d4(lVar3,*unaff_x25);
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
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x29);
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
                                                    puVar2 = PTR_DAT_079fb378;
                                                    *(undefined4 *)(lVar6 + 0x18) = 3;
                                                    lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_0459e7d4(lVar3,*unaff_x26);
                                                    puVar2 = PTR_DAT_079fb388;
                                                    if (lVar3 != 0) {
                                                      lVar7 = *(long *)(lVar3 + 0x10);
                                                      uVar5 = *(undefined8 *)
                                                                                                                              
                                                  UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar3,*unaff_x25);
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
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x29);
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
                                                  puVar2 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar3,*unaff_x26);
                                                  puVar2 = PTR_DAT_079fb388;
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar3,*unaff_x25);
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
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar3 + 0x1c) =
                                                       *(int *)(lVar3 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar3 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar4,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar3,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x28) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x28),lVar3);
                                                  lVar3 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar4,lVar6);
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
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


