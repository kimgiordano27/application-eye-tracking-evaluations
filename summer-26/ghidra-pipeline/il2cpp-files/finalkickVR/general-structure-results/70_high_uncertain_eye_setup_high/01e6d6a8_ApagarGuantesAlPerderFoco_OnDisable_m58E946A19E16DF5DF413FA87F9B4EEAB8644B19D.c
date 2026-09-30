/*
FUNCTION_NAME: ApagarGuantesAlPerderFoco_OnDisable_m58E946A19E16DF5DF413FA87F9B4EEAB8644B19D
ENTRY_POINT: 01e6d6a8
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void ApagarGuantesAlPerderFoco_OnDisable_m58E946A19E16DF5DF413FA87F9B4EEAB8644B19D
               (undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = 
  Method_System_Collections_Generic_Dictionary<ProbeReferenceVolume_Cell,_ProbeBrickIndex_BrickMeta>_get_Item__
  ;
  if ((ApagarGuantesAlPerderFoco_OnDisable_m58E946A19E16DF5DF413FA87F9B4EEAB8644B19D::
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
    ApagarGuantesAlPerderFoco_OnDisable_m58E946A19E16DF5DF413FA87F9B4EEAB8644B19D::
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
  OVRManager_remove_HMDMounted_mE3ACD3FCCFAC0AF372978085E2950B5B872685A8(uVar2,0);
  uVar2 = il2cpp_codegen_object_new(*(Il2CppClass **)puVar1);
  Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC
            (uVar2,param_1,
             *(undefined8 *)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_Resize__,0);
  OVRManager_remove_HMDUnmounted_mF0EC72A064E8A4598DC5720CEAB9793F80ABBD36(uVar2,0);
  return;
}


