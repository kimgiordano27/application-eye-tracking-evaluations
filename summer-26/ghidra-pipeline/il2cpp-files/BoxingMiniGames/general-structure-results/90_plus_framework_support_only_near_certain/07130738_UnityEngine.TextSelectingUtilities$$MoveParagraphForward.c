/*
FUNCTION_NAME: UnityEngine.TextSelectingUtilities$$MoveParagraphForward
ENTRY_POINT: 07130738
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 183
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_12;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_20;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction;functionality_data_collection_or_telemetry_hits_8
*/


void UnityEngine_TextSelectingUtilities__MoveParagraphForward(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
                    /* try { // try from 0713073c to 07230743 has its CatchHandler @ 071307f8 */
  thunk_FUN_036b7ad0();
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x23;
  thunk_FUN_036b7ad0((undefined8 *)(unaff_x22 + 0x20));
  uVar4 = *unaff_x27;
  *(undefined4 *)(unaff_x22 + 0x18) = 0;
  lVar5 = thunk_FUN_0367fe20(uVar4);
                    /* try { // try from 07130760 to 07230763 has its CatchHandler @ 07130844 */
                    /* try { // try from 07130764 to 0723076b has its CatchHandler @ 071307d8 */
  FUN_0459e7d4(lVar5,*unaff_x20);
                    /* try { // try from 0713076c to 0723079f has its CatchHandler @ 0713032c */
  if (lVar5 != 0) {
    lVar7 = *(long *)(lVar5 + 0x10);
    uVar4 = *(undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinOpenRoom>d__28>__
    ;
    lVar9 = *unaff_x29;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
                    /* try { // try from 071307a0 to 072307a3 has its CatchHandler @ 07130830 */
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    /* try { // try from 071307a4 to 072307a7 has its CatchHandler @ 07130840 */
                    /* try { // try from 071307a8 to 072307ab has its CatchHandler @ 07130824 */
                    /* try { // try from 071307ac to 072307af has its CatchHandler @ 071307fc */
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    /* try { // try from 071307b0 to 072307b3 has its CatchHandler @ 071307ec */
        *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
                    /* try { // try from 071307b4 to 072307b7 has its CatchHandler @ 0713081c */
        thunk_FUN_036b7ad0();
                    /* try { // try from 071307b8 to 072307bb has its CatchHandler @ 07130810 */
      }
      else {
                    /* try { // try from 071307bc to 072307bf has its CatchHandler @ 071307e4 */
                    /* try { // try from 071307c0 to 072307c3 has its CatchHandler @ 071307e0 */
                    /* catch() { ... } // from try @ 071305c4 with catch @ 071307c4
                       try { // try from 071307c4 to 0723085f has its CatchHandler @ 0713032c */
                    /* catch() { ... } // from try @ 0713052c with catch @ 071307c8 */
                    /* catch() { ... } // from try @ 07130688 with catch @ 071307cc */
        FUN_0459f03c(lVar5,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
                    /* catch() { ... } // from try @ 07130624 with catch @ 071307d0 */
                    /* catch() { ... } // from try @ 07130410 with catch @ 071307d4 */
                    /* catch() { ... } // from try @ 07130764 with catch @ 071307d8 */
      *(long *)(unaff_x22 + 0x30) = lVar5;
                    /* catch() { ... } // from try @ 0713058c with catch @ 071307dc */
      thunk_FUN_036b7ad0((long *)(unaff_x22 + 0x30),lVar5);
                    /* catch() { ... } // from try @ 07130554 with catch @ 071307e0
                       catch() { ... } // from try @ 071307c0 with catch @ 071307e0 */
                    /* catch() { ... } // from try @ 0713051c with catch @ 071307e4
                       catch() { ... } // from try @ 071307bc with catch @ 071307e4 */
                    /* catch() { ... } // from try @ 07130508 with catch @ 071307e8 */
                    /* catch() { ... } // from try @ 071307b0 with catch @ 071307ec */
      lVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                );
                    /* catch() { ... } // from try @ 0713056c with catch @ 071307f0 */
                    /* catch() { ... } // from try @ 071304e8 with catch @ 071307f4 */
                    /* catch() { ... } // from try @ 0713073c with catch @ 071307f8 */
                    /* catch() { ... } // from try @ 071307ac with catch @ 071307fc */
                    /* catch() { ... } // from try @ 07130720 with catch @ 07130800 */
      FUN_0459e7d4(lVar5,*(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                  );
                    /* catch() { ... } // from try @ 07130714 with catch @ 07130804 */
                    /* catch() { ... } // from try @ 07130708 with catch @ 07130808 */
      lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                    /* catch() { ... } // from try @ 07130694 with catch @ 0713080c */
                    /* catch() { ... } // from try @ 07130660 with catch @ 07130810
                       catch() { ... } // from try @ 071307b8 with catch @ 07130810 */
                    /* catch() { ... } // from try @ 07130640 with catch @ 07130814 */
      FUN_07119840(lVar7,0);
                    /* catch() { ... } // from try @ 0713060c with catch @ 07130818 */
      if (lVar7 != 0) {
                    /* catch() { ... } // from try @ 071304bc with catch @ 0713081c
                       catch() { ... } // from try @ 071307b4 with catch @ 0713081c */
                    /* catch() { ... } // from try @ 0713049c with catch @ 07130820 */
                    /* catch() { ... } // from try @ 071307a8 with catch @ 07130824 */
                    /* catch() { ... } // from try @ 0713043c with catch @ 07130828 */
                    /* catch() { ... } // from try @ 07130434 with catch @ 0713082c */
        *(undefined8 *)(lVar7 + 0x18) =
             *(undefined8 *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetResult__;
                    /* catch() { ... } // from try @ 071307a0 with catch @ 07130830 */
        thunk_FUN_036b7ad0();
                    /* catch() { ... } // from try @ 07130414 with catch @ 07130834 */
                    /* catch() { ... } // from try @ 071306e0 with catch @ 07130838 */
                    /* catch() { ... } // from try @ 07130628 with catch @ 0713083c */
        *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                    /* catch() { ... } // from try @ 0713045c with catch @ 07130840
                       catch() { ... } // from try @ 071307a4 with catch @ 07130840 */
        thunk_FUN_036b7ad0();
                    /* catch() { ... } // from try @ 0713047c with catch @ 07130844
                       catch() { ... } // from try @ 071304b8 with catch @ 07130844
                       catch() { ... } // from try @ 07130550 with catch @ 07130844
                       catch() { ... } // from try @ 071305b4 with catch @ 07130844
                       catch() { ... } // from try @ 07130608 with catch @ 07130844
                       catch() { ... } // from try @ 0713065c with catch @ 07130844
                       catch() { ... } // from try @ 07130760 with catch @ 07130844 */
        lVar9 = thunk_FUN_0367fe20(*unaff_x27);
        FUN_0459e7d4(lVar9,*unaff_x20);
        if (lVar9 != 0) {
                    /* try { // try from 07130860 to 07230863 has its CatchHandler @ 07130880 */
                    /* try { // try from 07130864 to 07230883 has its CatchHandler @ 0713032c */
          lVar8 = *(long *)(lVar9 + 0x10);
          uVar4 = *(undefined8 *)
                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
          ;
          lVar10 = *unaff_x29;
          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          if (lVar8 != 0) {
                    /* catch() { ... } // from try @ 07130860 with catch @ 07130880 */
            uVar1 = *(uint *)(lVar9 + 0x18);
                    /* try { // try from 07130884 to 0723088b has its CatchHandler @ 07130894 */
                    /* try { // try from 0713088c to 07230897 has its CatchHandler @ 0713032c */
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    /* catch() { ... } // from try @ 07130884 with catch @ 07130894 */
                    /* try { // try from 07130898 to 0723099b has its CatchHandler @ 07130898
                       catch() { ... } // from try @ 07130898 with catch @ 07130898
                       catch() { ... } // from try @ 07130f2c with catch @ 07130898
                       catch() { ... } // from try @ 07130fa0 with catch @ 07130898
                       catch() { ... } // from try @ 07131074 with catch @ 07130898
                       catch() { ... } // from try @ 07131098 with catch @ 07130898 */
              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
              thunk_FUN_036b7ad0();
            }
            else {
              FUN_0459f03c(lVar9,uVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(lVar7 + 0x20) = lVar9;
            thunk_FUN_036b7ad0((long *)(lVar7 + 0x20),lVar9);
            if (lVar5 != 0) {
              lVar9 = *(long *)(lVar5 + 0x10);
              lVar8 = *unaff_x19;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar9 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar6 = lVar7;
                  thunk_FUN_036b7ad0(plVar6,lVar7);
                }
                else {
                  FUN_0459f03c(lVar5,lVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
                lVar7 = thunk_FUN_0367fe20(*unaff_x28);
                FUN_07119840(lVar7,0);
                if (lVar7 != 0) {
                  *(undefined8 *)(lVar7 + 0x18) =
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromJsonSharedLib>d__89>__
                  ;
                  thunk_FUN_036b7ad0();
                  *(undefined8 *)(lVar7 + 0x10) = *unaff_x26;
                  thunk_FUN_036b7ad0();
                  lVar9 = thunk_FUN_0367fe20(*unaff_x27);
                  FUN_0459e7d4(lVar9,*unaff_x20);
                  if (lVar9 != 0) {
                    lVar8 = *(long *)(lVar9 + 0x10);
                    uVar4 = *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                    ;
                    lVar10 = *unaff_x29;
                    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar1 = *(uint *)(lVar9 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
                        thunk_FUN_036b7ad0();
                      }
                      else {
                        FUN_0459f03c(lVar9,uVar4,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar7 + 0x20) = lVar9;
                      thunk_FUN_036b7ad0((long *)(lVar7 + 0x20),lVar9);
                      lVar9 = *(long *)(lVar5 + 0x10);
                      lVar8 = *unaff_x19;
                      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                      puVar2 = 
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                      ;
                      if (lVar9 != 0) {
                        uVar1 = *(uint *)(lVar5 + 0x18);
                        if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                          plVar6 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar6 = lVar7;
                          thunk_FUN_036b7ad0(plVar6,lVar7);
                        }
                        else {
                          FUN_0459f03c(lVar5,lVar7,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
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
                          lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                          FUN_07119848(lVar5,0);
                          puVar2 = 
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetResult__
                          ;
                          if (lVar5 != 0) {
                            *(undefined8 *)(lVar5 + 0x10) =
                                 *(undefined8 *)System_Runtime_CompilerServices_Ephemeron___TypeInfo
                            ;
                            thunk_FUN_036b7ad0();
                            *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)puVar2;
                            thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                            uVar4 = *unaff_x27;
                            *(undefined4 *)(lVar5 + 0x18) = 0;
                            lVar7 = thunk_FUN_0367fe20(uVar4);
                            FUN_0459e7d4(lVar7,*unaff_x20);
                            if (lVar7 != 0) {
                              lVar9 = *(long *)(lVar7 + 0x10);
                              uVar4 = *(undefined8 *)
                                       Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__25>__
                              ;
                              lVar8 = *unaff_x29;
                              *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                              if (lVar9 != 0) {
                                uVar1 = *(uint *)(lVar7 + 0x18);
                                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                  *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                  *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
                                  thunk_FUN_036b7ad0();
                                }
                                else {
                                  FUN_0459f03c(lVar7,uVar4,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                                }
                                *(long *)(lVar5 + 0x30) = lVar7;
                                thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                            );
                                lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                FUN_07119840(lVar9,0);
                                if (lVar9 != 0) {
                                  *(undefined8 *)(lVar9 + 0x18) =
                                       *(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetException__
                                  ;
                                  thunk_FUN_036b7ad0();
                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                  thunk_FUN_036b7ad0();
                                  lVar8 = thunk_FUN_0367fe20(*unaff_x27);
                                  FUN_0459e7d4(lVar8,*unaff_x20);
                                  if (lVar8 != 0) {
                                    lVar10 = *(long *)(lVar8 + 0x10);
                                    uVar4 = *(undefined8 *)
                                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                    ;
                                    lVar11 = *unaff_x29;
                                    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                    if (lVar10 != 0) {
                                      uVar1 = *(uint *)(lVar8 + 0x18);
                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                             uVar4;
                                        thunk_FUN_036b7ad0();
                                      }
                                      else {
                                        FUN_0459f03c(lVar8,uVar4,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar9 + 0x20) = lVar8;
                                      thunk_FUN_036b7ad0((long *)(lVar9 + 0x20),lVar8);
                                      if (lVar7 != 0) {
                                        lVar8 = *(long *)(lVar7 + 0x10);
                                        lVar10 = *unaff_x19;
                                        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                        if (lVar8 != 0) {
                                          uVar1 = *(uint *)(lVar7 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                            plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                            *plVar6 = lVar9;
                                            thunk_FUN_036b7ad0(plVar6,lVar9);
                                          }
                                          else {
                                            FUN_0459f03c(lVar7,lVar9,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                          FUN_07119840(lVar9,0);
                                          if (lVar9 != 0) {
                                            *(undefined8 *)(lVar9 + 0x18) =
                                                 *(undefined8 *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinOpenRoom>d__28>__
                                            ;
                                            thunk_FUN_036b7ad0();
                                            *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                            thunk_FUN_036b7ad0();
                                            lVar8 = thunk_FUN_0367fe20(*unaff_x27);
                                            FUN_0459e7d4(lVar8,*unaff_x20);
                                            if (lVar8 != 0) {
                                              lVar10 = *(long *)(lVar8 + 0x10);
                                              uVar4 = *(undefined8 *)
                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                              ;
                                              lVar11 = *unaff_x29;
                                              *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                                              if (lVar10 != 0) {
                                                uVar1 = *(uint *)(lVar8 + 0x18);
                                                if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                  *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
                                                  thunk_FUN_036b7ad0();
                                                }
                                                else {
                                                  FUN_0459f03c(lVar8,uVar4,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar11 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                *(long *)(lVar9 + 0x20) = lVar8;
                                                thunk_FUN_036b7ad0((long *)(lVar9 + 0x20),lVar8);
                                                lVar8 = *(long *)(lVar7 + 0x10);
                                                lVar10 = *unaff_x19;
                                                *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
                                                puVar2 = 
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                ;
                                                if (lVar8 != 0) {
                                                  uVar1 = *(uint *)(lVar7 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                    *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                    plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8 +
                                                                     0x20);
                                                    *plVar6 = lVar9;
                                                    thunk_FUN_036b7ad0(plVar6,lVar9);
                                                  }
                                                  else {
                                                    FUN_0459f03c(lVar7,lVar9,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar10 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar5,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_Start<Tensor_<ReadbackAndCloneAsync>d__28>__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_FilterParameterDeclaration___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  uVar4 = *unaff_x27;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_0367fe20(uVar4);
                                                  FUN_0459e7d4(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_0459e7d4(lVar8,*unaff_x20);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar11 = *unaff_x29;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar4;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x20),lVar8);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_Awaiter<NativeArray<int>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_0459e7d4(lVar8,*unaff_x20);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar11 = *unaff_x29;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar4;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x20),lVar8);
                                                  lVar8 = *(long *)(lVar7 + 0x10);
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar5,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Start<WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Globalization_EraInfo___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar5 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20))
                                                    ;
                                                    uVar4 = *unaff_x27;
                                                    *(undefined4 *)(lVar5 + 0x18) = 0;
                                                    lVar7 = thunk_FUN_0367fe20(uVar4);
                                                    FUN_0459e7d4(lVar7,*unaff_x20);
                                                    if (lVar7 != 0) {
                                                      lVar9 = *(long *)(lVar7 + 0x10);
                                                      uVar4 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetResult__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__25>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_0459e7d4(lVar8,*unaff_x20);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar11 = *unaff_x29;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar4;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x20),lVar8);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_0459e7d4(lVar8,*unaff_x20);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar11 = *unaff_x29;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar4;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x20),lVar8);
                                                  lVar8 = *(long *)(lVar7 + 0x10);
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar5,0);
                                                    puVar2 = 
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>_GetResult__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_IO_LowLevel_Unsafe_FileReadType___TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  uVar4 = *unaff_x27;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_0367fe20(uVar4);
                                                  FUN_0459e7d4(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_Awaitable<NativeArray<int>>_GetAwaiter__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<List<bool>>_GetResult__;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_0459e7d4(lVar8,*unaff_x20);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar11 = *unaff_x29;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar4;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x20),lVar8);
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_get_IsCompleted__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  lVar8 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_0459e7d4(lVar8,*unaff_x20);
                                                  if (lVar8 != 0) {
                                                    lVar10 = *(long *)(lVar8 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar11 = *unaff_x29;
                                                  *(int *)(lVar8 + 0x1c) =
                                                       *(int *)(lVar8 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar8 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar10 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar4;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar8,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar8;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x20),lVar8);
                                                  lVar8 = *(long *)(lVar7 + 0x10);
                                                  lVar10 = *unaff_x19;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
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
                                                      uVar4 = *unaff_x27;
                                                      *(undefined4 *)(lVar5 + 0x18) = 1;
                                                      lVar7 = thunk_FUN_0367fe20(uVar4);
                                                      FUN_0459e7d4(lVar7,*unaff_x20);
                                                      if (lVar7 != 0) {
                                                        lVar9 = *(long *)(lVar7 + 0x10);
                                                        uVar4 = *(undefined8 *)puVar2;
                                                        lVar8 = *unaff_x29;
                                                        *(int *)(lVar7 + 0x1c) =
                                                             *(int *)(lVar7 + 0x1c) + 1;
                                                        if (lVar9 != 0) {
                                                          uVar1 = *(uint *)(lVar7 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                            *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar4;
                                                            thunk_FUN_036b7ad0();
                                                          }
                                                          else {
                                                            FUN_0459f03c(lVar7,uVar4,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(lVar8
                                                                                              + 0x20
                                                  ) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_07119848(lVar5,0);
                                                  puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_get_Task__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Serialization_ElementData___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  uVar4 = *unaff_x27;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_0367fe20(uVar4);
                                                  FUN_0459e7d4(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetException__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                    thunk_FUN_036b7ad0();
                                                    if (lVar7 != 0) {
                                                      lVar8 = *(long *)(lVar7 + 0x10);
                                                      lVar10 = *unaff_x19;
                                                      *(int *)(lVar7 + 0x1c) =
                                                           *(int *)(lVar7 + 0x1c) + 1;
                                                      puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar8 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar6,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar5,0);
                                                    puVar3 = 
                                                  Method_OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>_GetResult__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Reflection_FieldInfo___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar5 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20))
                                                    ;
                                                    uVar4 = *unaff_x27;
                                                    *(undefined4 *)(lVar5 + 0x18) = 0;
                                                    lVar7 = thunk_FUN_0367fe20(uVar4);
                                                    FUN_0459e7d4(lVar7,*unaff_x20);
                                                    if (lVar7 != 0) {
                                                      lVar9 = *(long *)(lVar7 + 0x10);
                                                      uVar4 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetResult__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar5,0);
                                                    puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetException__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_ComponentModel_EventDescriptor___TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  uVar4 = *unaff_x27;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_0367fe20(uVar4);
                                                  FUN_0459e7d4(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar5,0);
                                                    puVar3 = 
                                                  Method_OVRTask_Awaiter<List<bool>>_get_IsCompleted__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_EventCallbackFunctorBase___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  uVar4 = *unaff_x27;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_0367fe20(uVar4);
                                                  FUN_0459e7d4(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonString>d__77>__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_AwaitOnCompleted<Awaitable_Awaiter<NativeArray<int>>,_Tensor_<ReadbackAndCloneAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar5,0);
                                                    puVar3 = 
                                                  Method_UnityEngine_Awaitable<AsyncGPUReadbackRequest>_GetManaged__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_get_IsCompleted__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  uVar4 = *unaff_x27;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_0367fe20(uVar4);
                                                  FUN_0459e7d4(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Create__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_SetException__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar5,0);
                                                    puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  uVar4 = *unaff_x27;
                                                  *(undefined4 *)(lVar5 + 0x18) = 3;
                                                  lVar7 = thunk_FUN_0367fe20(uVar4);
                                                  FUN_0459e7d4(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar5,0);
                                                    puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a13ae0;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar5 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20))
                                                    ;
                                                    uVar4 = *unaff_x27;
                                                    *(undefined4 *)(lVar5 + 0x18) = 3;
                                                    lVar7 = thunk_FUN_0367fe20(uVar4);
                                                    FUN_0459e7d4(lVar7,*unaff_x20);
                                                    if (lVar7 != 0) {
                                                      lVar9 = *(long *)(lVar7 + 0x10);
                                                      uVar4 = *(undefined8 *)
                                                                                                                              
                                                  UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar5,0);
                                                    puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  uVar4 = *unaff_x27;
                                                  *(undefined4 *)(lVar5 + 0x18) = 4;
                                                  lVar7 = thunk_FUN_0367fe20(uVar4);
                                                  FUN_0459e7d4(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar5,0);
                                                    puVar3 = 
                                                  Method_UnityEngine_UIElements_BaseField<bool>_EndEditing__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>__ctor__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  uVar4 = *unaff_x27;
                                                  *(undefined4 *)(lVar5 + 0x18) = 1;
                                                  lVar7 = thunk_FUN_0367fe20(uVar4);
                                                  FUN_0459e7d4(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseField<bool>_set_value__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_SetValueWithoutNotify__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar5,0);
                                                    puVar3 = 
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_get_showMixedValue__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_visualInput__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  uVar4 = *unaff_x27;
                                                  *(undefined4 *)(lVar5 + 0x18) = 1;
                                                  lVar7 = thunk_FUN_0367fe20(uVar4);
                                                  FUN_0459e7d4(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_get_labelElement__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_SetValueWithoutNotify__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar5,0);
                                                    puVar3 = 
                                                  Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_get_IsCompleted__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<List<OVRPlugin_Result>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  uVar4 = *unaff_x27;
                                                  *(undefined4 *)(lVar5 + 0x18) = 1;
                                                  lVar7 = thunk_FUN_0367fe20(uVar4);
                                                  FUN_0459e7d4(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_ShareResult>>_get_IsCompleted__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_mixedValueLabel__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar5,0);
                                                    puVar3 = 
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_Create__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRPlugin_Result>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  uVar4 = *unaff_x27;
                                                  *(undefined4 *)(lVar5 + 0x18) = 1;
                                                  lVar7 = thunk_FUN_0367fe20(uVar4);
                                                  FUN_0459e7d4(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_Awaitable_Awaiter<NativeArray<int>>_get_IsCompleted__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<BoundsInt>_SetValueWithoutNotify__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar5,0);
                                                    puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_get_Task__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  uVar4 = *unaff_x27;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_0367fe20(uVar4);
                                                  FUN_0459e7d4(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<BufferedStream_<ReadFromUnderlyingStreamAsync>d__51>__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<int,_UxmlIntAttributeDescription>_Init__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar5,0);
                                                    puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncValueTaskMethodBuilder<int>_Start<StreamReader_<ReadAsyncInternal>d__66>__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  uVar4 = *unaff_x27;
                                                  *(undefined4 *)(lVar5 + 0x18) = 0;
                                                  lVar7 = thunk_FUN_0367fe20(uVar4);
                                                  FUN_0459e7d4(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_OVRTask_Awaiter<List<OVRSceneManager_Metrics>>_GetResult__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_labelElement__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar5,0);
                                                    puVar3 = 
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>__ctor__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_showMixedValue__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  uVar4 = *unaff_x27;
                                                  *(undefined4 *)(lVar5 + 0x18) = 4;
                                                  lVar7 = thunk_FUN_0367fe20(uVar4);
                                                  FUN_0459e7d4(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<float,_UxmlFloatAttributeDescription>_Init__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<bool>_get_value__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_07119848(lVar5,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_UIElements_BaseField<bool>_StartEditing__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    *(undefined8 *)(lVar5 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<string,_UxmlStringAttributeDescription>__ctor__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar5 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar5 + 0x20));
                                                  uVar4 = *unaff_x27;
                                                  *(undefined4 *)(lVar5 + 0x18) = 4;
                                                  lVar7 = thunk_FUN_0367fe20(uVar4);
                                                  FUN_0459e7d4(lVar7,*unaff_x20);
                                                  if (lVar7 != 0) {
                                                    lVar9 = *(long *)(lVar7 + 0x10);
                                                    uVar4 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_UIElements_BaseFieldTraits<string,_UxmlStringAttributeDescription>_Init__
                                                  ;
                                                  lVar8 = *unaff_x29;
                                                  *(int *)(lVar7 + 0x1c) =
                                                       *(int *)(lVar7 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar7 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar4
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar7,uVar4,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar8 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x30) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x30),lVar7);
                                                  lVar7 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar7,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x28);
                                                  FUN_07119840(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_UIElements_BaseField<Bounds>_get_rawValue__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar7 != 0) {
                                                    lVar8 = *(long *)(lVar7 + 0x10);
                                                    lVar10 = *unaff_x19;
                                                    *(int *)(lVar7 + 0x1c) =
                                                         *(int *)(lVar7 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar7 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
                                                        plVar6 = (long *)(lVar8 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                        *plVar6 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar6,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar7,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar5 + 0x28) = lVar7;
                                                  thunk_FUN_036b7ad0((long *)(lVar5 + 0x28),lVar7);
                                                  lVar7 = *(long *)(unaff_x21 + 0x10);
                                                  *(int *)(unaff_x21 + 0x1c) =
                                                       *(int *)(unaff_x21 + 0x1c) + 1;
                                                  if (lVar7 != 0) {
                                                    uVar1 = *(uint *)(unaff_x21 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                                                      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar7 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar5;
                                                      thunk_FUN_036b7ad0(plVar6,lVar5);
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
                              }
                            }
                          }
                        }
                      }
                    }
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


