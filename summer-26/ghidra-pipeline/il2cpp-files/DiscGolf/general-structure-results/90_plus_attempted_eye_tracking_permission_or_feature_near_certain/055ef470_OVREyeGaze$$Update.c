/*
FUNCTION_NAME: OVREyeGaze$$Update
ENTRY_POINT: 055ef470
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 98
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Update(undefined4 param_1)

{
  byte bVar1;
  bool bVar2;
  long unaff_x19;
  long unaff_x20;
  
  *(undefined4 *)(unaff_x19 + 0x80) = param_1;
  if (*(char *)(unaff_x19 + 0xa8) != '\0') {
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_055ef558;
    FUN_06324c40(*(long *)(unaff_x19 + 0x88),*(undefined8 *)(unaff_x19 + 0x38),0);
    if (*(long *)(unaff_x19 + 0x88) == 0) goto LAB_055ef558;
    FUN_0632482c(*(long *)(unaff_x19 + 0x88),*(undefined4 *)(unaff_x19 + 0x80),0);
  }
  if (unaff_x20 != 0) {
    if (*(int *)(unaff_x20 + 0xe4) != 0) {
      FUN_0426a118();
      bVar1 = DAT_06dbb858;
      *(undefined8 *)(unaff_x19 + 0xa0) = 0;
      *(undefined8 *)(unaff_x19 + 0x98) = 0;
      if ((bVar1 & 1) == 0) {
        FUN_02d965b8(
                    System_Collections_Generic_Dictionary<string,_ServicePointScheduler_ConnectionGroup>_TypeInfo
                    );
        DAT_06dbb858 = 1;
      }
      bVar2 = false;
      if (*(char *)(unaff_x19 + 0xa8) != '\0') {
        bVar2 = *(long *)(unaff_x19 + 0x98) != 0;
      }
      *(bool *)(unaff_x19 + 0xa9) = bVar2;
    }
    if (*(long *)(unaff_x19 + 0x28) != 0) {
      thunk_FUN_0631c714(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x68),0);
      if (*(long *)(unaff_x19 + 0x90) != 0) {
        FUN_055ef0e4(*(long *)(unaff_x19 + 0x90),*(undefined8 *)(unaff_x19 + 0x68));
        if (*(long *)(unaff_x19 + 0x28) != 0) {
          thunk_FUN_0631c648(*(long *)(unaff_x19 + 0x28),*(undefined8 *)(unaff_x19 + 0x68),0);
          return;
        }
      }
    }
  }
LAB_055ef558:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


