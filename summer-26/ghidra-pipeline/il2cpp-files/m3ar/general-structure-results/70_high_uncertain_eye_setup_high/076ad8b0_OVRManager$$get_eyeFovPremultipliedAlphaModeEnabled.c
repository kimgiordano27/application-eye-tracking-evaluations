/*
FUNCTION_NAME: OVRManager$$get_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 076ad8b0
PROGRAM: m3ar-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_10;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRManager__get_eyeFovPremultipliedAlphaModeEnabled(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long in_x10;
  int *piVar3;
  long unaff_x19;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == **(long **)(in_x10 + 0x1b8)) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar3 + 8) * 0x10 + 0x138);
        goto OVRManager__set_eyeFovPremultipliedAlphaModeEnabled;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 != 0);
  }
  puVar1 = (undefined8 *)FUN_0406ae20();
OVRManager__set_eyeFovPremultipliedAlphaModeEnabled:
  uVar2 = (*(code *)*puVar1)();
  if ((uVar2 & 1) != 0) {
    FUN_08575f94(in_stack_00000008._4_4_,uStack0000000000000010,uStack0000000000000014,
                 in_stack_00000018,*(undefined4 *)(unaff_x19 + 0x30),
                 *(undefined4 *)(unaff_x19 + 0x34),*(undefined4 *)(unaff_x19 + 0x38),0);
    FUN_085849e0();
    FUN_076b6cf0();
  }
  return;
}


