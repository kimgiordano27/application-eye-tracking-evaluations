/*
FUNCTION_NAME: OVRCameraRig_OnBeforeRenderCallback_m4E49C09AB1FD27AAC93CC1C9EF037F57BE65BA43
ENTRY_POINT: 02d3b154
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 93
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_2
*/


void OVRCameraRig_OnBeforeRenderCallback_m4E49C09AB1FD27AAC93CC1C9EF037F57BE65BA43
               (Il2CppObject *param_1)

{
  undefined *puVar1;
  long lVar2;
  void *pvVar3;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRCameraRig_OnBeforeRenderCallback_m4E49C09AB1FD27AAC93CC1C9EF037F57BE65BA43::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRCameraRig_OnBeforeRenderCallback_m4E49C09AB1FD27AAC93CC1C9EF037F57BE65BA43::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar2 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  if (*(int *)(lVar2 + 0x100) == 1) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    pvVar3 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                               ((MethodInfo *)0x0);
    NullCheck(pvVar3);
    VirtualActionInvoker2<bool,bool>::Invoke
              (9,param_1,true,(bool)(*(byte *)((long)pvVar3 + 0x111) & 1));
  }
  return;
}


