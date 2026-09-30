/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.TransferOwnershipOnSelect$$LateUpdate
ENTRY_POINT: 08a8aa98
PROGRAM: Hyper-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_9;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Shared_TransferOwnershipOnSelect__LateUpdate(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  undefined4 *unaff_x19;
  long *plVar8;
  long *unaff_x20;
  undefined4 uStack0000000000000004;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000038;
  
  uVar6 = FUN_08c80df8();
  if ((uVar6 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000038;
    thunk_FUN_049ee3d8(unaff_x19 + 0x10,0);
    FUN_05a708bc(unaff_x19 + 2,&stack0x00000038);
    return;
  }
  FUN_08c80ec0(&stack0x00000038,0);
  iVar1 = unaff_x19[0xe];
  if (iVar1 < 4) {
    if (iVar1 == 0) {
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
      lVar3 = FUN_08a3cf68(unaff_x20[0x28],*(undefined8 *)(unaff_x19 + 0xc),0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      in_stack_00000018 = FUN_07764808(lVar3,*(undefined8 *)PTR_DAT_0ac549d8);
      uVar6 = FUN_076844c8(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac549d0);
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = 3;
        *(undefined8 *)(unaff_x19 + 0x16) = in_stack_00000018;
        thunk_FUN_049ee3d8(unaff_x19 + 0x16,0);
        FUN_05a6f83c(unaff_x19 + 2,&stack0x00000018);
        return;
      }
      lVar3 = FUN_07684508(&stack0x00000018,*(undefined8 *)PTR_DAT_0ac549c8);
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      unaff_x20[0x2c] = lVar3;
      thunk_FUN_049ee3d8(unaff_x20 + 0x2c);
      goto LAB_08a8a690;
    }
    if (iVar1 == 1) {
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (unaff_x20[0x28] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      lVar3 = FUN_08a3d574(unaff_x20[0x28],*(undefined8 *)(unaff_x19 + 0xc),0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      in_stack_00000028 = FUN_07764808(lVar3,*(undefined8 *)PTR_DAT_0ac54988);
      uVar6 = FUN_076844c8(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac54980);
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined8 *)(unaff_x19 + 0x12) = in_stack_00000028;
        thunk_FUN_049ee3d8(unaff_x19 + 0x12,0);
        FUN_05a6f83c(unaff_x19 + 2,&stack0x00000028);
        return;
      }
      lVar3 = FUN_07684508(&stack0x00000028,*(undefined8 *)PTR_DAT_0ac54978);
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      unaff_x20[0x2e] = lVar3;
      thunk_FUN_049ee3d8(unaff_x20 + 0x2e);
      unaff_x20[0x2d] = 0;
      thunk_FUN_049ee3d8(unaff_x20 + 0x2d,0);
      unaff_x20[0x2c] = 0;
      thunk_FUN_049ee3d8(unaff_x20 + 0x2c,0);
      goto LAB_08a8a690;
    }
  }
  else {
    if (iVar1 == 4) {
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      unaff_x20[0x2e] = 0;
      thunk_FUN_049ee3d8(unaff_x20 + 0x2e,0);
      lVar3 = FUN_08a7f190();
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      in_stack_00000020 = FUN_07764808(lVar3,*(undefined8 *)PTR_DAT_0ac549b0);
      uVar6 = FUN_076844c8(&stack0x00000020,*(undefined8 *)PTR_DAT_0ac549a8);
      if ((uVar6 & 1) == 0) {
        *unaff_x19 = 2;
        *(undefined8 *)(unaff_x19 + 0x14) = in_stack_00000020;
        thunk_FUN_049ee3d8(unaff_x19 + 0x14,0);
        FUN_05a6f83c(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      lVar3 = FUN_07684508(&stack0x00000020,*(undefined8 *)PTR_DAT_0ac549a0);
      if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      unaff_x20[0x2d] = lVar3;
      thunk_FUN_049ee3d8(unaff_x20 + 0x2d);
      unaff_x20[0x2c] = 0;
      thunk_FUN_049ee3d8(unaff_x20 + 0x2c,0);
      goto LAB_08a8a690;
    }
    if (iVar1 == 7) {
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
      goto LAB_08a8a690;
    }
  }
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
LAB_08a8a690:
  uVar6 = (**(code **)(*unaff_x20 + 0x1e8))();
  if ((uVar6 & 1) != 0) {
    if (unaff_x20[0x31] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    *(undefined1 *)(unaff_x20[0x31] + 0x38) = 0;
  }
  puVar2 = PTR_DAT_0ac46eb8;
  if (*(int *)(*(long *)PTR_DAT_0ac46eb8 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  if (DAT_0b32acf7 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac46eb8);
    DAT_0b32acf7 = '\x01';
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar3 = *(long *)puVar2;
  }
  uStack0000000000000004 = unaff_x19[0xe];
  plVar8 = (long *)**(undefined8 **)(lVar3 + 0xb8);
  uVar4 = thunk_FUN_04983b98(*(undefined8 *)PTR_DAT_0ac54c48,&stack0x00000004);
  uVar4 = FUN_08bc9f74(*(undefined8 *)PTR_DAT_0ac54c50,uVar4,0);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar3 = *plVar8;
  uVar6 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0ac46ed8) {
        puVar5 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_08a8a794;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar5 = (undefined8 *)FUN_04980e68(plVar8,*(long *)PTR_DAT_0ac46ed8,0);
LAB_08a8a794:
  (*(code *)*puVar5)(plVar8,uVar4,puVar5[1]);
  *unaff_x19 = 0xfffffffe;
  FUN_08c7f6c8(unaff_x19 + 2,0);
  return;
}


