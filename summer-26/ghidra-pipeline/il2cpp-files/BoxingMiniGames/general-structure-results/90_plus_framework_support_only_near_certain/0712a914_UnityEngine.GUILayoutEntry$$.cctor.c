/*
FUNCTION_NAME: UnityEngine.GUILayoutEntry$$.cctor
ENTRY_POINT: 0712a914
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 195
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_5
*/


void UnityEngine_GUILayoutEntry___cctor(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *in_x9;
  long lVar8;
  long lVar9;
  int in_w10;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
  lVar6 = *(long *)(unaff_x22 + 0x10);
  uVar5 = *in_x9;
                    /* try { // try from 0712a91c to 0722a91f has its CatchHandler @ 0712aab8 */
  *(int *)(unaff_x22 + 0x1c) = in_w10 + 1;
  if (lVar6 != 0) {
    uVar1 = *(uint *)(unaff_x22 + 0x18);
                    /* try { // try from 0712a938 to 0722a93b has its CatchHandler @ 0712aad0 */
    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
      thunk_FUN_036b7ad0();
    }
    else {
                    /* try { // try from 0712a954 to 0722a973 has its CatchHandler @ 0712aabc */
      FUN_0459f03c();
    }
    *(long *)(unaff_x21 + 0x30) = unaff_x22;
    thunk_FUN_036b7ad0();
    lVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                              );
    FUN_0459e7d4(lVar6,*(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__)
    ;
    lVar3 = thunk_FUN_0367fe20(*unaff_x27);
    FUN_05e5ae34(lVar3,0);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x18) =
           *(undefined8 *)
            Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_AwaitOnCompleted<Awaitable_Awaiter<NativeArray<int>>,_Tensor_<ReadbackAndCloneAsync>d__28>__
      ;
      thunk_FUN_036b7ad0();
      *(undefined8 *)(lVar3 + 0x10) = *unaff_x25;
      thunk_FUN_036b7ad0();
      if (lVar6 != 0) {
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar8 = *unaff_x29;
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
          *(long *)(unaff_x21 + 0x28) = lVar6;
          thunk_FUN_036b7ad0((long *)(unaff_x21 + 0x28),lVar6);
          lVar6 = *(long *)(unaff_x20 + 0x10);
          *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(unaff_x20 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
              *(long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
              thunk_FUN_036b7ad0();
            }
            else {
              FUN_0459f03c();
            }
            lVar6 = thunk_FUN_0367fe20(*unaff_x24);
            FUN_05e5ae34(lVar6,0);
            puVar2 = Method_UnityEngine_Awaitable<AsyncGPUReadbackRequest>_GetManaged__;
            if (lVar6 != 0) {
              *(undefined8 *)(lVar6 + 0x10) =
                   *(undefined8 *)Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__;
              thunk_FUN_036b7ad0();
              *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
              thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
              uVar5 = *unaff_x26;
              *(undefined4 *)(lVar6 + 0x18) = 0;
              lVar3 = thunk_FUN_0367fe20(uVar5);
              FUN_0459e7d4(lVar3,*unaff_x19);
              if (lVar3 != 0) {
                lVar7 = *(long *)(lVar3 + 0x10);
                uVar5 = *(undefined8 *)
                         Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Create__
                ;
                lVar8 = *unaff_x28;
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
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  }
                  *(long *)(lVar6 + 0x30) = lVar3;
                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)
                                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                            );
                  FUN_0459e7d4(lVar3,*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                              );
                  lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                  FUN_05e5ae34(lVar7,0);
                  if (lVar7 != 0) {
                    *(undefined8 *)(lVar7 + 0x18) =
                         *(undefined8 *)
                          Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_SetException__
                    ;
                    thunk_FUN_036b7ad0();
                    *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                    thunk_FUN_036b7ad0();
                    if (lVar3 != 0) {
                      lVar8 = *(long *)(lVar3 + 0x10);
                      lVar9 = *unaff_x29;
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
                        lVar3 = *(long *)(unaff_x20 + 0x10);
                        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                        if (lVar3 != 0) {
                          uVar1 = *(uint *)(unaff_x20 + 0x18);
                          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                            plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                            *plVar4 = lVar6;
                            thunk_FUN_036b7ad0(plVar4,lVar6);
                          }
                          else {
                            FUN_0459f03c();
                          }
                          lVar6 = thunk_FUN_0367fe20(*unaff_x24);
                          FUN_05e5ae34(lVar6,0);
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
                            uVar5 = *unaff_x26;
                            *(undefined4 *)(lVar6 + 0x18) = 3;
                            lVar3 = thunk_FUN_0367fe20(uVar5);
                            FUN_0459e7d4(lVar3,*unaff_x19);
                            if (lVar3 != 0) {
                              lVar7 = *(long *)(lVar3 + 0x10);
                              uVar5 = *(undefined8 *)
                                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
                              ;
                              lVar8 = *unaff_x28;
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
                                                (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                                }
                                *(long *)(lVar6 + 0x30) = lVar3;
                                thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                lVar3 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                FUN_0459e7d4(lVar3,*(undefined8 *)
                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                            );
                                lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                                FUN_05e5ae34(lVar7,0);
                                if (lVar7 != 0) {
                                  *(undefined8 *)(lVar7 + 0x18) =
                                       *(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                                  ;
                                  thunk_FUN_036b7ad0();
                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                  thunk_FUN_036b7ad0();
                                  if (lVar3 != 0) {
                                    lVar8 = *(long *)(lVar3 + 0x10);
                                    lVar9 = *unaff_x29;
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
                                      lVar3 = *(long *)(unaff_x20 + 0x10);
                                      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                      if (lVar3 != 0) {
                                        uVar1 = *(uint *)(unaff_x20 + 0x18);
                                        if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                          plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar4 = lVar6;
                                          thunk_FUN_036b7ad0(plVar4,lVar6);
                                        }
                                        else {
                                          FUN_0459f03c();
                                        }
                                        lVar6 = thunk_FUN_0367fe20(*unaff_x24);
                                        FUN_05e5ae34(lVar6,0);
                                        puVar2 = 
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
                                        ;
                                        if (lVar6 != 0) {
                                          *(undefined8 *)(lVar6 + 0x10) =
                                               *(undefined8 *)PTR_DAT_07a13ae0;
                                          thunk_FUN_036b7ad0();
                                          *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)puVar2;
                                          thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                          uVar5 = *unaff_x26;
                                          *(undefined4 *)(lVar6 + 0x18) = 3;
                                          lVar3 = thunk_FUN_0367fe20(uVar5);
                                          FUN_0459e7d4(lVar3,*unaff_x19);
                                          if (lVar3 != 0) {
                                            lVar7 = *(long *)(lVar3 + 0x10);
                                            uVar5 = *(undefined8 *)
                                                     UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                            lVar8 = *unaff_x28;
                                            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                                            if (lVar7 != 0) {
                                              uVar1 = *(uint *)(lVar3 + 0x18);
                                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20)
                                                     = uVar5;
                                                thunk_FUN_036b7ad0();
                                              }
                                              else {
                                                FUN_0459f03c(lVar3,uVar5,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar8 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar6 + 0x30) = lVar3;
                                              thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                              lVar3 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                              FUN_0459e7d4(lVar3,*(undefined8 *)
                                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                              lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                                              FUN_05e5ae34(lVar7,0);
                                              if (lVar7 != 0) {
                                                *(undefined8 *)(lVar7 + 0x18) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                                                ;
                                                thunk_FUN_036b7ad0();
                                                *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                thunk_FUN_036b7ad0();
                                                if (lVar3 != 0) {
                                                  lVar8 = *(long *)(lVar3 + 0x10);
                                                  lVar9 = *unaff_x29;
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
                                                  lVar3 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x24);
                                                    FUN_05e5ae34(lVar6,0);
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
                                                  uVar5 = *unaff_x26;
                                                  *(undefined4 *)(lVar6 + 0x18) = 4;
                                                  lVar3 = thunk_FUN_0367fe20(uVar5);
                                                  FUN_0459e7d4(lVar3,*unaff_x19);
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                                  ;
                                                  lVar8 = *unaff_x28;
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
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x29;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                  lVar3 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x24);
                                                    FUN_05e5ae34(lVar6,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_SetResult__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<Stream_<<ReadAsync>g__FinishReadAsync_44_0>d>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  uVar5 = *unaff_x26;
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar3 = thunk_FUN_0367fe20(uVar5);
                                                  FUN_0459e7d4(lVar3,*unaff_x19);
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_Awaitable<Tensor>_GetAwaiter__;
                                                  lVar8 = *unaff_x28;
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
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ShareResult>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x29;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                  lVar3 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x24);
                                                    FUN_05e5ae34(lVar6,0);
                                                    puVar2 = 
                                                  Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  uVar5 = *unaff_x26;
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar3 = thunk_FUN_0367fe20(uVar5);
                                                  FUN_0459e7d4(lVar3,*unaff_x19);
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ShareResult>>_get_IsCompleted__
                                                  ;
                                                  lVar8 = *unaff_x28;
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
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x29;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                  lVar3 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x24);
                                                    FUN_05e5ae34(lVar6,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_Create__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  uVar5 = *unaff_x26;
                                                  *(undefined4 *)(lVar6 + 0x18) = 1;
                                                  lVar3 = thunk_FUN_0367fe20(uVar5);
                                                  FUN_0459e7d4(lVar3,*unaff_x19);
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_Awaitable_Awaiter<NativeArray<int>>_get_IsCompleted__
                                                  ;
                                                  lVar8 = *unaff_x28;
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
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable<AsyncGPUReadbackRequest>_GetAwaiter__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x29;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                  lVar3 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x24);
                                                    FUN_05e5ae34(lVar6,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  uVar5 = *unaff_x26;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar3 = thunk_FUN_0367fe20(uVar5);
                                                  FUN_0459e7d4(lVar3,*unaff_x19);
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                                                  ;
                                                  lVar8 = *unaff_x28;
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
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetException__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x29;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                  lVar3 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar6 = thunk_FUN_0367fe20(*unaff_x24);
                                                    FUN_05e5ae34(lVar6,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<StreamReader_<ReadAsyncInternal>d__66>__
                                                  ;
                                                  if (lVar6 != 0) {
                                                    *(undefined8 *)(lVar6 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar6 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar6 + 0x20));
                                                  uVar5 = *unaff_x26;
                                                  *(undefined4 *)(lVar6 + 0x18) = 0;
                                                  lVar3 = thunk_FUN_0367fe20(uVar5);
                                                  FUN_0459e7d4(lVar3,*unaff_x19);
                                                  if (lVar3 != 0) {
                                                    lVar7 = *(long *)(lVar3 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_GetResult__
                                                  ;
                                                  lVar8 = *unaff_x28;
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
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar6 + 0x30) = lVar3;
                                                  thunk_FUN_036b7ad0((long *)(lVar6 + 0x30),lVar3);
                                                  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar3,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable<AsyncGPUReadbackRequest>_SetResultAndRaiseContinuation__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar3 != 0) {
                                                    lVar8 = *(long *)(lVar3 + 0x10);
                                                    lVar9 = *unaff_x29;
                                                    *(int *)(lVar3 + 0x1c) =
                                                         *(int *)(lVar3 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar3 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                  lVar3 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar3 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar3 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar6;
                                                      thunk_FUN_036b7ad0(plVar4,lVar6);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    *(long *)(in_stack_00000008 + 0x28) = unaff_x20;
                                                    uVar5 = thunk_FUN_036b7ad0();
                                                    FUN_07119614(uVar5,in_stack_00000008);
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
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


