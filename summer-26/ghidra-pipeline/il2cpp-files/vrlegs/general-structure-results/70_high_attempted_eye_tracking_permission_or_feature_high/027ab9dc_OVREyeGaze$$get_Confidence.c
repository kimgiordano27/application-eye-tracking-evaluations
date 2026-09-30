/*
FUNCTION_NAME: OVREyeGaze$$get_Confidence
ENTRY_POINT: 027ab9dc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__get_Confidence(void)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  long lVar4;
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
    FUN_02213244();
    do {
      do {
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
        lVar4 = *(long *)(unaff_x29 + unaff_x24 * 8);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar1 = FUN_0268ab74(lVar4,0);
        uVar2 = FUN_0268ab74(lVar4,0);
      } while ((uVar1 & unaff_w28) != uVar2);
      if (unaff_w25 == 0) break;
      if (*(int *)(*unaff_x23 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar3 = FUN_027a9dd0(lVar4,in_stack_00000028,unaff_w26 != 0);
    } while ((uVar3 & 1) == 0);
  } while( true );
}


