/*
FUNCTION_NAME: OVRPlugin$$GetActionStatePose
ENTRY_POINT: 0600cd70
PROGRAM: vandalizer-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetActionStatePose(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 unaff_d8;
  undefined8 unaff_d9;
  undefined8 unaff_d10;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000030 = param_1;
  uVar1 = FUN_06df2dbc(param_2,0);
  if ((uVar1 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_0600cdd8;
    unaff_d10 = FUN_06ee16e8(*(long *)(unaff_x19 + 0x20),0);
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    FUN_06ee1278(unaff_d10,unaff_d9,unaff_d8,*(long *)(unaff_x19 + 0x20),0);
    return;
  }
LAB_0600cdd8:
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


