/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$OnPointerEventRaised
ENTRY_POINT: 08a8a914
PROGRAM: Hyper-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__OnPointerEventRaised(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long *plVar8;
  long *unaff_x20;
  int unaff_w21;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  unaff_x19[0xe] = unaff_w21;
  iVar2 = FUN_08a7d750();
  if (unaff_w21 == iVar2) goto LAB_08a8a7a4;
  if (unaff_x20[0x28] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar5 = FUN_08a3ceb0(unaff_x20[0x28],unaff_x19[0xe],*(undefined8 *)(unaff_x19 + 0xc),0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  in_stack_00000038 = FUN_08df2f04(lVar5,0);
  uVar6 = FUN_08c80df8(&stack0x00000038,0);
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000038;
    thunk_FUN_049ee3d8(unaff_x19 + 0x10,0);
    FUN_05a708bc(unaff_x19 + 2,&stack0x00000038);
    return;
  }
  FUN_08c80ec0(&stack0x00000038,0);
  iVar2 = unaff_x19[0xe];
  if (iVar2 < 4) {
    if (iVar2 == 0) {
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      unaff_x20[0x2e] = 0;
      thunk_FUN_049ee3d8(unaff_x20 + 0x2e,0);
      unaff_x20[0x2d] = 0;
      thunk_FUN_049ee3d8(unaff_x20 + 0x2d,0);
      if (unaff_x20[0x28] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar5 = FUN_08a3cf68(unaff_x20[0x28],*(undefined8 *)(unaff_x19 + 0xc),0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      in_stack_00000018 = FUN_07764808(lVar5,*(undefined8 *)PTR_DAT_0ac549d8);
      uVar6 = FUN_076844c8(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac549d0);
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = 3;
        *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000018;
        thunk_FUN_049ee3d8(unaff_x19 + 0x16,0);
        FUN_05a6f83c(unaff_x19 + 2,&stack0x00000018);
        return;
      }
      lVar5 = FUN_07684508(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac549c8);
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      unaff_x20[0x2c] = lVar5;
      thunk_FUN_049ee3d8(unaff_x20 + 0x2c);
    }
    else if (iVar2 == 1) {
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (unaff_x20[0x28] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar5 = FUN_08a3d574(unaff_x20[0x28],*(undefined8 *)(unaff_x19 + 0xc),0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      in_stack_00000028 = FUN_07764808(lVar5,*(undefined8 *)PTR_DAT_0ac54988);
      uVar6 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac54980);
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_049ee3d8(unaff_x19 + 0x12,0);
        FUN_05a6f83c(unaff_x19 + 2,&stack0x00000028);
        return;
      }
      lVar5 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac54978);
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      unaff_x20[0x2e] = lVar5;
      thunk_FUN_049ee3d8(unaff_x20 + 0x2e);
      unaff_x20[0x2d] = 0;
      thunk_FUN_049ee3d8(unaff_x20 + 0x2d,0);
      unaff_x20[0x2c] = 0;
      thunk_FUN_049ee3d8(unaff_x20 + 0x2c,0);
    }
    else {
LAB_08a8a918:
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
    }
  }
  else if (iVar2 == 4) {
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    unaff_x20[0x2e] = 0;
    thunk_FUN_049ee3d8(unaff_x20 + 0x2e,0);
    lVar5 = FUN_08a7f190();
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    in_stack_00000020 = FUN_07764808(lVar5,*(undefined8 *)PTR_DAT_0ac549b0);
    uVar6 = FUN_076844c8(&stack0x00000020,*(undefined8 *)PTR_DAT_0ac549a8);
    if ((uVar6 & 1) == 0) {
      *unaff_x19 = 2;
      *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000020;
      thunk_FUN_049ee3d8(unaff_x19 + 0x14,0);
      FUN_05a6f83c(unaff_x19 + 2,&stack0x00000020);
      return;
    }
    lVar5 = FUN_07684508(&stack0x00000020,*(undefined8 *)PTR_DAT_0ac549a0);
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    unaff_x20[0x2d] = lVar5;
    thunk_FUN_049ee3d8(unaff_x20 + 0x2d);
    unaff_x20[0x2c] = 0;
    thunk_FUN_049ee3d8(unaff_x20 + 0x2c,0);
  }
  else {
    if (iVar2 != 7) goto LAB_08a8a918;
    if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    unaff_x20[0x2e] = 0;
    thunk_FUN_049ee3d8(unaff_x20 + 0x2e,0);
    unaff_x20[0x2d] = 0;
    thunk_FUN_049ee3d8(unaff_x20 + 0x2d,0);
    unaff_x20[0x2c] = 0;
    thunk_FUN_049ee3d8(unaff_x20 + 0x2c,0);
  }
  uVar6 = (**(code **)(*unaff_x20 + 0x1e8))();
  if ((uVar6 & 1) != 0) {
    if (unaff_x20[0x31] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined1 *)(unaff_x20[0x31] + 0x38) = 0;
  }
  puVar1 = PTR_DAT_0ac46eb8;
  if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32acf7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    DAT_0b32acf7 = '\x01';
  }
  lVar5 = *(long *)puVar1;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar5 = *(long *)puVar1;
  }
  in_stack_00000000._4_4_ = unaff_x19[0xe];
  plVar8 = (long *)**(undefined8 **)(lVar5 + 0xb8);
  uVar3 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac54c48,(long)&stack0x00000000 + 4);
  uVar3 = FUN_08bc9f74(*(undefined8 *)PTR_DAT_0ac54c50,uVar3,0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar5 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac46ed8) {
        puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_08a8a794;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar4 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a8a794:
  (*(code *)*puVar4)(plVar8,uVar3,puVar4[1]);
LAB_08a8a7a4:
  *unaff_x19 = 0xfffffffe;
  FUN_08c7f6c8(unaff_x19 + 2,0);
  return;
}


