/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetSystemVolume
ENTRY_POINT: 0369b404
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


void OVRPlugin_OVRP_1_1_0__ovrp_GetSystemVolume(void)

{
  undefined8 uVar1;
  long unaff_x19;
  
  FUN_035fc638();
  uVar1 = FUN_0369b7d8(*(undefined4 *)(unaff_x19 + 0x98),*(undefined4 *)(unaff_x19 + 0xa0));
  if (*(long *)(unaff_x19 + 0x60) != 0) {
    FUN_035fc638(*(long *)(unaff_x19 + 0x60),uVar1,1,0);
    if (*(long *)(unaff_x19 + 0x68) != 0) {
      FUN_035fc638(*(long *)(unaff_x19 + 0x68),uVar1,1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


