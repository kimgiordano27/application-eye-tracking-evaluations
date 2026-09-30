/*
FUNCTION_NAME: OVRFaceExpressions_get_FaceTrackingEnabled_m708D382026D9FAC6B02643E91455ABDABA4EBA35
ENTRY_POINT: 02d44fbc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_11;validity_or_gating_hits_5;functionality_gaze_retrieval_or_extraction;functionality_possible_biometrics_hits_4
*/


byte OVRFaceExpressions_get_FaceTrackingEnabled_m708D382026D9FAC6B02643E91455ABDABA4EBA35(void)

{
  byte bVar1;
  
  if ((OVRFaceExpressions_get_FaceTrackingEnabled_m708D382026D9FAC6B02643E91455ABDABA4EBA35::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRFaceExpressions_get_FaceTrackingEnabled_m708D382026D9FAC6B02643E91455ABDABA4EBA35::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__)
  ;
  bVar1 = OVRPlugin_get_faceTrackingEnabled_mCD72BC658CA302F6FFF5EF44002E281D7813BC04(0);
  return bVar1 & 1;
}


