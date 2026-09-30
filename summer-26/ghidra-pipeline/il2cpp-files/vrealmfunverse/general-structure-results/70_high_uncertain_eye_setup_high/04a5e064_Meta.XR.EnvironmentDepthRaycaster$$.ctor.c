/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$.ctor
ENTRY_POINT: 04a5e064
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


ulong Meta_XR_EnvironmentDepthRaycaster___ctor(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long unaff_x19;
  int unaff_w21;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  long unaff_x29;
  
  puVar1 = (undefined8 *)FUN_02b7654c(param_1,param_2,0);
  (*(code *)*puVar1)();
  if (unaff_x19 == 0) {
    if ((unaff_w21 == 0xd) || (unaff_w21 == 0)) {
      uVar2 = unaff_x25 & 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
    if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return uVar2 | unaff_x24 << 0x20;
    }
  }
  else if (*(long *)(unaff_x26 + 0x28) == *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cabc();
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


