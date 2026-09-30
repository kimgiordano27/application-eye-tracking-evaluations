/*
FUNCTION_NAME: Unity.Hierarchy.Hierarchy$$Dispose
ENTRY_POINT: 0710f0a4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_1;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x0710f580) */
/* WARNING: Removing unreachable block (ram,0x0710f72c) */

void Unity_Hierarchy_Hierarchy__Dispose(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long unaff_x19;
  long unaff_x20;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  long *unaff_x24;
  long unaff_x29;
  long *plVar15;
  undefined8 in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 in_stack_00000040;
  long in_stack_00000048;
  undefined8 in_stack_00000050;
  long *in_stack_00000058;
  
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<MatchValueAsync>d__19>__
  ;
  plVar15 = *(long **)(unaff_x29 + 0x9a8);
  do {
    lVar9 = *param_1;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *plVar15) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0710f110;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0367cd30(param_1,*plVar15,0);
LAB_0710f110:
    uVar10 = (*(code *)*puVar7)(param_1,puVar7[1]);
    plVar6 = in_stack_00000058;
    puVar3 = PTR_DAT_079f4598;
    if ((uVar10 & 1) == 0) {
      if (in_stack_00000058 == (long *)0x0) goto LAB_0710f274;
      lVar9 = *in_stack_00000058;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 == 0) goto LAB_0710f24c;
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      break;
    }
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar9 = *in_stack_00000058;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0710f174;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar7 = (undefined8 *)FUN_0367cd30(in_stack_00000058,*(long *)puVar4,0);
LAB_0710f174:
    lVar9 = (*(code *)*puVar7)(plVar6,puVar7[1]);
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    iVar1 = *(int *)(unaff_x20 + 0x18);
    FUN_071146a8(lVar9);
    iVar12 = *(int *)(unaff_x20 + 0x18);
    while (iVar12 = iVar12 + -1, iVar1 <= iVar12) {
      uVar8 = FUN_0459ed6c();
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar10 = FUN_07114554(lVar9,uVar8);
      if ((uVar10 & 1) == 0) {
        FUN_045a0804();
      }
    }
    param_1 = in_stack_00000058;
    if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_079f4598) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0710f268;
    }
  }
LAB_0710f24c:
  puVar7 = (undefined8 *)FUN_0367cd30(in_stack_00000058,*(long *)PTR_DAT_079f4598,0);
LAB_0710f268:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
LAB_0710f274:
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar10 = FUN_0711474c();
  if ((uVar10 & 1) == 0) {
    return;
  }
  lVar9 = FUN_07108790(0);
  if (lVar9 != 0) {
    uVar8 = FUN_03cb49d0(*(undefined8 *)(lVar9 + 0x18),
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_SetResult__
                        );
    puVar4 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_JsonTextReader_<ReadNullCharAsync>d__34>__
    ;
    lVar9 = *(long *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_JsonTextReader_<ReadNullCharAsync>d__34>__
    ;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_036a1978(lVar9);
      lVar9 = *(long *)puVar4;
    }
    puVar7 = *(undefined8 **)(lVar9 + 0xb8);
    lVar13 = puVar7[2];
    if (lVar13 == 0) {
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_036a1978(lVar9);
        puVar7 = *(undefined8 **)
                  (*(long *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_JsonTextReader_<ReadNullCharAsync>d__34>__
                  + 0xb8);
      }
      uVar14 = *puVar7;
      lVar13 = thunk_FUN_0367fe20(*(undefined8 *)
                                   Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonReader_<ReadAndMoveToContentAsync>d__12>__
                                 );
      FUN_04159004(lVar13,uVar14,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_JsonTextReader_<ReadCharsAsync>d__14>__
                   ,0);
      plVar15 = (long *)(*(long *)(*(long *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_JsonTextReader_<ReadNullCharAsync>d__34>__
                                  + 0xb8) + 0x10);
      *plVar15 = lVar13;
      thunk_FUN_036b7ad0(plVar15,lVar13);
    }
    plVar15 = (long *)FUN_03cc7aa0(uVar8,lVar13,
                                   *(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_SetStateMachine__
                                  );
    if (plVar15 != (long *)0x0) {
      lVar9 = *plVar15;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) ==
              *(long *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<DoReadAsync>d__3>__
             ) {
            puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_0710f3c8;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar7 = (undefined8 *)
               FUN_0367cd30(plVar15,*(long *)
                                     Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<DoReadAsync>d__3>__
                            ,0);
LAB_0710f3c8:
      in_stack_00000058 = (long *)(*(code *)*puVar7)(plVar15,puVar7[1]);
      puVar5 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<MatchValueAsync>d__19>__
      ;
      puVar4 = PTR_DAT_079f49a8;
      in_stack_00000010 = &stack0x00000058;
      in_stack_00000008 = 0;
      do {
        plVar15 = in_stack_00000058;
        if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar9 = *in_stack_00000058;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar4) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0710f44c;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_0367cd30(in_stack_00000058,*(long *)puVar4,0);
LAB_0710f44c:
        uVar10 = (*(code *)*puVar7)(plVar15,puVar7[1]);
        plVar15 = in_stack_00000058;
        if ((uVar10 & 1) == 0) {
          if (in_stack_00000058 == (long *)0x0) goto LAB_0710f574;
          lVar9 = *in_stack_00000058;
          uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar10 == 0) goto LAB_0710f54c;
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          goto LAB_0710f534;
        }
        if (in_stack_00000058 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        lVar9 = *in_stack_00000058;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar10 != 0) {
          piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
              puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
              goto LAB_0710f4b0;
            }
            uVar10 = uVar10 - 1;
            piVar11 = piVar11 + 4;
          } while (uVar10 != 0);
        }
        puVar7 = (undefined8 *)FUN_0367cd30(in_stack_00000058,*(long *)puVar5,0);
LAB_0710f4b0:
        plVar15 = (long *)(*(code *)*puVar7)(plVar15,puVar7[1]);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_071146a8(plVar15);
        if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        FUN_0459ed6c();
        (**(code **)(*plVar15 + 0x358))(plVar15);
      } while( true );
    }
  }
  goto LAB_0710f728;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
