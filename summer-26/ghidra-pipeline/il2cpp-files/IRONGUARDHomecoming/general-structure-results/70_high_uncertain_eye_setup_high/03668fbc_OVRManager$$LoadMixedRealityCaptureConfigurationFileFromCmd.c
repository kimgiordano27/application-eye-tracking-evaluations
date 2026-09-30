/*
FUNCTION_NAME: OVRManager$$LoadMixedRealityCaptureConfigurationFileFromCmd
ENTRY_POINT: 03668fbc
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__LoadMixedRealityCaptureConfigurationFileFromCmd(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long lVar2;
  
  if (*(long *)(unaff_x19 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = *(long *)(unaff_x19 + 0x30);
  uVar1 = FUN_04050c14(*(long *)(unaff_x19 + 0x28),0);
  if (lVar2 != 0) {
    FUN_040c2334(lVar2,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c(uVar1,uVar1);
}


