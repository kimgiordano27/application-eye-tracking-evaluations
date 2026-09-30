/*
FUNCTION_NAME: OVRBoundary_GetDimensions_mC0061079F6BBBDD6941F07E88E28C00D4343DA36
ENTRY_POINT: 02d36f30
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4
OVRBoundary_GetDimensions_mC0061079F6BBBDD6941F07E88E28C00D4343DA36
          (undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined4 uVar3;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__;
  if ((OVRBoundary_GetDimensions_mC0061079F6BBBDD6941F07E88E28C00D4343DA36::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    OVRBoundary_GetDimensions_mC0061079F6BBBDD6941F07E88E28C00D4343DA36::s_Il2CppMethodInitialized =
         1;
  }
  il2cpp_codegen_runtime_class_init_inline(*(Il2CppClass **)puVar1);
  lVar2 = il2cpp_codegen_static_fields_for(*(Il2CppClass **)puVar1);
  if (*(int *)(lVar2 + 0x100) == 1) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_System_Collections_Generic_List<Dropdown_DropdownItem>_Clear__);
    uVar3 = OVRPlugin_GetBoundaryDimensions_m1BCF492A6E66D04D2DE9B70FDB0BF006A2874291(param_2);
    uVar3 = OVRExtensions_FromVector3f_m4B3B578358199C40F4345A055E0DDE60EDF508DC(uVar3,0);
  }
  else {
    uVar3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline((MethodInfo *)0x0);
  }
  return uVar3;
}


