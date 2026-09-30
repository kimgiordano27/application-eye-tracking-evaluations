/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_account_edit_message_t$$Dispose
ENTRY_POINT: 05fe49c4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_5
*/


void Unity_Services_Vivox_vx_evt_account_edit_message_t__Dispose(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  int unaff_w24;
  long *unaff_x25;
  long lVar9;
  long *unaff_x29;
  long *in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
LAB_05fe4670:
  do {
    unaff_w24 = unaff_w24 + 1;
    lVar6 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05fe46bc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c();
LAB_05fe46bc:
    lVar6 = (*(code *)*puVar2)();
    if (lVar6 == 0) goto LAB_05fe49ec;
    iVar1 = FUN_044190b4(lVar6,*unaff_x19);
    if (iVar1 <= unaff_w24) {
      return;
    }
    lVar6 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x29) {
          puVar2 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_05fe4728;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar2 = (undefined8 *)FUN_02dd004c();
LAB_05fe4728:
    lVar6 = (*(code *)*puVar2)();
    if ((lVar6 == 0) || (lVar6 = FUN_04418e90(lVar6,unaff_w24,*unaff_x20), lVar6 == 0))
    goto LAB_05fe49ec;
    uVar7 = FUN_05f46658(lVar6,0);
  } while (((uVar7 & 1) != 0) || (uVar7 = FUN_05f45d78(lVar6,0), (uVar7 & 1) != 0));
  lVar9 = *(long *)(unaff_x23 + 0x28);
  uVar3 = thunk_FUN_02da6564(lVar6,0);
  if (lVar9 == 0) {
LAB_05fe49ec:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar7 = FUN_04e95158(lVar9,uVar3,&stack0x00000018,*unaff_x21);
  uVar3 = in_stack_00000018;
  if ((uVar7 & 1) == 0) {
    plVar4 = (long *)thunk_FUN_02da6564(lVar6,0);
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginSession_<WaitDeleteChannelSessionAsync>d__156>__
    ;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    lVar9 = FUN_0376b3f0(uVar3,in_stack_00000010,0,
                         *(undefined8 *)
                          Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginSession_<DeleteChannelSessionAsync>d__119>__
                        );
    if ((lVar9 == 0) || (lVar9 = FUN_0634bbcc(lVar9,0), lVar9 == 0)) goto LAB_05fe49ec;
    thunk_FUN_063544b0(lVar9,*(undefined8 *)(lVar6 + 0x28),0);
    plVar4 = (long *)FUN_0364c2b0(lVar9,*(undefined8 *)
                                         Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginSession_<SetTransmittingAsync>d__168>__
                                 );
    uVar7 = FUN_06350670(plVar4,0,0);
    if ((uVar7 & 1) == 0) {
      uVar7 = FUN_0536c9cc(*(undefined8 *)(unaff_x23 + 0x58),0);
      if ((uVar7 & 1) == 0) {
        if (*(long *)(lVar6 + 0x38) == 0) goto LAB_05fe49ec;
        uVar7 = FUN_0536b474(*(long *)(lVar6 + 0x38),*(undefined8 *)(unaff_x23 + 0x58),0);
        if ((uVar7 & 1) != 0) {
          *in_stack_00000000 = (long)plVar4;
          LeanTween__value(in_stack_00000000,plVar4);
        }
      }
      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      uVar7 = FUN_0634eb94(unaff_x25,0,0);
      if ((uVar7 & 1) != 0) {
        if (unaff_x25 == (long *)0x0) goto LAB_05fe49ec;
        unaff_x25[10] = (long)plVar4;
        LeanTween__value(unaff_x25 + 10,plVar4);
      }
      if (plVar4 == (long *)0x0) goto LAB_05fe49ec;
      plVar4[9] = (long)unaff_x25;
      LeanTween__value(plVar4 + 9,unaff_x25);
      plVar4[8] = in_stack_00000008;
      LeanTween__value();
      (**(code **)(*plVar4 + 0x188))(plVar4,lVar6,*(undefined8 *)(*plVar4 + 400));
      lVar9 = FUN_0364c2b0(lVar9,*(undefined8 *)
                                  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LobbyHandler_<LobbyUnsubscribeCallbacksAsync>d__65>__
                          );
      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
        thunk_FUN_02df485c(*(long *)PTR_DAT_069fb990);
      }
      uVar7 = FUN_0634eb94(lVar9,0,0);
      unaff_x25 = plVar4;
      if (((uVar7 & 1) != 0) && (lVar6 = thunk_FUN_02dd3048(lVar6,*unaff_x29), lVar6 != 0)) {
        if (lVar9 == 0) goto LAB_05fe49ec;
        FUN_05fe457c();
      }
      goto LAB_05fe4670;
    }
    plVar4 = (long *)thunk_FUN_02da6564(lVar6,0);
    puVar2 = (undefined8 *)
             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_MatchmakerModule_<LeaveAsync>d__34>__
    ;
  }
  uVar3 = *puVar2;
  if (plVar4 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*plVar4 + 0x168))(plVar4,*(undefined8 *)(*plVar4 + 0x170));
  }
  uVar3 = FUN_05362cb4(uVar3,uVar5,0);
  if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
    thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
  }
  FUN_06309d28(uVar3,0);
  goto LAB_05fe4670;
}


