/*
FUNCTION_NAME: OVRSimpleJSON.JSONLazyCreator$$get_AsLong
ENTRY_POINT: 02d7b85c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_data_collection_or_telemetry_hits_1
*/


undefined8 OVRSimpleJSON_JSONLazyCreator__get_AsLong(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C::s_Il2CppMethodInitialized = 1
    ;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  puVar2 = (undefined8 *)il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  return *puVar2;
}


