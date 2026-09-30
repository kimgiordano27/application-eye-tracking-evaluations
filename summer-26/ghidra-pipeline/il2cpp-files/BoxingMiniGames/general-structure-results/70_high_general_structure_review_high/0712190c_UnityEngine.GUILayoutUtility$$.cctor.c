/*
FUNCTION_NAME: UnityEngine.GUILayoutUtility$$.cctor
ENTRY_POINT: 0712190c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_6;paired_field_refs_with_structure_only;telemetry_or_network_hits_8;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_GUILayoutUtility___cctor(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  FUN_03642964(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Create__
              );
  FUN_03642964(PTR_DAT_079f49e0);
  FUN_03642964(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetException__
              );
                    /* try { // try from 07121930 to 07221933 has its CatchHandler @ 07121c30 */
                    /* try { // try from 07121934 to 07221943 has its CatchHandler @ 07121c54 */
  FUN_03642964(Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__);
  FUN_03642964(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetResult__
              );
  FUN_03642964(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetStateMachine__
              );
  FUN_03642964(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
              );
                    /* try { // try from 07121964 to 07221973 has its CatchHandler @ 07121c50 */
  FUN_03642964(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_get_Task__
              );
  FUN_03642964(
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
              );
  *(undefined1 *)(unaff_x19 + 0x8b3) = 1;
  lVar9 = thunk_FUN_0367fe20(*unaff_x20);
                    /* try { // try from 07121990 to 072219bf has its CatchHandler @ 07121ca8 */
  FUN_05e5ae34(lVar9,0);
  puVar8 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Create__
  ;
  puVar6 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetStateMachine__;
  puVar7 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_Create__;
  puVar5 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetException__;
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<WebResponseStream_<ReadAsync>d__40>__
  ;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MobileAuthenticatedStream_<InnerRead>d__66>__
  ;
  puVar2 = PTR_DAT_079f49e0;
  if (lVar9 != 0) {
                    /* try { // try from 071219d4 to 072219db has its CatchHandler @ 07121c4c */
                    /* try { // try from 071219e0 to 072219eb has its CatchHandler @ 07121c2c */
    *(undefined8 *)(lVar9 + 0x10) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_get_Task__
    ;
    thunk_FUN_036b7ad0();
    *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)puVar7;
    thunk_FUN_036b7ad0();
                    /* try { // try from 071219fc to 072219ff has its CatchHandler @ 07121ca4 */
                    /* try { // try from 07121a00 to 07221a07 has its CatchHandler @ 07121c24 */
    *(undefined8 *)(lVar9 + 0x30) = *(undefined8 *)puVar8;
    thunk_FUN_036b7ad0();
    *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)puVar6;
    thunk_FUN_036b7ad0();
    *(undefined8 *)(lVar9 + 0x40) = *(undefined8 *)puVar2;
    thunk_FUN_036b7ad0();
    lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
    FUN_0459e7d4(lVar10,*(undefined8 *)puVar4);
    lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
    FUN_05e5ae34(lVar11,0);
    if (lVar11 != 0) {
      *(undefined8 *)(lVar11 + 0x18) =
           *(undefined8 *)
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__;
      *(undefined4 *)(lVar11 + 0x10) = 0x164;
      thunk_FUN_036b7ad0();
      puVar2 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MobileAuthenticatedStream_<StartOperation>d__57>__
      ;
      if (lVar10 != 0) {
        lVar14 = *(long *)(lVar10 + 0x10);
        lVar16 = *(long *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MobileAuthenticatedStream_<StartOperation>d__57>__
        ;
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar14 != 0) {
          uVar1 = *(uint *)(lVar10 + 0x18);
          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
            plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
            *plVar12 = lVar11;
            thunk_FUN_036b7ad0(plVar12,lVar11);
          }
          else {
            FUN_0459f03c(lVar10,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
          }
          lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
          FUN_05e5ae34(lVar11,0);
          if (lVar11 != 0) {
            *(undefined8 *)(lVar11 + 0x18) =
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__;
            *(undefined4 *)(lVar11 + 0x10) = 0x264;
            thunk_FUN_036b7ad0();
            lVar14 = *(long *)(lVar10 + 0x10);
            lVar16 = *(long *)puVar2;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            puVar4 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetResult__;
            puVar3 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<WebReadStream_<ReadAsync>d__28>__
            ;
            puVar2 = 
            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
            ;
            if (lVar14 != 0) {
              uVar1 = *(uint *)(lVar10 + 0x18);
              if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                *plVar12 = lVar11;
                thunk_FUN_036b7ad0(plVar12,lVar11);
              }
              else {
                FUN_0459f03c(lVar10,lVar11,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar9 + 0x20) = lVar10;
              thunk_FUN_036b7ad0((long *)(lVar9 + 0x20),lVar10);
              lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar4);
              FUN_0459e7d4(lVar10,*(undefined8 *)puVar3);
              lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
              FUN_05e5ae34(lVar11,0);
              puVar5 = 
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetResult__
              ;
              puVar4 = PTR_DAT_079fb380;
              puVar3 = PTR_DAT_079fb378;
              if (lVar11 != 0) {
                *(undefined8 *)(lVar11 + 0x10) =
                     *(undefined8 *)System_Runtime_CompilerServices_Ephemeron___TypeInfo;
                thunk_FUN_036b7ad0();
                *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar5;
                thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20));
                uVar13 = *(undefined8 *)puVar3;
                *(undefined4 *)(lVar11 + 0x18) = 0;
                lVar14 = thunk_FUN_0367fe20(uVar13);
                FUN_0459e7d4(lVar14,*(undefined8 *)puVar4);
                puVar5 = PTR_DAT_079fb388;
                if (lVar14 != 0) {
                  lVar16 = *(long *)(lVar14 + 0x10);
                  uVar13 = *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__25>__
                  ;
                  lVar17 = *(long *)PTR_DAT_079fb388;
                  *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                  puVar7 = 
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                  ;
                  if (lVar16 != 0) {
                    uVar1 = *(uint *)(lVar14 + 0x18);
                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
                      thunk_FUN_036b7ad0();
                    }
                    else {
                      FUN_0459f03c(lVar14,uVar13,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar11 + 0x30) = lVar14;
                    thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar14);
                    lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
                    FUN_0459e7d4(lVar14,*(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                );
                    lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                               );
                    FUN_05e5ae34(lVar16,0);
                    if (lVar16 != 0) {
                      *(undefined8 *)(lVar16 + 0x18) =
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetException__
                      ;
                      thunk_FUN_036b7ad0();
                      *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)puVar8;
                      thunk_FUN_036b7ad0();
                      lVar17 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                      FUN_0459e7d4(lVar17,*(undefined8 *)puVar4);
                      if (lVar17 != 0) {
                        lVar15 = *(long *)(lVar17 + 0x10);
                        uVar13 = *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                        ;
                        lVar18 = *(long *)puVar5;
                        *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                        if (lVar15 != 0) {
                          uVar1 = *(uint *)(lVar17 + 0x18);
                          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                            *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
                            thunk_FUN_036b7ad0();
                          }
                          else {
                            FUN_0459f03c(lVar17,uVar13,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar16 + 0x20) = lVar17;
                          thunk_FUN_036b7ad0((long *)(lVar16 + 0x20),lVar17);
                          if (lVar14 != 0) {
                            lVar17 = *(long *)(lVar14 + 0x10);
                            lVar15 = *(long *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                            ;
                            *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                            if (lVar17 != 0) {
                              uVar1 = *(uint *)(lVar14 + 0x18);
                              if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                plVar12 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar12 = lVar16;
                                thunk_FUN_036b7ad0(plVar12,lVar16);
                              }
                              else {
                                FUN_0459f03c(lVar14,lVar16,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                      
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                              FUN_05e5ae34(lVar16,0);
                              if (lVar16 != 0) {
                                *(undefined8 *)(lVar16 + 0x18) =
                                     *(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinOpenRoom>d__28>__
                                ;
                                thunk_FUN_036b7ad0();
                                *(undefined8 *)(lVar16 + 0x10) = *(undefined8 *)puVar8;
                                thunk_FUN_036b7ad0();
                                lVar17 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                FUN_0459e7d4(lVar17,*(undefined8 *)puVar4);
                                if (lVar17 != 0) {
                                  lVar15 = *(long *)(lVar17 + 0x10);
                                  uVar13 = *(undefined8 *)
                                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                  ;
                                  lVar18 = *(long *)puVar5;
                                  *(int *)(lVar17 + 0x1c) = *(int *)(lVar17 + 0x1c) + 1;
                                  if (lVar15 != 0) {
                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar13
                                      ;
                                      thunk_FUN_036b7ad0();
                                    }
                                    else {
                                      FUN_0459f03c(lVar17,uVar13,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar16 + 0x20) = lVar17;
                                    thunk_FUN_036b7ad0((long *)(lVar16 + 0x20),lVar17);
                                    lVar17 = *(long *)(lVar14 + 0x10);
                                    lVar15 = *(long *)
                                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                    ;
                                    *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                    puVar7 = 
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                    ;
                                    if (lVar17 != 0) {
                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                      if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                        plVar12 = (long *)(lVar17 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar12 = lVar16;
                                        thunk_FUN_036b7ad0(plVar12,lVar16);
                                      }
                                      else {
                                        FUN_0459f03c(lVar14,lVar16,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar11 + 0x28) = lVar14;
                                      thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar14);
                                      if (lVar10 != 0) {
                                        lVar14 = *(long *)(lVar10 + 0x10);
                                        lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                        ;
                                        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                        if (lVar14 != 0) {
                                          uVar1 = *(uint *)(lVar10 + 0x18);
                                          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                            plVar12 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar12 = lVar11;
                                            thunk_FUN_036b7ad0(plVar12,lVar11);
                                          }
                                          else {
                                            FUN_0459f03c(lVar10,lVar11,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                          FUN_05e5ae34(lVar11,0);
                                          puVar6 = 
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Start<WebConnection_<InitConnection>d__19>__
                                          ;
                                          if (lVar11 != 0) {
                                            *(undefined8 *)(lVar11 + 0x10) =
                                                 *(undefined8 *)
                                                  System_Globalization_EraInfo___TypeInfo;
                                            thunk_FUN_036b7ad0();
                                            *(undefined8 *)(lVar11 + 0x20) = *(undefined8 *)puVar6;
                                            thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20));
                                            uVar13 = *(undefined8 *)puVar3;
                                            *(undefined4 *)(lVar11 + 0x18) = 0;
                                            lVar14 = thunk_FUN_0367fe20(uVar13);
                                            FUN_0459e7d4(lVar14,*(undefined8 *)puVar4);
                                            if (lVar14 != 0) {
                                              lVar16 = *(long *)(lVar14 + 0x10);
                                              uVar13 = *(undefined8 *)
                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetResult__
                                              ;
                                              lVar17 = *(long *)puVar5;
                                              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                              if (lVar16 != 0) {
                                                uVar1 = *(uint *)(lVar14 + 0x18);
                                                if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                  *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar16 + (long)(int)uVar1 * 8 + 0x20) = uVar13;
                                                  thunk_FUN_036b7ad0();
                                                }
                                                else {
                                                  FUN_0459f03c(lVar14,uVar13,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar17 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                *(long *)(lVar11 + 0x30) = lVar14;
                                                thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar14);
                                                lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar7);
                                                FUN_0459e7d4(lVar14,*(undefined8 *)
                                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                FUN_05e5ae34(lVar16,0);
                                                if (lVar16 != 0) {
                                                  *(undefined8 *)(lVar16 + 0x18) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__25>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0();
                                                  lVar17 = thunk_FUN_0367fe20(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_0459e7d4(lVar17,*(undefined8 *)puVar4);
                                                  if (lVar17 != 0) {
                                                    lVar15 = *(long *)(lVar17 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar18 = *(long *)puVar5;
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar17,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_036b7ad0((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_036b7ad0(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0();
                                                  lVar17 = thunk_FUN_0367fe20(*(undefined8 *)puVar3)
                                                  ;
                                                  FUN_0459e7d4(lVar17,*(undefined8 *)puVar4);
                                                  if (lVar17 != 0) {
                                                    lVar15 = *(long *)(lVar17 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar18 = *(long *)puVar5;
                                                  *(int *)(lVar17 + 0x1c) =
                                                       *(int *)(lVar17 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar17 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar17 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar17,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar18 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar16 + 0x20) = lVar17;
                                                  thunk_FUN_036b7ad0((long *)(lVar16 + 0x20),lVar17)
                                                  ;
                                                  lVar17 = *(long *)(lVar14 + 0x10);
                                                  lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  ;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_036b7ad0(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e5ae34(lVar11,0);
                                                  puVar6 = PTR_DAT_07a3b5d0;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a00bd8;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    uVar13 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar14 = thunk_FUN_0367fe20(uVar13);
                                                    FUN_0459e7d4(lVar14,*(undefined8 *)puVar4);
                                                    if (lVar14 != 0) {
                                                      lVar16 = *(long *)(lVar14 + 0x10);
                                                      uVar13 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinOpenRoom>d__28>__
                                                  ;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_036b7ad0(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e5ae34(lVar11,0);
                                                  puVar6 = PTR_DAT_07a2ca78;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_InferenceEngine_DynamicTensorDim___TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar11 + 0x18) = 1;
                                                  lVar14 = thunk_FUN_0367fe20(uVar13);
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar4);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)puVar6;
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar14 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar13;
                                                        thunk_FUN_036b7ad0();
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar14,uVar13,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar7)
                                                  ;
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar16,0);
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetStateMachine__
                                                  ;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_036b7ad0(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e5ae34(lVar11,0);
                                                  puVar6 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Create__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                          UnityEngine_Display___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar6;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    uVar13 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar11 + 0x18) = 0;
                                                    lVar14 = thunk_FUN_0367fe20(uVar13);
                                                    FUN_0459e7d4(lVar14,*(undefined8 *)puVar4);
                                                    if (lVar14 != 0) {
                                                      lVar16 = *(long *)(lVar14 + 0x10);
                                                      uVar13 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__26>__
                                                  ;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar16 + 0x10) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_036b7ad0();
                                                    puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    puVar6 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  ;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_036b7ad0(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar7 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e5ae34(lVar11,0);
                                                  puVar7 = PTR_DAT_07a2ca80;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a578d8;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    uVar13 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar11 + 0x18) = 1;
                                                    lVar14 = thunk_FUN_0367fe20(uVar13);
                                                    FUN_0459e7d4(lVar14,*(undefined8 *)puVar4);
                                                    if (lVar14 != 0) {
                                                      lVar16 = *(long *)(lVar14 + 0x10);
                                                      uVar13 = *(undefined8 *)puVar7;
                                                      lVar17 = *(long *)puVar5;
                                                      *(int *)(lVar14 + 0x1c) =
                                                           *(int *)(lVar14 + 0x1c) + 1;
                                                      if (lVar16 != 0) {
                                                        uVar1 = *(uint *)(lVar14 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar13;
                                                          thunk_FUN_036b7ad0();
                                                        }
                                                        else {
                                                          FUN_0459f03c(lVar14,uVar13,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar17 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar16,0);
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_036b7ad0(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e5ae34(lVar11,0);
                                                  puVar6 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_get_Task__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Serialization_ElementData___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_0367fe20(uVar13);
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar4);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetException__
                                                  ;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar16 + 0x10) =
                                                         *(undefined8 *)puVar8;
                                                    thunk_FUN_036b7ad0();
                                                    puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    *(int *)(lVar14 + 0x1c) =
                                                         *(int *)(lVar14 + 0x1c) + 1;
                                                    puVar6 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  ;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_036b7ad0(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar7 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e5ae34(lVar11,0);
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__26>__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a29538;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    uVar13 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar11 + 0x18) = 2;
                                                    lVar14 = thunk_FUN_0367fe20(uVar13);
                                                    FUN_0459e7d4(lVar14,*(undefined8 *)puVar4);
                                                    if (lVar14 != 0) {
                                                      lVar16 = *(long *)(lVar14 + 0x10);
                                                      uVar13 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_036b7ad0(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e5ae34(lVar11,0);
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetException__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_ComponentModel_EventDescriptor___TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar11 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_0367fe20(uVar13);
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar4);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_036b7ad0(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e5ae34(lVar11,0);
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar11 + 0x18) = 3;
                                                  lVar14 = thunk_FUN_0367fe20(uVar13);
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar4);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
                                                  ;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_036b7ad0(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e5ae34(lVar11,0);
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a13ae0;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar11 + 0x20) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20)
                                                                      );
                                                    uVar13 = *(undefined8 *)puVar3;
                                                    *(undefined4 *)(lVar11 + 0x18) = 3;
                                                    lVar14 = thunk_FUN_0367fe20(uVar13);
                                                    FUN_0459e7d4(lVar14,*(undefined8 *)puVar4);
                                                    if (lVar14 != 0) {
                                                      lVar16 = *(long *)(lVar14 + 0x10);
                                                      uVar13 = *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_036b7ad0(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar11 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e5ae34(lVar11,0);
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar11 != 0) {
                                                    *(undefined8 *)(lVar11 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar11 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar11 + 0x20));
                                                  uVar13 = *(undefined8 *)puVar3;
                                                  *(undefined4 *)(lVar11 + 0x18) = 4;
                                                  lVar14 = thunk_FUN_0367fe20(uVar13);
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar4);
                                                  if (lVar14 != 0) {
                                                    lVar16 = *(long *)(lVar14 + 0x10);
                                                    uVar13 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                                  ;
                                                  lVar17 = *(long *)puVar5;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar13;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,uVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x30) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar16 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar16,0);
                                                  if (lVar16 != 0) {
                                                    *(undefined8 *)(lVar16 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar16 + 0x10) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar14 != 0) {
                                                    lVar17 = *(long *)(lVar14 + 0x10);
                                                    lVar15 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar17 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar17 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar17 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar16;
                                                      thunk_FUN_036b7ad0(plVar12,lVar16);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar16,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar11 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar11 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar10 + 0x10);
                                                  lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar12 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar12 = lVar11;
                                                      thunk_FUN_036b7ad0(plVar12,lVar11);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x28) = lVar10;
                                                  uVar13 = thunk_FUN_036b7ad0((long *)(lVar9 + 0x28)
                                                                              ,lVar10);
                                                  FUN_07119614(uVar13,lVar9);
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
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


