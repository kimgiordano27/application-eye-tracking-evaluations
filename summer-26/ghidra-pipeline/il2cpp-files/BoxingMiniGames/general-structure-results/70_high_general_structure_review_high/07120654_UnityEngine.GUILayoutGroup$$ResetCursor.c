/*
FUNCTION_NAME: UnityEngine.GUILayoutGroup$$ResetCursor
ENTRY_POINT: 07120654
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


void UnityEngine_GUILayoutGroup__ResetCursor(void)

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
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x28;
  undefined8 *puVar12;
  undefined8 *unaff_x29;
  
  puVar12 = *(undefined8 **)(unaff_x28 + 0x298);
  *(undefined8 *)(unaff_x23 + 0x18) = *puVar12;
  thunk_FUN_036b7ad0();
  *(undefined8 *)(unaff_x23 + 0x10) =
       *(undefined8 *)
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__;
  thunk_FUN_036b7ad0();
  if (unaff_x22 != 0) {
    lVar8 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(unaff_x22 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
        *(long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = unaff_x23;
        thunk_FUN_036b7ad0();
      }
      else {
        FUN_0459f03c();
      }
      *(long *)(unaff_x21 + 0x28) = unaff_x22;
      thunk_FUN_036b7ad0();
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
        lVar8 = thunk_FUN_0367fe20(*(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<JsonTextReader_<ReadDataAsync>d__7>__
                                  );
        FUN_05e5ae34(lVar8,0);
        puVar2 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<SupporterPurchaseResult>_get_Task__
        ;
        puVar3 = 
        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsStringAsync>d__55>__
        ;
        if (lVar8 != 0) {
          *(undefined8 *)(lVar8 + 0x10) =
               *(undefined8 *)
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<object>,_JsonTextReader_<DoReadAsStringAsync>d__55>__
          ;
          thunk_FUN_036b7ad0();
          *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar2;
          thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x20));
          uVar5 = *unaff_x24;
          *(undefined4 *)(lVar8 + 0x18) = 0;
          lVar6 = thunk_FUN_0367fe20(uVar5);
          FUN_0459e7d4(lVar6,*unaff_x29);
          if (lVar6 != 0) {
            lVar9 = *(long *)(lVar6 + 0x10);
            uVar5 = *(undefined8 *)puVar3;
            lVar10 = *unaff_x25;
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
              lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                        );
              FUN_05e5ae34(lVar9,0);
              if (lVar9 != 0) {
                *(undefined8 *)(lVar9 + 0x18) = *puVar12;
                thunk_FUN_036b7ad0();
                puVar3 = 
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__
                ;
                *(undefined8 *)(lVar9 + 0x10) =
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_SetStateMachine__
                ;
                thunk_FUN_036b7ad0();
                if (lVar6 != 0) {
                  lVar10 = *(long *)(lVar6 + 0x10);
                  lVar11 = *unaff_x26;
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
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_get_Task__
                      ;
                      puVar2 = 
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<WebOperation_<GetRequestStream>d__50>__
                      ;
                      if (lVar8 != 0) {
                        *(undefined8 *)(lVar8 + 0x10) =
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_get_Task__
                        ;
                        thunk_FUN_036b7ad0();
                        *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)puVar2;
                        thunk_FUN_036b7ad0((undefined8 *)(lVar8 + 0x20));
                        uVar5 = *unaff_x24;
                        *(undefined4 *)(lVar8 + 0x18) = 0;
                        lVar6 = thunk_FUN_0367fe20(uVar5);
                        FUN_0459e7d4(lVar6,*unaff_x29);
                        if (lVar6 != 0) {
                          lVar9 = *(long *)(lVar6 + 0x10);
                          uVar5 = *(undefined8 *)puVar4;
                          lVar10 = *unaff_x25;
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
                            lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                                                                                                                
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<int>_Start<FixedSizeReadStream_<ProcessReadAsync>d__5>__
                                                  );
                            FUN_05e5ae34(lVar9,0);
                            if (lVar9 != 0) {
                              *(undefined8 *)(lVar9 + 0x18) =
                                   *(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Stream>_Start<XmlDownloadManager_<GetNonFileStreamAsync>d__5>__
                              ;
                              thunk_FUN_036b7ad0();
                              *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)puVar3;
                              thunk_FUN_036b7ad0();
                              if (lVar6 != 0) {
                                lVar10 = *(long *)(lVar6 + 0x10);
                                lVar11 = *unaff_x26;
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
                                                  (*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70
                                                  ));
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
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


