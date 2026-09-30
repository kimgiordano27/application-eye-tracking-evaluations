/*
FUNCTION_NAME: FUN_077c8168
ENTRY_POINT: 077c8168
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 96
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


long FUN_077c8168(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo;
  if ((DAT_089870d7 & 1) == 0) {
    FUN_03a8a718(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
    FUN_03a8a718(PTR_DAT_0848ad30);
    FUN_03a8a718(System_Action<Task,_object>_TypeInfo);
    DAT_089870d7 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
    lVar2 = *(long *)puVar1;
  }
  if (param_1 < **(int **)(lVar2 + 0xb8)) {
    lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)System_Action<Task,_object>_TypeInfo);
    FUN_0784fa10(lVar2,param_1,param_2,param_4,0);
  }
  else {
    lVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_0848ad30);
    FUN_0784fa10(lVar2,param_1,param_2,param_4,0);
    *(undefined8 *)(lVar2 + 0x90) = param_3;
    thunk_FUN_03afed3c((undefined8 *)(lVar2 + 0x90),param_3);
  }
  return lVar2;
}


