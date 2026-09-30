/*
FUNCTION_NAME: OVRPlugin$$IsOrientationValid
ENTRY_POINT: 051b0180
PROGRAM: hellodot-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


void OVRPlugin__IsOrientationValid(long param_1,undefined8 param_2,long param_3)

{
  undefined1 in_ZR;
  undefined8 *puVar1;
  undefined8 uVar2;
  long in_x9;
  int *in_x10;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined1 auVar3 [16];
  undefined8 in_stack_00000008;
  
  do {
    if ((bool)in_ZR) {
      puVar1 = (undefined8 *)FUN_02ce0a7c();
FUN_051b01a0:
      auVar3 = (*(code *)*puVar1)();
      uVar2 = auVar3._8_8_;
      if (unaff_x22 != 0) {
        uVar2 = *unaff_x20;
        *(undefined8 *)(unaff_x22 + 0x10) = unaff_x21;
        *(int *)(unaff_x22 + 0x20) = auVar3._0_4_;
        *(undefined4 *)(unaff_x22 + 0x24) = in_stack_00000008._4_4_;
        if (*(long *)(unaff_x22 + 0x18) != 0) {
          FUN_051b2518(*(long *)(unaff_x22 + 0x18));
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(auVar3._0_8_,uVar2);
    }
    if (*(long *)(in_x10 + -2) == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto FUN_051b01a0;
    }
    in_x9 = in_x9 + -1;
    in_ZR = in_x9 == 0;
    in_x10 = in_x10 + 4;
  } while( true );
}


