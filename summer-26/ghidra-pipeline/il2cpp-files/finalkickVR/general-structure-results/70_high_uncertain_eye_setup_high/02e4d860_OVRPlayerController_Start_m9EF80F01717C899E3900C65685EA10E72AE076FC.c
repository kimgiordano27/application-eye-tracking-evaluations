/*
FUNCTION_NAME: OVRPlayerController_Start_m9EF80F01717C899E3900C65685EA10E72AE076FC
ENTRY_POINT: 02e4d860
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVRPlayerController_Start_m9EF80F01717C899E3900C65685EA10E72AE076FC
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if ((OVRPlayerController_Start_m9EF80F01717C899E3900C65685EA10E72AE076FC::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    OVRPlayerController_Start_m9EF80F01717C899E3900C65685EA10E72AE076FC::s_Il2CppMethodInitialized =
         1;
  }
  pvVar1 = *(void **)(param_3 + 0x80);
  NullCheck(pvVar1);
  pvVar1 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(pvVar1);
  NullCheck(pvVar1);
  uVar2 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(pvVar1,0);
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  pvVar1 = (void *)OVRManager_get_profile_m7BD564E8E26977B10A35BBB1E639FEDDB1357D6D(0);
  NullCheck(pvVar1);
  uVar3 = OVRProfile_get_eyeDepth_m1E1CD93C0D16CE794418583F89B99E20390AFC67(pvVar1,0);
  pvVar1 = *(void **)(param_3 + 0x80);
  NullCheck(pvVar1);
  pvVar1 = (void *)Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(pvVar1,0);
  NullCheck(pvVar1);
  Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134
            (uVar2,param_2,uVar3,pvVar1,0);
  return;
}


