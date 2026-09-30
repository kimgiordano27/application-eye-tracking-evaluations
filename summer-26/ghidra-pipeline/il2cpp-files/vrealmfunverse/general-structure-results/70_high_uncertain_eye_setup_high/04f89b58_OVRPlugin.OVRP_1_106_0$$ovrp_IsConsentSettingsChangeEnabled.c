/*
FUNCTION_NAME: OVRPlugin.OVRP_1_106_0$$ovrp_IsConsentSettingsChangeEnabled
ENTRY_POINT: 04f89b58
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_106_0__ovrp_IsConsentSettingsChangeEnabled(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long in_x10;
  int *piVar3;
  uint unaff_w19;
  long unaff_x20;
  uint unaff_w21;
  undefined4 unaff_s8;
  undefined8 in_stack_00000000;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  
  uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar2 != 0) {
    piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar3 + -2) == **(long **)(in_x10 + 0xf78)) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar3 + 2) * 0x10 + 0x138);
        goto LAB_04f89bc0;
      }
      uVar2 = uVar2 - 1;
      piVar3 = piVar3 + 4;
    } while (uVar2 != 0);
  }
  puVar1 = (undefined8 *)FUN_02b7654c();
LAB_04f89bc0:
  (*(code *)*puVar1)();
  if ((unaff_w21 & 1) != 0) {
    *(undefined4 *)(unaff_x20 + 200) = unaff_s8;
    *(undefined8 *)(unaff_x20 + 0xe8) = in_stack_00000000;
    *(undefined4 *)(unaff_x20 + 0xf0) = uStack0000000000000008;
    if (*(char *)(unaff_x20 + 0x104) == '\0') {
      *(undefined1 *)(unaff_x20 + 0x104) = 1;
      FUN_04f89aa0(unaff_x20 + 0x80,unaff_x20 + 0x88,1,unaff_w19 & 1);
      *(undefined4 *)(unaff_x20 + 0x110) = *(undefined4 *)(unaff_x20 + 300);
      *(undefined8 *)(unaff_x20 + 0x108) = *(undefined8 *)(unaff_x20 + 0x124);
    }
  }
  if ((unaff_w21 >> 1 & 1) != 0) {
    FUN_04f89d3c(uStack000000000000000c,uStack0000000000000010,uStack0000000000000014,
                 in_stack_00000018);
  }
  return;
}


