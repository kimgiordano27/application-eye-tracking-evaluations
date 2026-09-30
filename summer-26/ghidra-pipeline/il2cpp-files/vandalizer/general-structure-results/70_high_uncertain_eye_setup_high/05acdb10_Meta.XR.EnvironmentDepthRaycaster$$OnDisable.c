/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$OnDisable
ENTRY_POINT: 05acdb10
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


bool Meta_XR_EnvironmentDepthRaycaster__OnDisable(long param_1)

{
  long lVar1;
  uint in_w9;
  uint in_w10;
  uint uVar2;
  int in_w11;
  long in_x12;
  long unaff_x19;
  undefined8 uVar3;
  
  while( true ) {
    *(uint *)(unaff_x19 + 8) = in_w10 + 1;
    if (in_x12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(in_x12 + 0x18) <= in_w10) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    uVar2 = in_w10 + 1;
    if (-1 < *(int *)(in_x12 + (long)(int)in_w10 * (long)in_w11 + 0x20)) break;
    if (in_w9 <= uVar2) {
      *(uint *)(unaff_x19 + 8) = in_w9 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
      goto LAB_05acdb60;
    }
    in_x12 = *(long *)(param_1 + 0x18);
    in_w10 = uVar2;
  }
  lVar1 = in_x12 + (long)(int)in_w10 * 0x58;
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(lVar1 + 0x30);
  *(undefined8 *)(unaff_x19 + 0x10) = uVar3;
  uVar2 = in_w10;
LAB_05acdb60:
  return uVar2 < in_w9;
}


