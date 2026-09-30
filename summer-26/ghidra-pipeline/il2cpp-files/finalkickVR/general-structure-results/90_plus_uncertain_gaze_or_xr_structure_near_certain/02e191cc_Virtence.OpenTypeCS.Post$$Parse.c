/*
FUNCTION_NAME: Virtence.OpenTypeCS.Post$$Parse
ENTRY_POINT: 02e191cc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 171
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


byte Virtence_OpenTypeCS_Post__Parse(undefined8 param_1,undefined8 param_2)

{
  byte bStack0000000000000007;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  byte bStack000000000000001f;
  
  uStack0000000000000008 = param_2;
  uStack0000000000000010 = param_1;
  if ((OVRTracker_get_isEnabled_m56D485D7634A802A16A935F171BE161B60044C44::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRTracker_get_isEnabled_m56D485D7634A802A16A935F171BE161B60044C44::s_Il2CppMethodInitialized =
         1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bStack0000000000000007 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  bStack0000000000000007 = bStack0000000000000007 & 1;
  if (bStack0000000000000007 == 0) {
    bStack000000000000001f = 0;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    bStack000000000000001f = OVRPlugin_get_position_m91B04E783511D2AF6B6BDA7D4A418AD66CBB13C3(0);
    bStack000000000000001f = bStack000000000000001f & 1;
  }
  return bStack000000000000001f;
}


