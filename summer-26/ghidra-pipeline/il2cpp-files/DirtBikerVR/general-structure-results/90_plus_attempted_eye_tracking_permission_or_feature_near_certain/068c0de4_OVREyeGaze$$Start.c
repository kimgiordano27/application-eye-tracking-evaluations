/*
FUNCTION_NAME: OVREyeGaze$$Start
ENTRY_POINT: 068c0de4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 95
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__Start(void)

{
  undefined *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_03a8a718(PTR_DAT_084b1f58);
  *(undefined1 *)(unaff_x20 + 0x83c) = 1;
  puVar1 = PTR_DAT_084b1f48;
  if (*(long *)(unaff_x19 + 0x100) != 0) {
    FUN_05746ff4(*(long *)(unaff_x19 + 0x100),*(undefined8 *)PTR_DAT_084b1f48);
    if (*(long *)(unaff_x19 + 0x108) != 0) {
      UnityEngine_UIElements_ChangeEvent<Vector2Int>__get_previousValue
                (*(long *)(unaff_x19 + 0x108),*(undefined8 *)PTR_DAT_084b1f58);
      if (*(long *)(unaff_x19 + 0x110) != 0) {
        FUN_05746ff4(*(long *)(unaff_x19 + 0x110),*(undefined8 *)puVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


