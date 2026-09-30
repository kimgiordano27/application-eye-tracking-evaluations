/*
FUNCTION_NAME: OVRChromaticAberration_Start_m6BB7D7BC321EC4903F47B78C7C9D8220E57A2ADC
ENTRY_POINT: 02e29488
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRChromaticAberration_Start_m6BB7D7BC321EC4903F47B78C7C9D8220E57A2ADC(long param_1)

{
  byte bVar1;
  void *pvVar2;
  
  if ((OVRChromaticAberration_Start_m6BB7D7BC321EC4903F47B78C7C9D8220E57A2ADC::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRChromaticAberration_Start_m6BB7D7BC321EC4903F47B78C7C9D8220E57A2ADC::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  pvVar2 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                             ((MethodInfo *)0x0);
  bVar1 = *(byte *)(param_1 + 0x24);
  NullCheck(pvVar2);
  OVRManager_set_chromatic_mC1109A775529EF48476D51176DEC780678AAE0EF(pvVar2,bVar1 & 1,0);
  return;
}