LAB_0710f534:
    if (*(long *)(piVar11 + -2) == *(long *)puVar3) {
      puVar7 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0710f568;
    }
  }
LAB_0710f54c:
  puVar7 = (undefined8 *)FUN_0367cd30(in_stack_00000058,*(long *)puVar3,0);
LAB_0710f568:
  (*(code *)*puVar7)(plVar15,puVar7[1]);
LAB_0710f574:
  lVar9 = thunk_FUN_0367fe20(*(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_SetException__
                            );
  FUN_056aea28(lVar9,*(undefined8 *)
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_Create__
              );
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar10 = FUN_07114a90();
  if ((uVar10 & 1) == 0) {
    return;
  }
  if (unaff_x19 != 0) {
    if (0 < *(int *)(unaff_x19 + 0x18)) {
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      FUN_0711474c();
      FUN_07114a90();
    }
    if (*(int *)(*unaff_x24 + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    FUN_071155f0();
    if (lVar9 != 0) {
      FUN_056af808(&stack0x00000008,lVar9,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_Start<AsyncProtocolRequest_<StartOperation>d__23>__
                  );
      puVar3 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<bool>,_JsonTextReader_<ReadFromFinishedAsync>d__5>__
      ;
      puVar4 = 
      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitOnCompleted<OVRTask_Awaiter<OVRResult<List<OVRAnchor>,_OVRAnchor_FetchResult>>,_MRUK_<HasSceneModel>d__45>__
      ;
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000030 = in_stack_00000008;
      in_stack_00000048 = in_stack_00000020;
      in_stack_00000040 = in_stack_00000018;
      in_stack_00000050 = in_stack_00000028;
      in_stack_00000008 = 0;
      in_stack_00000010 = &stack0x00000030;
      while (uVar10 = FUN_05959498(&stack0x00000030,*(undefined8 *)puVar4),
            lVar9 = in_stack_00000048, uVar8 = in_stack_00000040, (uVar10 & 1) != 0) {
        if (in_stack_00000048 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c18();
        }
        uVar14 = FUN_0472a484(in_stack_00000048,*(undefined8 *)puVar3);
        uVar2 = *(undefined4 *)(lVar9 + 0x18);
        if (*(int *)(*unaff_x24 + 0xe4) == 0) {
          thunk_FUN_036a1978();
        }
        uVar10 = FUN_07115718(uVar8,uVar14,uVar2);
        if ((uVar10 & 1) == 0) {
          FUN_07113b14();
        }
      }
      FUN_059595b8(&stack0x00000030,
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<AsyncProtocolResult>_get_Task__
                  );
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar10 = FUN_07115860();
      if ((uVar10 & 1) != 0) {
        return;
      }
      FUN_07113b14();
      return;
    }
  }
LAB_0710f728:
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


