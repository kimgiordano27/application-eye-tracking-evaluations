/*
FUNCTION_NAME: OVRSceneLoader$$UpdateCanvasPosition
ENTRY_POINT: 02ce9ed0
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 116
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;pose_vector;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_4;frame_or_lifecycle_behavior;functionality_data_collection_or_telemetry_hits_4
*/


undefined8 OVRSceneLoader__UpdateCanvasPosition(void)

{
  ulong uVar1;
  Request_1_t8CBF786FEE87992B8F5BC02CAFA62C67DBCE97F7 *pRVar2;
  long unaff_x29;
  
  uVar1 = CAPI_ovr_Leaderboard_WriteEntry_mE128C2441DF25C9B43F84ED027912FA8BD0E2C03();
  pRVar2 = (Request_1_t8CBF786FEE87992B8F5BC02CAFA62C67DBCE97F7 *)
           il2cpp_codegen_object_new(*(Il2CppClass **)Method_OVRPlugin_<>c_<_cctor>b__653_37__);
  Request_1__ctor_m49317EF53EE3A7D828FBEBB6FA2BF473D7C91884
            (pRVar2,uVar1,*(MethodInfo **)Method_OVRPlugin_<>c_<_cctor>b__653_36__);
  *(Request_1_t8CBF786FEE87992B8F5BC02CAFA62C67DBCE97F7 **)(unaff_x29 + -8) = pRVar2;
  return *(undefined8 *)(unaff_x29 + -8);
}


