/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._SetWorkingCollisionBoundsInfo$$EndInvoke
ENTRY_POINT: 02d8d7d4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsInfo__EndInvoke(long param_1)

{
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0x130));
  OVRManager_FixedUpdate_m066F982228F4B8A03EC67AADFE2DACCAB028D06D::s_Il2CppMethodInitialized = 1;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
            );
  OVRInput_FixedUpdate_m0B2BA5C8485902E1A0EE19A1F7066E671D8ECCB5(0);
  return;
}


