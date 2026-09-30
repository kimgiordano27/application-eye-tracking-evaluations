/*
FUNCTION_NAME: OVRPlugin.UnityOpenXR$$OnAppSpaceChange2
ENTRY_POINT: 05348308
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_UnityOpenXR__OnAppSpaceChange2(void)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x50f) = 1;
  *(long *)(unaff_x20 + 0x30) = unaff_x19;
  if ((unaff_x19 != 0) && (lVar1 = *(long *)(unaff_x20 + 0x20), lVar1 != 0)) {
    FUN_0472d19c(lVar1,*(undefined8 *)(unaff_x19 + 0x18),*(undefined8 *)(unaff_x19 + 0x28),
                 *(undefined4 *)(lVar1 + 0x24),
                 *(undefined8 *)System_Runtime_Serialization_ExtensionDataReader_TypeInfo);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


