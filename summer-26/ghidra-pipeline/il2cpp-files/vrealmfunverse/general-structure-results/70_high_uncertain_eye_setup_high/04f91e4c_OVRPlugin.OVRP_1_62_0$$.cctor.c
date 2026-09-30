/*
FUNCTION_NAME: OVRPlugin.OVRP_1_62_0$$.cctor
ENTRY_POINT: 04f91e4c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_62_0___cctor(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  int unaff_w22;
  float fVar3;
  undefined1 in_stack_00000008 [16];
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 uStack0000000000000040;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uStack000000000000004c = in_stack_00000008._4_4_;
  uStack0000000000000050 = in_stack_00000008._8_4_;
  uStack0000000000000040 = param_1;
  if (lVar1 != 0) {
    if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + (long)unaff_w22 * 0x1c;
      in_stack_00000030 = *(undefined8 *)(lVar1 + 0x30);
      in_stack_00000038 = *(undefined4 *)(lVar1 + 0x38);
      fVar3 = *(float *)(unaff_x20 + 0x3c);
      fStack0000000000000028 = (float)*(undefined8 *)(lVar1 + 0x28);
      lVar2 = *(long *)(unaff_x20 + 0x18);
      in_stack_00000020 =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x20) >> 0x20) * fVar3,
                    (float)*(undefined8 *)(lVar1 + 0x20) * fVar3);
      _fStack0000000000000028 =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar1 + 0x28) >> 0x20),
                    fStack0000000000000028 * fVar3);
      if (lVar2 == 0) goto LAB_04f91eec;
      if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
        FUN_04ef5cac(&stack0x00000040,&stack0x00000020,lVar2 + (long)unaff_w22 * 0x1c + 0x20,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
LAB_04f91eec:
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


