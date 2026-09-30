/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_HasCameraDeviceOpened
ENTRY_POINT: 05d48ab0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_16_0__ovrp_HasCameraDeviceOpened(void)

{
  undefined *puVar1;
  bool in_ZR;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long lVar3;
  ulong unaff_x23;
  float fVar4;
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
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  puVar1 = PTR_DAT_06fb4a40;
  if (in_ZR) {
    return;
  }
  lVar2 = *(long *)PTR_DAT_06fb4a40;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 == 0) {
LAB_05d48bec:
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
    lVar3 = (long)(int)unaff_w19;
    if (*(int *)(lVar2 + lVar3 * 4 + 0x20) == -1) {
      uStack0000000000000014 = *(undefined8 *)(unaff_x20 + 0x34);
      in_stack_00000000 = *(undefined8 *)(unaff_x20 + 0x20);
      *(ulong *)(unaff_x20 + 0x40) = *(ulong *)(unaff_x20 + 0x40) & (unaff_x23 ^ 0xffffffffffffffff)
      ;
      uStack0000000000000010 = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x2c) >> 0x20);
      uStack0000000000000008 = (undefined4)*(undefined8 *)(unaff_x20 + 0x28);
      uStack000000000000000c = (undefined4)((ulong)*(undefined8 *)(unaff_x20 + 0x28) >> 0x20);
    }
    else {
      FUN_05d48a44();
      *(ulong *)(unaff_x20 + 0x40) = *(ulong *)(unaff_x20 + 0x40) & (unaff_x23 ^ 0xffffffffffffffff)
      ;
      FUN_05d489ec();
    }
    uStack0000000000000048 = uStack0000000000000008;
    in_stack_00000040 = in_stack_00000000;
    uStack0000000000000054 = uStack0000000000000014;
    uStack000000000000004c = uStack000000000000000c;
    uStack0000000000000050 = uStack0000000000000010;
    lVar2 = *(long *)(unaff_x20 + 0x10);
    if (lVar2 == 0) goto LAB_05d48bec;
    if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
      lVar2 = lVar2 + lVar3 * 0x1c;
      in_stack_00000038 = *(undefined4 *)(lVar2 + 0x38);
      in_stack_00000030 = *(undefined8 *)(lVar2 + 0x30);
      fVar4 = *(float *)(unaff_x20 + 0x3c);
      fStack0000000000000028 = (float)*(undefined8 *)(lVar2 + 0x28);
      in_stack_00000020 =
           CONCAT44((float)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20) * fVar4,
                    (float)*(undefined8 *)(lVar2 + 0x20) * fVar4);
      _fStack0000000000000028 =
           CONCAT44((int)((ulong)*(undefined8 *)(lVar2 + 0x28) >> 0x20),
                    fStack0000000000000028 * fVar4);
      lVar2 = *(long *)(unaff_x20 + 0x18);
      if (lVar2 == 0) goto LAB_05d48bec;
      if (unaff_w19 < *(uint *)(lVar2 + 0x18)) {
        FUN_05cac094(&stack0x00000040,&stack0x00000020,lVar2 + lVar3 * 0x1c + 0x20,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe94f0();
}


