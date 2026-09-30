/*
FUNCTION_NAME: OVRSceneSampleController_UpdateRecenterPose_mCE417FE793AC294A67314E1D4EF3F7F910EF3730
ENTRY_POINT: 02e5763c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_5;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRSceneSampleController_UpdateRecenterPose_mCE417FE793AC294A67314E1D4EF3F7F910EF3730(void)

{
  byte bVar1;
  void *pvVar2;
  
  if ((OVRSceneSampleController_UpdateRecenterPose_mCE417FE793AC294A67314E1D4EF3F7F910EF3730::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRSceneSampleController_UpdateRecenterPose_mCE417FE793AC294A67314E1D4EF3F7F910EF3730::
    s_Il2CppMethodInitialized = 1;
  }
  bVar1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(0x72,0);
  if ((bVar1 & 1) != 0) {
    il2cpp_codegen_runtime_class_init_inline
              (*(Il2CppClass **)
                Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    pvVar2 = (void *)OVRManager_get_display_m1D17D6867547AC786E00A4CF60B863275AC1AF3D_inline
                               ((MethodInfo *)0x0);
    NullCheck(pvVar2);
    OVRDisplay_RecenterPose_m5D4F83D11B52934020DD34569B60A8E0D2E0FD82(pvVar2,0);
  }
  return;
}


