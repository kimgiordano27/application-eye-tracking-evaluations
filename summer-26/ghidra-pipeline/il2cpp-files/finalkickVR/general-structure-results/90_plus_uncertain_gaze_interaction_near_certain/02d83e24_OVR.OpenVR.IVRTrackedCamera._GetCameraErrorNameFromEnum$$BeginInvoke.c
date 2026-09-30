/*
FUNCTION_NAME: OVR.OpenVR.IVRTrackedCamera._GetCameraErrorNameFromEnum$$BeginInvoke
ENTRY_POINT: 02d83e24
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;functionality_gaze_interaction_hits_2
*/


void OVR_OpenVR_IVRTrackedCamera__GetCameraErrorNameFromEnum__BeginInvoke
               (undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_set_isUserPresent_mAC629CEC482B5627A507D4FB93DE81ADA0366703::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRManager_set_isUserPresent_mAC629CEC482B5627A507D4FB93DE81ADA0366703::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar2 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  *(undefined1 *)(lVar2 + 0x144) = 1;
  lVar2 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  *(byte *)(lVar2 + 0x145) = param_2 & 1;
  return;
}


