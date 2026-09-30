/*
FUNCTION_NAME: UnityEngine.GUIUtility$$DestroyGUI
ENTRY_POINT: 07128884
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_14;telemetry_or_network_hits_5;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


void UnityEngine_GUIUtility__DestroyGUI(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
  ;
  if (unaff_x22 != 0) {
    lVar8 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = unaff_x23;
        thunk_FUN_036b7ad0();
      }
      else {
        FUN_0459f03c();
      }
      *(long *)(unaff_x21 + 0x28) = unaff_x22;
      thunk_FUN_036b7ad0();
      if (unaff_x20 != 0) {
        lVar8 = *(long *)(unaff_x20 + 0x10);
        *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(unaff_x20 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
            *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
            thunk_FUN_036b7ad0();
          }
          else {
            FUN_0459f03c();
          }
          lVar8 = thunk_FUN_0367fe20(*unaff_x24);
          FUN_05e5ae34(lVar8,0);
          puVar2 = PTR_DAT_07a2ca78;
          if (lVar8 != 0) {
            *(undefined8 *)(lVar8 + 0x10) =
                 *(undefined8 *)Unity_InferenceEngine_DynamicTensorDim___TypeInfo;
            thunk_FUN_036b7ad0();
            *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar2;
            thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x20));
            uVar5 = *unaff_x26;
            *(undefined4 *)(lVar8 + 0x18) = 1;
            lVar6 = thunk_FUN_0367fe20(uVar5);
            FUN_0459e7d4(lVar6,*unaff_x19);
            if (lVar6 != 0) {
              lVar9 = *(long *)(lVar6 + 0x10);
              uVar5 = *(undefined8 *)puVar2;
              lVar10 = *unaff_x28;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar9 != 0) {
                uVar1 = *(uint *)(lVar6 + 0x18);
                if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                  thunk_FUN_036b7ad0();
                }
                else {
                  FUN_0459f03c(lVar6,uVar5,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                }
                *(long *)(lVar8 + 0x30) = lVar6;
                thunk_FUN_036b7ad0((long *)(lVar8 + 0x30),lVar6);
                lVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                          );
                FUN_0459e7d4(lVar6,*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                            );
                lVar9 = thunk_FUN_0367fe20(*unaff_x27);
                FUN_05e5ae34(lVar9,0);
                puVar2 = 
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetStateMachine__
                ;
                if (lVar9 != 0) {
                  *(undefined8 *)(lVar9 + 0x18) =
                       *(undefined8 *)
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetStateMachine__
                  ;
                  thunk_FUN_036b7ad0();
                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x25;
                  thunk_FUN_036b7ad0();
                  if (lVar6 != 0) {
                    lVar10 = *(long *)(lVar6 + 0x10);
                    lVar11 = *(long *)puVar3;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar10 != 0) {
                      uVar1 = *(uint *)(lVar6 + 0x18);
                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                        plVar7 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                        *plVar7 = lVar9;
                        thunk_FUN_036b7ad0(plVar7,lVar9);
                      }
                      else {
                        FUN_0459f03c(lVar6,lVar9,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                      }
                      *(long *)(lVar8 + 0x28) = lVar6;
                      thunk_FUN_036b7ad0((long *)(lVar8 + 0x28),lVar6);
                      lVar6 = *(long *)(unaff_x20 + 0x10);
                      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                      if (lVar6 != 0) {
                        uVar1 = *(uint *)(unaff_x20 + 0x18);
                        if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                          plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                          *plVar7 = lVar8;
                          thunk_FUN_036b7ad0(plVar7,lVar8);
                        }
                        else {
                          FUN_0459f03c();
                        }
                        lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  );
                        FUN_05e5ae34(lVar8,0);
                        puVar4 = 
                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Create__
                        ;
                        if (lVar8 != 0) {
                          *(undefined8 *)(lVar8 + 0x10) =
                               *(undefined8 *)UnityEngine_Display___TypeInfo;
                          thunk_FUN_036b7ad0();
                          *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar4;
                          thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x20));
                          uVar5 = *unaff_x26;
                          *(undefined4 *)(lVar8 + 0x18) = 0;
                          lVar6 = thunk_FUN_0367fe20(uVar5);
                          FUN_0459e7d4(lVar6,*unaff_x19);
                          if (lVar6 != 0) {
                            lVar9 = *(long *)(lVar6 + 0x10);
                            uVar5 = *(undefined8 *)
                                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__26>__
                            ;
                            lVar10 = *unaff_x28;
                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                            if (lVar9 != 0) {
                              uVar1 = *(uint *)(lVar6 + 0x18);
                              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                                thunk_FUN_036b7ad0();
                              }
                              else {
                                FUN_0459f03c(lVar6,uVar5,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                              }
                              *(long *)(lVar8 + 0x30) = lVar6;
                              thunk_FUN_036b7ad0((long *)(lVar8 + 0x30),lVar6);
                              lVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                              FUN_0459e7d4(lVar6,*(undefined8 *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                          );
                              lVar9 = thunk_FUN_0367fe20(*unaff_x27);
                              FUN_05e5ae34(lVar9,0);
                              if (lVar9 != 0) {
                                *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)puVar2;
                                thunk_FUN_036b7ad0();
                                *(undefined8 *)(lVar9 + 0x10) = *unaff_x25;
                                thunk_FUN_036b7ad0();
                                if (lVar6 != 0) {
                                  lVar10 = *(long *)(lVar6 + 0x10);
                                  lVar11 = *(long *)puVar3;
                                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                  puVar2 = 
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                  ;
                                  if (lVar10 != 0) {
                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                      *plVar7 = lVar9;
                                      thunk_FUN_036b7ad0(plVar7,lVar9);
                                    }
                                    else {
                                      FUN_0459f03c(lVar6,lVar9,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar8 + 0x28) = lVar6;
                                    thunk_FUN_036b7ad0((long *)(lVar8 + 0x28),lVar6);
                                    lVar6 = *(long *)(unaff_x20 + 0x10);
                                    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                    if (lVar6 != 0) {
                                      uVar1 = *(uint *)(unaff_x20 + 0x18);
                                      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                        plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar7 = lVar8;
                                        thunk_FUN_036b7ad0(plVar7,lVar8);
                                      }
                                      else {
                                        FUN_0459f03c();
                                      }
                                      lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                      FUN_05e5ae34(lVar8,0);
                                      puVar2 = PTR_DAT_07a3b5d0;
                                      if (lVar8 != 0) {
                                        *(undefined8 *)(lVar8 + 0x10) =
                                             *(undefined8 *)PTR_DAT_07a00bd8;
                                        thunk_FUN_036b7ad0();
                                        *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar2;
                                        thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x20));
                                        uVar5 = *unaff_x26;
                                        *(undefined4 *)(lVar8 + 0x18) = 0;
                                        lVar6 = thunk_FUN_0367fe20(uVar5);
                                        FUN_0459e7d4(lVar6,*unaff_x19);
                                        if (lVar6 != 0) {
                                          lVar9 = *(long *)(lVar6 + 0x10);
                                          uVar5 = *(undefined8 *)
                                                                                                      
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinOpenRoom>d__28>__
                                          ;
                                          lVar10 = *unaff_x28;
                                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                          if (lVar9 != 0) {
                                            uVar1 = *(uint *)(lVar6 + 0x18);
                                            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                              *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) =
                                                   uVar5;
                                              thunk_FUN_036b7ad0();
                                            }
                                            else {
                                              FUN_0459f03c(lVar6,uVar5,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar10 + 0x20) +
                                                                      0xc0) + 0x70));
                                            }
                                            *(long *)(lVar8 + 0x30) = lVar6;
                                            thunk_FUN_036b7ad0((long *)(lVar8 + 0x30),lVar6);
                                            lVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                            FUN_0459e7d4(lVar6,*(undefined8 *)
                                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                            lVar9 = thunk_FUN_0367fe20(*unaff_x27);
                                            FUN_05e5ae34(lVar9,0);
                                            if (lVar9 != 0) {
                                              *(undefined8 *)(lVar9 + 0x18) =
                                                   *(undefined8 *)
                                                                                                        
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetResult__
                                              ;
                                              thunk_FUN_036b7ad0();
                                              *(undefined8 *)(lVar9 + 0x10) = *unaff_x25;
                                              thunk_FUN_036b7ad0();
                                              lVar10 = thunk_FUN_0367fe20(*unaff_x26);
                                              FUN_0459e7d4(lVar10,*unaff_x19);
                                              if (lVar10 != 0) {
                                                lVar11 = *(long *)(lVar10 + 0x10);
                                                uVar5 = *(undefined8 *)
                                                                                                                  
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                ;
                                                lVar12 = *unaff_x28;
                                                *(int *)(lVar10 + 0x1c) =
                                                     *(int *)(lVar10 + 0x1c) + 1;
                                                if (lVar11 != 0) {
                                                  uVar1 = *(uint *)(lVar10 + 0x18);
                                                  if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                    *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                    *(undefined8 *)
                                                     (lVar11 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
                                                    thunk_FUN_036b7ad0();
                                                  }
                                                  else {
                                                    FUN_0459f03c(lVar10,uVar5,
                                                                 *(undefined8 *)
                                                                  (*(long *)(*(long *)(lVar12 + 0x20
                                                                                      ) + 0xc0) +
                                                                  0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x20),lVar10);
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar7,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<MRUK_LoadDeviceResult>_AwaitUnsafeOnCompleted<TaskAwaiter<MRUK_LoadDeviceResult>,_MRUK_<LoadSceneFromJsonSharedLib>d__89>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar10 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar10,*unaff_x19);
                                                  if (lVar10 != 0) {
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar12 = *unaff_x28;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar5;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x20),lVar10);
                                                  lVar10 = *(long *)(lVar6 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar6;
                                                  thunk_FUN_036b7ad0((long *)(lVar8 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar7,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e5ae34(lVar8,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetResult__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_CompilerServices_Ephemeron___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x20));
                                                  uVar5 = *unaff_x26;
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_0367fe20(uVar5);
                                                  FUN_0459e7d4(lVar6,*unaff_x19);
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__25>__
                                                  ;
                                                  lVar10 = *unaff_x28;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar6,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  thunk_FUN_036b7ad0((long *)(lVar8 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetException__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar10 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar10,*unaff_x19);
                                                  if (lVar10 != 0) {
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar12 = *unaff_x28;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar5;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x20),lVar10);
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar7,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinOpenRoom>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar10 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar10,*unaff_x19);
                                                  if (lVar10 != 0) {
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar12 = *unaff_x28;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar5;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x20),lVar10);
                                                  lVar10 = *(long *)(lVar6 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar6;
                                                  thunk_FUN_036b7ad0((long *)(lVar8 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar7,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e5ae34(lVar8,0);
                                                    puVar2 = 
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_Start<Tensor_<ReadbackAndCloneAsync>d__28>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  UnityEngine_UIElements_FilterParameterDeclaration___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x20));
                                                  uVar5 = *unaff_x26;
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_0367fe20(uVar5);
                                                  FUN_0459e7d4(lVar6,*unaff_x19);
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_OVRTask_Awaiter<OVRResult<OVRColocationSession_Result>>_get_IsCompleted__
                                                  ;
                                                  lVar10 = *unaff_x28;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar6,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  thunk_FUN_036b7ad0((long *)(lVar8 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_AwaitableAsyncMethodBuilder<Tensor>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar10 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar10,*unaff_x19);
                                                  if (lVar10 != 0) {
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar12 = *unaff_x28;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar5;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x20),lVar10);
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar7,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_UnityEngine_Awaitable_Awaiter<NativeArray<int>>_GetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar10 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar10,*unaff_x19);
                                                  if (lVar10 != 0) {
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar12 = *unaff_x28;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar5;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x20),lVar10);
                                                  lVar10 = *(long *)(lVar6 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar6;
                                                  thunk_FUN_036b7ad0((long *)(lVar8 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar7,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e5ae34(lVar8,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Start<WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                          System_Globalization_EraInfo___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar8 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x20))
                                                    ;
                                                    uVar5 = *unaff_x26;
                                                    *(undefined4 *)(lVar8 + 0x18) = 0;
                                                    lVar6 = thunk_FUN_0367fe20(uVar5);
                                                    FUN_0459e7d4(lVar6,*unaff_x19);
                                                    if (lVar6 != 0) {
                                                      lVar9 = *(long *)(lVar6 + 0x10);
                                                      uVar5 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetResult__
                                                  ;
                                                  lVar10 = *unaff_x28;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar6,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  thunk_FUN_036b7ad0((long *)(lVar8 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__25>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar10 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar10,*unaff_x19);
                                                  if (lVar10 != 0) {
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar12 = *unaff_x28;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar5;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x20),lVar10);
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar7,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar10 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar10,*unaff_x19);
                                                  if (lVar10 != 0) {
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar12 = *unaff_x28;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar5;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x20),lVar10);
                                                  lVar10 = *(long *)(lVar6 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar6;
                                                  thunk_FUN_036b7ad0((long *)(lVar8 + 0x28),lVar6);
                                                  lVar6 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar6 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar6 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar7 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar7,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar8 = thunk_FUN_0367fe20(*(undefined8 *)puVar2
                                                                              );
                                                    FUN_05e5ae34(lVar8,0);
                                                    puVar2 = 
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_SaveResult>>_GetResult__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Unity_IO_LowLevel_Unsafe_FileReadType___TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x20));
                                                  uVar5 = *unaff_x26;
                                                  *(undefined4 *)(lVar8 + 0x18) = 0;
                                                  lVar6 = thunk_FUN_0367fe20(uVar5);
                                                  FUN_0459e7d4(lVar6,*unaff_x19);
                                                  if (lVar6 != 0) {
                                                    lVar9 = *(long *)(lVar6 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_UnityEngine_Awaitable<NativeArray<int>>_GetAwaiter__
                                                  ;
                                                  lVar10 = *unaff_x28;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar9 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar5
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar6,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x30) = lVar6;
                                                  thunk_FUN_036b7ad0((long *)(lVar8 + 0x30),lVar6);
                                                  lVar6 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  );
                                                  FUN_0459e7d4(lVar6,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<List<bool>>_GetResult__;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar10 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar10,*unaff_x19);
                                                  if (lVar10 != 0) {
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                                                  ;
                                                  lVar12 = *unaff_x28;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar5;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x20),lVar10);
                                                  if (lVar6 != 0) {
                                                    lVar10 = *(long *)(lVar6 + 0x10);
                                                    lVar11 = *(long *)puVar3;
                                                    *(int *)(lVar6 + 0x1c) =
                                                         *(int *)(lVar6 + 0x1c) + 1;
                                                    if (lVar10 != 0) {
                                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                        plVar7 = (long *)(lVar10 + (long)(int)uVar1
                                                                                   * 8 + 0x20);
                                                        *plVar7 = lVar9;
                                                        thunk_FUN_036b7ad0(plVar7,lVar9);
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar6,lVar9,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  lVar9 = thunk_FUN_0367fe20(*unaff_x27);
                                                  FUN_05e5ae34(lVar9,0);
                                                  if (lVar9 != 0) {
                                                    *(undefined8 *)(lVar9 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_OVRTask_Awaiter<OVRResult<OVRAnchor_EraseResult>>_get_IsCompleted__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar9 + 0x10) = *unaff_x25;
                                                  thunk_FUN_036b7ad0();
                                                  lVar10 = thunk_FUN_0367fe20(*unaff_x26);
                                                  FUN_0459e7d4(lVar10,*unaff_x19);
                                                  if (lVar10 != 0) {
                                                    lVar11 = *(long *)(lVar10 + 0x10);
                                                    uVar5 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                                  ;
                                                  lVar12 = *unaff_x28;
                                                  *(int *)(lVar10 + 0x1c) =
                                                       *(int *)(lVar10 + 0x1c) + 1;
                                                  if (lVar11 != 0) {
                                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar11 + (long)(int)uVar1 * 8 + 0x20) =
                                                           uVar5;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar10,uVar5,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar12 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar9 + 0x20) = lVar10;
                                                  thunk_FUN_036b7ad0((long *)(lVar9 + 0x20),lVar10);
                                                  lVar10 = *(long *)(lVar6 + 0x10);
                                                  lVar11 = *(long *)puVar3;
                                                  *(int *)(lVar6 + 0x1c) =
                                                       *(int *)(lVar6 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar6 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                                      plVar7 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar7 = lVar9;
                                                      thunk_FUN_036b7ad0(plVar7,lVar9);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar6,lVar9,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar11 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar8 + 0x28) = lVar6;
                                                  thunk_FUN_036b7ad0((long *)(lVar8 + 0x28),lVar6);
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
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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


