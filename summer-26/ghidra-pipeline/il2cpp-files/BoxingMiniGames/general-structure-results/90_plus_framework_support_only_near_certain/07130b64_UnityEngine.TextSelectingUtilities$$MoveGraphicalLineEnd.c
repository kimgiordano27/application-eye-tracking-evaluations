/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$MoveGraphicalLineEnd
ENTRY_POINT: 07130b64
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 183
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_11;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_16;telemetry_or_network_hits_7;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_7
*/


void UnityEngine_TextSelectingUtilities__MoveGraphicalLineEnd
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool in_CY;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long in_x10;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  if (in_CY) {
                    /* try { // try from 07130b84 to 07230b8f has its CatchHandler @ 07130fc4 */
    FUN_0459f03c();
  }
  else {
    *(int *)(unaff_x23 + 0x18) = (int)in_x10 + 1;
    *(undefined8 *)(param_1 + in_x10 * 8 + 0x20) = param_3;
    thunk_FUN_036b7ad0();
  }
                    /* try { // try from 07130b98 to 07230ba3 has its CatchHandler @ 07130fc0 */
  *(long *)(unaff_x22 + 0x30) = unaff_x23;
  thunk_FUN_036b7ad0();
  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                            );
  FUN_0459e7d4(lVar4,*(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__);
  lVar5 = thunk_FUN_0367fe20(*unaff_x28);
  FUN_07119840(lVar5,0);
  if (lVar5 != 0) {
                    /* try { // try from 07130be0 to 07230beb has its CatchHandler @ 07131030 */
    *(undefined8 *)(lVar5 + 0x18) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetException__
    ;
    thunk_FUN_036b7ad0();
                    /* try { // try from 07130c00 to 07230c03 has its CatchHandler @ 07130fdc */
    *(undefined8 *)(lVar5 + 0x10) = *unaff_x26;
                    /* try { // try from 07130c04 to 07230c0b has its CatchHandler @ 0713102c */
    thunk_FUN_036b7ad0();
    lVar6 = thunk_FUN_0367fe20(*unaff_x27);
    FUN_0459e7d4(lVar6,*unaff_x20);
    if (lVar6 != 0) {
      lVar9 = *(long *)(lVar6 + 0x10);
      uVar8 = *(undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__;
      lVar10 = *unaff_x29;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      if (lVar9 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
          thunk_FUN_036b7ad0();
        }
        else {
          FUN_0459f03c(lVar6,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(lVar5 + 0x20) = lVar6;
        thunk_FUN_036b7ad0((long *)(lVar5 + 0x20),lVar6);
        if (lVar4 != 0) {
          lVar6 = *(long *)(lVar4 + 0x10);
          lVar9 = *unaff_x19;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
              *plVar7 = lVar5;
              thunk_FUN_036b7ad0(plVar7,lVar5);
            }
            else {
              FUN_0459f03c(lVar4,lVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            lVar5 = thunk_FUN_0367fe20(*unaff_x28);
            FUN_07119840(lVar5,0);
            if (lVar5 != 0) {
              *(undefined8 *)(lVar5 + 0x18) =
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinOpenRoom>d__28>__
              ;
              thunk_FUN_036b7ad0();
              *(undefined8 *)(lVar5 + 0x10) = *unaff_x26;
              thunk_FUN_036b7ad0();
              lVar6 = thunk_FUN_0367fe20(*unaff_x27);
              FUN_0459e7d4(lVar6,*unaff_x20);
              if (lVar6 != 0) {
                lVar9 = *(long *)(lVar6 + 0x10);
                uVar8 = *(undefined8 *)
                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                ;
                lVar10 = *unaff_x29;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar9 != 0) {
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                    thunk_FUN_036b7ad0();
                  }
                  else {
                    FUN_0459f03c(lVar6,uVar8,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar5 + 0x20) = lVar6;
                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x20),lVar6);
                  lVar6 = *(long *)(lVar4 + 0x10);
                  lVar9 = *unaff_x19;
                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                  puVar2 = 
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                  ;
                  if (lVar6 != 0) {
                    uVar1 = *(uint *)(lVar4 + 0x18);
                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                      *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                      *plVar7 = lVar5;
                      thunk_FUN_036b7ad0(plVar7,lVar5);
                    }
                    else {
                      FUN_0459f03c(lVar4,lVar5,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                  );
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
                      lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                      FUN_07119848(lVar4,0);
                      puVar2 = 
                      Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_Start<Tensor_<ReadbackAndCloneAsync>d__28>__
                      ;
                      if (lVar4 != 0) {
                        *(undefined8 *)(lVar4 + 0x10) =
                             *(undefined8 *)
                              UnityEngine_UIElements_FilterParameterDeclaration___TypeInfo;
                        thunk_FUN_036b7ad0();
                        *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                        thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                        uVar8 = *unaff_x27;
                        *(undefined4 *)(lVar4 + 0x18) = 0;
                        lVar5 = thunk_FUN_0367fe20(uVar8);
                        FUN_0459e7d4(lVar5,*unaff_x20);
                        if (lVar5 != 0) {
                          lVar6 = *(long *)(lVar5 + 0x10);
                          uVar8 = *(undefined8 *)
                                   Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__
                          ;
                          lVar9 = *unaff_x29;
                          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                          if (lVar6 != 0) {
                            uVar1 = *(uint *)(lVar5 + 0x18);
                            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                              *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                              thunk_FUN_036b7ad0();
                            }
                            else {
                              FUN_0459f03c(lVar5,uVar8,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar4 + 0x30) = lVar5;
                            thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                            lVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                            FUN_0459e7d4(lVar5,*(undefined8 *)
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                        );
                            lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                            FUN_07119840(lVar6,0);
                            if (lVar6 != 0) {
                              *(undefined8 *)(lVar6 + 0x18) =
                                   *(undefined8 *)
                                    Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_get_Task__
                              ;
                              thunk_FUN_036b7ad0();
                              *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                              thunk_FUN_036b7ad0();
                              lVar9 = thunk_FUN_0367fe20(*unaff_x27);
                              FUN_0459e7d4(lVar9,*unaff_x20);
                              if (lVar9 != 0) {
                                lVar10 = *(long *)(lVar9 + 0x10);
                                uVar8 = *(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                ;
                                lVar11 = *unaff_x29;
                                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                if (lVar10 != 0) {
                                  uVar1 = *(uint *)(lVar9 + 0x18);
                                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar8;
                                    thunk_FUN_036b7ad0();
                                  }
                                  else {
                                    FUN_0459f03c(lVar9,uVar8,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar6 + 0x20) = lVar9;
                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x20),lVar9);
                                  if (lVar5 != 0) {
                                    lVar9 = *(long *)(lVar5 + 0x10);
                                    lVar10 = *unaff_x19;
                                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                    if (lVar9 != 0) {
                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar7 = lVar6;
                                        thunk_FUN_036b7ad0(plVar7,lVar6);
                                      }
                                      else {
                                        FUN_0459f03c(lVar5,lVar6,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                      FUN_07119840(lVar6,0);
                                      if (lVar6 != 0) {
                                        *(undefined8 *)(lVar6 + 0x18) =
                                             *(undefined8 *)
                                              Method_UnityEngine_Awaitable_Awaiter<NativeArray<int>>_GetResult__
                                        ;
                                        thunk_FUN_036b7ad0();
                                        *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                        thunk_FUN_036b7ad0();
                                        lVar9 = thunk_FUN_0367fe20(*unaff_x27);
                                        FUN_0459e7d4(lVar9,*unaff_x20);
                                        if (lVar9 != 0) {
                                          lVar10 = *(long *)(lVar9 + 0x10);
                                          uVar8 = *(undefined8 *)
                                                                                                      
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                          ;
                                          lVar11 = *unaff_x29;
                                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                          if (lVar10 != 0) {
                                            uVar1 = *(uint *)(lVar9 + 0x18);
                                            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20)
                                                   = uVar8;
                                              thunk_FUN_036b7ad0();
                                            }
                                            else {
                                              FUN_0459f03c(lVar9,uVar8,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar11 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar6 + 0x20) = lVar9;
                                            thunk_FUN_036b7ad0((long *)(lVar6 + 0x20),lVar9);
                                            lVar9 = *(long *)(lVar5 + 0x10);
                                            lVar10 = *unaff_x19;
                                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                            puVar2 = 
                                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                            ;
                                            if (lVar9 != 0) {
                                              uVar1 = *(uint *)(lVar5 + 0x18);
                                              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8 +
                                                                 0x20);
                                                *plVar7 = lVar6;
                                                thunk_FUN_036b7ad0(plVar7,lVar6);
                                              }
                                              else {
                                                FUN_0459f03c(lVar5,lVar6,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar10 + 0x20) +
                                                                        0xc0) + 0x70));
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
                                                  plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8 +
                                                                   0x20);
                                                  *plVar7 = lVar4;
                                                  thunk_FUN_036b7ad0(plVar7,lVar4);
                                                }
                                                else {
                                                  FUN_0459f03c();
                                                }
                                                lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
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
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_0367fe20(uVar8);
                                                  FUN_0459e7d4(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetResult__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__25>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_0459e7d4(lVar9,*unaff_x20);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar11 = *unaff_x29;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x20) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x20),lVar9);
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_036b7ad0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_0459e7d4(lVar9,*unaff_x20);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar11 = *unaff_x29;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x20) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x20),lVar9);
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar7,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
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
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_0367fe20(uVar8);
                                                  FUN_0459e7d4(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_Awaitable<NativeArray<int>>_GetAwaiter__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<List<bool>>_GetResult__;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_0459e7d4(lVar9,*unaff_x20);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar11 = *unaff_x29;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x20) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x20),lVar9);
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_036b7ad0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_get_IsCompleted__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_0459e7d4(lVar9,*unaff_x20);
                                                  if (lVar9 != 0) {
                                                    lVar10 = *(long *)(lVar9 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar11 = *unaff_x29;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar8;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x20) = lVar9;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x20),lVar9);
                                                  lVar9 = *(long *)(lVar5 + 0x10);
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar7,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar4,0);
                                                    puVar2 = PTR_DAT_07a2ca80;
                                                    if (lVar4 != 0) {
                                                      *(undefined8 *)(lVar4 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07a578d8;
                                                      thunk_FUN_036b7ad0();
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)puVar2;
                                                      thunk_FUN_036b7ad0((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      uVar8 = *unaff_x27;
                                                      *(undefined4 *)(lVar4 + 0x18) = 1;
                                                      lVar5 = thunk_FUN_0367fe20(uVar8);
                                                      FUN_0459e7d4(lVar5,*unaff_x20);
                                                      if (lVar5 != 0) {
                                                        lVar6 = *(long *)(lVar5 + 0x10);
                                                        uVar8 = *(undefined8 *)puVar2;
                                                        lVar9 = *unaff_x29;
                                                        *(int *)(lVar5 + 0x1c) =
                                                             *(int *)(lVar5 + 0x1c) + 1;
                                                        if (lVar6 != 0) {
                                                          uVar1 = *(uint *)(lVar5 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar6 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar8;
                                                            thunk_FUN_036b7ad0();
                                                          }
                                                          else {
                                                            FUN_0459f03c(lVar5,uVar8,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar9
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_036b7ad0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar7,lVar4);
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
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_0367fe20(uVar8);
                                                  FUN_0459e7d4(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetException__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                    thunk_FUN_036b7ad0();
                                                    if (lVar5 != 0) {
                                                      lVar9 = *(long *)(lVar5 + 0x10);
                                                      lVar10 = *unaff_x19;
                                                      *(int *)(lVar5 + 0x1c) =
                                                           *(int *)(lVar5 + 0x1c) + 1;
                                                      puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar7,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,lVar6,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar4,0);
                                                    puVar3 = 
                                                  Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Reflection_FieldInfo___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    uVar8 = *unaff_x27;
                                                    *(undefined4 *)(lVar4 + 0x18) = 0;
                                                    lVar5 = thunk_FUN_0367fe20(uVar8);
                                                    FUN_0459e7d4(lVar5,*unaff_x20);
                                                    if (lVar5 != 0) {
                                                      lVar6 = *(long *)(lVar5 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetResult__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_036b7ad0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetException__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_ComponentModel_EventDescriptor___TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_0367fe20(uVar8);
                                                  FUN_0459e7d4(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_036b7ad0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar4,0);
                                                    puVar3 = 
                                                  Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallbackFunctorBase___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_0367fe20(uVar8);
                                                  FUN_0459e7d4(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonString>d__77>__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_AwaitOnCompleted<Awaitable_Awaiter<NativeArray<int>>,_Tensor_<ReadbackAndCloneAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_036b7ad0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar4,0);
                                                    puVar3 = 
                                                  Method_UnityEngine_Awaitable<AsyncGPUReadbackRequest>_GetManaged__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_0367fe20(uVar8);
                                                  FUN_0459e7d4(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Create__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_SetException__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_036b7ad0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 3;
                                                  lVar5 = thunk_FUN_0367fe20(uVar8);
                                                  FUN_0459e7d4(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_036b7ad0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a13ae0;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    uVar8 = *unaff_x27;
                                                    *(undefined4 *)(lVar4 + 0x18) = 3;
                                                    lVar5 = thunk_FUN_0367fe20(uVar8);
                                                    FUN_0459e7d4(lVar5,*unaff_x20);
                                                    if (lVar5 != 0) {
                                                      lVar6 = *(long *)(lVar5 + 0x10);
                                                      uVar8 = *(undefined8 *)
                                                                                                                              
                                                  UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_036b7ad0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 4;
                                                  lVar5 = thunk_FUN_0367fe20(uVar8);
                                                  FUN_0459e7d4(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_036b7ad0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar4,0);
                                                    puVar3 = 
                                                  Method_UnityEngine_UIElements_BaseField<bool>_EndEditing__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>__ctor__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar5 = thunk_FUN_0367fe20(uVar8);
                                                  FUN_0459e7d4(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseField<bool>_set_value__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_SetValueWithoutNotify__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_036b7ad0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar4,0);
                                                    puVar3 = 
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_get_showMixedValue__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_visualInput__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar5 = thunk_FUN_0367fe20(uVar8);
                                                  FUN_0459e7d4(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_get_labelElement__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_SetValueWithoutNotify__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_036b7ad0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar4,0);
                                                    puVar3 = 
                                                  Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar5 = thunk_FUN_0367fe20(uVar8);
                                                  FUN_0459e7d4(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ShareResult>>_get_IsCompleted__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_mixedValueLabel__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_036b7ad0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar4,0);
                                                    puVar3 = 
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_Create__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar5 = thunk_FUN_0367fe20(uVar8);
                                                  FUN_0459e7d4(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_Awaitable_Awaiter<NativeArray<int>>_get_IsCompleted__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<BoundsInt>_SetValueWithoutNotify__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_036b7ad0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_0367fe20(uVar8);
                                                  FUN_0459e7d4(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<int,_UxmlIntAttributeDescription>_Init__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_036b7ad0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<StreamReader_<ReadAsyncInternal>d__66>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_0367fe20(uVar8);
                                                  FUN_0459e7d4(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_GetResult__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_labelElement__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_036b7ad0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar4,0);
                                                    puVar3 = 
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>__ctor__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_showMixedValue__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 4;
                                                  lVar5 = thunk_FUN_0367fe20(uVar8);
                                                  FUN_0459e7d4(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<float,_UxmlFloatAttributeDescription>_Init__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_value__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_036b7ad0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar7,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar4,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<bool>_StartEditing__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<string,_UxmlStringAttributeDescription>__ctor__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar8 = *unaff_x27;
                                                  *(undefined4 *)(lVar4 + 0x18) = 4;
                                                  lVar5 = thunk_FUN_0367fe20(uVar8);
                                                  FUN_0459e7d4(lVar5,*unaff_x20);
                                                  if (lVar5 != 0) {
                                                    lVar6 = *(long *)(lVar5 + 0x10);
                                                    uVar8 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<string,_UxmlStringAttributeDescription>_Init__
                                                  ;
                                                  lVar9 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar8
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
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
                                                  lVar6 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar6,0);
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_get_rawValue__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar9 = *(long *)(lVar5 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar9 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar9 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar7 = lVar6;
                                                        thunk_FUN_036b7ad0(plVar7,lVar6);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,lVar6,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
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
                                                      plVar7 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar7,lVar4);
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
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


