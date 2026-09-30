/*
FUNCTION_NAME: OVRManager$$SetOpenVRLocalPose
ENTRY_POINT: 05731e10
PROGRAM: Untangled-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRManager__SetOpenVRLocalPose(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x8d0) = 1;
  if ((*(int *)(unaff_x19 + 0x10) == -2) &&
     (iVar1 = *(int *)(unaff_x19 + 0x20), iVar2 = FUN_056497a4(0), iVar1 == iVar2)) {
    *(undefined4 *)(unaff_x19 + 0x10) = 0;
    lVar4 = unaff_x19;
  }
  else {
    lVar4 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d58888);
    FUN_05645a04(lVar4,0);
    *(undefined4 *)(lVar4 + 0x10) = 0;
    uVar3 = FUN_056497a4(0);
    *(undefined4 *)(lVar4 + 0x20) = uVar3;
    *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
    thunk_FUN_02f411dc();
  }
  *(undefined1 *)(lVar4 + 0x24) = *(undefined1 *)(unaff_x19 + 0x25);
  return lVar4;
}


