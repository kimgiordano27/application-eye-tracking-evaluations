/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 068f0e14
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__BeginInvoke
               (undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_084b3a70;
  if ((DAT_0897caa2 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b3a70);
    DAT_0897caa2 = 1;
  }
  lVar1 = *(long *)puVar2;
  if (param_2 != 0) {
    lVar1 = param_2;
  }
  FUN_068ffd38(param_1,lVar1,0);
  return;
}


