/*
FUNCTION_NAME: OVRSceneSampleController_UpdateVisionMode_mF82D6220F0E8D311C1DE14D684F60CC6F2ADD7B7
ENTRY_POINT: 02e576d4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRSceneSampleController_UpdateVisionMode_mF82D6220F0E8D311C1DE14D684F60CC6F2ADD7B7
               (long param_1)

{
  byte bVar1;
  void *pvVar2;
  
  if ((OVRSceneSampleController_UpdateVisionMode_mF82D6220F0E8D311C1DE14D684F60CC6F2ADD7B7::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRSceneSampleController_UpdateVisionMode_mF82D6220F0E8D311C1DE14D684F60CC6F2ADD7B7::
    s_Il2CppMethodInitialized = 1;
  }
  bVar1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(0x11b,0);
  if ((bVar1 & 1) != 0) {
    *(bool *)(param_1 + 0x50) = (*(byte *)(param_1 + 0x50) & 1) != (*(byte *)(param_1 + 0x50) & 1);
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    pvVar2 = (void *)OVRManager_get_tracker_mA945BED7BDB670E0F82A7EAD0A401651C8605259_inline
                               ((MethodInfo *)0x0);
    bVar1 = *(byte *)(param_1 + 0x50);
    NullCheck(pvVar2);
    OVRTracker_set_isEnabled_m34B6A72018F2C6362EF2CD79DEF6CB52C746E79B(pvVar2,bVar1 & 1,0);
  }
  return;
}


