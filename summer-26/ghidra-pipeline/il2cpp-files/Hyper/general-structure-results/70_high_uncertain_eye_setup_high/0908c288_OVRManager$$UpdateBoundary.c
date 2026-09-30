/*
FUNCTION_NAME: OVRManager$$UpdateBoundary
ENTRY_POINT: 0908c288
PROGRAM: Hyper-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
OVRManager__UpdateBoundary
          (code *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar8;
  long unaff_x24;
  long *unaff_x25;
  uint uVar9;
  undefined4 uVar10;
  undefined8 in_stack_00000000;
  undefined8 *in_stack_00000008;
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
  undefined8 *in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000e8;
  
  uVar10 = (*param_1)();
  if (DAT_0b31f3e4 == '\0') {
    FUN_04947ee4(PTR_DAT_0ac0def8);
                    /* try { // try from 0908c2b4 to 0918c323 has its CatchHandler @ 0908bb58 */
    DAT_0b31f3e4 = '\x01';
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_0ac0def8 + 0xb8);
  in_stack_00000008 = (undefined8 *)0x0;
  in_stack_00000000 = 0;
  in_stack_00000018 = 0;
  in_stack_00000010 = 0;
  in_stack_00000020 = 0;
  FUN_0908c58c(uVar10,param_3,param_4,*(undefined4 *)(lVar7 + 0x18),*(undefined4 *)(lVar7 + 0x1c),
               *(undefined4 *)(lVar7 + 0x20));
  *(undefined8 **)(unaff_x24 + 0x30) = in_stack_00000008;
  *(undefined8 *)(unaff_x24 + 0x28) = in_stack_00000000;
  *(undefined8 *)(unaff_x24 + 0x40) = in_stack_00000018;
  *(undefined8 *)(unaff_x24 + 0x38) = in_stack_00000010;
  in_stack_000000e8 = in_stack_00000020;
  thunk_FUN_049ee3d8(&stack0x000000c8,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
                    /* try { // try from 0908c324 to 0918c32b has its CatchHandler @ 0908c41c */
  if (*(int *)(*unaff_x25 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  puVar4 = PTR_DAT_0ac788b8;
  puVar3 = PTR_DAT_0ac788a8;
  puVar2 = PTR_DAT_0ac788a0;
  puVar1 = PTR_DAT_0ac78898;
                    /* try { // try from 0908c338 to 0918c3ab has its CatchHandler @ 0908c424 */
  uVar6 = FUN_0a17b398(uVar8,0,0);
  if ((uVar6 & 1) != 0) {
    in_stack_00000070 = unaff_x21[2];
    in_stack_00000068 = unaff_x21[1];
    in_stack_00000060 = *unaff_x21;
    FUN_06680488(&stack0x00000060,*(undefined8 *)puVar4);
    in_stack_00000080 = in_stack_00000000;
    uVar9 = 0;
    in_stack_00000000 = 0;
    in_stack_00000088 = in_stack_00000008;
    in_stack_00000098 = in_stack_00000018;
    in_stack_00000090 = in_stack_00000010;
    in_stack_00000008 = &stack0x00000080;
    while (uVar6 = FUN_060b9fb0(&stack0x00000080,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
                    /* try { // try from 0908c3ac to 0918c407 has its CatchHandler @ 0908bb58 */
      lVar7 = FUN_060b9e58(&stack0x00000080,*(undefined8 *)puVar3);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0494818c();
      }
      if (*(char *)(lVar7 + 0xb0) == '\0') {
        if (*(long *)(unaff_x20 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0494818c();
        }
        FUN_0a18a1a0(*(long *)(unaff_x20 + 0x28),0);
        uVar5 = FUN_0908c728();
        uVar9 = uVar9 | uVar5;
      }
    }
    FUN_060ba26c(&stack0x00000080,*(undefined8 *)puVar1);
    if ((uVar9 & 1) != 0) goto LAB_0908c470;
  }
  in_stack_00000070 = unaff_x21[2];
  in_stack_00000068 = unaff_x21[1];
  in_stack_00000060 = *unaff_x21;
  FUN_06680488(&stack0x00000060,*(undefined8 *)puVar4);
  in_stack_00000080 = in_stack_00000000;
  in_stack_00000000 = 0;
  in_stack_00000088 = in_stack_00000008;
  in_stack_00000098 = in_stack_00000018;
  in_stack_00000090 = in_stack_00000010;
  in_stack_00000008 = &stack0x00000080;
  while (uVar6 = FUN_060b9fb0(&stack0x00000080,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
    FUN_060b9e58(&stack0x00000080,*(undefined8 *)puVar3);
    FUN_0908c8a0();
  }
  FUN_060ba26c(&stack0x00000080,*(undefined8 *)puVar1);
LAB_0908c470:
  memcpy(&stack0x00000000,&stack0x000000a0,0x58);
  unaff_x19[1] = in_stack_00000030;
  *unaff_x19 = in_stack_00000028;
  unaff_x19[3] = in_stack_00000040;
  unaff_x19[2] = in_stack_00000038;
  unaff_x19[4] = in_stack_00000048;
  thunk_FUN_049ee3d8();
  return in_stack_000000c0;
}


