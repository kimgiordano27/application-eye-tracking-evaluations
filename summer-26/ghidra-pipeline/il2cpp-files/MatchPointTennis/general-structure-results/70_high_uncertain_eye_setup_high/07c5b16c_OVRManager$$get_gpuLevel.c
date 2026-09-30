/*
FUNCTION_NAME: OVRManager$$get_gpuLevel
ENTRY_POINT: 07c5b16c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_gpuLevel(void)

{
  float fVar1;
  undefined1 in_w8;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  float fVar3;
  float fVar4;
  float unaff_s11;
  float unaff_s12;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  *(undefined1 *)(unaff_x20 + 0x24f) = in_w8;
  fVar3 = ABS(unaff_s12);
  if (ABS(unaff_s12) <= unaff_s11) {
    fVar3 = unaff_s11;
  }
  fVar4 = **(float **)(*(long *)PTR_DAT_09f1f580 + 0xb8) * 8.0;
  fVar1 = fVar3 * DAT_01c762f8;
  if (fVar3 * DAT_01c762f8 <= fVar4) {
    fVar1 = fVar4;
  }
  if (ABS(unaff_s11 - unaff_s12) < fVar1) {
    return;
  }
  if (*(long *)(unaff_x19 + 0x50) != 0) {
    lVar2 = *(long *)(unaff_x19 + 0x48);
    if (lVar2 != 0) {
      in_stack_00000040 = in_stack_00000018;
      in_stack_00000038 = in_stack_00000010;
      in_stack_00000048 = DAT_01c74c80;
      in_stack_00000028 = *(undefined4 *)(*(long *)(unaff_x19 + 0x50) + 0x10);
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),&stack0x00000028,*(undefined8 *)(lVar2 + 0x28));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


