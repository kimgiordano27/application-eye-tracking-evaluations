/*
FUNCTION_NAME: UnityEngine.GUIUtility$$BeginGUI
ENTRY_POINT: 071286ac
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_GUIUtility__BeginGUI(long param_1)

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
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long unaff_x19;
  undefined8 *puVar18;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 *puVar19;
  long unaff_x24;
  undefined8 *puVar20;
  undefined8 *unaff_x25;
  long unaff_x29;
  
  puVar18 = *(undefined8 **)(unaff_x19 + 0xf50);
  uVar1 = *(uint *)(unaff_x20 + 0x18);
  puVar19 = *(undefined8 **)(unaff_x22 + 0xf30);
  puVar20 = *(undefined8 **)(unaff_x24 + 0xf08);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
    *(undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
    thunk_FUN_036b7ad0();
  }
  else {
    FUN_0459f03c();
  }
  *(long *)(unaff_x29 + 0x20) = unaff_x20;
  thunk_FUN_036b7ad0();
  lVar9 = thunk_FUN_0367fe20(*puVar18);
  FUN_0459e7d4(lVar9,*puVar19);
  lVar10 = thunk_FUN_0367fe20(*puVar20);
  FUN_05e5ae34(lVar10,0);
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__26>__
  ;
  puVar3 = PTR_DAT_079fb380;
  puVar2 = PTR_DAT_079fb378;
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)PTR_DAT_07a29538;
    thunk_FUN_036b7ad0();
    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar4;
    thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
    uVar11 = *(undefined8 *)puVar2;
    *(undefined4 *)(lVar10 + 0x18) = 2;
    lVar12 = thunk_FUN_0367fe20(uVar11);
    FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
    puVar4 = PTR_DAT_079fb388;
    if (lVar12 != 0) {
      lVar14 = *(long *)(lVar12 + 0x10);
      uVar11 = *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
      ;
      lVar15 = *(long *)PTR_DAT_079fb388;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      puVar6 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
      ;
      if (lVar14 != 0) {
        uVar1 = *(uint *)(lVar12 + 0x18);
        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
          thunk_FUN_036b7ad0();
        }
        else {
          FUN_0459f03c(lVar12,uVar11,
                       *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(lVar10 + 0x30) = lVar12;
        thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12);
        lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                   );
        FUN_0459e7d4(lVar12,*(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                    );
        lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
        FUN_05e5ae34(lVar14,0);
        if (lVar14 != 0) {
          *(undefined8 *)(lVar14 + 0x18) =
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
          ;
          thunk_FUN_036b7ad0();
          *(undefined8 *)(lVar14 + 0x10) = *unaff_x25;
          thunk_FUN_036b7ad0();
          puVar7 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
          ;
          if (lVar12 != 0) {
            lVar15 = *(long *)(lVar12 + 0x10);
            lVar16 = *(long *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
            ;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar15 != 0) {
              uVar1 = *(uint *)(lVar12 + 0x18);
              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                *plVar13 = lVar14;
                thunk_FUN_036b7ad0(plVar13,lVar14);
              }
              else {
                FUN_0459f03c(lVar12,lVar14,
                             *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
              }
              *(long *)(lVar10 + 0x28) = lVar12;
              thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12);
              if (lVar9 != 0) {
                lVar12 = *(long *)(lVar9 + 0x10);
                lVar14 = *(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                ;
                *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                if (lVar12 != 0) {
                  uVar1 = *(uint *)(lVar9 + 0x18);
                  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                    plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar13 = lVar10;
                    thunk_FUN_036b7ad0(plVar13,lVar10);
                  }
                  else {
                    FUN_0459f03c(lVar9,lVar10,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  lVar10 = thunk_FUN_0367fe20(*puVar20);
                  FUN_05e5ae34(lVar10,0);
                  puVar5 = PTR_DAT_07a2ca78;
                  if (lVar10 != 0) {
                    *(undefined8 *)(lVar10 + 0x10) =
                         *(undefined8 *)Unity_InferenceEngine_DynamicTensorDim___TypeInfo;
                    thunk_FUN_036b7ad0();
                    *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar5;
                    thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                    uVar11 = *(undefined8 *)puVar2;
                    *(undefined4 *)(lVar10 + 0x18) = 1;
                    lVar12 = thunk_FUN_0367fe20(uVar11);
                    FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                    if (lVar12 != 0) {
                      lVar14 = *(long *)(lVar12 + 0x10);
                      uVar11 = *(undefined8 *)puVar5;
                      lVar15 = *(long *)puVar4;
                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                      if (lVar14 != 0) {
                        uVar1 = *(uint *)(lVar12 + 0x18);
                        if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                          thunk_FUN_036b7ad0();
                        }
                        else {
                          FUN_0459f03c(lVar12,uVar11,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar10 + 0x30) = lVar12;
                        thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12);
                        lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                        FUN_0459e7d4(lVar12,*(undefined8 *)
                                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                    );
                        lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
                        FUN_05e5ae34(lVar14,0);
                        puVar5 = 
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetStateMachine__
                        ;
                        if (lVar14 != 0) {
                          *(undefined8 *)(lVar14 + 0x18) =
                               *(undefined8 *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetStateMachine__
                          ;
                          thunk_FUN_036b7ad0();
                          *(undefined8 *)(lVar14 + 0x10) = *unaff_x25;
                          thunk_FUN_036b7ad0();
                          if (lVar12 != 0) {
                            lVar15 = *(long *)(lVar12 + 0x10);
                            lVar16 = *(long *)puVar7;
                            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                            if (lVar15 != 0) {
                              uVar1 = *(uint *)(lVar12 + 0x18);
                              if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar13 = lVar14;
                                thunk_FUN_036b7ad0(plVar13,lVar14);
                              }
                              else {
                                FUN_0459f03c(lVar12,lVar14,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar10 + 0x28) = lVar12;
                              thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12);
                              lVar12 = *(long *)(lVar9 + 0x10);
                              lVar14 = *(long *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                              ;
                              *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                              if (lVar12 != 0) {
                                uVar1 = *(uint *)(lVar9 + 0x18);
                                if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                  *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                  plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
                                  *plVar13 = lVar10;
                                  thunk_FUN_036b7ad0(plVar13,lVar10);
                                }
                                else {
                                  FUN_0459f03c(lVar9,lVar10,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                                  ;
                                }
                                lVar10 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                FUN_05e5ae34(lVar10,0);
                                puVar8 = 
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Create__
                                ;
                                if (lVar10 != 0) {
                                  *(undefined8 *)(lVar10 + 0x10) =
                                       *(undefined8 *)UnityEngine_Display___TypeInfo;
                                  thunk_FUN_036b7ad0();
                                  *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)puVar8;
                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                  uVar11 = *(undefined8 *)puVar2;
                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                  if (lVar12 != 0) {
                                    lVar14 = *(long *)(lVar12 + 0x10);
                                    uVar11 = *(undefined8 *)
                                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__26>__
                                    ;
                                    lVar15 = *(long *)puVar4;
                                    *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                    if (lVar14 != 0) {
                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                             uVar11;
                                        thunk_FUN_036b7ad0();
                                      }
                                      else {
                                        FUN_0459f03c(lVar12,uVar11,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar10 + 0x30) = lVar12;
                                      thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12);
                                      lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                      
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                      FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                      
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                      lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
                                      FUN_05e5ae34(lVar14,0);
                                      if (lVar14 != 0) {
                                        *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)puVar5;
                                        thunk_FUN_036b7ad0();
                                        *(undefined8 *)(lVar14 + 0x10) = *unaff_x25;
                                        thunk_FUN_036b7ad0();
                                        if (lVar12 != 0) {
                                          lVar15 = *(long *)(lVar12 + 0x10);
                                          lVar16 = *(long *)puVar7;
                                          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                                          puVar5 = 
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                          ;
                                          if (lVar15 != 0) {
                                            uVar1 = *(uint *)(lVar12 + 0x18);
                                            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                              plVar13 = (long *)(lVar15 + (long)(int)uVar1 * 8 +
                                                                0x20);
                                              *plVar13 = lVar14;
                                              thunk_FUN_036b7ad0(plVar13,lVar14);
                                            }
                                            else {
                                              FUN_0459f03c(lVar12,lVar14,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar16 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar10 + 0x28) = lVar12;
                                            thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12);
                                            lVar12 = *(long *)(lVar9 + 0x10);
                                            lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                            ;
                                            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                            if (lVar12 != 0) {
                                              uVar1 = *(uint *)(lVar9 + 0x18);
                                              if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                plVar13 = (long *)(lVar12 + (long)(int)uVar1 * 8 +
                                                                  0x20);
                                                *plVar13 = lVar10;
                                                thunk_FUN_036b7ad0(plVar13,lVar10);
                                              }
                                              else {
                                                FUN_0459f03c(lVar9,lVar10,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar14 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
                                              FUN_05e5ae34(lVar10,0);
                                              puVar5 = PTR_DAT_07a3b5d0;
                                              if (lVar10 != 0) {
                                                *(undefined8 *)(lVar10 + 0x10) =
                                                     *(undefined8 *)PTR_DAT_07a00bd8;
                                                thunk_FUN_036b7ad0();
                                                *(undefined8 *)(lVar10 + 0x20) =
                                                     *(undefined8 *)puVar5;
                                                thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                uVar11 = *(undefined8 *)puVar2;
                                                *(undefined4 *)(lVar10 + 0x18) = 0;
                                                lVar12 = thunk_FUN_0367fe20(uVar11);
                                                FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                if (lVar12 != 0) {
                                                  lVar14 = *(long *)(lVar12 + 0x10);
                                                  uVar11 = *(undefined8 *)
                                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinOpenRoom>d__28>__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e5ae34(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e5ae34(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromJsonSharedLib>d__89>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar12 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar13,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e5ae34(lVar10,0);
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetResult__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_CompilerServices_Ephemeron___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__25>__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e5ae34(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetException__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e5ae34(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinOpenRoom>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar12 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar13,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e5ae34(lVar10,0);
                                                  puVar5 = 
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_Start<Tensor_<ReadbackAndCloneAsync>d__28>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_FilterParameterDeclaration___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e5ae34(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e5ae34(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_Awaiter<NativeArray<int>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar12 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar13,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e5ae34(lVar10,0);
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Start<WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Globalization_EraInfo___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar10 + 0x20) =
                                                         *(undefined8 *)puVar5;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20)
                                                                      );
                                                    uVar11 = *(undefined8 *)puVar2;
                                                    *(undefined4 *)(lVar10 + 0x18) = 0;
                                                    lVar12 = thunk_FUN_0367fe20(uVar11);
                                                    FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                    if (lVar12 != 0) {
                                                      lVar14 = *(long *)(lVar12 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetResult__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e5ae34(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__25>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e5ae34(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar12 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  puVar5 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar13,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  lVar12 = *(long *)(lVar9 + 0x10);
                                                  lVar14 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar12 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar12 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar10;
                                                      thunk_FUN_036b7ad0(plVar13,lVar10);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar10,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar14 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar5)
                                                  ;
                                                  FUN_05e5ae34(lVar10,0);
                                                  puVar5 = 
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>_GetResult__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    *(undefined8 *)(lVar10 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_IO_LowLevel_Unsafe_FileReadType___TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar10 + 0x20) =
                                                       *(undefined8 *)puVar5;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar10 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar10 + 0x18) = 0;
                                                  lVar12 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)puVar3);
                                                  if (lVar12 != 0) {
                                                    lVar14 = *(long *)(lVar12 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_UnityEngine_Awaitable<NativeArray<int>>_GetAwaiter__
                                                  ;
                                                  lVar15 = *(long *)puVar4;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar14 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x30) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x30),lVar12)
                                                  ;
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar12,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e5ae34(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<List<bool>>_GetResult__;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  if (lVar12 != 0) {
                                                    lVar15 = *(long *)(lVar12 + 0x10);
                                                    lVar16 = *(long *)puVar7;
                                                    *(int *)(lVar12 + 0x1c) =
                                                         *(int *)(lVar12 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar12 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                        plVar13 = (long *)(lVar15 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar13 = lVar14;
                                                        thunk_FUN_036b7ad0(plVar13,lVar14);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar12,lVar14,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e5ae34(lVar14,0);
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_get_IsCompleted__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_0459e7d4(lVar15,*(undefined8 *)puVar3);
                                                  if (lVar15 != 0) {
                                                    lVar16 = *(long *)(lVar15 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar17 = *(long *)puVar4;
                                                  *(int *)(lVar15 + 0x1c) =
                                                       *(int *)(lVar15 + 0x1c) + 1;
                                                  if (lVar16 != 0) {
                                                    uVar1 = *(uint *)(lVar15 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                      *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar16 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar15,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x20) = lVar15;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x20),lVar15)
                                                  ;
                                                  lVar15 = *(long *)(lVar12 + 0x10);
                                                  lVar16 = *(long *)puVar7;
                                                  *(int *)(lVar12 + 0x1c) =
                                                       *(int *)(lVar12 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar12 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                                                      plVar13 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar13 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar13,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar12,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar10 + 0x28) = lVar12;
                                                  thunk_FUN_036b7ad0((long *)(lVar10 + 0x28),lVar12)
                                                  ;
                                                  FUN_0753c5a8(*(undefined8 *)(lVar9 + 0x10));
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
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


