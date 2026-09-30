/*
FUNCTION_NAME: OVRPlugin$$GetTrackingTransformRelativePose
ENTRY_POINT: 033be094
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin__GetTrackingTransformRelativePose(void)

{
  char in_NG;
  char in_OV;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  int unaff_w21;
  
  while( true ) {
                    /* try { // try from 033be094 to 034be117 has its CatchHandler @ 033bdf48 */
    if (in_NG == in_OV) {
      return 1;
    }
    uVar2 = FUN_033aae5c();
    uVar3 = FUN_033aae5c();
    uVar4 = FUN_033bded8(uVar2,uVar3);
    if ((uVar4 & 1) == 0) break;
    unaff_w21 = unaff_w21 + 1;
    iVar1 = FUN_033aadfc();
    in_OV = SBORROW4(unaff_w21,iVar1);
    in_NG = unaff_w21 - iVar1 < 0;
  }
  return 0;
}


