/*
FUNCTION_NAME: OVR.OpenVR.IVRChaperoneSetup._GetWorkingSeatedZeroPoseToRawTrackingPose$$Invoke
ENTRY_POINT: 05b718f8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_1;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure
*/


void OVR_OpenVR_IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose__Invoke(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long lVar3;
  undefined8 unaff_x21;
  
  FUN_042e4268();
  puVar1 = PTR_DAT_07114de0;
  *(undefined8 *)(unaff_x19 + 0x98) = unaff_x21;
  lVar3 = *(long *)puVar1;
  lVar2 = *(long *)(lVar3 + 0x38);
  if (lVar2 == 0) {
    FUN_031c0a30(lVar3);
    lVar2 = *(long *)(lVar3 + 0x38);
  }
  lVar2 = *(long *)(lVar2 + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar2 = *(long *)(*(long *)(lVar3 + 0x38) + 0x10);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  *(undefined8 *)(unaff_x19 + 0xa0) = **(undefined8 **)(lVar2 + 0xb8);
  FUN_06cbfc60();
  return;
}


