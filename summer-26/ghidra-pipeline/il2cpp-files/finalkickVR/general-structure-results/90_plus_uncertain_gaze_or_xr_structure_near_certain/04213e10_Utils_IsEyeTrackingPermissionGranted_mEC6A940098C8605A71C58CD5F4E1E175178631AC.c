/*
FUNCTION_NAME: Utils_IsEyeTrackingPermissionGranted_mEC6A940098C8605A71C58CD5F4E1E175178631AC
ENTRY_POINT: 04213e10
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_6;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_2;functionality_permission_setup
*/


byte Utils_IsEyeTrackingPermissionGranted_mEC6A940098C8605A71C58CD5F4E1E175178631AC(void)

{
  byte bVar1;
  
  if ((Utils_IsEyeTrackingPermissionGranted_mEC6A940098C8605A71C58CD5F4E1E175178631AC::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_ONSPPropagationMaterial_Spectrum_<>c_<get_Item>b__3_1__);
    Utils_IsEyeTrackingPermissionGranted_mEC6A940098C8605A71C58CD5F4E1E175178631AC::
    s_Il2CppMethodInitialized = 1;
  }
  bVar1 = Permission_HasUserAuthorizedPermission_mF4C90E13124E28F6F672200E489CC25A9B645B8B
                    (*(undefined8 *)Method_ONSPPropagationMaterial_Spectrum_<>c_<get_Item>b__3_1__,0
                    );
  return bVar1 & 1;
}


