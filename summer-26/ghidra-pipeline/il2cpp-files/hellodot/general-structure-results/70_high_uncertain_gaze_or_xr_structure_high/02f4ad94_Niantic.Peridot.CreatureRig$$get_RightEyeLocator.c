/*
FUNCTION_NAME: Niantic.Peridot.CreatureRig$$get_RightEyeLocator
ENTRY_POINT: 02f4ad94
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: possible_biometrics
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;functionality_possible_biometrics_hits_2
*/


void Niantic_Peridot_CreatureRig__get_RightEyeLocator(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  FUN_02f2f85c(param_1,param_2,0);
  if (*(float *)(unaff_x20 + 0x20) != 0.0) {
    *(float *)(unaff_x19 + 0x20) = *(float *)(unaff_x20 + 0x20);
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    if (*(int *)(*(long *)(unaff_x20 + 0x28) + 0x10) != 0) {
      FUN_02f4a388();
    }
    if (*(float *)(unaff_x20 + 0x30) != 0.0) {
      *(float *)(unaff_x19 + 0x30) = *(float *)(unaff_x20 + 0x30);
    }
    if (*(long *)(unaff_x20 + 0x38) != 0) {
      if (*(int *)(*(long *)(unaff_x20 + 0x38) + 0x10) != 0) {
        FUN_02f4a414();
      }
      if (*(float *)(unaff_x20 + 0x40) != 0.0) {
        *(float *)(unaff_x19 + 0x40) = *(float *)(unaff_x20 + 0x40);
      }
      if (*(float *)(unaff_x20 + 0x44) != 0.0) {
        *(float *)(unaff_x19 + 0x44) = *(float *)(unaff_x20 + 0x44);
      }
      uVar1 = FUN_04cacf44(*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x20 + 0x10),0);
      *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


