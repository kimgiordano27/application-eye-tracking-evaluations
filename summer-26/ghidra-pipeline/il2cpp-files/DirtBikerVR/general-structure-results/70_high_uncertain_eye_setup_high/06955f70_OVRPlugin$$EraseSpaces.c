/*
FUNCTION_NAME: OVRPlugin$$EraseSpaces
ENTRY_POINT: 06955f70
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__EraseSpaces(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined1 in_w8;
  long unaff_x19;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined1 *in_stack_00000010;
  long in_stack_00000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  long lStack0000000000000030;
  
  *(undefined1 *)(unaff_x20 + 0x4a) = in_w8;
  puVar2 = PTR_DAT_084b6a80;
  puVar1 = PTR_DAT_084b6a78;
  uStack0000000000000020 = 0;
  uStack0000000000000028 = 0;
  lStack0000000000000030 = 0;
  if (*(long *)(unaff_x19 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  FUN_04de90b8(&stack0x00000008,*(long *)(unaff_x19 + 0x38),*(undefined8 *)PTR_DAT_084b6a90);
  lStack0000000000000030 = in_stack_00000018;
  uStack0000000000000028 = in_stack_00000010;
  uStack0000000000000020 = in_stack_00000008;
  in_stack_00000008 = 0;
  in_stack_00000010 = (undefined1 *)&stack0x00000020;
  while( true ) {
    uVar4 = FUN_061c1964(&stack0x00000020,*(undefined8 *)puVar2);
    lVar3 = lStack0000000000000030;
    if ((uVar4 & 1) == 0) {
      FUN_061c1960(&stack0x00000020,*(undefined8 *)puVar1);
      return;
    }
    FUN_07c56fe0(0x3f800000,0,0,0x3f800000,0);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = FUN_07c98f88(*(long *)(unaff_x19 + 0x10),0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    if (lVar5 == 0) break;
    FUN_07cade68(*(undefined4 *)(lVar3 + 0x14),*(undefined4 *)(lVar3 + 0x18),
                 *(undefined4 *)(lVar3 + 0x1c),lVar5,0);
    if (*(long *)(unaff_x19 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar5 = FUN_07c98f88(*(long *)(unaff_x19 + 0x10),0);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_07cade68(*(undefined4 *)(lVar3 + 0x14),*(undefined4 *)(lVar3 + 0x18),
                 *(undefined4 *)(lVar3 + 0x1c),lVar5,0);
    FUN_07c569d4(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


