/*
FUNCTION_NAME: FUN_069172bc
ENTRY_POINT: 069172bc
PROGRAM: Untangled-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


undefined8 FUN_069172bc(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  long lStack_30;
  undefined4 uStack_28;
  
  if ((bRam00000000071d7593 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d02220);
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter,_CloudServices_<ConfirmJoin>d__97>__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ParseObjectAsync>d__15>__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ParsePostValueAsync>d__4>__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ParsePropertyAsync>d__31>__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ParseValueAsync>d__8>__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ReadFromFinishedAsync>d__5>__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<CreateStream>d__18>__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<CloudServices_<ConfirmJoin>d__97>__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<CloudServices_<Service_HostMigrationSnapshot>d__101>__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonReader_<MoveToContentFromNonContentAsync>d__14>__
                );
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonReader_<ReadAndMoveToContentAsync>d__12>__
                );
    FUN_02f07e70(PTR_DAT_06d02130);
    FUN_02f07e70(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<DoReadAsync>d__3>__
                );
    bRam00000000071d7593 = 1;
  }
  uStack_28 = 0;
  uStack_38 = 0;
  lStack_30 = 0;
  uStack_3c = 0;
  uVar1 = FUN_06922b74(param_1);
  if ((uVar1 & 1) == 0) {
    return *(undefined8 *)PTR_DAT_06d02130;
  }
  lVar2 = FUN_02f07f14(*(undefined8 *)PTR_DAT_06d02220,0x18);
  if (lVar2 == 0) goto LAB_0691785c;
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<CloudServices_<Service_HostMigrationSnapshot>d__101>__
    ;
    thunk_FUN_02f411dc();
    plVar3 = (long *)*param_1;
    if (plVar3 == (long *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
    }
    if (1 < *(uint *)(lVar2 + 0x18)) {
      *(undefined8 *)(lVar2 + 0x28) = uVar4;
      thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x28));
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) =
             *(undefined8 *)
              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ParseObjectAsync>d__15>__
        ;
        thunk_FUN_02f411dc();
        plVar3 = (long *)param_1[1];
        if (plVar3 == (long *)0x0) {
          uVar4 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
        }
        if (3 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x38) = uVar4;
          thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x38));
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) =
                 *(undefined8 *)
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonReader_<MoveToContentFromNonContentAsync>d__14>__
            ;
            thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x40));
            uVar4 = FUN_05614484(param_1 + 2,0);
            if (5 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x48) = uVar4;
              thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x48),uVar4);
              if (6 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x50) =
                     *(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonReader_<ReadAndMoveToContentAsync>d__12>__
                ;
                thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x50));
                uVar4 = FUN_05614484((long)param_1 + 0x14,0);
                if (7 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x58) = uVar4;
                  thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x58),uVar4);
                  if (8 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x60) =
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_WebConnection_<CreateStream>d__18>__
                    ;
                    thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x60));
                    uVar4 = FUN_055ff450(param_1 + 3,0);
                    if (9 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x68) = uVar4;
                      thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x68),uVar4);
                      if (10 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0x70) =
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<CloudServices_<ConfirmJoin>d__97>__
                        ;
                        thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x70));
                        uStack_28 = (undefined4)param_1[8];
                        lStack_30 = param_1[7];
                        uVar4 = FUN_03064c24(&lStack_30,0,0,0);
                        if (0xb < *(uint *)(lVar2 + 0x18)) {
                          *(undefined8 *)(lVar2 + 0x78) = uVar4;
                          thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x78),uVar4);
                          if (0xc < *(uint *)(lVar2 + 0x18)) {
                            *(undefined8 *)(lVar2 + 0x80) =
                                 *(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ReadFromFinishedAsync>d__5>__
                            ;
                            thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x80));
                            uStack_28 = *(undefined4 *)((long)param_1 + 0x34);
                            lStack_30 = *(long *)((long)param_1 + 0x2c);
                            uVar4 = FUN_03064c24(&lStack_30,0,0,0);
                            if (0xd < *(uint *)(lVar2 + 0x18)) {
                              *(undefined8 *)(lVar2 + 0x88) = uVar4;
                              thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x88),uVar4);
                              if (0xe < *(uint *)(lVar2 + 0x18)) {
                                *(undefined8 *)(lVar2 + 0x90) =
                                     *(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_Start<JsonTextReader_<DoReadAsync>d__3>__
                                ;
                                thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x90));
                                uStack_38 = *(undefined8 *)((long)param_1 + 0x44);
                                uVar4 = FUN_0433ccd8(&uStack_38,0,0,0);
                                if (0xf < *(uint *)(lVar2 + 0x18)) {
                                  *(undefined8 *)(lVar2 + 0x98) = uVar4;
                                  thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0x98),uVar4);
                                  if (0x10 < *(uint *)(lVar2 + 0x18)) {
                                    *(undefined8 *)(lVar2 + 0xa0) =
                                         *(undefined8 *)
                                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ParsePostValueAsync>d__4>__
                                    ;
                                    thunk_FUN_02f411dc();
                                    plVar3 = (long *)param_1[1];
                                    if (plVar3 == (long *)0x0) {
LAB_0691785c:
                    /* WARNING: Subroutine does not return */
                                      FUN_02f080c0();
                                    }
                                    uStack_3c = (**(code **)(*plVar3 + 0x278))
                                                          (plVar3,*(undefined8 *)(*plVar3 + 0x280));
                                    uVar4 = FUN_055ff450(&uStack_3c,0);
                                    if (0x11 < *(uint *)(lVar2 + 0x18)) {
                                      *(undefined8 *)(lVar2 + 0xa8) = uVar4;
                                      thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0xa8),uVar4);
                                      if (0x12 < *(uint *)(lVar2 + 0x18)) {
                                        *(undefined8 *)(lVar2 + 0xb0) =
                                             *(undefined8 *)
                                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter,_CloudServices_<ConfirmJoin>d__97>__
                                        ;
                                        thunk_FUN_02f411dc();
                                        plVar3 = (long *)param_1[1];
                                        if (plVar3 == (long *)0x0) goto LAB_0691785c;
                                        uStack_3c = (**(code **)(*plVar3 + 0x288))
                                                              (plVar3,*(undefined8 *)
                                                                       (*plVar3 + 0x290));
                                        uVar4 = FUN_055ff450(&uStack_3c,0);
                                        if (0x13 < *(uint *)(lVar2 + 0x18)) {
                                          *(undefined8 *)(lVar2 + 0xb8) = uVar4;
                                          thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0xb8),uVar4);
                                          if (0x14 < *(uint *)(lVar2 + 0x18)) {
                                            *(undefined8 *)(lVar2 + 0xc0) =
                                                 *(undefined8 *)
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ParsePropertyAsync>d__31>__
                                            ;
                                            thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0xc0));
                                            uVar4 = FUN_055ff450((long)param_1 + 0x24,0);
                                            if (0x15 < *(uint *)(lVar2 + 0x18)) {
                                              *(undefined8 *)(lVar2 + 200) = uVar4;
                                              thunk_FUN_02f411dc((undefined8 *)(lVar2 + 200),uVar4);
                                              if (0x16 < *(uint *)(lVar2 + 0x18)) {
                                                *(undefined8 *)(lVar2 + 0xd0) =
                                                     *(undefined8 *)
                                                                                                            
                                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ParseValueAsync>d__8>__
                                                ;
                                                thunk_FUN_02f411dc((undefined8 *)(lVar2 + 0xd0));
                                                uVar4 = FUN_055ff450(param_1 + 5,0);
                                                if (0x17 < *(uint *)(lVar2 + 0x18)) {
                                                  *(undefined8 *)(lVar2 + 0xd8) = uVar4;
                                                  thunk_FUN_02f411dc();
                                                  uVar4 = FUN_0546583c(lVar2,0);
                                                  return uVar4;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
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
  FUN_02f080c8();
}


