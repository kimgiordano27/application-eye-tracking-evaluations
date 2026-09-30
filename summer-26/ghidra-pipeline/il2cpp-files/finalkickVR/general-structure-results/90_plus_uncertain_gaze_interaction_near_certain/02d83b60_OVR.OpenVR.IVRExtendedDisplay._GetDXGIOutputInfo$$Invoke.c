/*
FUNCTION_NAME: OVR.OpenVR.IVRExtendedDisplay._GetDXGIOutputInfo$$Invoke
ENTRY_POINT: 02d83b60
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 109
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_7;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


void OVR_OpenVR_IVRExtendedDisplay__GetDXGIOutputInfo__Invoke(long param_1,undefined4 param_2)

{
  byte bVar1;
  
  if ((OVRManager_set_trackingOriginType_mDDB79B878E8BF7FD66AD925A4EB0DAE77980F0F3::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRManager_set_trackingOriginType_mDDB79B878E8BF7FD66AD925A4EB0DAE77980F0F3::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bVar1 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  if ((bVar1 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    bVar1 = OVRPlugin_SetTrackingOriginType_mC03CEE60AF8A00DE01E5071C8CCBE8C366ED2105(param_2,0);
    if ((bVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x108) = param_2;
    }
  }
  return;
}


