/*
FUNCTION_NAME: OVRManager_FixedUpdate_m066F982228F4B8A03EC67AADFE2DACCAB028D06D
ENTRY_POINT: 02d8d7b0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager_FixedUpdate_m066F982228F4B8A03EC67AADFE2DACCAB028D06D(void)

{
  if ((OVRManager_FixedUpdate_m066F982228F4B8A03EC67AADFE2DACCAB028D06D::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
              );
    OVRManager_FixedUpdate_m066F982228F4B8A03EC67AADFE2DACCAB028D06D::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
            );
  OVRInput_FixedUpdate_m0B2BA5C8485902E1A0EE19A1F7066E671D8ECCB5(0);
  return;
}


