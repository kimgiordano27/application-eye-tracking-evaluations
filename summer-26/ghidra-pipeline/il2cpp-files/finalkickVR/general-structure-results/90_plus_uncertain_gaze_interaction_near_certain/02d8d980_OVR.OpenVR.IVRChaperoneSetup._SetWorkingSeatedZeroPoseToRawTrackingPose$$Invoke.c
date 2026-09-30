/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._SetWorkingSeatedZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 02d8d980
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 142
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_8;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_8
*/


void OVR_OpenVR_IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose__Invoke
               (undefined8 param_1,byte param_2,undefined8 param_3)

{
  undefined8 *puStack0000000000000008;
  byte bStack0000000000000017;
  undefined8 uStack0000000000000018;
  byte bStack0000000000000027;
  undefined8 uStack0000000000000028;
  
  puStack0000000000000008 =
       (undefined8 *)
       Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__;
  bStack0000000000000027 = param_2 & 1;
  uStack0000000000000018 = param_3;
  uStack0000000000000028 = param_1;
  if ((OVRManager_OnApplicationFocus_m8D482CEEA83B62B44FFBBF0DBFFF98E1F4E9F33D::
       s_Il2CppMethodInitialized & 1) == 0) {
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_System_Collections_Generic_Dictionary<int,_IInitializablePackage>_get_Item__);
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass7_0_<CreateAlbedoHueTolerance>b__2__
              );
    il2cpp_codegen_initialize_runtime_metadata
              ((ulong *)
               Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass8_0_<CreateAlbedoSaturationTolerance>b__0__
              );
    OVRManager_OnApplicationFocus_m8D482CEEA83B62B44FFBBF0DBFFF98E1F4E9F33D::
    s_Il2CppMethodInitialized = 1;
  }
  bStack0000000000000017 = bStack0000000000000027 & 1;
  if (bStack0000000000000017 == 0) {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000008);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass8_0_<CreateAlbedoSaturationTolerance>b__0__
               ,0);
  }
  else {
    il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*puStack0000000000000008);
    Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB
              (*(undefined8 *)
                Method_UnityEngine_Rendering_Universal_DebugDisplaySettingsMaterial_WidgetFactory_<>c__DisplayClass7_0_<CreateAlbedoHueTolerance>b__2__
               ,0);
  }
  return;
}


