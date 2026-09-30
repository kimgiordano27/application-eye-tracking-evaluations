/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Add
ENTRY_POINT: 051e19a4
PROGRAM: hellodot-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Add
               (long param_1,undefined1 param_2 [16],undefined1 param_3 [16],undefined8 param_4)

{
  long unaff_x19;
  uint unaff_w20;
  undefined8 in_stack_00000000;
  undefined4 in_stack_00000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  
  uStack000000000000000c = param_3._0_4_;
  uStack0000000000000010 = param_3._4_4_;
  if (unaff_w20 < *(uint *)(param_1 + 0x18)) {
    param_1 = param_1 + (long)(int)unaff_w20 * 0x1c;
    *(long *)(param_1 + 0x34) = param_3._8_8_;
    *(long *)(param_1 + 0x2c) = param_3._0_8_;
    *(ulong *)(param_1 + 0x28) = CONCAT44(uStack000000000000000c,in_stack_00000008);
    *(undefined8 *)(param_1 + 0x20) = in_stack_00000000;
    FUN_051e1a48(param_4,unaff_w20,*(undefined8 *)(unaff_x19 + 0x48));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


