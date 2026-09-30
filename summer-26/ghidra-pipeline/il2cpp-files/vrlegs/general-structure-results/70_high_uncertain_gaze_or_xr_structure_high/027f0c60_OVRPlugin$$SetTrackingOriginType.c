/*
FUNCTION_NAME: OVRPlugin$$SetTrackingOriginType
ENTRY_POINT: 027f0c60
PROGRAM: vrlegs-libil2cpp.so
SCORE: 71
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x027f0cac) */

void OVRPlugin__SetTrackingOriginType(void)

{
  int iVar1;
  long *unaff_x21;
  long lVar2;
  long unaff_x23;
  undefined8 in_stack_00000008;
  
  lVar2 = *unaff_x21;
  thunk_FUN_01a4b338();
  if (lVar2 != 0) {
    in_stack_00000008._4_1_ = '\0';
    FUN_027e0bd8(lVar2,(long)&stack0x00000008 + 4);
    FUN_0221fb48(lVar2);
    if (in_stack_00000008._4_1_ != '\0') {
      FUN_01a4adbc(lVar2);
    }
  }
  thunk_FUN_01a4b338();
  iVar1 = FUN_01aa5294(unaff_x23 + 0x3c);
  if (iVar1 == 0) {
    FUN_027f0334();
  }
  return;
}


