/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetControllerState$$EndInvoke
ENTRY_POINT: 02d81824
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 159
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void OVR_OpenVR_IVRSystem__GetControllerState__EndInvoke(void)

{
  undefined4 uVar1;
  long unaff_x29;
  byte bStack000000000000000f;
  
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)
             Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  il2cpp_codegen_initialize_runtime_metadata
            ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
  OVRManager_set_suggestedGpuPerfLevel_mF73FCC236503028B36D67F2553228E0ED7432662::
  s_Il2CppMethodInitialized = 1;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bStack000000000000000f = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  bStack000000000000000f = bStack000000000000000f & 1;
  if (bStack000000000000000f != 0) {
    uVar1 = *(undefined4 *)(unaff_x29 + -4);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_set_suggestedGpuPerfLevel_mF464D8BB311C080501ED0608C34295F8A4796BD3(uVar1,0);
  }
  return;
}


