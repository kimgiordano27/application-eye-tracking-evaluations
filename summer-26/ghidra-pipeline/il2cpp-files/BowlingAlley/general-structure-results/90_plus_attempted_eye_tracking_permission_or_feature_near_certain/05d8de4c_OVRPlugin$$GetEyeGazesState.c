/*
FUNCTION_NAME: OVRPlugin$$GetEyeGazesState
ENTRY_POINT: 05d8de4c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 94
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__GetEyeGazesState(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  undefined8 uVar3;
  long unaff_x20;
  long *plVar4;
  long *unaff_x22;
  
  thunk_FUN_032e1da0(PTR_DAT_072b19b0);
  thunk_FUN_032e1da0(PTR_DAT_072798f8);
  thunk_FUN_032e1da0(PTR_DAT_072794f0);
  thunk_FUN_032e1da0(PTR_DAT_072b19d8);
  thunk_FUN_032e1da0(PTR_DAT_072b19e0);
  *(undefined1 *)(unaff_x20 + 0x8ec) = 1;
  lVar1 = FUN_03958adc();
  plVar4 = (long *)(unaff_x19 + 0x38);
  *plVar4 = lVar1;
  thunk_FUN_0333a630(plVar4,lVar1);
  lVar1 = *plVar4;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar2 = FUN_06bece64(lVar1,0,0);
  if ((uVar2 & 1) == 0) {
    if (*plVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    FUN_05d8d018(*plVar4,*(undefined4 *)(unaff_x19 + 0x30));
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06bb2f68(*(undefined8 *)PTR_DAT_072b19e0,0);
  }
  uVar3 = *(undefined8 *)(unaff_x19 + 0x20);
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar2 = FUN_06bece64(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_06bb2f68(*(undefined8 *)PTR_DAT_072b19d8,0);
    return;
  }
  return;
}


