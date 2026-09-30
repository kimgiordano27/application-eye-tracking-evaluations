/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$BeginInvoke
ENTRY_POINT: 074228d0
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


float OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__BeginInvoke
                (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
                long param_5)

{
  float fVar1;
  long unaff_x19;
  float fVar2;
  undefined4 uVar3;
  float in_s7;
  float unaff_s8;
  float unaff_s9;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float unaff_s15;
  undefined4 uStack0000000000000004;
  
  uVar3 = *(undefined4 *)(unaff_x19 + 0x10);
  if (*(int *)(param_5 + 0xe0) == 0) {
    thunk_FUN_03db619c();
  }
  uStack0000000000000004 = uVar3;
  FUN_08a44d84(0);
  fVar2 = (float)FUN_03e64c4c(param_1 - unaff_s9,in_s7 - unaff_s8,param_4 - unaff_s15,
                              unaff_s14 - unaff_s9,unaff_s13 - unaff_s8,unaff_s12 - unaff_s15,0);
  fVar1 = fVar2 + 360.0;
  if (0.0 <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1;
}


