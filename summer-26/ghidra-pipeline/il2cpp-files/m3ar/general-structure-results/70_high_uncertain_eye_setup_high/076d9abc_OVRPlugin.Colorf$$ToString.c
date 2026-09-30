/*
FUNCTION_NAME: OVRPlugin.Colorf$$ToString
ENTRY_POINT: 076d9abc
PROGRAM: m3ar-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined4 OVRPlugin_Colorf__ToString(float param_1)

{
  ulong uVar1;
  long unaff_x19;
  undefined4 unaff_w20;
  undefined4 unaff_w21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  float unaff_s8;
  undefined4 in_stack_00000028;
  
  while( true ) {
    if (unaff_s8 < param_1) {
      unaff_w20 = unaff_w21;
    }
    uVar1 = FUN_04fbf81c(&stack0x00000018,*unaff_x23);
    unaff_w21 = in_stack_00000028;
    if ((uVar1 & 1) == 0) {
      FUN_04fbf818(&stack0x00000018,*unaff_x22);
      return unaff_w20;
    }
    if (*(long *)(unaff_x19 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    unaff_s8 = (float)FUN_06f80634(*(long *)(unaff_x19 + 0x30),in_stack_00000028,*unaff_x24);
    if (*(long *)(unaff_x19 + 0x30) == 0) break;
    param_1 = (float)FUN_06f80634(*(long *)(unaff_x19 + 0x30),unaff_w20,*unaff_x24);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


