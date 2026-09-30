/*
FUNCTION_NAME: OVRControllerDrivenHandPosesSample_SetControllerDrivenHandPosesTypeToControllerConforming_m8C5E23B66C7E1E5A175D460AB8983EC189E2A82F
ENTRY_POINT: 02d40e8c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 90
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_3;functionality_gaze_interaction_hits_3
*/


void OVRControllerDrivenHandPosesSample_SetControllerDrivenHandPosesTypeToControllerConforming_m8C5E23B66C7E1E5A175D460AB8983EC189E2A82F
               (long param_1)

{
  void *pvVar1;
  
  if ((OVRControllerDrivenHandPosesSample_SetControllerDrivenHandPosesTypeToControllerConforming_m8C5E23B66C7E1E5A175D460AB8983EC189E2A82F
       ::s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRControllerDrivenHandPosesSample_SetControllerDrivenHandPosesTypeToControllerConforming_m8C5E23B66C7E1E5A175D460AB8983EC189E2A82F
    ::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  pvVar1 = (void *)OVRManager_get_instance_m642500A467C7D7B5B1C2763F2BA90C52BBF5381C_inline
                             ((MethodInfo *)0x0);
  NullCheck(pvVar1);
  *(undefined4 *)((long)pvVar1 + 0x118) = 1;
  pvVar1 = *(void **)(param_1 + 0x20);
  NullCheck(pvVar1);
  Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(pvVar1,1,0);
  pvVar1 = *(void **)(param_1 + 0x28);
  NullCheck(pvVar1);
  Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(pvVar1,0,0);
  pvVar1 = *(void **)(param_1 + 0x30);
  NullCheck(pvVar1);
  Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(pvVar1,1,0);
  return;
}


