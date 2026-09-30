/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetUint64TrackedDeviceProperty$$BeginInvoke
ENTRY_POINT: 02d7fe6c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 151
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


byte OVR_OpenVR_IVRSystem__GetUint64TrackedDeviceProperty__BeginInvoke(ulong *param_1)

{
  byte bVar1;
  long unaff_x29;
  byte bStack0000000000000007;
  long in_stack_00000010;
  
  il2cpp_codegen_initialize_runtime_metadata(param_1);
  OVRManager_get_monoscopic_m0DE754F28B483E52474ECA234A1E3DD1D2BA7218::s_Il2CppMethodInitialized = 1
  ;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bStack0000000000000007 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  bStack0000000000000007 = bStack0000000000000007 & 1;
  if (bStack0000000000000007 == 0) {
    *(byte *)(unaff_x29 + -1) = *(byte *)(in_stack_00000010 + 0x2d) & 1;
  }
  else {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    bVar1 = OVRPlugin_get_monoscopic_m1FB2A64C1DF99193B13E940E9DEDE96C3A9ABF64(0);
    *(byte *)(unaff_x29 + -1) = bVar1 & 1;
  }
  return *(byte *)(unaff_x29 + -1) & 1;
}


