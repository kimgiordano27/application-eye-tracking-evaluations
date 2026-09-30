/*
FUNCTION_NAME: OVRPlugin$$UpdateNodePhysicsPoses
ENTRY_POINT: 060cf42c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__UpdateNodePhysicsPoses(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0xa65) & 1) == 0) {
    FUN_03642964(PTR_DAT_07a24290);
    *(undefined1 *)(unaff_x21 + 0xa65) = 1;
  }
  if ((unaff_x20 != 0) && (lVar1 = FUN_03d182e8(), lVar1 != 0)) {
    *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(unaff_x19 + 0x20);
    thunk_FUN_036b7ad0();
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


