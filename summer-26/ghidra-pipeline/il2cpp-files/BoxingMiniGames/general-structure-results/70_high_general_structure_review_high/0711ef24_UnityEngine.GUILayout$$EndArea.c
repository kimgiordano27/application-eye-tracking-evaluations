/*
FUNCTION_NAME: UnityEngine.GUILayout$$EndArea
ENTRY_POINT: 0711ef24
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;data_collection;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_13;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;strong_file_logging_hits_3;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void UnityEngine_GUILayout__EndArea(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int in_w10;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x28;
  
  *(int *)(unaff_x20 + 0x18) = in_w10 + 1;
  *(undefined8 *)(param_1 + 0x20) = unaff_x21;
  thunk_FUN_036b7ad0();
  lVar10 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_05e5ae34(lVar10,0);
  if (lVar10 != 0) {
    *(undefined8 *)(lVar10 + 0x18) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__;
    *(undefined4 *)(lVar10 + 0x10) = 0x22c;
    thunk_FUN_036b7ad0();
    lVar14 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    puVar3 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetResult__;
    puVar2 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<WebReadStream_<ReadAsync>d__28>__
    ;
    if (lVar14 != 0) {
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar14 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        plVar11 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
        *plVar11 = lVar10;
        thunk_FUN_036b7ad0(plVar11,lVar10);
      }
      else {
        FUN_0459f03c();
      }
      *(long *)(unaff_x19 + 0x20) = unaff_x20;
      thunk_FUN_036b7ad0();
      lVar10 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
      FUN_0459e7d4(lVar10,*(undefined8 *)puVar2);
      lVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                 );
      FUN_05e5ae34(lVar14,0);
      puVar4 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_SetException__;
      puVar3 = PTR_DAT_079fb380;
      puVar2 = PTR_DAT_079fb378;
      if (lVar14 != 0) {
        *(undefined8 *)(lVar14 + 0x10) =
             *(undefined8 *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
        ;
        thunk_FUN_036b7ad0();
        *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)puVar4;
        thunk_FUN_036b7ad0((undefined8 *)(lVar14 + 0x20));
        uVar12 = *(undefined8 *)puVar2;
        *(undefined4 *)(lVar14 + 0x18) = 3;
        lVar13 = thunk_FUN_0367fe20(uVar12);
        FUN_0459e7d4(lVar13,*(undefined8 *)puVar3);
        puVar4 = PTR_DAT_079fb388;
        if (lVar13 != 0) {
          lVar15 = *(long *)(lVar13 + 0x10);
          uVar12 = *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
          ;
          lVar16 = *(long *)PTR_DAT_079fb388;
          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
          if (lVar15 != 0) {
            uVar1 = *(uint *)(lVar13 + 0x18);
            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
              thunk_FUN_036b7ad0();
            }
            else {
              FUN_0459f03c(lVar13,uVar12,
                           *(undefined8 *)(*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(lVar14 + 0x30) = lVar13;
            thunk_FUN_036b7ad0((long *)(lVar14 + 0x30),lVar13);
            lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                       );
            FUN_0459e7d4(lVar13,*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                        );
            lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                       );
            FUN_05e5ae34(lVar15,0);
            if (lVar15 != 0) {
              *(undefined8 *)(lVar15 + 0x18) =
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
              ;
              thunk_FUN_036b7ad0();
              *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
              thunk_FUN_036b7ad0();
              puVar5 = 
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
              ;
              if (lVar13 != 0) {
                lVar16 = *(long *)(lVar13 + 0x10);
                lVar17 = *(long *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                ;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                if (lVar16 != 0) {
                  uVar1 = *(uint *)(lVar13 + 0x18);
                  if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                    plVar11 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar11 = lVar15;
                    thunk_FUN_036b7ad0(plVar11,lVar15);
                  }
                  else {
                    FUN_0459f03c(lVar13,lVar15,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar14 + 0x28) = lVar13;
                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x28),lVar13);
                  puVar6 = 
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                  ;
                  if (lVar10 != 0) {
                    lVar13 = *(long *)(lVar10 + 0x10);
                    lVar15 = *(long *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                    ;
                    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                    if (lVar13 != 0) {
                      uVar1 = *(uint *)(lVar10 + 0x18);
                      if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                        *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                        plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar11 = lVar14;
                        thunk_FUN_036b7ad0(plVar11,lVar14);
                      }
                      else {
                        FUN_0459f03c(lVar10,lVar14,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70));
                      }
                      lVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                      
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                 );
                      FUN_05e5ae34(lVar14,0);
                      puVar7 = 
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
                      ;
                      if (lVar14 != 0) {
                        *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)PTR_DAT_07a13ae0;
                        thunk_FUN_036b7ad0();
                        *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)puVar7;
                        thunk_FUN_036b7ad0((undefined8 *)(lVar14 + 0x20));
                        uVar12 = *(undefined8 *)puVar2;
                        *(undefined4 *)(lVar14 + 0x18) = 3;
                        lVar13 = thunk_FUN_0367fe20(uVar12);
                        FUN_0459e7d4(lVar13,*(undefined8 *)puVar3);
                        if (lVar13 != 0) {
                          lVar15 = *(long *)(lVar13 + 0x10);
                          uVar12 = *(undefined8 *)UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                          lVar16 = *(long *)puVar4;
                          *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                          if (lVar15 != 0) {
                            uVar1 = *(uint *)(lVar13 + 0x18);
                            if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                              *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                              *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) = uVar12;
                              thunk_FUN_036b7ad0();
                            }
                            else {
                              FUN_0459f03c(lVar13,uVar12,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                            }
                            *(long *)(lVar14 + 0x30) = lVar13;
                            thunk_FUN_036b7ad0((long *)(lVar14 + 0x30),lVar13);
                            lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                  
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                            FUN_0459e7d4(lVar13,*(undefined8 *)
                                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                        );
                            lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                  
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                            FUN_05e5ae34(lVar15,0);
                            if (lVar15 != 0) {
                              *(undefined8 *)(lVar15 + 0x18) =
                                   *(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                              ;
                              thunk_FUN_036b7ad0();
                              *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                              thunk_FUN_036b7ad0();
                              if (lVar13 != 0) {
                                lVar16 = *(long *)(lVar13 + 0x10);
                                lVar17 = *(long *)puVar5;
                                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                if (lVar16 != 0) {
                                  uVar1 = *(uint *)(lVar13 + 0x18);
                                  if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                    *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                    plVar11 = (long *)(lVar16 + (long)(int)uVar1 * 8 + 0x20);
                                    *plVar11 = lVar15;
                                    thunk_FUN_036b7ad0(plVar11,lVar15);
                                  }
                                  else {
                                    FUN_0459f03c(lVar13,lVar15,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x70
                                                  ));
                                  }
                                  *(long *)(lVar14 + 0x28) = lVar13;
                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x28),lVar13);
                                  lVar13 = *(long *)(lVar10 + 0x10);
                                  lVar15 = *(long *)puVar6;
                                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                  if (lVar13 != 0) {
                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar11 = lVar14;
                                      thunk_FUN_036b7ad0(plVar11,lVar14);
                                    }
                                    else {
                                      FUN_0459f03c(lVar10,lVar14,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    lVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                  
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                    FUN_05e5ae34(lVar14,0);
                                    puVar7 = 
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberPositiveInfinityAsync>d__27>__
                                    ;
                                    if (lVar14 != 0) {
                                      *(undefined8 *)(lVar14 + 0x10) =
                                           *(undefined8 *)
                                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetResult__
                                      ;
                                      thunk_FUN_036b7ad0();
                                      *(undefined8 *)(lVar14 + 0x20) = *(undefined8 *)puVar7;
                                      thunk_FUN_036b7ad0((undefined8 *)(lVar14 + 0x20));
                                      uVar12 = *(undefined8 *)puVar2;
                                      *(undefined4 *)(lVar14 + 0x18) = 3;
                                      lVar13 = thunk_FUN_0367fe20(uVar12);
                                      FUN_0459e7d4(lVar13,*(undefined8 *)puVar3);
                                      if (lVar13 != 0) {
                                        lVar15 = *(long *)(lVar13 + 0x10);
                                        uVar12 = *(undefined8 *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SupporterPurchaseResult>_AwaitUnsafeOnCompleted<TaskAwaiter<SupporterPurchaseResult>,_SupporterGlovesIap_<BuyAsync>d__9>__
                                        ;
                                        lVar16 = *(long *)puVar4;
                                        *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                        if (lVar15 != 0) {
                                          uVar1 = *(uint *)(lVar13 + 0x18);
                                          if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                            *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                            *(undefined8 *)(lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                 uVar12;
                                            thunk_FUN_036b7ad0();
                                          }
                                          else {
                                            FUN_0459f03c(lVar13,uVar12,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          *(long *)(lVar14 + 0x30) = lVar13;
                                          thunk_FUN_036b7ad0((long *)(lVar14 + 0x30),lVar13);
                                          lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                          FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                          lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                          FUN_05e5ae34(lVar15,0);
                                          if (lVar15 != 0) {
                                            *(undefined8 *)(lVar15 + 0x18) =
                                                 *(undefined8 *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetStateMachine__
                                            ;
                                            thunk_FUN_036b7ad0();
                                            *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                            thunk_FUN_036b7ad0();
                                            if (lVar13 != 0) {
                                              lVar16 = *(long *)(lVar13 + 0x10);
                                              lVar17 = *(long *)puVar5;
                                              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                                              if (lVar16 != 0) {
                                                uVar1 = *(uint *)(lVar13 + 0x18);
                                                if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                  *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                  plVar11 = (long *)(lVar16 + (long)(int)uVar1 * 8 +
                                                                    0x20);
                                                  *plVar11 = lVar15;
                                                  thunk_FUN_036b7ad0(plVar11,lVar15);
                                                }
                                                else {
                                                  FUN_0459f03c(lVar13,lVar15,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(lVar17 + 0x20)
                                                                          + 0xc0) + 0x70));
                                                }
                                                *(long *)(lVar14 + 0x28) = lVar13;
                                                thunk_FUN_036b7ad0((long *)(lVar14 + 0x28),lVar13);
                                                lVar13 = *(long *)(lVar10 + 0x10);
                                                lVar15 = *(long *)puVar6;
                                                *(int *)(lVar10 + 0x1c) =
                                                     *(int *)(lVar10 + 0x1c) + 1;
                                                if (lVar13 != 0) {
                                                  uVar1 = *(uint *)(lVar10 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                    *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                    plVar11 = (long *)(lVar13 + (long)(int)uVar1 * 8
                                                                      + 0x20);
                                                    *plVar11 = lVar14;
                                                    thunk_FUN_036b7ad0(plVar11,lVar14);
                                                  }
                                                  else {
                                                    FUN_0459f03c(lVar10,lVar14,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar15 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_05e5ae34(lVar14,0);
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNaNAsync>d__26>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_Create__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar14 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar14 + 0x18) = 3;
                                                  lVar13 = thunk_FUN_0367fe20(uVar12);
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)PTR_DAT_07a21020;
                                                    lVar16 = *(long *)puVar4;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_036b7ad0();
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar15 + 0x10) = *unaff_x28;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar15;
                                                        thunk_FUN_036b7ad0(plVar11,lVar15);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_05e5ae34(lVar14,0);
                                                  puVar8 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__
                                                  ;
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<MonoTlsStream_<CreateStream>d__18>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Create__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar14 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar14 + 0x18) = 1;
                                                  lVar13 = thunk_FUN_0367fe20(uVar12);
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)puVar8;
                                                    lVar16 = *(long *)puVar4;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_036b7ad0();
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar15,0);
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetResult__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar15;
                                                        thunk_FUN_036b7ad0(plVar11,lVar15);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_05e5ae34(lVar14,0);
                                                  puVar9 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Task>_AwaitUnsafeOnCompleted<TaskAwaiter<Task>,_TaskExtensions_<WhenAny>d__5>__
                                                  ;
                                                  puVar8 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SupporterPurchaseResult>_Start<SupporterGlovesIap_<BuyAsync>d__9>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SupporterPurchaseResult>_Start<SupporterGlovesIap_<BuyAsync>d__9>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x20) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar14 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar14 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_0367fe20(uVar12);
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)puVar8;
                                                    lVar16 = *(long *)puVar4;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_036b7ad0();
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0();
                                                    puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__
                                                  ;
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar15;
                                                        thunk_FUN_036b7ad0(plVar11,lVar15);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_05e5ae34(lVar14,0);
                                                  puVar9 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SupporterPurchaseResult>_SetResult__
                                                  ;
                                                  puVar8 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_SetStateMachine__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x20) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar14 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar14 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_0367fe20(uVar12);
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)puVar8;
                                                    lVar16 = *(long *)puVar4;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_036b7ad0();
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SupporterPurchaseResult>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar15;
                                                        thunk_FUN_036b7ad0(plVar11,lVar15);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_05e5ae34(lVar14,0);
                                                  puVar8 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SupporterPurchaseResult>_SetException__
                                                  ;
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SupporterPurchaseResult>_Start<OculusSupporterIapService_<BuyAsync>d__3>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SupporterPurchaseResult>_SetException__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x20) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar14 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar14 + 0x18) = 1;
                                                  lVar13 = thunk_FUN_0367fe20(uVar12);
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)puVar8;
                                                    lVar16 = *(long *)puVar4;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_036b7ad0();
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar15,0);
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_MonoTlsStream_<CreateStream>d__18>__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_MonoTlsStream_<CreateStream>d__18>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar15;
                                                        thunk_FUN_036b7ad0(plVar11,lVar15);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_05e5ae34(lVar14,0);
                                                  puVar9 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_Start<JsonTextReader_<DoReadAsStringAsync>d__55>__
                                                  ;
                                                  puVar8 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebRequestStream>,_WebOperation_<GetRequestStream>d__50>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebRequestStream>,_WebOperation_<GetRequestStream>d__50>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x20) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar14 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar14 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_0367fe20(uVar12);
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)puVar8;
                                                    lVar16 = *(long *)puVar4;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_036b7ad0();
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0();
                                                    puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__
                                                  ;
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar15;
                                                        thunk_FUN_036b7ad0(plVar11,lVar15);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_05e5ae34(lVar14,0);
                                                  puVar9 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SupporterPurchaseResult>_Create__
                                                  ;
                                                  puVar8 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Create__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SupporterPurchaseResult>_Create__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar14 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar14 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_0367fe20(uVar12);
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)puVar9;
                                                    lVar16 = *(long *)puVar4;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_036b7ad0();
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar15;
                                                        thunk_FUN_036b7ad0(plVar11,lVar15);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_05e5ae34(lVar14,0);
                                                  puVar8 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SupporterPurchaseResult>_AwaitUnsafeOnCompleted<TaskAwaiter<SupporterPurchaseResult>,_OculusSupporterIapService_<BuyAsync>d__3>__
                                                  ;
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebResponse>,_XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<WebResponse>,_XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar14 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar14 + 0x18) = 1;
                                                  lVar13 = thunk_FUN_0367fe20(uVar12);
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)puVar7;
                                                    lVar16 = *(long *)puVar4;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_036b7ad0();
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar15,0);
                                                  puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetException__
                                                  ;
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetException__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar15;
                                                        thunk_FUN_036b7ad0(plVar11,lVar15);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_05e5ae34(lVar14,0);
                                                  puVar9 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SupporterPurchaseResult>_get_Task__
                                                  ;
                                                  puVar8 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsStringAsync>d__55>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsStringAsync>d__55>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x20) =
                                                       *(undefined8 *)puVar9;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar14 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar14 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_0367fe20(uVar12);
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)puVar8;
                                                    lVar16 = *(long *)puVar4;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_036b7ad0();
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)puVar7;
                                                    thunk_FUN_036b7ad0();
                                                    puVar7 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__
                                                  ;
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar15;
                                                        thunk_FUN_036b7ad0(plVar11,lVar15);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                                                  FUN_05e5ae34(lVar14,0);
                                                  puVar9 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_get_Task__
                                                  ;
                                                  puVar8 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<WebOperation_<GetRequestStream>d__50>__
                                                  ;
                                                  if (lVar14 != 0) {
                                                    *(undefined8 *)(lVar14 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar14 + 0x20) =
                                                       *(undefined8 *)puVar8;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar14 + 0x20));
                                                  uVar12 = *(undefined8 *)puVar2;
                                                  *(undefined4 *)(lVar14 + 0x18) = 0;
                                                  lVar13 = thunk_FUN_0367fe20(uVar12);
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)puVar3);
                                                  if (lVar13 != 0) {
                                                    lVar15 = *(long *)(lVar13 + 0x10);
                                                    uVar12 = *(undefined8 *)puVar9;
                                                    lVar16 = *(long *)puVar4;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar15 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar15 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar12;
                                                        thunk_FUN_036b7ad0();
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,uVar12,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x30) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x30),lVar13)
                                                  ;
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar13,*(undefined8 *)
                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar15 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar15,0);
                                                  if (lVar15 != 0) {
                                                    *(undefined8 *)(lVar15 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar15 + 0x10) =
                                                       *(undefined8 *)puVar7;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar13 != 0) {
                                                    lVar16 = *(long *)(lVar13 + 0x10);
                                                    lVar17 = *(long *)puVar5;
                                                    *(int *)(lVar13 + 0x1c) =
                                                         *(int *)(lVar13 + 0x1c) + 1;
                                                    if (lVar16 != 0) {
                                                      uVar1 = *(uint *)(lVar13 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar16 + 0x18)) {
                                                        *(uint *)(lVar13 + 0x18) = uVar1 + 1;
                                                        plVar11 = (long *)(lVar16 + (long)(int)uVar1
                                                                                    * 8 + 0x20);
                                                        *plVar11 = lVar15;
                                                        thunk_FUN_036b7ad0(plVar11,lVar15);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar13,lVar15,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar17 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar14 + 0x28) = lVar13;
                                                  thunk_FUN_036b7ad0((long *)(lVar14 + 0x28),lVar13)
                                                  ;
                                                  lVar13 = *(long *)(lVar10 + 0x10);
                                                  lVar15 = *(long *)puVar6;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      plVar11 = (long *)(lVar13 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar11 = lVar14;
                                                      thunk_FUN_036b7ad0(plVar11,lVar14);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,lVar14,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar15 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x19 + 0x28) = lVar10;
                                                  thunk_FUN_036b7ad0((long *)(unaff_x19 + 0x28),
                                                                     lVar10);
                                                  FUN_07119614();
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
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


