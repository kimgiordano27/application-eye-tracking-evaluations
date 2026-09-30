/*
FUNCTION_NAME: UnityEngine.GUIUtility$$HitTest
ENTRY_POINT: 07128e24
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_GUIUtility__HitTest(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_x10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  
  *(int *)(unaff_x22 + 0x18) = (int)in_x10 + 1;
  *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = param_3;
  thunk_FUN_036b7ad0();
  *(long *)(unaff_x21 + 0x30) = unaff_x22;
  thunk_FUN_036b7ad0();
  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                            );
  FUN_0459e7d4(lVar3,*(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__);
  lVar4 = thunk_FUN_0367fe20(*unaff_x27);
  FUN_05e5ae34(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetResult__;
    thunk_FUN_036b7ad0();
    *(undefined8 *)(lVar4 + 0x10) = *unaff_x25;
    thunk_FUN_036b7ad0();
    lVar5 = thunk_FUN_0367fe20(*unaff_x26);
    FUN_0459e7d4(lVar5,*unaff_x19);
    if (lVar5 != 0) {
      lVar8 = *(long *)(lVar5 + 0x10);
      uVar7 = *(undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__;
      lVar9 = *unaff_x28;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
          thunk_FUN_036b7ad0();
        }
        else {
          FUN_0459f03c(lVar5,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
        }
        *(long *)(lVar4 + 0x20) = lVar5;
        thunk_FUN_036b7ad0((long *)(lVar4 + 0x20),lVar5);
        if (lVar3 != 0) {
          lVar5 = *(long *)(lVar3 + 0x10);
          lVar8 = *unaff_x29;
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar5 != 0) {
            uVar1 = *(uint *)(lVar3 + 0x18);
            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar1 + 1;
              plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
              *plVar6 = lVar4;
              thunk_FUN_036b7ad0(plVar6,lVar4);
            }
            else {
              FUN_0459f03c(lVar3,lVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            lVar4 = thunk_FUN_0367fe20(*unaff_x27);
            FUN_05e5ae34(lVar4,0);
            if (lVar4 != 0) {
              *(undefined8 *)(lVar4 + 0x18) =
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromJsonSharedLib>d__89>__
              ;
              thunk_FUN_036b7ad0();
              *(undefined8 *)(lVar4 + 0x10) = *unaff_x25;
              thunk_FUN_036b7ad0();
              lVar5 = thunk_FUN_0367fe20(*unaff_x26);
              FUN_0459e7d4(lVar5,*unaff_x19);
              if (lVar5 != 0) {
                lVar8 = *(long *)(lVar5 + 0x10);
                uVar7 = *(undefined8 *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                ;
                lVar9 = *unaff_x28;
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
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  *(long *)(lVar4 + 0x20) = lVar5;
                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x20),lVar5);
                  lVar5 = *(long *)(lVar3 + 0x10);
                  lVar8 = *unaff_x29;
                  *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                  puVar2 = 
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                  ;
                  if (lVar5 != 0) {
                    uVar1 = *(uint *)(lVar3 + 0x18);
                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                      *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar6 = lVar4;
                      thunk_FUN_036b7ad0(plVar6,lVar4);
                    }
                    else {
                      FUN_0459f03c(lVar3,lVar4,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                    *(long *)(unaff_x21 + 0x28) = lVar3;
                    thunk_FUN_036b7ad0((long *)(unaff_x21 + 0x28),lVar3);
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
                        uVar7 = *unaff_x26;
                        *(undefined4 *)(lVar3 + 0x18) = 0;
                        lVar4 = thunk_FUN_0367fe20(uVar7);
                        FUN_0459e7d4(lVar4,*unaff_x19);
                        if (lVar4 != 0) {
                          lVar5 = *(long *)(lVar4 + 0x10);
                          uVar7 = *(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__25>__
                          ;
                          lVar8 = *unaff_x28;
                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                          if (lVar5 != 0) {
                            uVar1 = *(uint *)(lVar4 + 0x18);
                            if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                              *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                              thunk_FUN_036b7ad0();
                            }
                            else {
                              FUN_0459f03c(lVar4,uVar7,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar3 + 0x30) = lVar4;
                            thunk_FUN_036b7ad0((long *)(lVar3 + 0x30),lVar4);
                            lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                            FUN_0459e7d4(lVar4,*(undefined8 *)
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                        );
                            lVar5 = thunk_FUN_0367fe20(*unaff_x27);
                            FUN_05e5ae34(lVar5,0);
                            if (lVar5 != 0) {
                              *(undefined8 *)(lVar5 + 0x18) =
                                   *(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetException__
                              ;
                              thunk_FUN_036b7ad0();
                              *(undefined8 *)(lVar5 + 0x10) = *unaff_x25;
                              thunk_FUN_036b7ad0();
                              lVar8 = thunk_FUN_0367fe20(*unaff_x26);
                              FUN_0459e7d4(lVar8,*unaff_x19);
                              if (lVar8 != 0) {
                                lVar9 = *(long *)(lVar8 + 0x10);
                                uVar7 = *(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                ;
                                lVar10 = *unaff_x28;
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
                                  *(long *)(lVar5 + 0x20) = lVar8;
                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x20),lVar8);
                                  if (lVar4 != 0) {
                                    lVar8 = *(long *)(lVar4 + 0x10);
                                    lVar9 = *unaff_x29;
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
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      lVar5 = thunk_FUN_0367fe20(*unaff_x27);
                                      FUN_05e5ae34(lVar5,0);
                                      if (lVar5 != 0) {
                                        *(undefined8 *)(lVar5 + 0x18) =
                                             *(undefined8 *)
                                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinOpenRoom>d__28>__
                                        ;
                                        thunk_FUN_036b7ad0();
                                        *(undefined8 *)(lVar5 + 0x10) = *unaff_x25;
                                        thunk_FUN_036b7ad0();
                                        lVar8 = thunk_FUN_0367fe20(*unaff_x26);
                                        FUN_0459e7d4(lVar8,*unaff_x19);
                                        if (lVar8 != 0) {
                                          lVar9 = *(long *)(lVar8 + 0x10);
                                          uVar7 = *(undefined8 *)
                                                                                                      
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                          ;
                                          lVar10 = *unaff_x28;
                                          *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                          if (lVar9 != 0) {
                                            uVar1 = *(uint *)(lVar8 + 0x18);
                                            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar7;
                                              thunk_FUN_036b7ad0();
                                            }
                                            else {
                                              FUN_0459f03c(lVar8,uVar7,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar10 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar5 + 0x20) = lVar8;
                                            thunk_FUN_036b7ad0((long *)(lVar5 + 0x20),lVar8);
                                            lVar8 = *(long *)(lVar4 + 0x10);
                                            lVar9 = *unaff_x29;
                                            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                            puVar2 = 
                                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                            ;
                                            if (lVar8 != 0) {
                                              uVar1 = *(uint *)(lVar4 + 0x18);
                                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                 0x20);
                                                *plVar6 = lVar5;
                                                thunk_FUN_036b7ad0(plVar6,lVar5);
                                              }
                                              else {
                                                FUN_0459f03c(lVar4,lVar5,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                        0xc0) + 0x70));
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
                                                  plVar6 = (long *)(lVar4 + (long)(int)uVar1 * 8 +
                                                                   0x20);
                                                  *plVar6 = lVar3;
                                                  thunk_FUN_036b7ad0(plVar6,lVar3);
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
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                                                  uVar7 = *unaff_x26;
                                                  *(undefined4 *)(lVar3 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_0367fe20(uVar7);
                                                  FUN_0459e7d4(lVar4,*unaff_x19);
                                                  if (lVar4 != 0) {
                                                    lVar5 = *(long *)(lVar4 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__
                                                  ;
                                                  lVar8 = *unaff_x28;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
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
                                                  lVar5 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar5,0);
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar8,*unaff_x19);
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar10 = *unaff_x28;
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
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x20) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x20),lVar8);
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x29;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar5;
                                                        thunk_FUN_036b7ad0(plVar6,lVar5);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar4,lVar5,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar5 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar5,0);
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_Awaiter<NativeArray<int>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar8,*unaff_x19);
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar10 = *unaff_x28;
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
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x20) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x20),lVar8);
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,lVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                      plVar6 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar3;
                                                      thunk_FUN_036b7ad0(plVar6,lVar3);
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
                                                    uVar7 = *unaff_x26;
                                                    *(undefined4 *)(lVar3 + 0x18) = 0;
                                                    lVar4 = thunk_FUN_0367fe20(uVar7);
                                                    FUN_0459e7d4(lVar4,*unaff_x19);
                                                    if (lVar4 != 0) {
                                                      lVar5 = *(long *)(lVar4 + 0x10);
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetResult__
                                                  ;
                                                  lVar8 = *unaff_x28;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
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
                                                  lVar5 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar5,0);
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__25>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar8,*unaff_x19);
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar10 = *unaff_x28;
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
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x20) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x20),lVar8);
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x29;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar5;
                                                        thunk_FUN_036b7ad0(plVar6,lVar5);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar4,lVar5,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar5 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar5,0);
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar8,*unaff_x19);
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar10 = *unaff_x28;
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
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x20) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x20),lVar8);
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,lVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                      plVar6 = (long *)(lVar4 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar3;
                                                      thunk_FUN_036b7ad0(plVar6,lVar3);
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
                                                  uVar7 = *unaff_x26;
                                                  *(undefined4 *)(lVar3 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_0367fe20(uVar7);
                                                  FUN_0459e7d4(lVar4,*unaff_x19);
                                                  if (lVar4 != 0) {
                                                    lVar5 = *(long *)(lVar4 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_Awaitable<NativeArray<int>>_GetAwaiter__
                                                  ;
                                                  lVar8 = *unaff_x28;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
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
                                                  lVar5 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar5,0);
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<List<bool>>_GetResult__;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar8,*unaff_x19);
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar10 = *unaff_x28;
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
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x20) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x20),lVar8);
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x29;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar5;
                                                        thunk_FUN_036b7ad0(plVar6,lVar5);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar4,lVar5,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar5 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar5,0);
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_get_IsCompleted__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar8,*unaff_x19);
                                                  if (lVar8 != 0) {
                                                    lVar9 = *(long *)(lVar8 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar10 = *unaff_x28;
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
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x20) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x20),lVar8);
                                                  lVar8 = *(long *)(lVar4 + 0x10);
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar4 + 0x1c) =
                                                       *(int *)(lVar4 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar4 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar4,lVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


