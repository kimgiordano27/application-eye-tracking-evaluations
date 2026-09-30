/*
FUNCTION_NAME: Unity.Services.Vivox.vx_evt_account_delete_message_t$$Dispose
ENTRY_POINT: 05fe45b0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_12
*/


void Unity_Services_Vivox_vx_evt_account_delete_message_t__Dispose(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x19;
  long *unaff_x22;
  long unaff_x23;
  int iVar13;
  long *plVar14;
  long lVar15;
  long *in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((param_1 & 1) == 0) {
    FUN_02d965b8(PTR_DAT_069fb930);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginSession_<SetTransmissionModeAsync>d__165>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LobbyHandler_<LobbyUnsubscribeCallbacksAsync>d__65>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginSession_<SetTransmittingAsync>d__168>__
                );
    FUN_02d965b8(
                Method_UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<OverflowClipBox>,_OverflowClipBox>__ctor__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginSession_<DeleteChannelSessionAsync>d__119>__
                );
    FUN_02d965b8(PTR_DAT_069fb990);
    FUN_02d965b8(
                Method_UnityEngine_UIElements_StyleValuePropertyBag<StyleList<StylePropertyName>,_List<StylePropertyName>>__ctor__
                );
    FUN_02d965b8(Method_System_Collections_Generic_Stack<TextureId>_get_Count__);
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginSession_<WaitDeleteChannelSessionAsync>d__156>__
                );
    FUN_02d965b8(
                Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_MatchmakerModule_<LeaveAsync>d__34>__
                );
    *(undefined1 *)(unaff_x19 + 0x8b4) = 1;
  }
  puVar4 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginSession_<SetTransmissionModeAsync>d__165>__
  ;
  puVar3 = 
  Method_UnityEngine_UIElements_StyleValuePropertyBag<StyleList<StylePropertyName>,_List<StylePropertyName>>__ctor__
  ;
  puVar2 = 
  Method_UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<OverflowClipBox>,_OverflowClipBox>__ctor__
  ;
  puVar1 = Method_System_Collections_Generic_Stack<TextureId>_get_Count__;
  in_stack_00000018 = 0;
  if (unaff_x22 == (long *)0x0) {
LAB_05fe49ec:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  iVar13 = 0;
  plVar14 = (long *)0x0;
LAB_05fe4670:
  lVar10 = *unaff_x22;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
        puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_05fe46bc;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_02dd004c();
LAB_05fe46bc:
  lVar10 = (*(code *)*puVar6)();
  if (lVar10 == 0) goto LAB_05fe49ec;
  iVar5 = FUN_044190b4(lVar10,*(undefined8 *)puVar3);
  if (iVar5 <= iVar13) {
    return;
  }
  lVar10 = *unaff_x22;
  uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
        puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_05fe4728;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_02dd004c();
LAB_05fe4728:
  lVar10 = (*(code *)*puVar6)();
  if ((lVar10 == 0) || (lVar10 = FUN_04418e90(lVar10,iVar13,*(undefined8 *)puVar1), lVar10 == 0))
  goto LAB_05fe49ec;
  uVar11 = FUN_05f46658(lVar10,0);
  plVar8 = plVar14;
  if (((uVar11 & 1) == 0) && (uVar11 = FUN_05f45d78(lVar10,0), (uVar11 & 1) == 0)) {
    lVar15 = *(long *)(unaff_x23 + 0x28);
    uVar7 = thunk_FUN_02da6564(lVar10,0);
    if (lVar15 == 0) goto LAB_05fe49ec;
    uVar11 = FUN_04e95158(lVar15,uVar7,&stack0x00000018,*(undefined8 *)puVar4);
    uVar7 = in_stack_00000018;
    if ((uVar11 & 1) == 0) {
      plVar8 = (long *)thunk_FUN_02da6564(lVar10,0);
      puVar6 = (undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginSession_<WaitDeleteChannelSessionAsync>d__156>__
      ;
    }
    else {
      if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      lVar15 = FUN_0376b3f0(uVar7,in_stack_00000010,0,
                            *(undefined8 *)
                             Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginSession_<DeleteChannelSessionAsync>d__119>__
                           );
      if ((lVar15 == 0) || (lVar15 = FUN_0634bbcc(lVar15,0), lVar15 == 0)) goto LAB_05fe49ec;
      thunk_FUN_063544b0(lVar15,*(undefined8 *)(lVar10 + 0x28),0);
      plVar8 = (long *)FUN_0364c2b0(lVar15,*(undefined8 *)
                                            Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LoginSession_<SetTransmittingAsync>d__168>__
                                   );
      uVar11 = FUN_06350670(plVar8,0,0);
      if ((uVar11 & 1) == 0) {
        uVar11 = FUN_0536c9cc(*(undefined8 *)(unaff_x23 + 0x58),0);
        if ((uVar11 & 1) == 0) {
          if (*(long *)(lVar10 + 0x38) == 0) goto LAB_05fe49ec;
          uVar11 = FUN_0536b474(*(long *)(lVar10 + 0x38),*(undefined8 *)(unaff_x23 + 0x58),0);
          if ((uVar11 & 1) != 0) {
            *in_stack_00000000 = (long)plVar8;
            LeanTween__value(in_stack_00000000,plVar8);
          }
        }
        if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        uVar11 = FUN_0634eb94(plVar14,0,0);
        if ((uVar11 & 1) != 0) {
          if (plVar14 == (long *)0x0) goto LAB_05fe49ec;
          plVar14[10] = (long)plVar8;
          LeanTween__value(plVar14 + 10,plVar8);
        }
        if (plVar8 == (long *)0x0) goto LAB_05fe49ec;
        plVar8[9] = (long)plVar14;
        LeanTween__value(plVar8 + 9,plVar14);
        plVar8[8] = in_stack_00000008;
        LeanTween__value();
        (**(code **)(*plVar8 + 0x188))(plVar8,lVar10,*(undefined8 *)(*plVar8 + 400));
        lVar15 = FUN_0364c2b0(lVar15,*(undefined8 *)
                                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_LobbyHandler_<LobbyUnsubscribeCallbacksAsync>d__65>__
                             );
        if (*(int *)(*(long *)PTR_DAT_069fb990 + 0xe4) == 0) {
          thunk_FUN_02df485c(*(long *)PTR_DAT_069fb990);
        }
        uVar11 = FUN_0634eb94(lVar15,0,0);
        if (((uVar11 & 1) != 0) &&
           (lVar10 = thunk_FUN_02dd3048(lVar10,*(undefined8 *)puVar2), lVar10 != 0)) {
          if (lVar15 != 0) {
            FUN_05fe457c();
            goto Unity_Services_Vivox_vx_evt_account_edit_message_t__Dispose;
          }
          goto LAB_05fe49ec;
        }
        goto Unity_Services_Vivox_vx_evt_account_edit_message_t__Dispose;
      }
      plVar8 = (long *)thunk_FUN_02da6564(lVar10,0);
      puVar6 = (undefined8 *)
               Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted<TaskAwaiter,_MatchmakerModule_<LeaveAsync>d__34>__
      ;
    }
    uVar7 = *puVar6;
    if (plVar8 == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
    }
    uVar7 = FUN_05362cb4(uVar7,uVar9,0);
    if (*(int *)(*(long *)PTR_DAT_069fb930 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)PTR_DAT_069fb930);
    }
    FUN_06309d28(uVar7,0);
    plVar8 = plVar14;
  }
Unity_Services_Vivox_vx_evt_account_edit_message_t__Dispose:
  iVar13 = iVar13 + 1;
  plVar14 = plVar8;
  goto LAB_05fe4670;
}


