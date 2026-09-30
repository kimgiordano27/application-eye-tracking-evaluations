/*
FUNCTION_NAME: OVRManager$$UpdateHMDEvents
ENTRY_POINT: 02c0a934
PROGRAM: sharks-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRManager__UpdateHMDEvents(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  uint unaff_w19;
  int unaff_w23;
  int iVar4;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  int iStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  int iStack0000000000000050;
  int in_stack_00000070;
  int in_stack_00000090;
  int in_stack_000000b0;
  int in_stack_000000d0;
  
  uStack0000000000000048 = in_stack_00000010;
  uStack0000000000000040 = in_stack_00000008;
  _iStack0000000000000050 = in_stack_00000018;
  uVar2 = _iStack0000000000000050;
  if (unaff_w19 == 4) {
    puVar1 = &stack0x00000040;
    puVar3 = (undefined8 *)PTR_DAT_0380af60;
LAB_02c0a9b4:
    uVar2 = FUN_0264f644(puVar1,*puVar3);
  }
  else {
    iStack0000000000000050 = (int)in_stack_00000018;
    iVar4 = iStack0000000000000050 + unaff_w23;
    _iStack0000000000000050 = uVar2;
    if ((unaff_w19 & 0xa0) != 0) {
      FUN_02c08c84(&stack0x00000008);
      in_stack_00000028 = in_stack_00000010;
      in_stack_00000020 = in_stack_00000008;
      _iStack0000000000000030 = in_stack_00000018;
      uVar2 = _iStack0000000000000030;
      if ((unaff_w19 == 0x80) || (unaff_w19 == 0x20)) {
        puVar1 = &stack0x00000020;
        puVar3 = (undefined8 *)PTR_DAT_0380b020;
        goto LAB_02c0a9b4;
      }
      iStack0000000000000030 = (int)in_stack_00000018;
      iVar4 = iStack0000000000000030 + iVar4;
      _iStack0000000000000030 = uVar2;
    }
    puVar1 = (undefined8 *)PTR_DAT_0380aad0;
    if (unaff_w19 != 9) {
      puVar1 = (undefined8 *)PTR_DAT_03803200;
    }
    uVar2 = FUN_017fc3f4(*puVar1,iVar4);
    FUN_0264f760(&stack0x000000c0,uVar2,0,*(undefined8 *)PTR_DAT_0380af68);
    iVar4 = in_stack_000000d0;
    FUN_0264f760(&stack0x000000a0,uVar2,in_stack_000000d0,*(undefined8 *)PTR_DAT_0380af70);
    iVar4 = in_stack_000000b0 + iVar4;
    FUN_0264f760(&stack0x00000080,uVar2,iVar4,*(undefined8 *)PTR_DAT_0380af78);
    iVar4 = in_stack_00000090 + iVar4;
    FUN_0264f760(&stack0x00000060,uVar2,iVar4,*(undefined8 *)PTR_DAT_0380af80);
    iVar4 = in_stack_00000070 + iVar4;
    FUN_0264f760(&stack0x00000040,uVar2,iVar4,*(undefined8 *)PTR_DAT_0380af88);
    FUN_0264f760(&stack0x00000020,uVar2,iStack0000000000000050 + iVar4,
                 *(undefined8 *)PTR_DAT_0380af90);
  }
  return uVar2;
}


