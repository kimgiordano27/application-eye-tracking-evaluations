/*
FUNCTION_NAME: FUN_01a740e0
ENTRY_POINT: 01a740e0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_1
*/


long FUN_01a740e0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  puVar1 = Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>_Resize__;
  if ((DAT_0377cbf9 & 1) == 0) {
    thunk_FUN_00d48444(Method_System_Nullable<MRUKAnchor_SceneLabels>_get_Value__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>_Resize__
                      );
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(System_Security_Cryptography_X509Certificates_X509KeyUsageFlags_TypeInfo);
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_Observable_Where<__Il2CppFullySharedGenericType>__
                      );
    DAT_0377cbf9 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_0377cc82 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledResourceInfo>_Resize__
                      );
    DAT_0377cc82 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar4 = *(long *)puVar1;
  }
  puVar3 = StringLiteral_302;
  puVar2 = 
  Method_UnityEngine_InputSystem_Utilities_Observable_Where<__Il2CppFullySharedGenericType>__;
  pcVar6 = *(char **)(lVar4 + 0xb8);
  if (*pcVar6 == '\0') {
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      pcVar6 = *(char **)(*(long *)puVar1 + 0xb8);
    }
    uVar5 = *(undefined8 *)(pcVar6 + 8);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026610e4(uVar5,0);
    lVar4 = 0;
  }
  else {
    if (*(int *)(*(long *)Method_System_Nullable<MRUKAnchor_SceneLabels>_get_Value__ + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar5 = OVRPlugin_OVRP_1_15_0__ovrp_GetExternalCameraIntrinsics(param_1);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_01390b98(lVar4,uVar5,
                 *(undefined8 *)
                  System_Security_Cryptography_X509Certificates_X509KeyUsageFlags_TypeInfo);
  }
  return lVar4;
}


