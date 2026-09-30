/*
FUNCTION_NAME: OVRControllerDrivenHandPosesSample_Awake_m3BC90386D314BC2969F0873186CFA77AFD8D746D
ENTRY_POINT: 02d40cac
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRControllerDrivenHandPosesSample_Awake_m3BC90386D314BC2969F0873186CFA77AFD8D746D
               (undefined8 param_1)

{
  int iVar1;
  void *pvVar2;
  
  if ((OVRControllerDrivenHandPosesSample_Awake_m3BC90386D314BC2969F0873186CFA77AFD8D746D::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRControllerDrivenHandPosesSample_Awake_m3BC90386D314BC2969F0873186CFA77AFD8D746D::
    s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  pvVar2 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                             ((MethodInfo *)0x0);
  NullCheck(pvVar2);
  iVar1 = *(int *)((long)pvVar2 + 0x118);
  if (iVar1 == 0) {
    OVRControllerDrivenHandPosesSample_SetControllerDrivenHandPosesTypeToNone_m9887CBB37DEFF4CDCEC53CC83F1A2A72CF519FB9
              (param_1,0);
  }
  else if (iVar1 == 1) {
    OVRControllerDrivenHandPosesSample_SetControllerDrivenHandPosesTypeToControllerConforming_m8C5E23B66C7E1E5A175D460AB8983EC189E2A82F
              (0,param_1,0);
  }
  else if (iVar1 == 2) {
    OVRControllerDrivenHandPosesSample_SetControllerDrivenHandPosesTypeToNatural_mDA0B0B55E426E8D1C36D164D977B38D869C3CA97
              (0,param_1,0);
  }
  return;
}


