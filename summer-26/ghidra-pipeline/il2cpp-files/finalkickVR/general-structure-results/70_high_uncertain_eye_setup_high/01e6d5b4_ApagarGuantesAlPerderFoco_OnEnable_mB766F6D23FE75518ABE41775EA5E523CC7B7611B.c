/*
FUNCTION_NAME: ApagarGuantesAlPerderFoco_OnEnable_mB766F6D23FE75518ABE41775EA5E523CC7B7611B
ENTRY_POINT: 01e6d5b4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_12;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void ApagarGuantesAlPerderFoco_OnEnable_mB766F6D23FE75518ABE41775EA5E523CC7B7611B
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
  ;
  if ((ApagarGuantesAlPerderFoco_OnEnable_mB766F6D23FE75518ABE41775EA5E523CC7B7611B::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_Clear__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_Resize__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    ApagarGuantesAlPerderFoco_OnEnable_mB766F6D23FE75518ABE41775EA5E523CC7B7611B::
    s_Il2CppMethodInitialized = 1;
  }
  uVar2 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar2,param_1,
             *(undefined8 *)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_Clear__);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  OVRManager_add_HMDMounted_m8F0D43C1A18DEF38FF1F22F49CB90D652F58C3AE(uVar2,0);
  uVar2 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar2,param_1,
             *(undefined8 *)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_Resize__,0);
  OVRManager_add_HMDUnmounted_mAF5F0B3B0F77CA5888B1ADE89E1006590C656691(uVar2,0);
  return;
}


