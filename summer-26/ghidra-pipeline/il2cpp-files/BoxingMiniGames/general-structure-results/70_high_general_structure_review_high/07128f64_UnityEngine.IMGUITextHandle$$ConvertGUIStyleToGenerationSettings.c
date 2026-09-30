/*
FUNCTION_NAME: UnityEngine.IMGUITextHandle$$ConvertGUIStyleToGenerationSettings
ENTRY_POINT: 07128f64
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 83
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_IMGUITextHandle__ConvertGUIStyleToGenerationSettings(long param_1)

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
  long lVar10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = unaff_x23;
      thunk_FUN_036b7ad0();
    }
    else {
      FUN_0459f03c();
    }
    lVar3 = thunk_FUN_0367fe20(*unaff_x27);
    FUN_05e5ae34(lVar3,0);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x18) =
           *(undefined8 *)
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromJsonSharedLib>d__89>__
      ;
      thunk_FUN_036b7ad0();
      *(undefined8 *)(lVar3 + 0x10) = *unaff_x25;
      thunk_FUN_036b7ad0();
      lVar4 = thunk_FUN_0367fe20(*unaff_x26);
      FUN_0459e7d4(lVar4,*unaff_x19);
      if (lVar4 != 0) {
        lVar7 = *(long *)(lVar4 + 0x10);
        uVar6 = *(undefined8 *)
                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__;
        lVar9 = *unaff_x28;
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
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
          *(long *)(lVar3 + 0x20) = lVar4;
          thunk_FUN_036b7ad0((long *)(lVar3 + 0x20),lVar4);
          lVar4 = *(long *)(unaff_x22 + 0x10);
          *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
          puVar2 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
          ;
          if (lVar4 != 0) {
            uVar1 = *(uint *)(unaff_x22 + 0x18);
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
              plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
              *plVar5 = lVar3;
              thunk_FUN_036b7ad0(plVar5,lVar3);
            }
            else {
              FUN_0459f03c();
            }
            *(long *)(unaff_x21 + 0x28) = unaff_x22;
            thunk_FUN_036b7ad0();
            lVar3 = *(long *)(unaff_x20 + 0x10);
            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
            if (lVar3 != 0) {
              uVar1 = *(uint *)(unaff_x20 + 0x18);
              if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
                thunk_FUN_036b7ad0();
              }
              else {
                FUN_0459f03c();
              }
              lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
              FUN_05e5ae34(lVar3,0);
              puVar2 = 
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetResult__
              ;
              if (lVar3 != 0) {
                *(undefined8 *)(lVar3 + 0x10) =
                     *(undefined8 *)System_Runtime_CompilerServices_Ephemeron___TypeInfo;
                thunk_FUN_036b7ad0();
                *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                uVar6 = *unaff_x26;
                *(undefined4 *)(lVar3 + 0x18) = 0;
                lVar4 = thunk_FUN_0367fe20(uVar6);
                FUN_0459e7d4(lVar4,*unaff_x19);
                if (lVar4 != 0) {
                  lVar7 = *(long *)(lVar4 + 0x10);
                  uVar6 = *(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__25>__
                  ;
                  lVar9 = *unaff_x28;
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
                                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    *(long *)(lVar3 + 0x30) = lVar4;
                    thunk_FUN_036b7ad0((long *)(lVar3 + 0x30),lVar4);
                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                              );
                    FUN_0459e7d4(lVar4,*(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                );
                    lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                    FUN_05e5ae34(lVar7,0);
                    if (lVar7 != 0) {
                      *(undefined8 *)(lVar7 + 0x18) =
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetException__
                      ;
                      thunk_FUN_036b7ad0();
                      *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                      thunk_FUN_036b7ad0();
                      lVar9 = thunk_FUN_0367fe20(*unaff_x26);
                      FUN_0459e7d4(lVar9,*unaff_x19);
                      if (lVar9 != 0) {
                        lVar8 = *(long *)(lVar9 + 0x10);
                        uVar6 = *(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                        ;
                        lVar10 = *unaff_x28;
                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                        if (lVar8 != 0) {
                          uVar1 = *(uint *)(lVar9 + 0x18);
                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                            thunk_FUN_036b7ad0();
                          }
                          else {
                            FUN_0459f03c(lVar9,uVar6,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar7 + 0x20) = lVar9;
                          thunk_FUN_036b7ad0((long *)(lVar7 + 0x20),lVar9);
                          if (lVar4 != 0) {
                            lVar9 = *(long *)(lVar4 + 0x10);
                            lVar8 = *unaff_x29;
                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                            if (lVar9 != 0) {
                              uVar1 = *(uint *)(lVar4 + 0x18);
                              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar5 = lVar7;
                                thunk_FUN_036b7ad0(plVar5,lVar7);
                              }
                              else {
                                FUN_0459f03c(lVar4,lVar7,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                              FUN_05e5ae34(lVar7,0);
                              if (lVar7 != 0) {
                                *(undefined8 *)(lVar7 + 0x18) =
                                     *(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinOpenRoom>d__28>__
                                ;
                                thunk_FUN_036b7ad0();
                                *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                thunk_FUN_036b7ad0();
                                lVar9 = thunk_FUN_0367fe20(*unaff_x26);
                                FUN_0459e7d4(lVar9,*unaff_x19);
                                if (lVar9 != 0) {
                                  lVar8 = *(long *)(lVar9 + 0x10);
                                  uVar6 = *(undefined8 *)
                                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                  ;
                                  lVar10 = *unaff_x28;
                                  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                  if (lVar8 != 0) {
                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                                      thunk_FUN_036b7ad0();
                                    }
                                    else {
                                      FUN_0459f03c(lVar9,uVar6,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar7 + 0x20) = lVar9;
                                    thunk_FUN_036b7ad0((long *)(lVar7 + 0x20),lVar9);
                                    lVar9 = *(long *)(lVar4 + 0x10);
                                    lVar8 = *unaff_x29;
                                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                    puVar2 = 
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                    ;
                                    if (lVar9 != 0) {
                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar5 = lVar7;
                                        thunk_FUN_036b7ad0(plVar5,lVar7);
                                      }
                                      else {
                                        FUN_0459f03c(lVar4,lVar7,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar3 + 0x28) = lVar4;
                                      thunk_FUN_036b7ad0((long *)(lVar3 + 0x28),lVar4);
                                      lVar4 = *(long *)(unaff_x20 + 0x10);
                                      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                      if (lVar4 != 0) {
                                        uVar1 = *(uint *)(unaff_x20 + 0x18);
                                        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                          plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar5 = lVar3;
                                          thunk_FUN_036b7ad0(plVar5,lVar3);
                                        }
                                        else {
                                          FUN_0459f03c();
                                        }
                                        lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                        FUN_05e5ae34(lVar3,0);
                                        puVar2 = 
                                        Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_Start<Tensor_<ReadbackAndCloneAsync>d__28>__
                                        ;
                                        if (lVar3 != 0) {
                                          *(undefined8 *)(lVar3 + 0x10) =
                                               *(undefined8 *)
                                                UnityEngine_UIElements_FilterParameterDeclaration___TypeInfo
                                          ;
                                          thunk_FUN_036b7ad0();
                                          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                          thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                                          uVar6 = *unaff_x26;
                                          *(undefined4 *)(lVar3 + 0x18) = 0;
                                          lVar4 = thunk_FUN_0367fe20(uVar6);
                                          FUN_0459e7d4(lVar4,*unaff_x19);
                                          if (lVar4 != 0) {
                                            lVar7 = *(long *)(lVar4 + 0x10);
                                            uVar6 = *(undefined8 *)
                                                                                                          
                                                  Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__
                                            ;
                                            lVar9 = *unaff_x28;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            if (lVar7 != 0) {
                                              uVar1 = *(uint *)(lVar4 + 0x18);
                                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20)
                                                     = uVar6;
                                                thunk_FUN_036b7ad0();
                                              }
                                              else {
                                                FUN_0459f03c(lVar4,uVar6,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar3 + 0x30) = lVar4;
                                              thunk_FUN_036b7ad0((long *)(lVar3 + 0x30),lVar4);
                                              lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                              FUN_0459e7d4(lVar4,*(undefined8 *)
                                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                              lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                                              FUN_05e5ae34(lVar7,0);
                                              if (lVar7 != 0) {
                                                *(undefined8 *)(lVar7 + 0x18) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_get_Task__
                                                ;
                                                thunk_FUN_036b7ad0();
                                                *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                thunk_FUN_036b7ad0();
                                                lVar9 = thunk_FUN_0367fe20(*unaff_x26);
                                                FUN_0459e7d4(lVar9,*unaff_x19);
                                                if (lVar9 != 0) {
                                                  lVar8 = *(long *)(lVar9 + 0x10);
                                                  uVar6 = *(undefined8 *)
                                                                                                                      
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar10 = *unaff_x28;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x20) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x20),lVar9);
                                                  if (lVar4 != 0) {
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *unaff_x29;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_036b7ad0(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_Awaiter<NativeArray<int>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar9,*unaff_x19);
                                                  if (lVar9 != 0) {
                                                    lVar8 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar10 = *unaff_x28;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x20) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x20),lVar9);
                                                  lVar9 = *(long *)(lVar4 + 0x10);
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar3 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_036b7ad0(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e5ae34(lVar3,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Start<WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Globalization_EraInfo___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar3 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20))
                                                    ;
                                                    uVar6 = *unaff_x26;
                                                    *(undefined4 *)(lVar3 + 0x18) = 0;
                                                    lVar4 = thunk_FUN_0367fe20(uVar6);
                                                    FUN_0459e7d4(lVar4,*unaff_x19);
                                                    if (lVar4 != 0) {
                                                      lVar7 = *(long *)(lVar4 + 0x10);
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetResult__
                                                  ;
                                                  lVar9 = *unaff_x28;
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
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__25>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar9,*unaff_x19);
                                                  if (lVar9 != 0) {
                                                    lVar8 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar10 = *unaff_x28;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x20) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x20),lVar9);
                                                  if (lVar4 != 0) {
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *unaff_x29;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_036b7ad0(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar9,*unaff_x19);
                                                  if (lVar9 != 0) {
                                                    lVar8 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar10 = *unaff_x28;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x20) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x20),lVar9);
                                                  lVar9 = *(long *)(lVar4 + 0x10);
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar3 + 0x28),lVar4);
                                                  lVar4 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar4 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar3;
                                                      thunk_FUN_036b7ad0(plVar5,lVar3);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar3 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e5ae34(lVar3,0);
                                                    puVar2 = 
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>_GetResult__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_IO_LowLevel_Unsafe_FileReadType___TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                                                  uVar6 = *unaff_x26;
                                                  *(undefined4 *)(lVar3 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_0367fe20(uVar6);
                                                  FUN_0459e7d4(lVar4,*unaff_x19);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_Awaitable<NativeArray<int>>_GetAwaiter__
                                                  ;
                                                  lVar9 = *unaff_x28;
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
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar3 + 0x30),lVar4);
                                                  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar4,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<List<bool>>_GetResult__;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar9,*unaff_x19);
                                                  if (lVar9 != 0) {
                                                    lVar8 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar10 = *unaff_x28;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x20) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x20),lVar9);
                                                  if (lVar4 != 0) {
                                                    lVar9 = *(long *)(lVar4 + 0x10);
                                                    lVar8 = *unaff_x29;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar5 = lVar7;
                                                        thunk_FUN_036b7ad0(plVar5,lVar7);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar4,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_get_IsCompleted__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar9,*unaff_x19);
                                                  if (lVar9 != 0) {
                                                    lVar8 = *(long *)(lVar9 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar10 = *unaff_x28;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar6
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,uVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar7 + 0x20) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar7 + 0x20),lVar9);
                                                  lVar9 = *(long *)(lVar4 + 0x10);
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar5 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar5 = lVar7;
                                                      thunk_FUN_036b7ad0(plVar5,lVar7);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,lVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar4;
                                                  thunk_FUN_036b7ad0((long *)(lVar3 + 0x28),lVar4);
                                                  FUN_0753c5a8(*(undefined8 *)(unaff_x20 + 0x10));
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
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


