/*
FUNCTION_NAME: OVREyeGaze$$get_EyeTrackingEnabled
ENTRY_POINT: 027ab98c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_EyeTrackingEnabled(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  uint unaff_w22;
  long *unaff_x23;
  long unaff_x24;
  int unaff_w25;
  int unaff_w26;
  uint unaff_w28;
  long unaff_x29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000028;
  
  do {
    uVar1 = FUN_0268ab74(param_1,0);
    if ((unaff_w22 & unaff_w28) == uVar1) {
      if (unaff_w25 != 0) {
        if (*(int *)(*unaff_x23 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar2 = FUN_027a9dd0(unaff_x21,in_stack_00000028,unaff_w26 != 0);
        if ((uVar2 & 1) == 0) goto LAB_027ab9e0;
      }
      FUN_02213244();
    }
LAB_027ab9e0:
    unaff_x24 = unaff_x24 + 1;
    if ((int)*(uint *)(unaff_x20 + 0x18) <= (int)(uint)unaff_x24) {
      unaff_x19[2] = in_stack_00000010;
      unaff_x19[1] = in_stack_00000008;
      *unaff_x19 = in_stack_00000000;
      return;
    }
    if (*(uint *)(unaff_x20 + 0x18) <= (uint)unaff_x24) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    param_1 = *(long *)(unaff_x29 + unaff_x24 * 8);
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    unaff_w22 = FUN_0268ab74(param_1,0);
    unaff_x21 = param_1;
  } while( true );
}


