/*
FUNCTION_NAME: OVRPlugin$$GetEyeGazesState
ENTRY_POINT: 01f87eb8
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 94
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


undefined8 OVRPlugin__GetEyeGazesState(void)

{
  undefined **ppuVar1;
  uint unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_01279b34();
  thunk_FUN_01279b34(PTR_DAT_027b53a0);
  thunk_FUN_01279b34(PTR_DAT_027b4408);
  thunk_FUN_01279b34(PTR_DAT_027b3fc0);
  thunk_FUN_01279b34(PTR_DAT_027badb0);
  thunk_FUN_01279b34(PTR_DAT_027c1650);
  thunk_FUN_01279b34(PTR_DAT_027b5258);
  thunk_FUN_01279b34(PTR_DAT_027bdfe0);
  thunk_FUN_01279b34(PTR_DAT_027b3f90);
  thunk_FUN_01279b34(PTR_DAT_027b5278);
  thunk_FUN_01279b34(PTR_DAT_027b4080);
  thunk_FUN_01279b34(PTR_DAT_027b4c88);
  thunk_FUN_01279b34(PTR_DAT_027b5cd8);
  thunk_FUN_01279b34(PTR_DAT_027be3d0);
  thunk_FUN_01279b34(PTR_DAT_027b3fe8);
  thunk_FUN_01279b34(PTR_DAT_027b3fc8);
  thunk_FUN_01279b34(PTR_DAT_027b4ca8);
  thunk_FUN_01279b34(PTR_DAT_027c1658);
  thunk_FUN_01279b34(PTR_DAT_027c1660);
  *(undefined1 *)(unaff_x21 + 0xeb2) = 1;
  ppuVar1 = &PTR_DAT_02681168 + (int)unaff_w19;
  if (0x17 < unaff_w19) {
    ppuVar1 = (undefined **)(*unaff_x20 + 0xb8);
  }
  return *(undefined8 *)*ppuVar1;
}


