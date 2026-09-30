/*
FUNCTION_NAME: OVRManager_get_profile_m7BD564E8E26977B10A35BBB1E639FEDDB1357D6D
ENTRY_POINT: 02d7bd58
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 121
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_2
*/


undefined8 OVRManager_get_profile_m7BD564E8E26977B10A35BBB1E639FEDDB1357D6D(void)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_get_profile_m7BD564E8E26977B10A35BBB1E639FEDDB1357D6D::s_Il2CppMethodInitialized &
      1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_XR_Interaction_Toolkit_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36_System_Collections_IEnumerator_Reset__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    OVRManager_get_profile_m7BD564E8E26977B10A35BBB1E639FEDDB1357D6D::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
  bVar2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(uVar5,0);
  if ((bVar2 & 1) != 0) {
    pvVar4 = (void *)il2cpp_codegen_object_new
                               (*(Il2CppClass **)
                                 Method_UnityEngine_XR_Interaction_Toolkit_XRDirectInteractor_<UpdateCollidersAfterOnTriggerStay>d__36_System_Collections_IEnumerator_Reset__
                               );
    OVRProfile__ctor_mAEA89E1269ED1DA8E35555C3869A12098C5D820C(pvVar4,0);
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(void **)(lVar3 + 0x28) = pvVar4;
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    Il2CppCodeGenWriteBarrier((void **)(lVar3 + 0x28),pvVar4);
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  return *(undefined8 *)(lVar3 + 0x28);
}


