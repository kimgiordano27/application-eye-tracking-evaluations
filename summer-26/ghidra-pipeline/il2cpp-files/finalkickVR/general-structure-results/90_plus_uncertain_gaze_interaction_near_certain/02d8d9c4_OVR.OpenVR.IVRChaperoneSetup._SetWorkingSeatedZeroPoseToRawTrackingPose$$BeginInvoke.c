/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._SetWorkingSeatedZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 02d8d9c4
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 134
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_5;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_5
*/


void OVR_OpenVR_IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose__BeginInvoke
               (long param_1)

{
  long unaff_x29;
  undefined8 *in_stack_00000008;
  byte bStack0000000000000017;
  
  il2cpp_codegen_initialize_runtime_metadata(*(ulong **)(param_1 + 0xd78));
  OVRManager_OnApplicationFocus_m8D482CEEA83B62B44FFBBF0DBFFF98E1F4E9F33D::s_Il2CppMethodInitialized
       = 1;
  bStack0000000000000017 = *(byte *)(unaff_x29 + -9) & 1;
  if (bStack0000000000000017 == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass8_0_<CreateAlbedoSaturationTolerance>b__0__
               ,0);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000008);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass7_0_<CreateAlbedoHueTolerance>b__2__
               ,0);
  }
  return;
}


