/*
FUNCTION_NAME: OVRManager_StaticShutdownMixedRealityCapture_mA2C3B9797235B17834EA372AB99D1024EB81F0F7
ENTRY_POINT: 02d8af68
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


void OVRManager_StaticShutdownMixedRealityCapture_mA2C3B9797235B17834EA372AB99D1024EB81F0F7(void)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRManager_StaticShutdownMixedRealityCapture_mA2C3B9797235B17834EA372AB99D1024EB81F0F7::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTransformOrigin_IsSame__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
    OVRManager_StaticShutdownMixedRealityCapture_mA2C3B9797235B17834EA372AB99D1024EB81F0F7::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  if ((*(byte *)(lVar3 + 0x1b0) & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    uVar4 = *(undefined8 *)(lVar3 + 0x1b8);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__)
    ;
    Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(uVar4);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(undefined8 *)(lVar3 + 0x1b8) = 0;
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    Il2CppCodeGenWriteBarrier((void **)(lVar3 + 0x1b8),(void *)0x0);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesTransformOrigin_IsSame__
              );
    OVRMixedReality_Cleanup_m312DAB9A4C89085DB090214409B45DEF56B82B62(0);
    bVar2 = Media_GetInitialized_m0786F11D130FC9598B90C01A542F76A002F4D048(0);
    if ((bVar2 & 1) != 0) {
      Media_Shutdown_m8ABD858739EAE7E2D18F4CC94898D86DCB222DB9(0);
    }
    il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
    lVar3 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
    *(undefined1 *)(lVar3 + 0x1b0) = 0;
  }
  return;
}


