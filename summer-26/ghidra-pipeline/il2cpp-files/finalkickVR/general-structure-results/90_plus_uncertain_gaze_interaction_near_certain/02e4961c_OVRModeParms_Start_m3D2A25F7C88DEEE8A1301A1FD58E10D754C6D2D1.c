/*
FUNCTION_NAME: OVRModeParms_Start_m3D2A25F7C88DEEE8A1301A1FD58E10D754C6D2D1
ENTRY_POINT: 02e4961c
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 95
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;pose_vector;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_gaze_interaction_hits_2
*/


void OVRModeParms_Start_m3D2A25F7C88DEEE8A1301A1FD58E10D754C6D2D1(undefined8 param_1)

{
  byte bVar1;
  
  if ((OVRModeParms_Start_m3D2A25F7C88DEEE8A1301A1FD58E10D754C6D2D1::s_Il2CppMethodInitialized & 1)
      == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata((ulong *)StringLiteral_712);
    OVRModeParms_Start_m3D2A25F7C88DEEE8A1301A1FD58E10D754C6D2D1::s_Il2CppMethodInitialized = 1;
  }
  il2cpp_codegen_runtime_class_init_inline
            (*(Il2CppClass **)
              Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_Item__);
  bVar1 = OVRManager_get_isHmdPresent_m098F56E4E9C2ECAC87EAB61C7680F0FBD2A2C445(0);
  if ((bVar1 & 1) == 0) {
    Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(param_1,0,0);
  }
  else {
    MonoBehaviour_InvokeRepeating_mF208501E0E4918F9168BBBA5FC50D8F80D01514D
              (0x41200000,param_1,*(undefined8 *)StringLiteral_712,0);
  }
  return;
}


