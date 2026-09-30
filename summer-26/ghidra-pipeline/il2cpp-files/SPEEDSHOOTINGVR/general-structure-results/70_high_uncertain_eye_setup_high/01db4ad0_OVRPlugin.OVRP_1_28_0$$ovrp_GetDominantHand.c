/*
FUNCTION_NAME: OVRPlugin.OVRP_1_28_0$$ovrp_GetDominantHand
ENTRY_POINT: 01db4ad0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01db4b70) */

void OVRPlugin_OVRP_1_28_0__ovrp_GetDominantHand(void)

{
  long lVar1;
  int in_w8;
  long unaff_x19;
  long unaff_x21;
  undefined8 in_stack_00000028;
  
  if (in_w8 != 0) {
    FUN_0102a860();
  }
  if (unaff_x21 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc52c();
  }
  if (in_stack_00000028._4_1_ != '\0') {
    if ((*(long *)(unaff_x19 + 0x18) == 0) || (lVar1 = FUN_01db3820(), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    FUN_01cb97fc(lVar1,0);
  }
  return;
}


