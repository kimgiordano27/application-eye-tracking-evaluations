/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$.ctor
ENTRY_POINT: 05acf748
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_EnvironmentDepthRaycaster___ctor(long param_1)

{
  uint in_w9;
  int in_w11;
  long lVar1;
  uint in_w13;
  uint uVar2;
  long unaff_x19;
  undefined8 uVar3;
  
  do {
    uVar2 = in_w13;
    if (in_w9 <= uVar2) {
      *(uint *)(unaff_x19 + 8) = in_w9 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      goto LAB_05acf7a8;
    }
    lVar1 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = uVar2 + 1;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(lVar1 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    in_w13 = uVar2 + 1;
  } while (*(int *)(lVar1 + (long)(int)uVar2 * (long)in_w11 + 0x20) < 0);
  lVar1 = lVar1 + (long)(int)uVar2 * 0x28;
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
LAB_05acf7a8:
  return uVar2 < in_w9;
}


