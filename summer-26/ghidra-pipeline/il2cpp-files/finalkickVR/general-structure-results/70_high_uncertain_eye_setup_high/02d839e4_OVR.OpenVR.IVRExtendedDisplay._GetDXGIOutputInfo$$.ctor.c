/*
FUNCTION_NAME: OVR.OpenVR.IVRExtendedDisplay._GetDXGIOutputInfo$$.ctor
ENTRY_POINT: 02d839e4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


byte OVR_OpenVR_IVRExtendedDisplay__GetDXGIOutputInfo___ctor(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x29;
  undefined8 *puStack0000000000000008;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  puStack0000000000000008 =
       (undefined8 *)
       Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  *(undefined8 *)(unaff_x29 + -8) = param_1;
  if ((OVRManager_GetSpaceWarp_m2A01D15434181512E30B0CD641115D51B3E080C6::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata((ulong *)puVar1);
    OVRManager_GetSpaceWarp_m2A01D15434181512E30B0CD641115D51B3E080C6::s_Il2CppMethodInitialized = 1
    ;
  }
  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000008);
  lVar2 = il2cpp_codegen_static_fields_for((Il2CppClass *)*puStack0000000000000008);
  *(byte *)(unaff_x29 + -9) = *(byte *)(lVar2 + 0x134) & 1;
  return *(byte *)(unaff_x29 + -9) & 1;
}


