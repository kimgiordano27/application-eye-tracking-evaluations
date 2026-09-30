/*
FUNCTION_NAME: UnityEngine.GUIStyle$$set_alignment
ENTRY_POINT: 07124594
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_GUIStyle__set_alignment(long param_1)

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
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *unaff_x22;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x28;
  
  FUN_0459e7d4(param_1,*unaff_x25);
  lVar9 = thunk_FUN_0367fe20(*unaff_x22);
  FUN_05e5ae34(lVar9,0);
  if (lVar9 != 0) {
    *(undefined8 *)(lVar9 + 0x18) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__;
    *(undefined4 *)(lVar9 + 0x10) = 0x164;
    thunk_FUN_036b7ad0();
    puVar6 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MobileAuthenticatedStream_<StartOperation>d__57>__
    ;
    if (param_1 != 0) {
      lVar12 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MobileAuthenticatedStream_<StartOperation>d__57>__
      ;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      if (lVar12 != 0) {
        uVar1 = *(uint *)(param_1 + 0x18);
        if (uVar1 < *(uint *)(lVar12 + 0x18)) {
          *(uint *)(param_1 + 0x18) = uVar1 + 1;
          plVar10 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
          *plVar10 = lVar9;
          thunk_FUN_036b7ad0(plVar10,lVar9);
        }
        else {
          FUN_0459f03c(param_1,lVar9,
                       *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        }
        lVar9 = thunk_FUN_0367fe20(*unaff_x22);
        FUN_05e5ae34(lVar9,0);
        if (lVar9 != 0) {
          *(undefined8 *)(lVar9 + 0x18) =
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__;
          *(undefined4 *)(lVar9 + 0x10) = 0x264;
          thunk_FUN_036b7ad0();
          lVar12 = *(long *)(param_1 + 0x10);
          lVar14 = *(long *)puVar6;
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
          puVar5 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetResult__;
          puVar2 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<WebReadStream_<ReadAsync>d__28>__
          ;
          puVar6 = 
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
          ;
          if (lVar12 != 0) {
            uVar1 = *(uint *)(param_1 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(param_1 + 0x18) = uVar1 + 1;
              plVar10 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
              *plVar10 = lVar9;
              thunk_FUN_036b7ad0(plVar10,lVar9);
            }
            else {
              FUN_0459f03c(param_1,lVar9,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
            *(long *)(unaff_x28 + 0x20) = param_1;
            thunk_FUN_036b7ad0((long *)(unaff_x28 + 0x20),param_1);
            lVar9 = thunk_FUN_0367fe20(*(undefined8 *)puVar5);
            FUN_0459e7d4(lVar9,*(undefined8 *)puVar2);
            lVar12 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
            FUN_05e5ae34(lVar12,0);
            puVar7 = PTR_DAT_07a2ca78;
            puVar5 = PTR_DAT_079fb380;
            puVar2 = PTR_DAT_079fb378;
            if (lVar12 != 0) {
              *(undefined8 *)(lVar12 + 0x10) =
                   *(undefined8 *)Unity_InferenceEngine_DynamicTensorDim___TypeInfo;
              thunk_FUN_036b7ad0();
              *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar7;
              thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x20));
              uVar11 = *(undefined8 *)puVar2;
              *(undefined4 *)(lVar12 + 0x18) = 1;
              lVar14 = thunk_FUN_0367fe20(uVar11);
              FUN_0459e7d4(lVar14,*(undefined8 *)puVar5);
              if (lVar14 != 0) {
                lVar13 = *(long *)(lVar14 + 0x10);
                uVar11 = *(undefined8 *)puVar7;
                lVar15 = *(long *)PTR_DAT_079fb388;
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                puVar8 = 
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                ;
                puVar7 = Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                ;
                puVar2 = 
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                ;
                if (lVar13 != 0) {
                  uVar1 = *(uint *)(lVar14 + 0x18);
                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                    *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                    thunk_FUN_036b7ad0();
                  }
                  else {
                    FUN_0459f03c(lVar14,uVar11,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  *(long *)(lVar12 + 0x30) = lVar14;
                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x30),lVar14);
                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar8);
                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar7);
                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                  FUN_05e5ae34(lVar13,0);
                  puVar4 = 
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromDeviceInternal>d__72>__
                  ;
                  if (lVar13 != 0) {
                    *(undefined8 *)(lVar13 + 0x18) =
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromDeviceInternal>d__72>__
                    ;
                    thunk_FUN_036b7ad0();
                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                    thunk_FUN_036b7ad0();
                    if (lVar14 != 0) {
                      lVar15 = *(long *)(lVar14 + 0x10);
                      lVar16 = *(long *)
                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                      ;
                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                      if (lVar15 != 0) {
                        uVar1 = *(uint *)(lVar14 + 0x18);
                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                          plVar10 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar10 = lVar13;
                          thunk_FUN_036b7ad0(plVar10,lVar13);
                        }
                        else {
                          FUN_0459f03c(lVar14,lVar13,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0) + 0x70));
                        }
                        *(long *)(lVar12 + 0x28) = lVar14;
                        thunk_FUN_036b7ad0((long *)(lVar12 + 0x28),lVar14);
                        if (lVar9 != 0) {
                          lVar14 = *(long *)(lVar9 + 0x10);
                          lVar13 = *(long *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                          ;
                          *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                          if (lVar14 != 0) {
                            uVar1 = *(uint *)(lVar9 + 0x18);
                            if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                              *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                              plVar10 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20);
                              *plVar10 = lVar12;
                              thunk_FUN_036b7ad0(plVar10,lVar12);
                            }
                            else {
                              FUN_0459f03c(lVar9,lVar12,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar12 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
                            FUN_05e5ae34(lVar12,0);
                            puVar3 = 
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Create__
                            ;
                            if (lVar12 != 0) {
                              *(undefined8 *)(lVar12 + 0x10) =
                                   *(undefined8 *)UnityEngine_Display___TypeInfo;
                              thunk_FUN_036b7ad0();
                              *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar3;
                              thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x20));
                              puVar3 = PTR_DAT_079fb378;
                              *(undefined4 *)(lVar12 + 0x18) = 0;
                              lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                              FUN_0459e7d4(lVar14,*(undefined8 *)puVar5);
                              puVar3 = PTR_DAT_079fb388;
                              if (lVar14 != 0) {
                                lVar13 = *(long *)(lVar14 + 0x10);
                                uVar11 = *(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__26>__
                                ;
                                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                if (lVar13 != 0) {
                                  uVar1 = *(uint *)(lVar14 + 0x18);
                                  if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                    *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                                    thunk_FUN_036b7ad0();
                                  }
                                  else {
                                    FUN_0459f03c(lVar14,uVar11,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(*(long *)puVar3 + 0x20) +
                                                            0xc0) + 0x70));
                                  }
                                  *(long *)(lVar12 + 0x30) = lVar14;
                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x30),lVar14);
                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar8);
                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar7);
                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                  FUN_05e5ae34(lVar13,0);
                                  if (lVar13 != 0) {
                                    *(undefined8 *)(lVar13 + 0x18) = *(undefined8 *)puVar4;
                                    thunk_FUN_036b7ad0();
                                    *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                    thunk_FUN_036b7ad0();
                                    if (lVar14 != 0) {
                                      lVar15 = *(long *)(lVar14 + 0x10);
                                      lVar16 = *(long *)
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                      ;
                                      *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                      if (lVar15 != 0) {
                                        uVar1 = *(uint *)(lVar14 + 0x18);
                                        if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                          plVar10 = (long *)(lVar15 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar10 = lVar13;
                                          thunk_FUN_036b7ad0(plVar10,lVar13);
                                        }
                                        else {
                                          FUN_0459f03c(lVar14,lVar13,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar16 + 0x20) + 0xc0)
                                                        + 0x70));
                                        }
                                        puVar4 = PTR_DAT_079fb378;
                                        *(long *)(lVar12 + 0x28) = lVar14;
                                        thunk_FUN_036b7ad0((long *)(lVar12 + 0x28),lVar14);
                                        lVar14 = *(long *)(lVar9 + 0x10);
                                        lVar13 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                        ;
                                        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
                                        if (lVar14 != 0) {
                                          uVar1 = *(uint *)(lVar9 + 0x18);
                                          if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                            plVar10 = (long *)(lVar14 + (long)(int)uVar1 * 8 + 0x20)
                                            ;
                                            *plVar10 = lVar12;
                                            thunk_FUN_036b7ad0(plVar10,lVar12);
                                          }
                                          else {
                                            FUN_0459f03c(lVar9,lVar12,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar13 + 0x20) + 0xc0
                                                                    ) + 0x70));
                                          }
                                          lVar12 = thunk_FUN_0367fe20(*(undefined8 *)puVar6);
                                          FUN_05e5ae34(lVar12,0);
                                          puVar3 = PTR_DAT_07a3b5d0;
                                          if (lVar12 != 0) {
                                            *(undefined8 *)(lVar12 + 0x10) =
                                                 *(undefined8 *)PTR_DAT_07a00bd8;
                                            thunk_FUN_036b7ad0();
                                            *(undefined8 *)(lVar12 + 0x20) = *(undefined8 *)puVar3;
                                            thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x20));
                                            uVar11 = *(undefined8 *)puVar4;
                                            *(undefined4 *)(lVar12 + 0x18) = 0;
                                            lVar14 = thunk_FUN_0367fe20(uVar11);
                                            FUN_0459e7d4(lVar14,*(undefined8 *)puVar5);
                                            puVar3 = PTR_DAT_079fb388;
                                            if (lVar14 != 0) {
                                              lVar13 = *(long *)(lVar14 + 0x10);
                                              uVar11 = *(undefined8 *)
                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinOpenRoom>d__28>__
                                              ;
                                              *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                                              if (lVar13 != 0) {
                                                uVar1 = *(uint *)(lVar14 + 0x18);
                                                if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                  *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                  *(undefined8 *)
                                                   (lVar13 + (long)(int)uVar1 * 8 + 0x20) = uVar11;
                                                  thunk_FUN_036b7ad0();
                                                }
                                                else {
                                                  FUN_0459f03c(lVar14,uVar11,
                                                               *(undefined8 *)
                                                                (*(long *)(*(long *)(*(long *)puVar3
                                                                                    + 0x20) + 0xc0)
                                                                + 0x70));
                                                }
                                                *(long *)(lVar12 + 0x30) = lVar14;
                                                thunk_FUN_036b7ad0((long *)(lVar12 + 0x30),lVar14);
                                                lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar8);
                                                FUN_0459e7d4(lVar14,*(undefined8 *)puVar7);
                                                lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                FUN_05e5ae34(lVar13,0);
                                                if (lVar13 != 0) {
                                                  *(undefined8 *)(lVar13 + 0x18) =
                                                       *(undefined8 *)
                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_036b7ad0(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e5ae34(lVar12,0);
                                                  puVar3 = PTR_DAT_07a55c30;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Threading_CancellationCallbackInfo_TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_079fb388;
                                                  if (lVar14 != 0) {
                                                    lVar13 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromPrefabSharedLib>d__91>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar7);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e5ae34(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromJsonSharedLib>d__89>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_036b7ad0(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e5ae34(lVar12,0);
                                                  puVar3 = PTR_DAT_07a2ca80;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a578d8;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    uVar11 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar12 + 0x18) = 1;
                                                    lVar14 = thunk_FUN_0367fe20(uVar11);
                                                    FUN_0459e7d4(lVar14,*(undefined8 *)puVar5);
                                                    if (lVar14 != 0) {
                                                      lVar13 = *(long *)(lVar14 + 0x10);
                                                      uVar11 = *(undefined8 *)puVar3;
                                                      lVar15 = *(long *)PTR_DAT_079fb388;
                                                      *(int *)(lVar14 + 0x1c) =
                                                           *(int *)(lVar14 + 0x1c) + 1;
                                                      if (lVar13 != 0) {
                                                        uVar1 = *(uint *)(lVar14 + 0x18);
                                                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                          *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                          *(undefined8 *)
                                                           (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                               uVar11;
                                                          thunk_FUN_036b7ad0();
                                                        }
                                                        else {
                                                          FUN_0459f03c(lVar14,uVar11,
                                                                       *(undefined8 *)
                                                                        (*(long *)(*(long *)(lVar15 
                                                  + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar7);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e5ae34(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_036b7ad0(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e5ae34(lVar12,0);
                                                  puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_get_Task__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Serialization_ElementData___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_079fb388;
                                                  if (lVar14 != 0) {
                                                    lVar13 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetException__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar7);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e5ae34(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromPrefab>d__74>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_036b7ad0(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e5ae34(lVar12,0);
                                                  puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonSharedLib>d__89>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)System_Enum___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    uVar11 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar12 + 0x18) = 2;
                                                    lVar14 = thunk_FUN_0367fe20(uVar11);
                                                    FUN_0459e7d4(lVar14,*(undefined8 *)puVar5);
                                                    puVar3 = PTR_DAT_079fb388;
                                                    if (lVar14 != 0) {
                                                      lVar13 = *(long *)(lVar14 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar7);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e5ae34(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromPrefab>d__74>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_036b7ad0(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e5ae34(lVar12,0);
                                                  puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromJsonString>d__77>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Linq_Expressions_Interpreter_EnterFinallyInstruction___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_079fb388;
                                                  if (lVar14 != 0) {
                                                    lVar13 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromJsonString>d__77>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar7);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e5ae34(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromSharedRooms>d__67>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_036b7ad0(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e5ae34(lVar12,0);
                                                  puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromDeviceSharedLib>d__88>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_Start<MRUK_<LoadSceneFromDeviceSharedLib>d__88>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar12 + 0x18) = 0;
                                                  lVar14 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_079fb388;
                                                  if (lVar14 != 0) {
                                                    lVar13 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar7);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e5ae34(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromPrefabSharedLib>d__91>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_036b7ad0(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e5ae34(lVar12,0);
                                                  puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadNumberValueAsync>d__38>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar3;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar12 + 0x18) = 3;
                                                  lVar14 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar5);
                                                  puVar3 = PTR_DAT_079fb388;
                                                  if (lVar14 != 0) {
                                                    lVar13 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar7);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e5ae34(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_036b7ad0(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e5ae34(lVar12,0);
                                                  puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<OVRSpatialAnchor>_SetException__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a13ae0;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar12 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x20)
                                                                      );
                                                    uVar11 = *(undefined8 *)puVar4;
                                                    *(undefined4 *)(lVar12 + 0x18) = 3;
                                                    lVar14 = thunk_FUN_0367fe20(uVar11);
                                                    FUN_0459e7d4(lVar14,*(undefined8 *)puVar5);
                                                    puVar3 = PTR_DAT_079fb388;
                                                    if (lVar14 != 0) {
                                                      lVar13 = *(long *)(lVar14 + 0x10);
                                                      uVar11 = *(undefined8 *)
                                                                                                                                
                                                  UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar7);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e5ae34(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_036b7ad0(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar12 = thunk_FUN_0367fe20(*(undefined8 *)puVar6)
                                                  ;
                                                  FUN_05e5ae34(lVar12,0);
                                                  puVar6 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar12 != 0) {
                                                    *(undefined8 *)(lVar12 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar12 + 0x20) =
                                                       *(undefined8 *)puVar6;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar12 + 0x20));
                                                  uVar11 = *(undefined8 *)puVar4;
                                                  *(undefined4 *)(lVar12 + 0x18) = 4;
                                                  lVar14 = thunk_FUN_0367fe20(uVar11);
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar5);
                                                  puVar6 = PTR_DAT_079fb388;
                                                  if (lVar14 != 0) {
                                                    lVar13 = *(long *)(lVar14 + 0x10);
                                                    uVar11 = *(undefined8 *)
                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar13 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar13 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar11;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,uVar11,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar6 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x30) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x30),lVar14)
                                                  ;
                                                  lVar14 = thunk_FUN_0367fe20(*(undefined8 *)puVar8)
                                                  ;
                                                  FUN_0459e7d4(lVar14,*(undefined8 *)puVar7);
                                                  lVar13 = thunk_FUN_0367fe20(*(undefined8 *)puVar2)
                                                  ;
                                                  FUN_05e5ae34(lVar13,0);
                                                  if (lVar13 != 0) {
                                                    *(undefined8 *)(lVar13 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar13 + 0x10) = *unaff_x26;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar14 != 0) {
                                                    lVar15 = *(long *)(lVar14 + 0x10);
                                                    lVar16 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar14 + 0x1c) =
                                                       *(int *)(lVar14 + 0x1c) + 1;
                                                  if (lVar15 != 0) {
                                                    uVar1 = *(uint *)(lVar14 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar15 + 0x18)) {
                                                      *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar15 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar13;
                                                      thunk_FUN_036b7ad0(plVar10,lVar13);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar14,lVar13,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar16 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar12 + 0x28) = lVar14;
                                                  thunk_FUN_036b7ad0((long *)(lVar12 + 0x28),lVar14)
                                                  ;
                                                  lVar14 = *(long *)(lVar9 + 0x10);
                                                  lVar13 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<StreamReader_<ReadBufferAsync>d__69>__
                                                  ;
                                                  *(int *)(lVar9 + 0x1c) =
                                                       *(int *)(lVar9 + 0x1c) + 1;
                                                  if (lVar14 != 0) {
                                                    uVar1 = *(uint *)(lVar9 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar14 + 0x18)) {
                                                      *(uint *)(lVar9 + 0x18) = uVar1 + 1;
                                                      plVar10 = (long *)(lVar14 + (long)(int)uVar1 *
                                                                                  8 + 0x20);
                                                      *plVar10 = lVar12;
                                                      thunk_FUN_036b7ad0(plVar10,lVar12);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar9,lVar12,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar13 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(unaff_x28 + 0x28) = lVar9;
                                                  uVar11 = thunk_FUN_036b7ad0((long *)(unaff_x28 +
                                                                                      0x28),lVar9);
                                                  FUN_07119614(uVar11,unaff_x28);
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
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


