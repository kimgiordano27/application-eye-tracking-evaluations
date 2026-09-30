/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$get_IsReady
ENTRY_POINT: 05ad00c0
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


bool Meta_XR_EnvironmentRaycastManager__get_IsReady(long param_1)

{
  undefined1 in_CY;
  uint in_w9;
  uint in_w10;
  int in_w11;
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  
  do {
    if ((bool)in_CY) {
      *(uint *)(unaff_x19 + 8) = in_w9 + 1;
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(undefined8 *)(unaff_x19 + 0x18) = 0;
LAB_05ad0118:
      return in_w10 < in_w9;
    }
    lVar1 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = in_w10 + 1;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if (*(uint *)(lVar1 + 0x18) <= in_w10) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2398();
    }
    if (-1 < *(int *)(lVar1 + (long)(int)in_w10 * (long)in_w11 + 0x20)) {
      lVar1 = lVar1 + (long)(int)in_w10 * 0x30;
      uVar2 = *(undefined8 *)(lVar1 + 0x28);
      *(undefined8 *)(unaff_x19 + 0x18) = *(undefined8 *)(lVar1 + 0x30);
      *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
      goto LAB_05ad0118;
    }
    in_CY = in_w9 <= in_w10 + 1;
    in_w10 = in_w10 + 1;
  } while( true );
}


