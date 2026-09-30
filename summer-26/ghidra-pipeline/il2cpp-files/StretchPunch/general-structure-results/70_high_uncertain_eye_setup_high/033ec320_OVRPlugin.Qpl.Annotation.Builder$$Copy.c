/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Copy
ENTRY_POINT: 033ec320
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl_Annotation_Builder__Copy(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_w8;
  long unaff_x19;
  undefined4 *unaff_x20;
  undefined4 unaff_w21;
  
  if (0x1c0000 < in_w8) {
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar2 = thunk_FUN_01de27b8();
    uVar3 = thunk_FUN_01dd295c(StringLiteral_6734);
    FUN_0328dba4(uVar2,uVar3,0);
    uVar3 = thunk_FUN_01dd295c(StringLiteral_9326);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar2,uVar3);
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    unaff_x20[2] = *(undefined4 *)(unaff_x19 + 0x20);
    if (1 < *(uint *)(unaff_x19 + 0x18)) {
      unaff_x20[3] = *(undefined4 *)(unaff_x19 + 0x24);
      if (2 < *(uint *)(unaff_x19 + 0x18)) {
        uVar1 = *(undefined4 *)(unaff_x19 + 0x28);
        *unaff_x20 = unaff_w21;
        unaff_x20[1] = uVar1;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


