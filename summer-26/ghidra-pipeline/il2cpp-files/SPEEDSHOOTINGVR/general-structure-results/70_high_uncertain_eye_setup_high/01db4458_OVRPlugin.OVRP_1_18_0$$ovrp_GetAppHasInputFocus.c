/*
FUNCTION_NAME: OVRPlugin.OVRP_1_18_0$$ovrp_GetAppHasInputFocus
ENTRY_POINT: 01db4458
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 88
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_18_0__ovrp_GetAppHasInputFocus(void)

{
  undefined1 in_CY;
  long lVar1;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  uint unaff_w24;
  
  while( true ) {
    if ((bool)in_CY) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    if (*unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    lVar1 = FUN_01db3820();
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_01cb97fc(lVar1,0);
    unaff_x22 = unaff_x22 + -1;
    if ((int)unaff_w24 < 1) break;
    in_CY = *(uint *)(unaff_x19 + 0x18) <= unaff_w24 - 1;
    unaff_w24 = unaff_w24 - 1;
  }
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_010dc9f4();
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc52c();
}


