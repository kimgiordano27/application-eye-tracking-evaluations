/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 01cf34d0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


bool OVREyeGaze__get_EyeTrackingEnabled(long param_1)

{
  uint uVar1;
  short in_w8;
  long lVar2;
  short unaff_w19;
  ulong uVar3;
  uint unaff_w20;
  long *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  
  if (in_w8 == unaff_w19) {
    if (*(int *)(param_1 + 0xe0) == 0) {
      thunk_FUN_01022c14();
      param_1 = *unaff_x21;
    }
    lVar2 = **(long **)(param_1 + 0xb8);
    if (lVar2 == 0) {
LAB_01cf3594:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc534();
    }
    uVar1 = *(uint *)(lVar2 + 0x18);
    if (unaff_w20 < uVar1) {
      *(undefined1 *)(lVar2 + unaff_x23 + 0x20) = 1;
      return uVar1 == unaff_w22;
    }
  }
  else {
    uVar3 = 0;
    while( true ) {
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        param_1 = *unaff_x21;
      }
      if (**(long **)(param_1 + 0xb8) == 0) goto LAB_01cf3594;
      if ((long)*(int *)(**(long **)(param_1 + 0xb8) + 0x18) <= (long)uVar3) {
        return false;
      }
      if (*(int *)(param_1 + 0xe0) == 0) {
        thunk_FUN_01022c14();
        param_1 = *unaff_x21;
      }
      lVar2 = **(long **)(param_1 + 0xb8);
      if (lVar2 == 0) goto LAB_01cf3594;
      if (*(uint *)(lVar2 + 0x18) <= uVar3) break;
      lVar2 = lVar2 + uVar3;
      uVar3 = uVar3 + 1;
      *(undefined1 *)(lVar2 + 0x20) = 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc53c();
}


