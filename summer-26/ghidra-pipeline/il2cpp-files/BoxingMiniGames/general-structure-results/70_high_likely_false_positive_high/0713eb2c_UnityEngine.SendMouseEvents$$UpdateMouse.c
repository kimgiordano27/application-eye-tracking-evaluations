/*
FUNCTION_NAME: UnityEngine.SendMouseEvents$$UpdateMouse
ENTRY_POINT: 0713eb2c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_SendMouseEvents__UpdateMouse(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar12;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  puVar12 = *(undefined8 **)(unaff_x23 + 0x410);
  *(undefined8 *)(param_2 + 0x10) = **(undefined8 **)(param_1 + 0xb30);
  thunk_FUN_036b7ad0();
  *(undefined8 *)(unaff_x22 + 0x20) = *puVar12;
  thunk_FUN_036b7ad0((undefined8 *)(unaff_x22 + 0x20));
  puVar2 = PTR_DAT_079fb378;
  *(undefined4 *)(unaff_x22 + 0x18) = 0;
  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
  FUN_0459e7d4(lVar5,*unaff_x26);
  puVar2 = PTR_DAT_079fb388;
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar5 + 0x10);
    uVar7 = *(undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetResult__
    ;
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
                     *(undefined8 *)(*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
      }
      *(long *)(unaff_x22 + 0x30) = lVar5;
      thunk_FUN_036b7ad0((long *)(unaff_x22 + 0x30),lVar5);
      lVar5 = thunk_FUN_0367fe20(*unaff_x20);
      FUN_0459e7d4(lVar5,*unaff_x25);
      lVar8 = thunk_FUN_0367fe20(*unaff_x19);
      FUN_07119840(lVar8,0);
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x18) =
             *(undefined8 *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetStateMachine__
        ;
        thunk_FUN_036b7ad0();
        *(undefined8 *)(lVar8 + 0x10) = *unaff_x28;
        thunk_FUN_036b7ad0();
        if (lVar5 != 0) {
          lVar9 = *(long *)(lVar5 + 0x10);
          lVar10 = *(long *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
          ;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar9 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
              *plVar6 = lVar8;
              thunk_FUN_036b7ad0(plVar6,lVar8);
            }
            else {
              FUN_0459f03c(lVar5,lVar8,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x22 + 0x28) = lVar5;
            thunk_FUN_036b7ad0((long *)(unaff_x22 + 0x28),lVar5);
            lVar5 = *(long *)(unaff_x21 + 0x10);
            *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
            if (lVar5 != 0) {
              uVar1 = *(uint *)(unaff_x21 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
                thunk_FUN_036b7ad0();
              }
              else {
                FUN_0459f03c();
              }
              lVar5 = thunk_FUN_0367fe20(*unaff_x29);
              FUN_07119848(lVar5,0);
              puVar2 = Method_OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>_GetResult__;
              if (lVar5 != 0) {
                *(undefined8 *)(lVar5 + 0x10) =
                     *(undefined8 *)Unity_IO_LowLevel_Unsafe_FileReadType___TypeInfo;
                thunk_FUN_036b7ad0();
                *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar2;
                thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                puVar2 = PTR_DAT_079fb378;
                *(undefined4 *)(lVar5 + 0x18) = 0;
                lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                FUN_0459e7d4(lVar8,*unaff_x26);
                puVar2 = PTR_DAT_079fb388;
                if (lVar8 != 0) {
                  lVar9 = *(long *)(lVar8 + 0x10);
                  uVar7 = *(undefined8 *)Method_UnityEngine_Awaitable<NativeArray<int>>_GetAwaiter__
                  ;
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (lVar9 != 0) {
                    uVar1 = *(uint *)(lVar8 + 0x18);
                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                      thunk_FUN_036b7ad0();
                    }
                    else {
                      FUN_0459f03c(lVar8,uVar7,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar5 + 0x30) = lVar8;
                    thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar8);
                    lVar8 = thunk_FUN_0367fe20(*unaff_x20);
                    FUN_0459e7d4(lVar8,*unaff_x25);
                    lVar9 = thunk_FUN_0367fe20(*unaff_x19);
                    FUN_07119840(lVar9,0);
                    if (lVar9 != 0) {
                      *(undefined8 *)(lVar9 + 0x18) =
                           *(undefined8 *)
                            Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_get_IsCompleted__
                      ;
                      thunk_FUN_036b7ad0();
                      *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                      thunk_FUN_036b7ad0();
                      if (lVar8 != 0) {
                        lVar10 = *(long *)(lVar8 + 0x10);
                        lVar11 = *(long *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                        ;
                        *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                        if (lVar10 != 0) {
                          uVar1 = *(uint *)(lVar8 + 0x18);
                          if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                            plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar6 = lVar9;
                            thunk_FUN_036b7ad0(plVar6,lVar9);
                          }
                          else {
                            FUN_0459f03c(lVar8,lVar9,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar5 + 0x28) = lVar8;
                          thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar8);
                          lVar8 = *(long *)(unaff_x21 + 0x10);
                          *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                          if (lVar8 != 0) {
                            uVar1 = *(uint *)(unaff_x21 + 0x18);
                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                              *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                              plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar6 = lVar5;
                              thunk_FUN_036b7ad0(plVar6,lVar5);
                            }
                            else {
                              FUN_0459f03c();
                            }
                            lVar5 = thunk_FUN_0367fe20(*unaff_x29);
                            FUN_07119848(lVar5,0);
                            puVar2 = PTR_DAT_07a2ca78;
                            if (lVar5 != 0) {
                              *(undefined8 *)(lVar5 + 0x10) =
                                   *(undefined8 *)Unity_InferenceEngine_DynamicTensorDim___TypeInfo;
                              thunk_FUN_036b7ad0();
                              *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar2;
                              thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                              puVar3 = PTR_DAT_079fb378;
                              *(undefined4 *)(lVar5 + 0x18) = 1;
                              lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                              FUN_0459e7d4(lVar8,*unaff_x26);
                              if (lVar8 != 0) {
                                lVar9 = *(long *)(lVar8 + 0x10);
                                uVar7 = *(undefined8 *)puVar2;
                                lVar10 = *(long *)PTR_DAT_079fb388;
                                *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                if (lVar9 != 0) {
                                  uVar1 = *(uint *)(lVar8 + 0x18);
                                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                    *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                                    thunk_FUN_036b7ad0();
                                  }
                                  else {
                                    FUN_0459f03c(lVar8,uVar7,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar5 + 0x30) = lVar8;
                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar8);
                                  lVar8 = thunk_FUN_0367fe20(*unaff_x20);
                                  FUN_0459e7d4(lVar8,*unaff_x25);
                                  lVar9 = thunk_FUN_0367fe20(*unaff_x19);
                                  FUN_07119840(lVar9,0);
                                  puVar2 = 
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetStateMachine__
                                  ;
                                  if (lVar9 != 0) {
                                    *(undefined8 *)(lVar9 + 0x18) =
                                         *(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetStateMachine__
                                    ;
                                    thunk_FUN_036b7ad0();
                                    *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                    thunk_FUN_036b7ad0();
                                    if (lVar8 != 0) {
                                      lVar10 = *(long *)(lVar8 + 0x10);
                                      lVar11 = *(long *)
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                      ;
                                      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                      if (lVar10 != 0) {
                                        uVar1 = *(uint *)(lVar8 + 0x18);
                                        if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                          *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                          plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar6 = lVar9;
                                          thunk_FUN_036b7ad0(plVar6,lVar9);
                                        }
                                        else {
                                          FUN_0459f03c(lVar8,lVar9,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        *(long *)(lVar5 + 0x28) = lVar8;
                                        thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar8);
                                        lVar8 = *(long *)(unaff_x21 + 0x10);
                                        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                                        if (lVar8 != 0) {
                                          uVar1 = *(uint *)(unaff_x21 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                            plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar6 = lVar5;
                                            thunk_FUN_036b7ad0(plVar6,lVar5);
                                          }
                                          else {
                                            FUN_0459f03c();
                                          }
                                          lVar5 = thunk_FUN_0367fe20(*unaff_x29);
                                          FUN_07119848(lVar5,0);
                                          puVar3 = 
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Create__
                                          ;
                                          if (lVar5 != 0) {
                                            *(undefined8 *)(lVar5 + 0x10) =
                                                 *(undefined8 *)UnityEngine_Display___TypeInfo;
                                            thunk_FUN_036b7ad0();
                                            *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar3;
                                            thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                            puVar3 = PTR_DAT_079fb378;
                                            *(undefined4 *)(lVar5 + 0x18) = 0;
                                            lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                            FUN_0459e7d4(lVar8,*(undefined8 *)PTR_DAT_079fb380);
                                            puVar3 = PTR_DAT_079fb388;
                                            if (lVar8 != 0) {
                                              lVar9 = *(long *)(lVar8 + 0x10);
                                              uVar7 = *(undefined8 *)
                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__26>__
                                              ;
                                              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                              if (lVar9 != 0) {
                                                uVar1 = *(uint *)(lVar8 + 0x18);
                                                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                                                  thunk_FUN_036b7ad0();
                                                }
                                                else {
                                                  FUN_0459f03c(lVar8,uVar7,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(*(long *)puVar3
                                                                                    + 0x20) + 0xc0)
                                                                + 0x70));
                                                }
                                                *(long *)(lVar5 + 0x30) = lVar8;
                                                thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar8);
                                                lVar8 = thunk_FUN_0367fe20(*unaff_x20);
                                                FUN_0459e7d4(lVar8,*unaff_x25);
                                                lVar9 = thunk_FUN_0367fe20(*unaff_x19);
                                                FUN_07119840(lVar9,0);
                                                if (lVar9 != 0) {
                                                  *(undefined8 *)(lVar9 + 0x18) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    *(int *)(lVar8 + 0x1c) =
                                                         *(int *)(lVar8 + 0x1c) + 1;
                                                    puVar3 = PTR_DAT_079fb380;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar8 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar8,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar5,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_SetValueWithoutNotify__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>__ctor__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  puVar2 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar5 + 0x18) = 1;
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar8,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_079fb388;
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_OnViewDataReady__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar8,*unaff_x25);
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<Vector2>__ctor__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar5,0);
                                                    puVar2 = PTR_DAT_07a2ca80;
                                                    if (lVar5 != 0) {
                                                      *(undefined8 *)(lVar5 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07a578d8;
                                                      thunk_FUN_036b7ad0();
                                                      *(undefined8 *)(lVar5 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_036b7ad0((undefined8 *)
                                                                         (lVar5 + 0x20));
                                                      puVar4 = PTR_DAT_079fb378;
                                                      *(undefined4 *)(lVar5 + 0x18) = 1;
                                                      lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                  puVar4);
                                                      FUN_0459e7d4(lVar8,*(undefined8 *)puVar3);
                                                      if (lVar8 != 0) {
                                                        lVar9 = *(long *)(lVar8 + 0x10);
                                                        uVar7 = *(undefined8 *)puVar2;
                                                        lVar10 = *(long *)PTR_DAT_079fb388;
                                                        *(int *)(lVar8 + 0x1c) =
                                                             *(int *)(lVar8 + 0x1c) + 1;
                                                        if (lVar9 != 0) {
                                                          uVar1 = *(uint *)(lVar8 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                            *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar7;
                                                            thunk_FUN_036b7ad0();
                                                          }
                                                          else {
                                                            FUN_0459f03c(lVar8,uVar7,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar8,*unaff_x25);
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar5,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<ulong>_get_rawValue__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Serialization_ElementData___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  puVar2 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar8,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_079fb388;
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetException__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar8,*unaff_x25);
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromPrefab>d__74>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar5,0);
                                                    puVar2 = 
                                                  Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Reflection_FieldInfo___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar5 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20))
                                                    ;
                                                    puVar2 = PTR_DAT_079fb378;
                                                    *(undefined4 *)(lVar5 + 0x18) = 0;
                                                    lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_0459e7d4(lVar8,*(undefined8 *)puVar3);
                                                    puVar2 = PTR_DAT_079fb388;
                                                    if (lVar8 != 0) {
                                                      lVar9 = *(long *)(lVar8 + 0x10);
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetResult__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar8,*unaff_x25);
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar5,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__26>__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a29538;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar5 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20))
                                                    ;
                                                    puVar2 = PTR_DAT_079fb378;
                                                    *(undefined4 *)(lVar5 + 0x18) = 2;
                                                    lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_0459e7d4(lVar8,*(undefined8 *)puVar3);
                                                    puVar2 = PTR_DAT_079fb388;
                                                    if (lVar8 != 0) {
                                                      lVar9 = *(long *)(lVar8 + 0x10);
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar8,*unaff_x25);
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar5,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetException__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_ComponentModel_EventDescriptor___TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  puVar2 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar8,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_079fb388;
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar8,*unaff_x25);
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar5,0);
                                                    puVar2 = 
                                                  Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallbackFunctorBase___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  puVar2 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar8,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_079fb388;
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonString>d__77>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar8,*unaff_x25);
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_AwaitOnCompleted<Awaitable_Awaiter<NativeArray<int>>,_Tensor_<ReadbackAndCloneAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar5,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonSharedLib>d__89>__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)System_Enum___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar5 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20))
                                                    ;
                                                    puVar2 = PTR_DAT_079fb378;
                                                    *(undefined4 *)(lVar5 + 0x18) = 2;
                                                    lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_0459e7d4(lVar8,*(undefined8 *)puVar3);
                                                    puVar2 = PTR_DAT_079fb388;
                                                    if (lVar8 != 0) {
                                                      lVar9 = *(long *)(lVar8 + 0x10);
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_UnityEngine_UIElements_BaseField<int>_SetValueWithoutNotify__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar8,*unaff_x25);
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromPrefab>d__74>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar5,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<uint>_get_labelElement__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<ToggleButtonGroupState>_get_visualInput__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  puVar2 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar5 + 0x18) = 1;
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar8,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_079fb388;
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseField<uint>_get_visualInput__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar8,*unaff_x25);
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<Vector2>_HandleEventBubbleUp__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar5,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromJsonString>d__77>__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_EnterFinallyInstruction___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  puVar2 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar8,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_079fb388;
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseField<int>__ctor__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar8,*unaff_x25);
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromSharedRooms>d__67>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar5,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  puVar2 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar5 + 0x18) = 3;
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar8,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_079fb388;
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar8,*unaff_x25);
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar5,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a13ae0;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar5 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20))
                                                    ;
                                                    puVar2 = PTR_DAT_079fb378;
                                                    *(undefined4 *)(lVar5 + 0x18) = 3;
                                                    lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_0459e7d4(lVar8,*(undefined8 *)puVar3);
                                                    puVar2 = PTR_DAT_079fb388;
                                                    if (lVar8 != 0) {
                                                      lVar9 = *(long *)(lVar8 + 0x10);
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar8,*unaff_x25);
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*unaff_x29);
                                                    FUN_07119848(lVar5,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  puVar2 = PTR_DAT_079fb378;
                                                  *(undefined4 *)(lVar5 + 0x18) = 4;
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar8,*(undefined8 *)puVar3);
                                                  puVar2 = PTR_DAT_079fb388;
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar2 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar8);
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x20);
                                                  FUN_0459e7d4(lVar8,*unaff_x25);
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x19);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    lVar11 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar8);
                                                  lVar8 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
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
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


