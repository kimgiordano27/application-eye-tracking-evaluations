/*
FUNCTION_NAME: OVRPlugin.OVRP_1_34_0$$ovrp_EnqueueSubmitLayer2
ENTRY_POINT: 063b656c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_34_0__ovrp_EnqueueSubmitLayer2
               (ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long unaff_x20;
  undefined8 *unaff_x21;
  
  if ((param_1 & 1) == 0) {
    FUN_0373b518(PTR_DAT_07db7368);
    FUN_0373b518(PTR_DAT_07db7318);
    *(undefined1 *)(unaff_x20 + 0x747) = 1;
  }
  lVar1 = FUN_03c6a894(param_3,*unaff_x21);
  if (lVar1 != 0) {
    FUN_054d372c(param_2,lVar1,*(undefined8 *)PTR_DAT_07db7318);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


