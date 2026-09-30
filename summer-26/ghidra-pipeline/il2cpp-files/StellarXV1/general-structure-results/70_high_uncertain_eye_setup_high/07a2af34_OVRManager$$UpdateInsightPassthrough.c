/*
FUNCTION_NAME: OVRManager$$UpdateInsightPassthrough
ENTRY_POINT: 07a2af34
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__UpdateInsightPassthrough
               (long param_1,undefined8 param_2,undefined1 param_3 [16],undefined8 param_4,
               long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long in_x9;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x22;
  undefined4 uStack000000000000000c;
  undefined8 uStack0000000000000014;
  undefined8 uStack0000000000000020;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined8 uStack0000000000000034;
  undefined4 uStack000000000000004c;
  undefined8 uStack0000000000000054;
  
  uStack0000000000000034 = param_3._8_8_;
  uStack000000000000002c = param_3._0_4_;
  uStack0000000000000030 = param_3._4_4_;
  uStack0000000000000020 = param_2;
  if (in_x9 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == param_5) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 4) * 0x10 + 0x138);
        goto LAB_07a2af80;
      }
      in_x9 = in_x9 + -1;
      piVar4 = piVar4 + 4;
    } while (in_x9 != 0);
  }
  puVar1 = (undefined8 *)FUN_040b1e00();
LAB_07a2af80:
  uStack0000000000000054 = uStack0000000000000034;
  uStack000000000000004c = uStack000000000000002c;
  (*(code *)*puVar1)();
  lVar2 = *unaff_x20;
  uStack0000000000000014 = *(undefined8 *)(unaff_x19 + 0x14);
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  uStack000000000000000c = (undefined4)*(undefined8 *)(unaff_x19 + 0xc);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *unaff_x22) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_07a2b004;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_040b1e00();
LAB_07a2b004:
  uStack0000000000000054 = uStack0000000000000014;
  uStack000000000000004c = uStack000000000000000c;
  (*(code *)*puVar1)();
  return;
}


