/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 01cf399c
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 89
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnPermissionGranted(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  int in_w8;
  long unaff_x19;
  long *unaff_x22;
  
  if (in_w8 == 0) {
    thunk_FUN_01022c14();
  }
  FUN_01cdeaec();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01022c14();
    lVar2 = *unaff_x22;
  }
  plVar3 = (long *)**(long **)(lVar2 + 0xb8);
  if (plVar3 != (long *)0x0) {
    lVar2 = *(long *)PTR_DAT_023553e8;
    bVar1 = *(byte *)(lVar2 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
      *(long **)(unaff_x19 + 0x60) = plVar3;
      if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
         (*(long *)(*(long *)(*plVar3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) goto LAB_01cf3a40;
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fdc8d0(plVar3,lVar2);
  }
  *(undefined8 *)(unaff_x19 + 0x60) = 0;
LAB_01cf3a40:
  thunk_FUN_0106e12c(unaff_x19 + 0x60);
  return;
}


