/*
FUNCTION_NAME: OVRManager$$get_IsSimultaneousHandsAndControllersSupported
ENTRY_POINT: 07c5d0d0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__get_IsSimultaneousHandsAndControllersSupported
          (undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x26;
  uint uVar9;
  undefined8 uVar10;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000e8;
  
  puVar6 = (undefined8 *)FUN_044822ac();
  puVar1 = PTR_DAT_09f1e538;
  uVar10 = (*(code *)*puVar6)();
  if (DAT_0a51bf40 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e740);
    DAT_0a51bf40 = '\x01';
  }
  lVar8 = *(long *)(*(long *)PTR_DAT_09f1e740 + 0xb8);
  in_stack_00000008 = 0;
  in_stack_00000000 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000020 = 0;
  FUN_07c5d424(uVar10,param_2,param_3,*(undefined4 *)(lVar8 + 0x18),*(undefined4 *)(lVar8 + 0x1c),
               *(undefined4 *)(lVar8 + 0x20));
  *(undefined8 *)(unaff_x26 + 0x30) = in_stack_00000008;
  *(undefined8 *)(unaff_x26 + 0x28) = in_stack_00000000;
  *(undefined8 *)(unaff_x26 + 0x40) = in_stack_00000018;
  *(undefined8 *)(unaff_x26 + 0x38) = in_stack_00000010;
  in_stack_000000e8 = in_stack_00000020;
  thunk_FUN_044bb4b4(&stack0x000000c8,0);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  puVar4 = PTR_DAT_09f500a0;
  puVar3 = PTR_DAT_09f50090;
  puVar2 = PTR_DAT_09f50088;
  puVar1 = PTR_DAT_09f50080;
  uVar7 = FUN_09531730(uVar10,0,0);
  if ((uVar7 & 1) != 0) {
    in_stack_00000070 = unaff_x21[2];
    in_stack_00000068 = unaff_x21[1];
    in_stack_00000060 = *unaff_x21;
    FUN_0574318c(&stack0x00000060,*(undefined8 *)puVar4);
    uVar9 = 0;
    in_stack_00000088 = in_stack_00000008;
    in_stack_00000080 = in_stack_00000000;
    in_stack_00000098 = in_stack_00000018;
    in_stack_00000090 = in_stack_00000010;
    while (uVar7 = FUN_05261068(&stack0x00000080,*(undefined8 *)puVar2), (uVar7 & 1) != 0) {
      lVar8 = FUN_05260f24(&stack0x00000080,*(undefined8 *)puVar3);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      if (*(char *)(lVar8 + 0xb0) == '\0') {
        if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        FUN_09539d64(*(long *)(unaff_x20 + 0x28),0);
        uVar5 = FUN_07c5d5d8();
        uVar9 = uVar9 | uVar5;
      }
    }
    FUN_05261304(&stack0x00000080,*(undefined8 *)puVar1);
    if ((uVar9 & 1) != 0) goto LAB_07c5d2e4;
  }
  in_stack_00000070 = unaff_x21[2];
  in_stack_00000068 = unaff_x21[1];
  in_stack_00000060 = *unaff_x21;
  FUN_0574318c(&stack0x00000060,*(undefined8 *)puVar4);
  in_stack_00000088 = in_stack_00000008;
  in_stack_00000080 = in_stack_00000000;
  in_stack_00000098 = in_stack_00000018;
  in_stack_00000090 = in_stack_00000010;
  while (uVar7 = FUN_05261068(&stack0x00000080,*(undefined8 *)puVar2), (uVar7 & 1) != 0) {
    FUN_05260f24(&stack0x00000080,*(undefined8 *)puVar3);
    FUN_07c5d750();
  }
  FUN_05261304(&stack0x00000080,*(undefined8 *)puVar1);
LAB_07c5d2e4:
  memcpy(&stack0x00000000,&stack0x000000a0,0x58);
  unaff_x19[1] = in_stack_00000030;
  *unaff_x19 = in_stack_00000028;
  unaff_x19[3] = in_stack_00000040;
  unaff_x19[2] = in_stack_00000038;
  unaff_x19[4] = in_stack_00000048;
  thunk_FUN_044bb4b4();
  return in_stack_000000c0;
}


