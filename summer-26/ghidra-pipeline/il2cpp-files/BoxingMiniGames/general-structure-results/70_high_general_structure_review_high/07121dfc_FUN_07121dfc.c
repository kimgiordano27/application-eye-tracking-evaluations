/*
FUNCTION_NAME: FUN_07121dfc
ENTRY_POINT: 07121dfc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_6;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_07121dfc(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  long *unaff_x29;
  
  lVar4 = thunk_FUN_0367fe20(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                            );
  FUN_05e5ae34(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x18) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinOpenRoom>d__28>__
    ;
    thunk_FUN_036b7ad0();
    *(undefined8 *)(lVar4 + 0x10) = *unaff_x27;
    thunk_FUN_036b7ad0();
    lVar5 = thunk_FUN_0367fe20(*unaff_x28);
    FUN_0459e7d4(lVar5,*unaff_x26);
    if (lVar5 != 0) {
      lVar8 = *(long *)(lVar5 + 0x10);
      uVar7 = *(undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__;
      lVar10 = *unaff_x29;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar5 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
          thunk_FUN_036b7ad0();
        }
        else {
          FUN_0459f03c(lVar5,uVar7,
                       *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        *(long *)(lVar4 + 0x20) = lVar5;
        thunk_FUN_036b7ad0((long *)(lVar4 + 0x20),lVar5);
        lVar5 = *(long *)(unaff_x22 + 0x10);
        *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
        puVar3 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__;
        if (lVar5 != 0) {
          uVar1 = *(uint *)(unaff_x22 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
            plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
            *plVar6 = lVar4;
            thunk_FUN_036b7ad0(plVar6,lVar4);
          }
          else {
            FUN_0459f03c();
          }
          *(long *)(unaff_x21 + 0x28) = unaff_x22;
          thunk_FUN_036b7ad0();
          if (unaff_x20 != 0) {
            lVar4 = *(long *)(unaff_x20 + 0x10);
            *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
            if (lVar4 != 0) {
              uVar1 = *(uint *)(unaff_x20 + 0x18);
              if (uVar1 < *(uint *)(lVar4 + 0x18)) {
                *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = unaff_x21;
                thunk_FUN_036b7ad0();
              }
              else {
                FUN_0459f03c();
              }
              lVar4 = thunk_FUN_0367fe20(*unaff_x25);
              FUN_05e5ae34(lVar4,0);
              puVar2 = 
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Start<WebConnection_<InitConnection>d__19>__
              ;
              if (lVar4 != 0) {
                *(undefined8 *)(lVar4 + 0x10) =
                     *(undefined8 *)System_Globalization_EraInfo___TypeInfo;
                thunk_FUN_036b7ad0();
                *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                uVar7 = *unaff_x28;
                *(undefined4 *)(lVar4 + 0x18) = 0;
                lVar5 = thunk_FUN_0367fe20(uVar7);
                FUN_0459e7d4(lVar5,*unaff_x26);
                if (lVar5 != 0) {
                  lVar8 = *(long *)(lVar5 + 0x10);
                  uVar7 = *(undefined8 *)
                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_SetResult__
                  ;
                  lVar10 = *unaff_x29;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar8 != 0) {
                    uVar1 = *(uint *)(lVar5 + 0x18);
                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                      thunk_FUN_036b7ad0();
                    }
                    else {
                      FUN_0459f03c(lVar5,uVar7,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                    }
                    *(long *)(lVar4 + 0x30) = lVar5;
                    thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                    lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                    FUN_0459e7d4(lVar5,*(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                );
                    lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                              );
                    FUN_05e5ae34(lVar8,0);
                    if (lVar8 != 0) {
                      *(undefined8 *)(lVar8 + 0x18) =
                           *(undefined8 *)
                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__25>__
                      ;
                      thunk_FUN_036b7ad0();
                      *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                      thunk_FUN_036b7ad0();
                      lVar10 = thunk_FUN_0367fe20(*unaff_x28);
                      FUN_0459e7d4(lVar10,*unaff_x26);
                      if (lVar10 != 0) {
                        lVar9 = *(long *)(lVar10 + 0x10);
                        uVar7 = *(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JObject>_SetResult__
                        ;
                        lVar11 = *unaff_x29;
                        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                        if (lVar9 != 0) {
                          uVar1 = *(uint *)(lVar10 + 0x18);
                          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                            *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                            thunk_FUN_036b7ad0();
                          }
                          else {
                            FUN_0459f03c(lVar10,uVar7,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
                          }
                          *(long *)(lVar8 + 0x20) = lVar10;
                          thunk_FUN_036b7ad0((long *)(lVar8 + 0x20),lVar10);
                          if (lVar5 != 0) {
                            lVar10 = *(long *)(lVar5 + 0x10);
                            lVar9 = *(long *)
                                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                            ;
                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                            if (lVar10 != 0) {
                              uVar1 = *(uint *)(lVar5 + 0x18);
                              if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                *plVar6 = lVar8;
                                thunk_FUN_036b7ad0(plVar6,lVar8);
                              }
                              else {
                                FUN_0459f03c(lVar5,lVar8,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                              FUN_05e5ae34(lVar8,0);
                              if (lVar8 != 0) {
                                *(undefined8 *)(lVar8 + 0x18) =
                                     *(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetStateMachine__
                                ;
                                thunk_FUN_036b7ad0();
                                *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                thunk_FUN_036b7ad0();
                                lVar10 = thunk_FUN_0367fe20(*unaff_x28);
                                FUN_0459e7d4(lVar10,*unaff_x26);
                                if (lVar10 != 0) {
                                  lVar9 = *(long *)(lVar10 + 0x10);
                                  uVar7 = *(undefined8 *)
                                           Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<JArray>_get_Task__
                                  ;
                                  lVar11 = *unaff_x29;
                                  *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
                                  if (lVar9 != 0) {
                                    uVar1 = *(uint *)(lVar10 + 0x18);
                                    if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                                      *(uint *)(lVar10 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                                      thunk_FUN_036b7ad0();
                                    }
                                    else {
                                      FUN_0459f03c(lVar10,uVar7,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) +
                                                    0x70));
                                    }
                                    *(long *)(lVar8 + 0x20) = lVar10;
                                    thunk_FUN_036b7ad0((long *)(lVar8 + 0x20),lVar10);
                                    lVar10 = *(long *)(lVar5 + 0x10);
                                    lVar9 = *(long *)
                                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                    ;
                                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                    puVar3 = 
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                    ;
                                    if (lVar10 != 0) {
                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                      if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                        plVar6 = (long *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
                                        *plVar6 = lVar8;
                                        thunk_FUN_036b7ad0(plVar6,lVar8);
                                      }
                                      else {
                                        FUN_0459f03c(lVar5,lVar8,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                      0x70));
                                      }
                                      *(long *)(lVar4 + 0x28) = lVar5;
                                      thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                      lVar5 = *(long *)(unaff_x20 + 0x10);
                                      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
                                      if (lVar5 != 0) {
                                        uVar1 = *(uint *)(unaff_x20 + 0x18);
                                        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                          *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                          plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                                          *plVar6 = lVar4;
                                          thunk_FUN_036b7ad0(plVar6,lVar4);
                                        }
                                        else {
                                          FUN_0459f03c();
                                        }
                                        lVar4 = thunk_FUN_0367fe20(*unaff_x25);
                                        FUN_05e5ae34(lVar4,0);
                                        puVar2 = PTR_DAT_07a3b5d0;
                                        if (lVar4 != 0) {
                                          *(undefined8 *)(lVar4 + 0x10) =
                                               *(undefined8 *)PTR_DAT_07a00bd8;
                                          thunk_FUN_036b7ad0();
                                          *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)puVar2;
                                          thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                          uVar7 = *unaff_x28;
                                          *(undefined4 *)(lVar4 + 0x18) = 0;
                                          lVar5 = thunk_FUN_0367fe20(uVar7);
                                          FUN_0459e7d4(lVar5,*unaff_x26);
                                          if (lVar5 != 0) {
                                            lVar8 = *(long *)(lVar5 + 0x10);
                                            uVar7 = *(undefined8 *)
                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinOpenRoom>d__28>__
                                            ;
                                            lVar10 = *unaff_x29;
                                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                            if (lVar8 != 0) {
                                              uVar1 = *(uint *)(lVar5 + 0x18);
                                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                                     = uVar7;
                                                thunk_FUN_036b7ad0();
                                              }
                                              else {
                                                FUN_0459f03c(lVar5,uVar7,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar10 + 0x20) +
                                                                        0xc0) + 0x70));
                                              }
                                              *(long *)(lVar4 + 0x30) = lVar5;
                                              thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                              lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                              FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                              lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                              FUN_05e5ae34(lVar8,0);
                                              if (lVar8 != 0) {
                                                *(undefined8 *)(lVar8 + 0x18) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetResult__
                                                ;
                                                thunk_FUN_036b7ad0();
                                                *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                                thunk_FUN_036b7ad0();
                                                if (lVar5 != 0) {
                                                  lVar10 = *(long *)(lVar5 + 0x10);
                                                  lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_05e5ae34(lVar4,0);
                                                    puVar2 = PTR_DAT_07a2ca78;
                                                    if (lVar4 != 0) {
                                                      *(undefined8 *)(lVar4 + 0x10) =
                                                           *(undefined8 *)
                                                                                                                        
                                                  Unity_InferenceEngine_DynamicTensorDim___TypeInfo;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar7 = *unaff_x28;
                                                  *(undefined4 *)(lVar4 + 0x18) = 1;
                                                  lVar5 = thunk_FUN_0367fe20(uVar7);
                                                  FUN_0459e7d4(lVar5,*unaff_x26);
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    uVar7 = *(undefined8 *)puVar2;
                                                    lVar10 = *unaff_x29;
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    if (lVar8 != 0) {
                                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                        *(undefined8 *)
                                                         (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                             uVar7;
                                                        thunk_FUN_036b7ad0();
                                                      }
                                                      else {
                                                        FUN_0459f03c(lVar5,uVar7,
                                                                     *(undefined8 *)
                                                                      (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar3);
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar8,0);
                                                  puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetStateMachine__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_SetStateMachine__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_05e5ae34(lVar4,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_Create__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                          UnityEngine_Display___TypeInfo;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar2;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    uVar7 = *unaff_x28;
                                                    *(undefined4 *)(lVar4 + 0x18) = 0;
                                                    lVar5 = thunk_FUN_0367fe20(uVar7);
                                                    FUN_0459e7d4(lVar5,*unaff_x26);
                                                    if (lVar5 != 0) {
                                                      lVar8 = *(long *)(lVar5 + 0x10);
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<CreateRoom>d__26>__
                                                  ;
                                                  lVar10 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
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
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                                    thunk_FUN_036b7ad0();
                                                    puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_05e5ae34(lVar4,0);
                                                    puVar3 = PTR_DAT_07a2ca80;
                                                    if (lVar4 != 0) {
                                                      *(undefined8 *)(lVar4 + 0x10) =
                                                           *(undefined8 *)PTR_DAT_07a578d8;
                                                      thunk_FUN_036b7ad0();
                                                      *(undefined8 *)(lVar4 + 0x20) =
                                                           *(undefined8 *)puVar3;
                                                      thunk_FUN_036b7ad0((undefined8 *)
                                                                         (lVar4 + 0x20));
                                                      uVar7 = *unaff_x28;
                                                      *(undefined4 *)(lVar4 + 0x18) = 1;
                                                      lVar5 = thunk_FUN_0367fe20(uVar7);
                                                      FUN_0459e7d4(lVar5,*unaff_x26);
                                                      if (lVar5 != 0) {
                                                        lVar8 = *(long *)(lVar5 + 0x10);
                                                        uVar7 = *(undefined8 *)puVar3;
                                                        lVar10 = *unaff_x29;
                                                        *(int *)(lVar5 + 0x1c) =
                                                             *(int *)(lVar5 + 0x1c) + 1;
                                                        if (lVar8 != 0) {
                                                          uVar1 = *(uint *)(lVar5 + 0x18);
                                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                            *(undefined8 *)
                                                             (lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                                                 uVar7;
                                                            thunk_FUN_036b7ad0();
                                                          }
                                                          else {
                                                            FUN_0459f03c(lVar5,uVar7,
                                                                         *(undefined8 *)
                                                                          (*(long *)(*(long *)(
                                                  lVar10 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar8,0);
                                                  puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_AwaitUnsafeOnCompleted<TaskAwaiter<CustomMatchmaking_RoomOperationResult>,_CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_05e5ae34(lVar4,0);
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_get_Task__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  System_Runtime_Serialization_ElementData___TypeInfo
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar4 + 0x20) =
                                                       *(undefined8 *)puVar2;
                                                  thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20));
                                                  uVar7 = *unaff_x28;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_0367fe20(uVar7);
                                                  FUN_0459e7d4(lVar5,*unaff_x26);
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_SetException__
                                                  ;
                                                  lVar10 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
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
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                                    thunk_FUN_036b7ad0();
                                                    puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    *(int *)(lVar5 + 0x1c) =
                                                         *(int *)(lVar5 + 0x1c) + 1;
                                                    puVar2 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_SetStateMachine__
                                                  ;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(*(long *)
                                                  puVar3 + 0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_05e5ae34(lVar4,0);
                                                    puVar3 = 
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<CreateRoom>d__26>__
                                                  ;
                                                  if (lVar4 != 0) {
                                                    *(undefined8 *)(lVar4 + 0x10) =
                                                         *(undefined8 *)PTR_DAT_07a29538;
                                                    thunk_FUN_036b7ad0();
                                                    *(undefined8 *)(lVar4 + 0x20) =
                                                         *(undefined8 *)puVar3;
                                                    thunk_FUN_036b7ad0((undefined8 *)(lVar4 + 0x20))
                                                    ;
                                                    uVar7 = *unaff_x28;
                                                    *(undefined4 *)(lVar4 + 0x18) = 2;
                                                    lVar5 = thunk_FUN_0367fe20(uVar7);
                                                    FUN_0459e7d4(lVar5,*unaff_x26);
                                                    if (lVar5 != 0) {
                                                      lVar8 = *(long *)(lVar5 + 0x10);
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<WebRequestStream>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_WebConnection_<InitConnection>d__19>__
                                                  ;
                                                  lVar10 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_05e5ae34(lVar4,0);
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
                                                  uVar7 = *unaff_x28;
                                                  *(undefined4 *)(lVar4 + 0x18) = 0;
                                                  lVar5 = thunk_FUN_0367fe20(uVar7);
                                                  FUN_0459e7d4(lVar5,*unaff_x26);
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<CustomMatchmaking_RoomOperationResult>_Start<CustomMatchmaking_<JoinRoom>d__27>__
                                                  ;
                                                  lVar10 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<VoidTaskResult>_SetResult__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_05e5ae34(lVar4,0);
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
                                                  uVar7 = *unaff_x28;
                                                  *(undefined4 *)(lVar4 + 0x18) = 3;
                                                  lVar5 = thunk_FUN_0367fe20(uVar7);
                                                  FUN_0459e7d4(lVar5,*unaff_x26);
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<LeaderboardRow>_SetStateMachine__
                                                  ;
                                                  lVar10 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<ReadStringValueAsync>d__37>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_05e5ae34(lVar4,0);
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
                                                    uVar7 = *unaff_x28;
                                                    *(undefined4 *)(lVar4 + 0x18) = 3;
                                                    lVar5 = thunk_FUN_0367fe20(uVar7);
                                                    FUN_0459e7d4(lVar5,*unaff_x26);
                                                    if (lVar5 != 0) {
                                                      lVar8 = *(long *)(lVar5 + 0x10);
                                                      uVar7 = *(undefined8 *)
                                                                                                                              
                                                  UnityEngine_UIElements_UIR_DrawParams_TypeInfo;
                                                  lVar10 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    lVar4 = thunk_FUN_0367fe20(*unaff_x25);
                                                    FUN_05e5ae34(lVar4,0);
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
                                                  uVar7 = *unaff_x28;
                                                  *(undefined4 *)(lVar4 + 0x18) = 4;
                                                  lVar5 = thunk_FUN_0367fe20(uVar7);
                                                  FUN_0459e7d4(lVar5,*unaff_x26);
                                                  if (lVar5 != 0) {
                                                    lVar8 = *(long *)(lVar5 + 0x10);
                                                    uVar7 = *(undefined8 *)
                                                                                                                          
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<ValueTuple<WebHeaderCollection,_byte[],_int>>_SetStateMachine__
                                                  ;
                                                  lVar10 = *unaff_x29;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar8 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      *(undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                                      ;
                                                      thunk_FUN_036b7ad0();
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,uVar7,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar10 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x30) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x30),lVar5);
                                                  lVar5 = thunk_FUN_0367fe20(*(undefined8 *)puVar2);
                                                  FUN_0459e7d4(lVar5,*(undefined8 *)
                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Create__
                                                  );
                                                  lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                                                  FUN_05e5ae34(lVar8,0);
                                                  if (lVar8 != 0) {
                                                    *(undefined8 *)(lVar8 + 0x18) =
                                                         *(undefined8 *)
                                                                                                                    
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<User>_get_Task__
                                                  ;
                                                  thunk_FUN_036b7ad0();
                                                  *(undefined8 *)(lVar8 + 0x10) = *unaff_x27;
                                                  thunk_FUN_036b7ad0();
                                                  if (lVar5 != 0) {
                                                    lVar10 = *(long *)(lVar5 + 0x10);
                                                    lVar9 = *(long *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<MonoChunkStream_<ProcessReadAsync>d__7>__
                                                  ;
                                                  *(int *)(lVar5 + 0x1c) =
                                                       *(int *)(lVar5 + 0x1c) + 1;
                                                  if (lVar10 != 0) {
                                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar10 + (long)(int)uVar1 *
                                                                                 8 + 0x20);
                                                      *plVar6 = lVar8;
                                                      thunk_FUN_036b7ad0(plVar6,lVar8);
                                                    }
                                                    else {
                                                      FUN_0459f03c(lVar5,lVar8,
                                                                   *(undefined8 *)
                                                                    (*(long *)(*(long *)(lVar9 + 
                                                  0x20) + 0xc0) + 0x70));
                                                  }
                                                  *(long *)(lVar4 + 0x28) = lVar5;
                                                  thunk_FUN_036b7ad0((long *)(lVar4 + 0x28),lVar5);
                                                  lVar5 = *(long *)(unaff_x20 + 0x10);
                                                  *(int *)(unaff_x20 + 0x1c) =
                                                       *(int *)(unaff_x20 + 0x1c) + 1;
                                                  if (lVar5 != 0) {
                                                    uVar1 = *(uint *)(unaff_x20 + 0x18);
                                                    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                                                      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
                                                      plVar6 = (long *)(lVar5 + (long)(int)uVar1 * 8
                                                                       + 0x20);
                                                      *plVar6 = lVar4;
                                                      thunk_FUN_036b7ad0(plVar6,lVar4);
                                                    }
                                                    else {
                                                      FUN_0459f03c();
                                                    }
                                                    *(long *)(unaff_x19 + 0x28) = unaff_x20;
                                                    thunk_FUN_036b7ad0();
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
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


