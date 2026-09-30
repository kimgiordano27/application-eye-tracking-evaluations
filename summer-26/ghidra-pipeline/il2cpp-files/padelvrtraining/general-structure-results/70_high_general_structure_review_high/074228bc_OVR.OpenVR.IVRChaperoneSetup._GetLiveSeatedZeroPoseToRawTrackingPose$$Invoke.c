/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetLiveSeatedZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 074228bc
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


float OVR_OpenVR_IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose__Invoke
                (float param_1,long param_2)

{
  long lVar1;
  float *unaff_x19;
  float *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  float fVar2;
  float fVar3;
  float fVar4;
  float in_s7;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack0000000000000004;
  
  fVar4 = *(float *)(unaff_x21 + 8);
  fVar6 = *unaff_x19;
  fVar5 = unaff_x19[1];
  fVar11 = *unaff_x20;
  fVar10 = unaff_x20[1];
  fVar9 = unaff_x20[2];
  fVar12 = unaff_x19[2];
  fVar8 = unaff_x19[3];
  fVar2 = unaff_x19[4];
  fVar3 = unaff_x19[5];
  fVar7 = unaff_x19[6];
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_03db619c();
    param_2 = *unaff_x22;
  }
  lVar1 = *(long *)(param_2 + 0xb8);
  fStack0000000000000004 = fVar2;
  FUN_08a44d84(fVar8,fVar2,fVar3,fVar7,*(undefined4 *)(lVar1 + 0x6c),*(undefined4 *)(lVar1 + 0x70),
               *(undefined4 *)(lVar1 + 0x74),0);
  fVar3 = (float)FUN_03e64c4c(param_1 - fVar6,in_s7 - fVar5,fVar4 - fVar12,fVar11 - fVar6,
                              fVar10 - fVar5,fVar9 - fVar12,0);
  fVar2 = fVar3 + 360.0;
  if (0.0 <= fVar3) {
    fVar2 = fVar3;
  }
  return fVar2;
}


