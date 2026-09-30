/*
FUNCTION_NAME: OVRDisplay_RecenterPose_m5D4F83D11B52934020DD34569B60A8E0D2E0FD82
ENTRY_POINT: 02d42948
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRDisplay_RecenterPose_m5D4F83D11B52934020DD34569B60A8E0D2E0FD82(long param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  
  if ((OVRDisplay_RecenterPose_m5D4F83D11B52934020DD34569B60A8E0D2E0FD82::s_Il2CppMethodInitialized
      & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRDisplay_RecenterPose_m5D4F83D11B52934020DD34569B60A8E0D2E0FD82::s_Il2CppMethodInitialized = 1
    ;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  pvVar2 = (void *)OVRManager_GetCurrentInputSubsystem_m6343BBB6BBB22C59B70C2502CCFF5D0073B7272D(0);
  if (pvVar2 != (void *)0x0) {
    NullCheck(pvVar2);
    XRInputSubsystem_TryRecenter_m4F8888E40ED79139DCB81D56A67C03B4D931A6BB(pvVar2,0);
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  uVar1 = Time_get_frameCount_m4A42E558A71301A216BDC49EC402D62F19C79667(0);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return;
}


