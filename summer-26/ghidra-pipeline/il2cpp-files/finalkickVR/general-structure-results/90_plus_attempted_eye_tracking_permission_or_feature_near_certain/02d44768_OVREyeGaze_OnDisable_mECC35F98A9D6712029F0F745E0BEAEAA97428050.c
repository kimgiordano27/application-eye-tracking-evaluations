/*
FUNCTION_NAME: OVREyeGaze_OnDisable_mECC35F98A9D6712029F0F745E0BEAEAA97428050
ENTRY_POINT: 02d44768
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 110
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze_OnDisable_mECC35F98A9D6712029F0F745E0BEAEAA97428050(void)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = Method_TiradorArcade_<colliderCapsuleActivo>d__25_System_Collections_IEnumerator_Reset__;
  if ((OVREyeGaze_OnDisable_mECC35F98A9D6712029F0F745E0BEAEAA97428050::s_Il2CppMethodInitialized & 1
      ) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_TiradorArcade_<colliderCapsuleActivo>d__25_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVREyeGaze_OnDisable_mECC35F98A9D6712029F0F745E0BEAEAA97428050::s_Il2CppMethodInitialized = 1;
  }
  piVar3 = (int *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  iVar2 = il2cpp_codegen_subtract<int,int>(*piVar3,1);
  piVar3 = (int *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  *piVar3 = iVar2;
  if (iVar2 == 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_StopEyeTracking_m299464EFDF92D97A15E4FA7EB2E405510B605550(0);
  }
  return;
}


