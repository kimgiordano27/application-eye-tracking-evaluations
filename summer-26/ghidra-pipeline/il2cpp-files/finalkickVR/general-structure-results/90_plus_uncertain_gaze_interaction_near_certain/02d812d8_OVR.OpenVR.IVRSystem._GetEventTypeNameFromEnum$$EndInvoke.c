/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetEventTypeNameFromEnum$$EndInvoke
ENTRY_POINT: 02d812d8
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


void OVR_OpenVR_IVRSystem__GetEventTypeNameFromEnum__EndInvoke(ulong *param_1)

{
  undefined4 uVar1;
  long unaff_x29;
  byte bStack0000000000000007;
  
  il2cpp_codegen_initialize_runtime_metadata(param_1);
  OVRManager_set_vsyncCount_m60B468D8FC499D98DADE378D3860E3EFDCC2A6AD::s_Il2CppMethodInitialized = 1
  ;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bStack0000000000000007 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  bStack0000000000000007 = bStack0000000000000007 & 1;
  if (bStack0000000000000007 != 0) {
    uVar1 = *(undefined4 *)(unaff_x29 + -0xc);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRPlugin_set_vsyncCount_mFDB0AD3E722E6889A3081C4DE015A0CF2ADC9A88(uVar1,0);
  }
  return;
}


