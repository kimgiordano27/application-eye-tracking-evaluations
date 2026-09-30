/*
FUNCTION_NAME: UnityEngine.GUILayoutGroup$$SetHorizontal
ENTRY_POINT: 0712b1d8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 204
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


void UnityEngine_GUILayoutGroup__SetHorizontal(long param_1,long param_2)

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
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long *unaff_x29;
  long in_stack_00000008;
  
  FUN_0459e7d4(param_2,**(undefined8 **)(param_1 + 0xf40));
  lVar3 = thunk_FUN_0367fe20(*unaff_x27);
                    /* try { // try from 0712b1f0 to 0722b1f7 has its CatchHandler @ 0712b33c */
  FUN_05e5ae34(lVar3,0);
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x18) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_get_Task__;
    thunk_FUN_036b7ad0();
    *(undefined8 *)(lVar3 + 0x10) = *unaff_x25;
    thunk_FUN_036b7ad0();
    if (param_2 != 0) {
      lVar6 = *(long *)(param_2 + 0x10);
      lVar7 = *unaff_x29;
                    /* try { // try from 0712b23c to 0722b277 has its CatchHandler @ 0712b368 */
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (lVar6 != 0) {
        uVar1 = *(uint *)(param_2 + 0x18);
        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
          *(uint *)(param_2 + 0x18) = uVar1 + 1;
          plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
          *plVar4 = lVar3;
          thunk_FUN_036b7ad0(plVar4,lVar3);
        }
        else {
                    /* try { // try from 0712b278 to 0722b31f has its CatchHandler @ 0712ad24 */
          FUN_0459f03c(param_2,lVar3,
                       *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(unaff_x21 + 0x28) = param_2;
        thunk_FUN_036b7ad0((long *)(unaff_x21 + 0x28),param_2);
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
          lVar3 = thunk_FUN_0367fe20(*unaff_x24);
          FUN_05e5ae34(lVar3,0);
          puVar2 = Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_SetResult__;
          if (lVar3 != 0) {
                    /* try { // try from 0712b320 to 0722b323 has its CatchHandler @ 0712b350 */
                    /* try { // try from 0712b324 to 0722b327 has its CatchHandler @ 0712b364 */
                    /* try { // try from 0712b328 to 0722b32b has its CatchHandler @ 0712b368 */
                    /* try { // try from 0712b32c to 0722b32f has its CatchHandler @ 0712b348 */
            *(undefined8 *)(lVar3 + 0x10) =
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<Stream_<<ReadAsync>g__FinishReadAsync_44_0>d>__
            ;
                    /* try { // try from 0712b330 to 0722b333 has its CatchHandler @ 0712b358 */
            thunk_FUN_036b7ad0();
                    /* try { // try from 0712b334 to 0722b337 has its CatchHandler @ 0712b344 */
                    /* try { // try from 0712b338 to 0722b33b has its CatchHandler @ 0712b354 */
                    /* catch() { ... } // from try @ 0712b1f0 with catch @ 0712b33c
                       try { // try from 0712b33c to 0722b383 has its CatchHandler @ 0712ad24 */
            *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                    /* catch() { ... } // from try @ 0712b18c with catch @ 0712b340 */
                    /* catch() { ... } // from try @ 0712b334 with catch @ 0712b344 */
            thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                    /* catch() { ... } // from try @ 0712b32c with catch @ 0712b348 */
            uVar5 = *unaff_x26;
                    /* catch() { ... } // from try @ 0712b1c4 with catch @ 0712b34c */
                    /* catch() { ... } // from try @ 0712b320 with catch @ 0712b350 */
            *(undefined4 *)(lVar3 + 0x18) = 1;
                    /* catch() { ... } // from try @ 0712b0b8 with catch @ 0712b354
                       catch() { ... } // from try @ 0712b338 with catch @ 0712b354 */
            lVar6 = thunk_FUN_0367fe20(uVar5);
                    /* catch() { ... } // from try @ 0712af90 with catch @ 0712b358
                       catch() { ... } // from try @ 0712b330 with catch @ 0712b358 */
                    /* catch() { ... } // from try @ 0712afe0 with catch @ 0712b35c */
                    /* catch() { ... } // from try @ 0712aeac with catch @ 0712b360 */
            FUN_0459e7d4(lVar6,*unaff_x19);
                    /* catch() { ... } // from try @ 0712b144 with catch @ 0712b364
                       catch() { ... } // from try @ 0712b324 with catch @ 0712b364 */
            if (lVar6 != 0) {
                    /* catch() { ... } // from try @ 0712ae9c with catch @ 0712b368
                       catch() { ... } // from try @ 0712afd4 with catch @ 0712b368
                       catch() { ... } // from try @ 0712b1a8 with catch @ 0712b368
                       catch() { ... } // from try @ 0712b23c with catch @ 0712b368
                       catch() { ... } // from try @ 0712b328 with catch @ 0712b368 */
              lVar7 = *(long *)(lVar6 + 0x10);
              uVar5 = *(undefined8 *)Method_UnityEngine_Awaitable<Tensor>_GetAwaiter__;
              lVar8 = *unaff_x28;
                    /* try { // try from 0712b384 to 0722b387 has its CatchHandler @ 0712b390 */
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar7 != 0) {
                uVar1 = *(uint *)(lVar6 + 0x18);
                    /* catch() { ... } // from try @ 0712b384 with catch @ 0712b390 */
                    /* try { // try from 0712b394 to 0722b39b has its CatchHandler @ 0712b3a4 */
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    /* try { // try from 0712b39c to 0722b3a7 has its CatchHandler @ 0712ad24 */
                    /* catch() { ... } // from try @ 0712b394 with catch @ 0712b3a4 */
                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                  thunk_FUN_036b7ad0();
                }
                else {
                  FUN_0459f03c(lVar6,uVar5,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar3 + 0x30) = lVar6;
                thunk_FUN_036b7ad0((long *)(lVar3 + 0x30),lVar6);
                lVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                          );
                FUN_0459e7d4(lVar6,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                            );
                lVar7 = thunk_FUN_0367fe20(*unaff_x27);
                FUN_05e5ae34(lVar7,0);
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x18) =
                       *(undefined8 *)
                        Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ShareResult>>_GetResult__;
                  thunk_FUN_036b7ad0();
                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x25;
                  thunk_FUN_036b7ad0();
                  if (lVar6 != 0) {
                    lVar8 = *(long *)(lVar6 + 0x10);
                    lVar9 = *unaff_x29;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar1 = *(uint *)(lVar6 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar4 = lVar7;
                        thunk_FUN_036b7ad0(plVar4,lVar7);
                      }
                      else {
                        FUN_0459f03c(lVar6,lVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar3 + 0x28) = lVar6;
                      thunk_FUN_036b7ad0((long *)(lVar3 + 0x28),lVar6);
                      lVar6 = *(long *)(unaff_x20 + 0x10);
                      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                      if (lVar6 != 0) {
                        uVar1 = *(uint *)(unaff_x20 + 0x18);
                        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                          plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar4 = lVar3;
                          thunk_FUN_036b7ad0(plVar4,lVar3);
                        }
                        else {
                          FUN_0459f03c();
                        }
                        lVar3 = thunk_FUN_0367fe20(*unaff_x24);
                        FUN_05e5ae34(lVar3,0);
                        puVar2 = 
                        Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__;
                        if (lVar3 != 0) {
                          *(undefined8 *)(lVar3 + 0x10) =
                               *(undefined8 *)
                                Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__;
                          thunk_FUN_036b7ad0();
                          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                          thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                          uVar5 = *unaff_x26;
                          *(undefined4 *)(lVar3 + 0x18) = 1;
                          lVar6 = thunk_FUN_0367fe20(uVar5);
                          FUN_0459e7d4(lVar6,*unaff_x19);
                          if (lVar6 != 0) {
                            lVar7 = *(long *)(lVar6 + 0x10);
                            uVar5 = *(undefined8 *)
                                     Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ShareResult>>_get_IsCompleted__
                            ;
                            lVar8 = *unaff_x28;
                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                            if (lVar7 != 0) {
                              uVar1 = *(uint *)(lVar6 + 0x18);
                              if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                                thunk_FUN_036b7ad0();
                              }
                              else {
                                FUN_0459f03c(lVar6,uVar5,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar3 + 0x30) = lVar6;
                              thunk_FUN_036b7ad0((long *)(lVar3 + 0x30),lVar6);
                              lVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                              FUN_0459e7d4(lVar6,*(undefined8 *)
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
                                if (lVar6 != 0) {
                                  lVar8 = *(long *)(lVar6 + 0x10);
                                  lVar9 = *unaff_x29;
                                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                  if (lVar8 != 0) {
                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                      plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar4 = lVar7;
                                      thunk_FUN_036b7ad0(plVar4,lVar7);
                                    }
                                    else {
                                      FUN_0459f03c(lVar6,lVar7,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar3 + 0x28) = lVar6;
                                    thunk_FUN_036b7ad0((long *)(lVar3 + 0x28),lVar6);
                                    lVar6 = *(long *)(unaff_x20 + 0x10);
                                    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                    if (lVar6 != 0) {
                                      uVar1 = *(uint *)(unaff_x20 + 0x18);
                                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                        plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar4 = lVar3;
                                        thunk_FUN_036b7ad0(plVar4,lVar3);
                                      }
                                      else {
                                        FUN_0459f03c();
                                      }
                                      lVar3 = thunk_FUN_0367fe20(*unaff_x24);
                                      FUN_05e5ae34(lVar3,0);
                                      puVar2 = 
                                      Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_Create__
                                      ;
                                      if (lVar3 != 0) {
                                        *(undefined8 *)(lVar3 + 0x10) =
                                             *(undefined8 *)
                                              Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__
                                        ;
                                        thunk_FUN_036b7ad0();
                                        *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                        thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                                        uVar5 = *unaff_x26;
                                        *(undefined4 *)(lVar3 + 0x18) = 1;
                                        lVar6 = thunk_FUN_0367fe20(uVar5);
                                        FUN_0459e7d4(lVar6,*unaff_x19);
                                        if (lVar6 != 0) {
                                          lVar7 = *(long *)(lVar6 + 0x10);
                                          uVar5 = *(undefined8 *)
                                                                                                      
                                                  Method_UnityEngine_Awaitable_Awaiter<NativeArray<int>>_get_IsCompleted__
                                          ;
                                          lVar8 = *unaff_x28;
                                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                          if (lVar7 != 0) {
                                            uVar1 = *(uint *)(lVar6 + 0x18);
                                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar5;
                                              thunk_FUN_036b7ad0();
                                            }
                                            else {
                                              FUN_0459f03c(lVar6,uVar5,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar8 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar3 + 0x30) = lVar6;
                                            thunk_FUN_036b7ad0((long *)(lVar3 + 0x30),lVar6);
                                            lVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                            FUN_0459e7d4(lVar6,*(undefined8 *)
                                                                                                                                
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
                                              if (lVar6 != 0) {
                                                lVar8 = *(long *)(lVar6 + 0x10);
                                                lVar9 = *unaff_x29;
                                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                                if (lVar8 != 0) {
                                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                    plVar4 = (long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar4 = lVar7;
                                                    thunk_FUN_036b7ad0(plVar4,lVar7);
                                                  }
                                                  else {
                                                    FUN_0459f03c(lVar6,lVar7,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar6;
                                                  thunk_FUN_036b7ad0((long *)(lVar3 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar3;
                                                      thunk_FUN_036b7ad0(plVar4,lVar3);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar3 = thunk_FUN_0367fe20(*unaff_x24);
                                                    FUN_05e5ae34(lVar3,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                                                  uVar5 = *unaff_x26;
                                                  *(undefined4 *)(lVar3 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_0367fe20(uVar5);
                                                  FUN_0459e7d4(lVar6,*unaff_x19);
                                                  if (lVar6 != 0) {
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                                                  ;
                                                  lVar8 = *unaff_x28;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar6,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar6;
                                                  thunk_FUN_036b7ad0((long *)(lVar3 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar6,*(undefined8 *)
                                                                                                                                            
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
                                                  if (lVar6 != 0) {
                                                    lVar8 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *unaff_x29;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar4 = lVar7;
                                                        thunk_FUN_036b7ad0(plVar4,lVar7);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar6,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar6;
                                                  thunk_FUN_036b7ad0((long *)(lVar3 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar3;
                                                      thunk_FUN_036b7ad0(plVar4,lVar3);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar3 = thunk_FUN_0367fe20(*unaff_x24);
                                                    FUN_05e5ae34(lVar3,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<StreamReader_<ReadAsyncInternal>d__66>__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                                                  uVar5 = *unaff_x26;
                                                  *(undefined4 *)(lVar3 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_0367fe20(uVar5);
                                                  FUN_0459e7d4(lVar6,*unaff_x19);
                                                  if (lVar6 != 0) {
                                                    lVar7 = *(long *)(lVar6 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_GetResult__
                                                  ;
                                                  lVar8 = *unaff_x28;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar6,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x30) = lVar6;
                                                  thunk_FUN_036b7ad0((long *)(lVar3 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar6,*(undefined8 *)
                                                                                                                                            
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
                                                  if (lVar6 != 0) {
                                                    lVar8 = *(long *)(lVar6 + 0x10);
                                                    lVar9 = *unaff_x29;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar4 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar4 = lVar7;
                                                        thunk_FUN_036b7ad0(plVar4,lVar7);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar6,lVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar3 + 0x28) = lVar6;
                                                  thunk_FUN_036b7ad0((long *)(lVar3 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar4 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar4 = lVar3;
                                                      thunk_FUN_036b7ad0(plVar4,lVar3);
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
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


