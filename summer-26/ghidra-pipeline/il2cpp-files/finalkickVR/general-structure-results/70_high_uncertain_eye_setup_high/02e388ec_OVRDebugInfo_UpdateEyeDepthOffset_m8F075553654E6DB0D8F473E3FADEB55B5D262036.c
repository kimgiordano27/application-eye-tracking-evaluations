/*
FUNCTION_NAME: OVRDebugInfo_UpdateEyeDepthOffset_m8F075553654E6DB0D8F473E3FADEB55B5D262036
ENTRY_POINT: 02e388ec
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


void OVRDebugInfo_UpdateEyeDepthOffset_m8F075553654E6DB0D8F473E3FADEB55B5D262036
               (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  void *local_30;
  undefined4 local_24;
  undefined8 local_20;
  long local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  if ((OVRDebugInfo_UpdateEyeDepthOffset_m8F075553654E6DB0D8F473E3FADEB55B5D262036::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_Remove__
              );
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_601);
    OVRDebugInfo_UpdateEyeDepthOffset_m8F075553654E6DB0D8F473E3FADEB55B5D262036::
    s_Il2CppMethodInitialized = 1;
  }
  local_24 = 0;
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  local_30 = (void *)OVRManager_get_profile_m7BD564E8E26977B10A35BBB1E639FEDDB1357D6D();
  NullCheck(local_30);
  local_3c = OVRProfile_get_eyeDepth_m1E1CD93C0D16CE794418583F89B99E20390AFC67(local_30,0);
  local_38 = local_3c;
  local_34 = local_3c;
  local_24 = local_3c;
  uVar1 = Box(*(Il2CppClass **)
               Method_System_Collections_Generic_Dictionary<XmlQualifiedName,_SchemaElementDecl>_Remove__
              ,&local_3c);
  pvVar2 = (void *)String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8
                             (*(undefined8 *)StringLiteral_601,uVar1,0);
  *(void **)(local_18 + 0xa0) = pvVar2;
  Il2CppCodeGenWriteBarrier((void **)(local_18 + 0xa0),pvVar2);
  return;
}


