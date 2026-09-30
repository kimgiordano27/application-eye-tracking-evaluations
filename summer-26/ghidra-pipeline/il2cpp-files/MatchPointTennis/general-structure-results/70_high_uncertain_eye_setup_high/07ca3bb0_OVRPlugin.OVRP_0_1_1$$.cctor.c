/*
FUNCTION_NAME: OVRPlugin.OVRP_0_1_1$$.cctor
ENTRY_POINT: 07ca3bb0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_0_1_1___cctor(void)

{
  long lVar1;
  uint unaff_w19;
  long unaff_x20;
  int unaff_w21;
  long unaff_x22;
  ulong unaff_x23;
  float fVar2;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined4 in_stack_00000050;
  undefined8 uStack0000000000000054;
  
  if (unaff_w21 == -1) {
    uStack0000000000000014 = *(undefined8 *)(unaff_x20 + 0x34);
    in_stack_00000000 = *(undefined8 *)(unaff_x20 + 0x20);
    *(ulong *)(unaff_x20 + 0x40) = *(ulong *)(unaff_x20 + 0x40) & (unaff_x23 ^ 0xffffffffffffffff);
    uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x2c) >> 0x20);
    uStack0000000000000008 = (undefined4)*(undefined8 *)(unaff_x20 + 0x28);
    uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x28) >> 0x20);
  }
  else {
    FUN_07ca3afc();
    *(ulong *)(unaff_x20 + 0x40) = *(ulong *)(unaff_x20 + 0x40) & (unaff_x23 ^ 0xffffffffffffffff);
    FUN_07ca3aa4();
  }
  in_stack_00000048 = uStack0000000000000008;
  in_stack_00000040 = in_stack_00000000;
  uStack0000000000000054 = uStack0000000000000014;
  uStack000000000000004c = uStack000000000000000c;
  in_stack_00000050 = uStack0000000000000010;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
      lVar1 = lVar1 + unaff_x22 * 0x1c;
      in_stack_00000038 = *(undefined4 *)(lVar1 + 0x38);
      in_stack_00000030 = *(undefined8 *)(lVar1 + 0x30);
      fVar2 = *(float *)(unaff_x20 + 0x3c);
      fStack0000000000000028 = (float)*(undefined8 *)(lVar1 + 0x28);
      in_stack_00000020 =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar1 + 0x20) >> 0x20) * fVar2,
                    (float)*(undefined8 *)(lVar1 + 0x20) * fVar2);
      _fStack0000000000000028 =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar1 + 0x28) >> 0x20),
                    fStack0000000000000028 * fVar2);
      lVar1 = *(long *)(unaff_x20 + 0x18);
      if (lVar1 == 0) goto LAB_07ca3ca4;
      if (unaff_w19 < *(uint *)(lVar1 + 0x18)) {
        FUN_07c05f20(&stack0x00000040,&stack0x00000020,lVar1 + unaff_x22 * 0x1c + 0x20,0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
LAB_07ca3ca4:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


