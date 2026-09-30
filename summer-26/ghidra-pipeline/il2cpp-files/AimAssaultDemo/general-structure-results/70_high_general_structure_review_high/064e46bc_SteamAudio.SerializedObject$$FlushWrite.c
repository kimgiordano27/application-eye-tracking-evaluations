/*
FUNCTION_NAME: SteamAudio.SerializedObject$$FlushWrite
ENTRY_POINT: 064e46bc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void SteamAudio_SerializedObject__FlushWrite(undefined8 param_1,undefined1 param_2 [16])

{
  long lVar1;
  long unaff_x19;
  undefined8 *puVar2;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000040 = param_2._0_8_;
  puVar2 = (undefined8 *)(unaff_x19 + 0x20);
  *puVar2 = param_1;
  *(long *)(unaff_x19 + 0x18) = param_2._8_8_;
  *(undefined8 *)(unaff_x19 + 0x10) = uStack0000000000000040;
  uStack0000000000000050 = param_1;
  thunk_FUN_037aeb94(puVar2,0);
  lVar1 = *(long *)(unaff_x19 + 0x38);
  if (lVar1 != 0) {
    in_stack_00000030 = *puVar2;
    in_stack_00000028 = *(undefined8 *)(unaff_x19 + 0x18);
    in_stack_00000020 = *(undefined8 *)(unaff_x19 + 0x10);
    uStack0000000000000040 = in_stack_00000020;
    uStack0000000000000048 = in_stack_00000028;
    uStack0000000000000050 = in_stack_00000030;
    (**(code **)(lVar1 + 0x18))
              (&stack0x00000008,*(undefined8 *)(lVar1 + 0x40),&stack0x00000040,
               *(undefined8 *)(lVar1 + 0x28));
    uStack0000000000000050 = in_stack_00000018;
    uStack0000000000000048 = in_stack_00000010;
    uStack0000000000000040 = in_stack_00000008;
    *puVar2 = in_stack_00000018;
    *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000010;
    *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000008;
    thunk_FUN_037aeb94(puVar2,0);
  }
  *(undefined1 *)(unaff_x19 + 0x28) = 1;
  return;
}


