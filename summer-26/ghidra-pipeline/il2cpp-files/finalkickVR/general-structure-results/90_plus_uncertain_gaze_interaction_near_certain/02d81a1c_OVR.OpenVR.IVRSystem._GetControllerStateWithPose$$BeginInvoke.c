/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerStateWithPose$$BeginInvoke
ENTRY_POINT: 02d81a1c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 159
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_5;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


undefined4 OVR_OpenVR_IVRSystem__GetControllerStateWithPose__BeginInvoke(ulong param_1)

{
  undefined4 uVar1;
  long unaff_x29;
  byte bStack000000000000000f;
  
  if ((param_1 & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_get_gpuLevel_mF6DD3FBD45FC1A6D4C5E38CFF2454B71F2D36E06::s_Il2CppMethodInitialized = 1
    ;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bStack000000000000000f = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  bStack000000000000000f = bStack000000000000000f & 1;
  if (bStack000000000000000f == 0) {
    *(undefined4 *)(unaff_x29 + -4) = 2;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    uVar1 = OVRPlugin_get_gpuLevel_m84965A56CFF04CF1487A64D2D3943A4A3C7D0DFE(0);
    *(undefined4 *)(unaff_x29 + -4) = uVar1;
  }
  return *(undefined4 *)(unaff_x29 + -4);
}


