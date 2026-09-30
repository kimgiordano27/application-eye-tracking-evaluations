/*
FUNCTION_NAME: OVRPlugin$$GetEyeGazesState
ENTRY_POINT: 06393850
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 100
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;validity_or_gating_hits_3;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin__GetEyeGazesState(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong unaff_x19;
  long unaff_x20;
  undefined8 unaff_x23;
  
  if (unaff_x20 == 0) {
    if (*(int *)(*(long *)PTR_DAT_07db6278 + 0xe4) == 0) {
      thunk_FUN_03798b70();
    }
    lVar2 = FUN_06393458();
  }
  else {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar2 + (long)(int)uVar1 * 8 + 0x20) = unaff_x23;
      thunk_FUN_037aeb94();
    }
    else {
      FUN_049ceef4();
    }
    puVar3 = (undefined8 *)PTR_DAT_07db6610;
    if ((unaff_x19 & 1) == 0) {
      puVar3 = (undefined8 *)PTR_DAT_07db6608;
    }
    lVar2 = thunk_FUN_037788cc(*puVar3);
    FUN_062855bc(lVar2,0);
    *(long *)(lVar2 + 0x10) = unaff_x20;
    thunk_FUN_037aeb94();
  }
  return lVar2;
}


