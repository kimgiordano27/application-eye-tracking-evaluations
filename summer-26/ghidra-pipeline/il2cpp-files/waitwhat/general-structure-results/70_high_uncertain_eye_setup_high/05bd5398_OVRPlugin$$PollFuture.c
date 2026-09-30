/*
FUNCTION_NAME: OVRPlugin$$PollFuture
ENTRY_POINT: 05bd5398
PROGRAM: waitwhat-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__PollFuture(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long *plVar5;
  long *unaff_x22;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  if (param_1 != 0) {
    if ((*(char *)(param_1 + 0x10) == '\0') || (*(long *)(param_1 + 0x18) == 0)) {
      FUN_05bd552c();
    }
    else {
      lVar2 = *unaff_x20;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *unaff_x22) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 5) * 0x10 + 0x138);
            goto LAB_05bd5428;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_031c0d08();
LAB_05bd5428:
      (*(code *)*puVar1)();
      FUN_05bd55b8();
      *(undefined1 *)(unaff_x19 + 0x60) = 0;
    }
    FUN_05bc8008(&stack0x00000040);
    plVar5 = *(long **)(unaff_x19 + 0x70);
    if (plVar5 == (long *)0x0) {
      in_stack_00000028 = in_stack_00000048;
      in_stack_00000020 = in_stack_00000040;
      uStack0000000000000034 = uStack0000000000000054;
      uStack0000000000000030 = uStack0000000000000050;
    }
    else {
      lVar2 = *plVar5;
      uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar3 != 0) {
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_07112a48) {
            puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
            goto LAB_05bd54c8;
          }
          uVar3 = uVar3 - 1;
          piVar4 = piVar4 + 4;
        } while (uVar3 != 0);
      }
      puVar1 = (undefined8 *)FUN_031c0d08(plVar5,*(long *)PTR_DAT_07112a48,2);
LAB_05bd54c8:
      (*(code *)*puVar1)(&stack0x00000020,plVar5,&stack0x00000040,puVar1[1]);
    }
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      uStack0000000000000014 = uStack0000000000000034;
      FUN_05be9e68(0x3f800000);
      *(undefined1 *)(unaff_x19 + 0x61) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


