/*
FUNCTION_NAME: Unity.Services.Multiplayer.ModuleRegistry.<>c$$.ctor
ENTRY_POINT: 077c3b44
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 102
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


void Unity_Services_Multiplayer_ModuleRegistry_<>c___ctor(long param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  iVar1 = *(int *)(unaff_x21 + 0x8c);
  lVar2 = thunk_FUN_03af1434(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  lVar2 = thunk_FUN_03af1434(System_Action<OVRManager_TrackingOrigin,_Nullable<OVRPose>>_TypeInfo);
  if (iVar1 == *(int *)(*(long *)(lVar2 + 0xb8) + 0x20)) {
    if (*(long *)(unaff_x20 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_077bbc90();
    thunk_FUN_03af1434(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<Socket>_TypeInfo);
    FUN_077c3668();
  }
  lVar2 = *(long *)(unaff_x20 + 0x50);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40));
  }
  thunk_FUN_03af1434(System_Runtime_CompilerServices_AsyncTaskMethodBuilder<string>_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884();
}


