/*
FUNCTION_NAME: UnityEngine.TextEditor$$.ctor
ENTRY_POINT: 071320b4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 183
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_5;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_3
*/


void UnityEngine_TextEditor___ctor(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 in_w9;
  long lVar8;
  long lVar9;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined4 *)(unaff_x23 + 0x18) = in_w9;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  thunk_FUN_036b7ad0();
                    /* try { // try from 071320d8 to 072320db has its CatchHandler @ 071321d8 */
  *(long *)(unaff_x22 + 0x30) = unaff_x23;
  thunk_FUN_036b7ad0();
                    /* try { // try from 071320ec to 072320ef has its CatchHandler @ 071322b4 */
  lVar3 = thunk_FUN_0367fe20(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                            );
                    /* try { // try from 07132100 to 07232103 has its CatchHandler @ 071321fc */
  FUN_0459e7d4(lVar3,*(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__);
  lVar4 = thunk_FUN_0367fe20(*unaff_x28);
                    /* try { // try from 07132114 to 0723211b has its CatchHandler @ 071321d4 */
  FUN_07119840(lVar4,0);
  if (lVar4 != 0) {
                    /* try { // try from 0713212c to 0723212f has its CatchHandler @ 071321c8 */
    *(undefined8 *)(lVar4 + 0x18) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetResult__;
    thunk_FUN_036b7ad0();
                    /* try { // try from 07132140 to 07232143 has its CatchHandler @ 07132148 */
                    /* catch() { ... } // from try @ 07131798 with catch @ 07132144
                       try { // try from 07132144 to 0723217f has its CatchHandler @ 071310a4 */
    *(undefined8 *)(lVar4 + 0x10) = *unaff_x26;
                    /* catch() { ... } // from try @ 071317a4 with catch @ 07132148
                       catch() { ... } // from try @ 07132140 with catch @ 07132148 */
    thunk_FUN_036b7ad0();
                    /* catch() { ... } // from try @ 07131774 with catch @ 0713214c */
    if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 07131c7c with catch @ 07132150 */
                    /* catch() { ... } // from try @ 07131a1c with catch @ 07132154 */
      lVar7 = *(long *)(lVar3 + 0x10);
                    /* catch() { ... } // from try @ 07131a00 with catch @ 07132158 */
      lVar8 = *unaff_x19;
                    /* catch() { ... } // from try @ 07131e98 with catch @ 0713215c */
                    /* catch() { ... } // from try @ 07131c48 with catch @ 07132160 */
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    /* try { // try from 07132180 to 07232183 has its CatchHandler @ 07132198 */
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *plVar5 = lVar4;
          thunk_FUN_036b7ad0(plVar5,lVar4);
        }
        else {
                    /* catch() { ... } // from try @ 07132180 with catch @ 07132198 */
                    /* try { // try from 071321a0 to 072321a7 has its CatchHandler @ 07132480 */
                    /* try { // try from 071321a8 to 0723226b has its CatchHandler @ 071310a4 */
          FUN_0459f03c(lVar3,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70)
                      );
        }
                    /* catch() { ... } // from try @ 07131c1c with catch @ 071321ac */
                    /* catch() { ... } // from try @ 07131760 with catch @ 071321b0 */
                    /* catch() { ... } // from try @ 071314b0 with catch @ 071321b4 */
        *(long *)(unaff_x22 + 0x28) = lVar3;
                    /* catch() { ... } // from try @ 07131a84 with catch @ 071321b8 */
        thunk_FUN_036b7ad0((long *)(unaff_x22 + 0x28),lVar3);
                    /* catch() { ... } // from try @ 071319a0 with catch @ 071321bc */
                    /* catch() { ... } // from try @ 071318f0 with catch @ 071321c0 */
                    /* catch() { ... } // from try @ 07131820 with catch @ 071321c4 */
        lVar3 = *(long *)(unaff_x21 + 0x10);
                    /* catch() { ... } // from try @ 07131ec0 with catch @ 071321c8
                       catch() { ... } // from try @ 0713212c with catch @ 071321c8 */
                    /* catch() { ... } // from try @ 07131bd0 with catch @ 071321cc */
                    /* catch() { ... } // from try @ 07131bc4 with catch @ 071321d0 */
                    /* catch() { ... } // from try @ 07131c5c with catch @ 071321d4
                       catch() { ... } // from try @ 07132114 with catch @ 071321d4 */
        *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                    /* catch() { ... } // from try @ 071320d8 with catch @ 071321d8 */
        if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 071317cc with catch @ 071321dc */
          uVar1 = *(uint *)(unaff_x21 + 0x18);
                    /* catch() { ... } // from try @ 07132074 with catch @ 071321e0 */
                    /* catch() { ... } // from try @ 0713132c with catch @ 071321e4 */
                    /* catch() { ... } // from try @ 07131b7c with catch @ 071321e8 */
          if (uVar1 < *(uint *)(lVar3 + 0x18)) {
                    /* catch() { ... } // from try @ 07131b64 with catch @ 071321ec */
                    /* catch() { ... } // from try @ 07131884 with catch @ 071321f0 */
                    /* catch() { ... } // from try @ 071315e0 with catch @ 071321f4 */
                    /* catch() { ... } // from try @ 07131938 with catch @ 071321f8 */
            *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                    /* catch() { ... } // from try @ 07131724 with catch @ 071321fc
                       catch() { ... } // from try @ 07132100 with catch @ 071321fc */
            *(long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20) = unaff_x22;
                    /* catch() { ... } // from try @ 071316d4 with catch @ 07132200
                       catch() { ... } // from try @ 071320b0 with catch @ 07132200 */
            thunk_FUN_036b7ad0();
                    /* catch() { ... } // from try @ 07131db4 with catch @ 07132204 */
          }
          else {
                    /* catch() { ... } // from try @ 07131b18 with catch @ 07132208 */
                    /* catch() { ... } // from try @ 07131b04 with catch @ 0713220c */
                    /* catch() { ... } // from try @ 07131af8 with catch @ 07132210 */
                    /* catch() { ... } // from try @ 07131aec with catch @ 07132214 */
                    /* catch() { ... } // from try @ 07131ae4 with catch @ 07132218 */
            FUN_0459f03c();
          }
                    /* catch() { ... } // from try @ 07131ad0 with catch @ 07132224 */
          lVar3 = thunk_FUN_0367fe20(*unaff_x25);
                    /* catch() { ... } // from try @ 07131ac8 with catch @ 07132228 */
          FUN_07119848(lVar3,0);
          puVar2 = Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__;
          if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 07131aa8 with catch @ 07132238 */
                    /* catch() { ... } // from try @ 07131a98 with catch @ 0713223c */
                    /* catch() { ... } // from try @ 07131a94 with catch @ 07132240 */
                    /* catch() { ... } // from try @ 07131a88 with catch @ 07132244 */
            *(undefined8 *)(lVar3 + 0x10) =
                 *(undefined8 *)UnityEngine_UIElements_EventCallbackFunctorBase___TypeInfo;
            thunk_FUN_036b7ad0();
            *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
            thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                    /* try { // try from 0713226c to 0723226f has its CatchHandler @ 07132284 */
            uVar6 = *unaff_x27;
            *(undefined4 *)(lVar3 + 0x18) = 0;
            lVar4 = thunk_FUN_0367fe20(uVar6);
            FUN_0459e7d4(lVar4,*unaff_x20);
                    /* catch() { ... } // from try @ 0713226c with catch @ 07132284 */
            if (lVar4 != 0) {
                    /* try { // try from 0713228c to 07232293 has its CatchHandler @ 07132480 */
                    /* try { // try from 07132294 to 07232327 has its CatchHandler @ 071310a4 */
              lVar7 = *(long *)(lVar4 + 0x10);
                    /* catch() { ... } // from try @ 07131a58 with catch @ 07132298 */
              uVar6 = *(undefined8 *)
                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonString>d__77>__
              ;
                    /* catch() { ... } // from try @ 071319d0 with catch @ 0713229c */
              lVar8 = *unaff_x29;
                    /* catch() { ... } // from try @ 07132048 with catch @ 071322a0 */
                    /* catch() { ... } // from try @ 071319c0 with catch @ 071322a4 */
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    /* catch() { ... } // from try @ 071319a4 with catch @ 071322a8 */
              if (lVar7 != 0) {
                    /* catch() { ... } // from try @ 07132034 with catch @ 071322ac */
                uVar1 = *(uint *)(lVar4 + 0x18);
                    /* catch() { ... } // from try @ 07131984 with catch @ 071322b0 */
                    /* catch() { ... } // from try @ 07131918 with catch @ 071322b4
                       catch() { ... } // from try @ 071320ec with catch @ 071322b4 */
                    /* catch() { ... } // from try @ 071318f4 with catch @ 071322b8 */
                if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    /* catch() { ... } // from try @ 07131854 with catch @ 071322bc
                       catch() { ... } // from try @ 071320c4 with catch @ 071322bc */
                    /* catch() { ... } // from try @ 071317b8 with catch @ 071322c0 */
                    /* catch() { ... } // from try @ 07131d24 with catch @ 071322c4 */
                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                    /* catch() { ... } // from try @ 0713169c with catch @ 071322c8
                       catch() { ... } // from try @ 0713209c with catch @ 071322c8 */
                  *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
                    /* catch() { ... } // from try @ 07131fcc with catch @ 071322cc */
                  thunk_FUN_036b7ad0();
                    /* catch() { ... } // from try @ 071315a0 with catch @ 071322d0
                       catch() { ... } // from try @ 07132088 with catch @ 071322d0 */
                }
                else {
                    /* catch() { ... } // from try @ 07131574 with catch @ 071322d4 */
                    /* catch() { ... } // from try @ 07131fb8 with catch @ 071322d8 */
                    /* catch() { ... } // from try @ 07131484 with catch @ 071322dc */
                    /* catch() { ... } // from try @ 071317f4 with catch @ 071322e0 */
                    /* catch() { ... } // from try @ 07131620 with catch @ 071322e4 */
                  FUN_0459f03c(lVar4,uVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                    /* catch() { ... } // from try @ 07131248 with catch @ 071322e8 */
                    /* catch() { ... } // from try @ 0713195c with catch @ 071322ec */
                    /* catch() { ... } // from try @ 07131cc4 with catch @ 071322f0 */
                *(long *)(lVar3 + 0x30) = lVar4;
                    /* catch() { ... } // from try @ 07131554 with catch @ 071322f4 */
                thunk_FUN_036b7ad0((long *)(lVar3 + 0x30),lVar4);
                    /* catch() { ... } // from try @ 07131468 with catch @ 071322f8 */
                    /* catch() { ... } // from try @ 07131438 with catch @ 071322fc */
                    /* catch() { ... } // from try @ 071313f0 with catch @ 07132300 */
                    /* catch() { ... } // from try @ 071313d4 with catch @ 07132304 */
                lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                          );
                    /* catch() { ... } // from try @ 071313cc with catch @ 07132308 */
                FUN_0459e7d4(lVar4,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                            );
                lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                    /* try { // try from 07132328 to 0723232b has its CatchHandler @ 07132340 */
                FUN_07119840(lVar7,0);
                if (lVar7 != 0) {
                    /* catch() { ... } // from try @ 07132328 with catch @ 07132340 */
                  *(undefined8 *)(lVar7 + 0x18) =
                       *(undefined8 *)
                        Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_AwaitOnCompleted<Awaitable_Awaiter<NativeArray<int>>,_Tensor_<ReadbackAndCloneAsync>d__28>__
                  ;
                    /* try { // try from 07132348 to 0723234f has its CatchHandler @ 07132480 */
                  thunk_FUN_036b7ad0();
                    /* try { // try from 07132350 to 07232397 has its CatchHandler @ 071310a4 */
                    /* catch() { ... } // from try @ 071313a8 with catch @ 07132354 */
                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                    /* catch() { ... } // from try @ 07131f64 with catch @ 07132358 */
                  thunk_FUN_036b7ad0();
                    /* catch() { ... } // from try @ 07131348 with catch @ 0713235c */
                  if (lVar4 != 0) {
                    /* catch() { ... } // from try @ 07131330 with catch @ 07132360 */
                    /* catch() { ... } // from try @ 07131f50 with catch @ 07132364 */
                    lVar8 = *(long *)(lVar4 + 0x10);
                    /* catch() { ... } // from try @ 07131304 with catch @ 07132368 */
                    lVar9 = *unaff_x19;
                    /* catch() { ... } // from try @ 071312f0 with catch @ 0713236c */
                    /* catch() { ... } // from try @ 07131b44 with catch @ 07132370 */
                    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                    /* catch() { ... } // from try @ 07131cec with catch @ 07132374 */
                    if (lVar8 != 0) {
                    /* catch() { ... } // from try @ 07131d4c with catch @ 07132378
                       catch() { ... } // from try @ 07131e94 with catch @ 07132378 */
                      uVar1 = *(uint *)(lVar4 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                    /* try { // try from 07132398 to 0723239b has its CatchHandler @ 071323a8 */
                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar5 = lVar7;
                        thunk_FUN_036b7ad0(plVar5,lVar7);
                      }
                      else {
                    /* catch() { ... } // from try @ 07132398 with catch @ 071323a8 */
                    /* try { // try from 071323b0 to 072323b7 has its CatchHandler @ 07132480 */
                    /* try { // try from 071323b8 to 07232413 has its CatchHandler @ 071310a4 */
                        FUN_0459f03c(lVar4,lVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                      }
                    /* catch() { ... } // from try @ 07131b28 with catch @ 071323bc
                       catch() { ... } // from try @ 0713205c with catch @ 071323bc */
                    /* catch() { ... } // from try @ 07131d88 with catch @ 071323c0
                       catch() { ... } // from try @ 07132008 with catch @ 071323c0 */
                    /* catch() { ... } // from try @ 07131670 with catch @ 071323c4
                       catch() { ... } // from try @ 07131fe0 with catch @ 071323c4 */
                      *(long *)(lVar3 + 0x28) = lVar4;
                    /* catch() { ... } // from try @ 07131450 with catch @ 071323c8
                       catch() { ... } // from try @ 07131fa4 with catch @ 071323c8 */
                      thunk_FUN_036b7ad0((long *)(lVar3 + 0x28),lVar4);
                    /* catch() { ... } // from try @ 0713136c with catch @ 071323cc */
                    /* catch() { ... } // from try @ 071312cc with catch @ 071323d0 */
                    /* catch() { ... } // from try @ 07131270 with catch @ 071323d4 */
                      lVar4 = *(long *)(unaff_x21 + 0x10);
                    /* catch() { ... } // from try @ 071318b4 with catch @ 071323d8
                       catch() { ... } // from try @ 07132020 with catch @ 071323d8 */
                    /* catch() { ... } // from try @ 07131c94 with catch @ 071323dc
                       catch() { ... } // from try @ 07131f90 with catch @ 071323dc */
                    /* catch() { ... } // from try @ 0713140c with catch @ 071323e0
                       catch() { ... } // from try @ 07131f78 with catch @ 071323e0 */
                    /* catch() { ... } // from try @ 071312b8 with catch @ 071323e4
                       catch() { ... } // from try @ 07131f3c with catch @ 071323e4 */
                      *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
                    /* catch() { ... } // from try @ 0713124c with catch @ 071323e8 */
                      if (lVar4 != 0) {
                        uVar1 = *(uint *)(unaff_x21 + 0x18);
                    /* catch() { ... } // from try @ 07131550 with catch @ 071323f4
                       catch() { ... } // from try @ 0713159c with catch @ 071323f4
                       catch() { ... } // from try @ 071315d0 with catch @ 071323f4
                       catch() { ... } // from try @ 07131698 with catch @ 071323f4
                       catch() { ... } // from try @ 071316c8 with catch @ 071323f4
                       catch() { ... } // from try @ 07131718 with catch @ 071323f4
                       catch() { ... } // from try @ 07131794 with catch @ 071323f4
                       catch() { ... } // from try @ 07131814 with catch @ 071323f4
                       catch() { ... } // from try @ 07131870 with catch @ 071323f4
                       catch() { ... } // from try @ 07131a3c with catch @ 071323f4
                       catch() { ... } // from try @ 07131ba4 with catch @ 071323f4
                       catch() { ... } // from try @ 07131bf8 with catch @ 071323f4
                       catch() { ... } // from try @ 07131ff4 with catch @ 071323f4 */
                        if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                          *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                          plVar5 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar5 = lVar3;
                          thunk_FUN_036b7ad0(plVar5,lVar3);
                    /* try { // try from 07132414 to 07232417 has its CatchHandler @ 07132428 */
                        }
                        else {
                    /* catch() { ... } // from try @ 07132414 with catch @ 07132428 */
                          FUN_0459f03c();
                        }
                    /* try { // try from 07132430 to 07232437 has its CatchHandler @ 07132480 */
                        lVar3 = thunk_FUN_0367fe20(*unaff_x25);
                    /* try { // try from 07132438 to 0723244f has its CatchHandler @ 071310a4 */
                        FUN_07119848(lVar3,0);
                        puVar2 = Method_UnityEngine_Awaitable<AsyncGPUReadbackRequest>_GetManaged__;
                        if (lVar3 != 0) {
                    /* try { // try from 07132450 to 07232453 has its CatchHandler @ 07132458 */
                    /* catch() { ... } // from try @ 07132450 with catch @ 07132458 */
                    /* try { // try from 0713245c to 07232463 has its CatchHandler @ 07132480 */
                          *(undefined8 *)(lVar3 + 0x10) =
                               *(undefined8 *)
                                Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__;
                    /* try { // try from 07132464 to 07232483 has its CatchHandler @ 071310a4 */
                          thunk_FUN_036b7ad0();
                          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                          thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                          uVar6 = *unaff_x27;
                    /* catch() { ... } // from try @ 071321a0 with catch @ 07132480
                       catch() { ... } // from try @ 0713228c with catch @ 07132480
                       catch() { ... } // from try @ 07132348 with catch @ 07132480
                       catch() { ... } // from try @ 071323b0 with catch @ 07132480
                       catch() { ... } // from try @ 07132430 with catch @ 07132480
                       catch() { ... } // from try @ 0713245c with catch @ 07132480 */
                          *(undefined4 *)(lVar3 + 0x18) = 0;
                          lVar4 = thunk_FUN_0367fe20(uVar6);
                          FUN_0459e7d4(lVar4,*unaff_x20);
                          if (lVar4 != 0) {
                            lVar7 = *(long *)(lVar4 + 0x10);
                            uVar6 = *(undefined8 *)
                                     Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Create__
                            ;
                            lVar8 = *unaff_x29;
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
                              lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                              FUN_07119840(lVar7,0);
                              if (lVar7 != 0) {
                                *(undefined8 *)(lVar7 + 0x18) =
                                     *(undefined8 *)
                                      Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_SetException__
                                ;
                                thunk_FUN_036b7ad0();
                                *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                thunk_FUN_036b7ad0();
                                if (lVar4 != 0) {
                                  lVar8 = *(long *)(lVar4 + 0x10);
                                  lVar9 = *unaff_x19;
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
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
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
                                      lVar3 = thunk_FUN_0367fe20(*unaff_x25);
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
                                        *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)puVar2;
                                        thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                                        uVar6 = *unaff_x27;
                                        *(undefined4 *)(lVar3 + 0x18) = 3;
                                        lVar4 = thunk_FUN_0367fe20(uVar6);
                                        FUN_0459e7d4(lVar4,*unaff_x20);
                                        if (lVar4 != 0) {
                                          lVar7 = *(long *)(lVar4 + 0x10);
                                          uVar6 = *(undefined8 *)
                                                                                                      
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
                                          ;
                                          lVar8 = *unaff_x29;
                                          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                          if (lVar7 != 0) {
                                            uVar1 = *(uint *)(lVar4 + 0x18);
                                            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar6;
                                              thunk_FUN_036b7ad0();
                                            }
                                            else {
                                              FUN_0459f03c(lVar4,uVar6,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar8 + 0x20) +
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
                                            lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                            FUN_07119840(lVar7,0);
                                            if (lVar7 != 0) {
                                              *(undefined8 *)(lVar7 + 0x18) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                                              ;
                                              thunk_FUN_036b7ad0();
                                              *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                              thunk_FUN_036b7ad0();
                                              if (lVar4 != 0) {
                                                lVar8 = *(long *)(lVar4 + 0x10);
                                                lVar9 = *unaff_x19;
                                                *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                                                if (lVar8 != 0) {
                                                  uVar1 = *(uint *)(lVar4 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                    plVar5 = (long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar5 = lVar7;
                                                    thunk_FUN_036b7ad0(plVar5,lVar7);
                                                  }
                                                  else {
                                                    FUN_0459f03c(lVar4,lVar7,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar9 + 0x20)
                                                                            + 0xc0) + 0x70));
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
                                                    lVar3 = thunk_FUN_0367fe20(*unaff_x25);
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
                                                    uVar6 = *unaff_x27;
                                                    *(undefined4 *)(lVar3 + 0x18) = 3;
                                                    lVar4 = thunk_FUN_0367fe20(uVar6);
                                                    FUN_0459e7d4(lVar4,*unaff_x20);
                                                    if (lVar4 != 0) {
                                                      lVar7 = *(long *)(lVar4 + 0x10);
                                                      uVar6 = *(undefined8 *)
                                                                                                                              
                                                  UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                                  lVar8 = *unaff_x29;
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
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                    lVar3 = thunk_FUN_0367fe20(*unaff_x25);
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
                                                  uVar6 = *unaff_x27;
                                                  *(undefined4 *)(lVar3 + 0x18) = 4;
                                                  lVar4 = thunk_FUN_0367fe20(uVar6);
                                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                                  ;
                                                  lVar8 = *unaff_x29;
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
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                    lVar3 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_07119848(lVar3,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<bool>_EndEditing__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>__ctor__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                                                  uVar6 = *unaff_x27;
                                                  *(undefined4 *)(lVar3 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_0367fe20(uVar6);
                                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseField<bool>_set_value__
                                                  ;
                                                  lVar8 = *unaff_x29;
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
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_SetValueWithoutNotify__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                    lVar3 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_07119848(lVar3,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_get_showMixedValue__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_visualInput__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                                                  uVar6 = *unaff_x27;
                                                  *(undefined4 *)(lVar3 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_0367fe20(uVar6);
                                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_get_labelElement__
                                                  ;
                                                  lVar8 = *unaff_x29;
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
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_SetValueWithoutNotify__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                    lVar3 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_07119848(lVar3,0);
                                                    puVar2 = 
                                                  Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                                                  uVar6 = *unaff_x27;
                                                  *(undefined4 *)(lVar3 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_0367fe20(uVar6);
                                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ShareResult>>_get_IsCompleted__
                                                  ;
                                                  lVar8 = *unaff_x29;
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
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_mixedValueLabel__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                    lVar3 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_07119848(lVar3,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_Create__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                                                  uVar6 = *unaff_x27;
                                                  *(undefined4 *)(lVar3 + 0x18) = 1;
                                                  lVar4 = thunk_FUN_0367fe20(uVar6);
                                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_Awaitable_Awaiter<NativeArray<int>>_get_IsCompleted__
                                                  ;
                                                  lVar8 = *unaff_x29;
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
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<BoundsInt>_SetValueWithoutNotify__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                    lVar3 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_07119848(lVar3,0);
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
                                                  uVar6 = *unaff_x27;
                                                  *(undefined4 *)(lVar3 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_0367fe20(uVar6);
                                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                                                  ;
                                                  lVar8 = *unaff_x29;
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
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<int,_UxmlIntAttributeDescription>_Init__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                    lVar3 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_07119848(lVar3,0);
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
                                                  uVar6 = *unaff_x27;
                                                  *(undefined4 *)(lVar3 + 0x18) = 0;
                                                  lVar4 = thunk_FUN_0367fe20(uVar6);
                                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_GetResult__
                                                  ;
                                                  lVar8 = *unaff_x29;
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
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_labelElement__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                    lVar3 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_07119848(lVar3,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>__ctor__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_showMixedValue__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                                                  uVar6 = *unaff_x27;
                                                  *(undefined4 *)(lVar3 + 0x18) = 4;
                                                  lVar4 = thunk_FUN_0367fe20(uVar6);
                                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<float,_UxmlFloatAttributeDescription>_Init__
                                                  ;
                                                  lVar8 = *unaff_x29;
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
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_value__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                                                    lVar3 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_07119848(lVar3,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<bool>_StartEditing__
                                                  ;
                                                  if (lVar3 != 0) {
                                                    *(undefined8 *)(lVar3 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<string,_UxmlStringAttributeDescription>__ctor__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar3 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar3 + 0x20));
                                                  uVar6 = *unaff_x27;
                                                  *(undefined4 *)(lVar3 + 0x18) = 4;
                                                  lVar4 = thunk_FUN_0367fe20(uVar6);
                                                  FUN_0459e7d4(lVar4,*unaff_x20);
                                                  if (lVar4 != 0) {
                                                    lVar7 = *(long *)(lVar4 + 0x10);
                                                    uVar6 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<string,_UxmlStringAttributeDescription>_Init__
                                                  ;
                                                  lVar8 = *unaff_x29;
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
                                                  lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar7,0);
                                                  if (lVar7 != 0) {
                                                    *(undefined8 *)(lVar7 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_get_rawValue__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar4 != 0) {
                                                    lVar8 = *(long *)(lVar4 + 0x10);
                                                    lVar9 = *unaff_x19;
                                                    *(int *)(lVar4 + 0x1c) =
                                                         *(int *)(lVar4 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar4 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                                                        plVar5 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
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
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


