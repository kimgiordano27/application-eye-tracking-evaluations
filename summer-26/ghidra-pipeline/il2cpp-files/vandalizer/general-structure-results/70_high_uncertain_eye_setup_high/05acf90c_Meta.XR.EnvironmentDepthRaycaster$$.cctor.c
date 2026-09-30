/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$.cctor
ENTRY_POINT: 05acf90c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_EnvironmentDepthRaycaster___cctor(long param_1)

{
  long lVar1;
  int in_w9;
  long in_x10;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  uint uVar2;
  undefined8 uVar3;
  
  while( true ) {
    *(uint *)(unaff_x19 + 8) = unaff_w21 + 1;
    if (in_x10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(in_x10 + 0x18) <= unaff_w21) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar2 = unaff_w21 + 1;
    if (-1 < *(int *)(in_x10 + (long)(int)unaff_w21 * (long)in_w9 + 0x20)) break;
    if (unaff_w20 <= uVar2) {
      *(uint *)(unaff_x19 + 8) = unaff_w20 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      goto LAB_05acf968;
    }
    in_x10 = *(long *)(param_1 + 0x18);
    unaff_w21 = uVar2;
  }
  lVar1 = in_x10 + (long)(int)unaff_w21 * 0x28;
  uVar3 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(lVar1 + 0x40);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
  thunk_FUN_0329bf60(unaff_x19 + 0x10,0);
  uVar2 = unaff_w21;
LAB_05acf968:
  return uVar2 < unaff_w20;
}


