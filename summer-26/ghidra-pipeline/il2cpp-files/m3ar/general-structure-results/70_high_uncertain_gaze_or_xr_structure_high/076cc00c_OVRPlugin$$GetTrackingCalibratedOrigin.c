/*
FUNCTION_NAME: OVRPlugin$$GetTrackingCalibratedOrigin
ENTRY_POINT: 076cc00c
PROGRAM: m3ar-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetTrackingCalibratedOrigin(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *unaff_x24;
  
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar2[2] == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_0408f364();
      puVar2 = *(undefined8 **)(*unaff_x24 + 0xb8);
    }
    uVar3 = *puVar2;
    uVar1 = thunk_FUN_0406deb8(*(undefined8 *)PTR_DAT_08fadc28);
    FUN_053442e0(uVar1,uVar3,*(undefined8 *)PTR_DAT_08fadc50,0);
    *(undefined8 *)(*(long *)(*unaff_x24 + 0xb8) + 0x10) = uVar1;
  }
  FUN_04b0f494();
  return;
}


