/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.ExampleCustomIntegrationConfig$$GetCamera
ENTRY_POINT: 06d7d5d4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_ExampleCustomIntegrationConfig__GetCamera(void)

{
  long lVar1;
  uint in_w8;
  long unaff_x19;
  int unaff_w23;
  ulong unaff_d8;
  ulong unaff_d9;
  ulong unaff_d10;
  ulong unaff_d11;
  ulong unaff_d12;
  ulong unaff_d13;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  ulong in_stack_00000020;
  uint in_stack_00000028;
  ulong in_stack_00000030;
  uint in_stack_00000038;
  
  if (in_w8 < 2) {
    if ((((*(long *)(unaff_x19 + 0x58) == 0) || (lVar1 = FUN_06d7e248(), lVar1 == 0)) ||
        (FUN_085eb410(uStack0000000000000010,uStack0000000000000014,uStack0000000000000018,
                      uStack000000000000001c,lVar1,0), *(long *)(unaff_x19 + 0x60) == 0)) ||
       (lVar1 = FUN_06d7e248(), lVar1 == 0)) goto LAB_06d7d6a0;
    FUN_085eb410(uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                 uStack000000000000000c,lVar1,0);
    if (unaff_w23 == 3) goto LAB_06d7d630;
  }
  else if (unaff_w23 == 1) {
LAB_06d7d630:
    unaff_d8 = in_stack_00000030 & 0xffffffff;
    unaff_d11 = (ulong)in_stack_00000038;
    unaff_d10 = in_stack_00000020 & 0xffffffff;
    unaff_d13 = (ulong)in_stack_00000028;
    unaff_d9 = in_stack_00000030 >> 0x20;
    unaff_d12 = in_stack_00000020 >> 0x20;
  }
  if ((*(long *)(unaff_x19 + 0x58) != 0) &&
     (FUN_06d7e270(unaff_d8,unaff_d9,unaff_d11), *(long *)(unaff_x19 + 0x60) != 0)) {
    FUN_06d7e270(unaff_d10,unaff_d12,unaff_d13);
    return;
  }
LAB_06d7d6a0:
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


