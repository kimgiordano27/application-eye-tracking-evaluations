/*
FUNCTION_NAME: OVRPlugin.<>c$$.cctor
ENTRY_POINT: 01fa189c
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_<>c___cctor(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint unaff_w19;
  int iVar4;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  int iStack0000000000000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  int iStack0000000000000050;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  int iStack0000000000000070;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  int iStack0000000000000090;
  int iStack00000000000000b0;
  int in_stack_000000d0;
  
  iVar4 = 0;
  uVar2 = _iStack00000000000000b0;
  if ((unaff_w19 & 1) == 0) {
joined_r0x01fa1958:
    _iStack00000000000000b0 = uVar2;
    if ((unaff_w19 >> 4 & 1) != 0) {
      FUN_01f9f3f0(&stack0x00000008);
      in_stack_00000088 = in_stack_00000010;
      in_stack_00000080 = in_stack_00000008;
      _iStack0000000000000090 = in_stack_00000018;
      if (unaff_w19 == 0x10) {
        puVar1 = &stack0x00000080;
        puVar3 = (undefined8 *)PTR_DAT_027c1ff8;
        goto LAB_01fa1a90;
      }
      iStack0000000000000090 = (int)in_stack_00000018;
      iVar4 = iStack0000000000000090 + iVar4;
    }
    if ((unaff_w19 >> 1 & 1) != 0) {
      FUN_01f9f8f0(&stack0x00000008);
      in_stack_00000068 = in_stack_00000010;
      in_stack_00000060 = in_stack_00000008;
      _iStack0000000000000070 = in_stack_00000018;
      if (unaff_w19 == 2) {
        puVar1 = &stack0x00000060;
        puVar3 = (undefined8 *)PTR_DAT_027c2030;
        goto LAB_01fa1a90;
      }
      iStack0000000000000070 = (int)in_stack_00000018;
      iVar4 = iStack0000000000000070 + iVar4;
    }
    if ((unaff_w19 >> 2 & 1) != 0) {
      FUN_01f9fd38(&stack0x00000008);
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      _iStack0000000000000050 = in_stack_00000018;
      uVar2 = _iStack0000000000000050;
      if (unaff_w19 == 4) {
        puVar1 = &stack0x00000040;
        puVar3 = (undefined8 *)PTR_DAT_027c1f88;
        goto LAB_01fa1a90;
      }
      iStack0000000000000050 = (int)in_stack_00000018;
      iVar4 = iStack0000000000000050 + iVar4;
      _iStack0000000000000050 = uVar2;
    }
    if ((unaff_w19 & 0xa0) != 0) {
      FUN_01fa0204(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      _iStack0000000000000030 = in_stack_00000018;
      uVar2 = _iStack0000000000000030;
      if ((unaff_w19 == 0x80) || (unaff_w19 == 0x20)) {
        puVar1 = &stack0x00000020;
        puVar3 = (undefined8 *)PTR_DAT_027c2028;
        goto LAB_01fa1a90;
      }
      iStack0000000000000030 = (int)in_stack_00000018;
      iVar4 = iStack0000000000000030 + iVar4;
      _iStack0000000000000030 = uVar2;
    }
    puVar1 = (undefined8 *)PTR_DAT_027c1bd8;
    if (unaff_w19 != 9) {
      puVar1 = (undefined8 *)PTR_DAT_027bb7a8;
    }
    uVar2 = FUN_01230af8(*puVar1,iVar4);
    FUN_018de7dc(&stack0x000000c0,uVar2,0,*(undefined8 *)PTR_DAT_027c1f90);
    iVar4 = in_stack_000000d0;
    FUN_018de7dc(&stack0x000000a0,uVar2,in_stack_000000d0,*(undefined8 *)PTR_DAT_027c1f98);
    iVar4 = iStack00000000000000b0 + iVar4;
    FUN_018de7dc(&stack0x00000080,uVar2,iVar4,*(undefined8 *)PTR_DAT_027c1fa0);
    iVar4 = iStack0000000000000090 + iVar4;
    FUN_018de7dc(&stack0x00000060,uVar2,iVar4,*(undefined8 *)PTR_DAT_027c1fa8);
    iVar4 = iStack0000000000000070 + iVar4;
    FUN_018de7dc(&stack0x00000040,uVar2,iVar4,*(undefined8 *)PTR_DAT_027c1fb0);
    FUN_018de7dc(&stack0x00000020,uVar2,iStack0000000000000050 + iVar4,
                 *(undefined8 *)PTR_DAT_027c1fb8);
  }
  else {
    FUN_01f9ef20(&stack0x00000008);
    unaff_x24[1] = in_stack_00000010;
    *unaff_x24 = in_stack_00000008;
    _iStack00000000000000b0 = in_stack_00000018;
    if (unaff_w19 != 1) {
      iStack00000000000000b0 = (int)in_stack_00000018;
      uVar2 = in_stack_00000018;
      iVar4 = iStack00000000000000b0;
      goto joined_r0x01fa1958;
    }
    puVar1 = (undefined8 *)&stack0x000000a0;
    puVar3 = (undefined8 *)PTR_DAT_027c1f80;
LAB_01fa1a90:
    uVar2 = FUN_018de6c0(puVar1,*puVar3);
  }
  return uVar2;
}


