/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthManagerRaycastExtensions$$SetRaycastWarmUpEnabled
ENTRY_POINT: 04a5ad88
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepthManagerRaycastExtensions__SetRaycastWarmUpEnabled(void)

{
  int *piVar1;
  long unaff_x19;
  undefined4 unaff_w20;
  int unaff_w21;
  ulong unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  long unaff_x25;
  long lVar2;
  
  do {
    FUN_04a5d564();
    unaff_w21 = unaff_w21 + 1;
    lVar2 = unaff_x25;
    do {
      unaff_x24 = unaff_x24 + 1;
      unaff_x25 = lVar2 + 0x10;
      if (unaff_x22 == unaff_x24) {
        *(int *)(unaff_x19 + 0x24) = unaff_w21;
        *(undefined4 *)(unaff_x19 + 0x20) = unaff_w20;
        return;
      }
      if (*(uint *)(unaff_x23 + 0x18) <= unaff_x24) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cacc();
      }
      piVar1 = (int *)(lVar2 + 8);
      lVar2 = unaff_x25;
    } while (*piVar1 < 0);
  } while( true );
}


