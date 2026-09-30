/*
FUNCTION_NAME: Unity.Hierarchy.HierarchyFlattened$$Dispose
ENTRY_POINT: 0711053c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Hierarchy_HierarchyFlattened__Dispose(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long unaff_x22;
  undefined8 unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  long unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  long in_stack_00000040;
  
  do {
    *(undefined8 *)(param_1 + 0x28) = unaff_x23;
    thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x28),unaff_x23);
    if (*(uint *)(unaff_x22 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    *(undefined8 *)(unaff_x22 + 0x30) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter,_NavigationHomeSpace_<GoBackAsync>d__9>__
    ;
    thunk_FUN_036b7ad0();
    if ((*(uint *)(unaff_x22 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x28 + 0x10);
    thunk_FUN_036b7ad0();
    if (*(uint *)(unaff_x22 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    *(undefined8 *)(unaff_x22 + 0x40) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter,_GlovesOverlayViewModel_<TryTakeSupporterAsync>d__6>__
    ;
    thunk_FUN_036b7ad0();
    if (*(uint *)(unaff_x22 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x28 + 0x18);
    thunk_FUN_036b7ad0();
    if (*(uint *)(unaff_x22 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    *(undefined8 *)(unaff_x22 + 0x50) = *unaff_x29;
    thunk_FUN_036b7ad0();
    if ((*(uint *)(unaff_x22 + 0x18) & 0xfffffff8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x28 + 0x20);
    thunk_FUN_036b7ad0();
    if (*(uint *)(unaff_x22 + 0x18) < 9) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    *(undefined8 *)(unaff_x22 + 0x60) =
         *(undefined8 *)
          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ParseObjectAsync>d__15>__
    ;
    thunk_FUN_036b7ad0();
    uVar4 = FUN_05c98834(unaff_x22,0);
    if (unaff_x19 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18(uVar4,uVar4);
    }
    FUN_05ca401c();
    do {
      do {
        uVar7 = (ulong)*(uint *)(unaff_x21 + 0x18);
        unaff_x20 = unaff_x20 + 1;
        if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x20) {
          do {
            do {
              FUN_05ca401c(in_stack_00000008,*(undefined8 *)PTR_DAT_079fa6c0,0);
              uVar7 = FUN_05897b28(&stack0x00000030,
                                   *(undefined8 *)
                                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_PlayerIdentity_<CheckEntitlementAsync>d__10>__
                                  );
              unaff_x28 = in_stack_00000040;
              if ((uVar7 & 1) == 0) {
                FUN_05897b24(&stack0x00000030,
                             *(undefined8 *)
                              Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_ColocationSessionEventHandler_<SpaceSharingBeforeHostStart>d__12>__
                            );
                uVar4 = FUN_0710bf6c(*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<byte[]>_Start<JsonTextReader_<DoReadAsBytesAsync>d__42>__
                                    );
                FUN_0710c0ac();
                puVar1 = PTR_DAT_079f4610;
                in_stack_00000018 = 0;
                uVar5 = thunk_FUN_0367fa58(*(undefined8 *)(PTR_DAT_079f4610 + 0x50),&stack0x00000018
                                          );
                if (in_stack_00000008 != (long *)0x0) {
                  uVar6 = (**(code **)(*in_stack_00000008 + 0x168))
                                    (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x170));
                  puVar2 = 
                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<SupporterPurchaseResult>,_GlovesOverlayViewModel_<TryTakeSupporterAsync>d__6>__
                  ;
                  uVar5 = FUN_05c98b2c(*(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<SupporterPurchaseResult>,_GlovesOverlayViewModel_<TryTakeSupporterAsync>d__6>__
                                       ,uVar5,uVar6,0);
                  FUN_0710bff8(uVar4,*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<bool>,_SupporterGlovesIap_<RefreshOwnershipFromStoreAsync>d__8>__
                               ,uVar5);
                  FUN_0710c0ac(uVar4);
                  in_stack_00000010._4_4_ = unaff_w24;
                  uVar5 = thunk_FUN_0367fa58(*(undefined8 *)(puVar1 + 0x50),
                                             (long)&stack0x00000010 + 4);
                  if (unaff_x19 != (long *)0x0) {
                    uVar6 = (**(code **)(*unaff_x19 + 0x168))();
                    uVar5 = FUN_05c98b2c(*(undefined8 *)puVar2,uVar5,uVar6,0);
                    FUN_0710bff8(uVar4,*(undefined8 *)
                                        Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<TaskAwaiter<DataSnapshot>,_DuckerGlovesUnlockClient_<HasRewardAsync>d__7>__
                                 ,uVar5);
                    return;
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              lVar3 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4a08,7);
              if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if (*(int *)(lVar3 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar3 + 0x20) = *unaff_x27;
              thunk_FUN_036b7ad0();
              if (unaff_x28 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18();
              }
              if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar3 + 0x28) = *(undefined8 *)(unaff_x28 + 0x10);
              thunk_FUN_036b7ad0();
              if (*(uint *)(lVar3 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar3 + 0x30) =
                   *(undefined8 *)
                    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ParsePostValueAsync>d__4>__
              ;
              thunk_FUN_036b7ad0();
              if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar3 + 0x38) = *(undefined8 *)(unaff_x28 + 0x18);
              thunk_FUN_036b7ad0();
              if (*(uint *)(lVar3 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar3 + 0x40) = *unaff_x29;
              thunk_FUN_036b7ad0();
              if (*(uint *)(lVar3 + 0x18) < 6) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar3 + 0x48) = *(undefined8 *)(unaff_x28 + 0x20);
              thunk_FUN_036b7ad0();
              if (*(uint *)(lVar3 + 0x18) < 7) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c20();
              }
              *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)PTR_DAT_079ffa58;
              thunk_FUN_036b7ad0();
              uVar4 = FUN_05c98834(lVar3,0);
              if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_03642c18(uVar4,uVar4);
              }
              FUN_05ca401c(in_stack_00000008,uVar4,0);
              uVar7 = FUN_05c97640(*(undefined8 *)(unaff_x28 + 0x28),0);
            } while ((uVar7 & 1) != 0);
            uVar4 = FUN_05c981c8(*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter,_JsonTextReader_<ParsePropertyAsync>d__31>__
                                 ,*(undefined8 *)(unaff_x28 + 0x28),*(undefined8 *)PTR_DAT_079ffa58,
                                 0);
            FUN_05ca401c(in_stack_00000008,uVar4,0);
            if (*(long *)(unaff_x28 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
            unaff_x21 = FUN_05c9a704(*(long *)(unaff_x28 + 0x28),0x20,0,0);
            if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03642c18();
            }
          } while ((int)*(ulong *)(unaff_x21 + 0x18) < 1);
          unaff_x20 = 0;
          uVar7 = *(ulong *)(unaff_x21 + 0x18) & 0xffffffff;
          unaff_x26 = unaff_x21 + 0x20;
        }
        if (uVar7 <= unaff_x20) {
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        unaff_x23 = *(undefined8 *)(unaff_x26 + unaff_x20 * 8);
        uVar7 = FUN_05c9765c(unaff_x23,0);
      } while ((uVar7 & 1) != 0);
      if (*(int *)(*unaff_x25 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar7 = FUN_07110918(unaff_x23);
    } while ((uVar7 & 1) != 0);
    unaff_w24 = unaff_w24 + 1;
    param_1 = FUN_03642a4c(*(undefined8 *)PTR_DAT_079f4a08,9);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    *(undefined8 *)(param_1 + 0x20) = *unaff_x27;
    thunk_FUN_036b7ad0();
    unaff_x22 = param_1;
    if ((*(uint *)(param_1 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
  } while( true );
}


