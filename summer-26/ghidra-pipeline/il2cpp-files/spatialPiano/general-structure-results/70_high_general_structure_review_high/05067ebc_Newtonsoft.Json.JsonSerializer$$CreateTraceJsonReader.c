/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$CreateTraceJsonReader
ENTRY_POINT: 05067ebc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__CreateTraceJsonReader(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  undefined1 in_stack_00000010 [16];
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 uStack0000000000000038;
  undefined4 uStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined8 in_stack_00000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  uVar1 = FUN_05067da4();
  if (unaff_x19 != 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = uVar1;
    uVar1 = FUN_05067da4(uVar1,uStack0000000000000038,uStack000000000000003c);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar1;
    FUN_05067d60(param_1,uStack0000000000000020);
    FUN_05045bd8();
    *(undefined4 *)(unaff_x19 + 0xb0) = uStack0000000000000000;
    uVar1 = FUN_05067d60(param_1,uStack0000000000000004);
    *(undefined8 *)(unaff_x19 + 0x50) = uVar1;
    uVar1 = FUN_05067d60(param_1,in_stack_00000008);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
    uVar1 = NEON_rev64(in_stack_00000010._4_8_,4);
    *(undefined8 *)(unaff_x19 + 0xb4) = uVar1;
    uVar1 = FUN_05067d60(param_1,in_stack_00000010._12_4_);
    *(undefined8 *)(unaff_x19 + 0x58) = uVar1;
    uVar1 = FUN_05067d60(param_1,uStack0000000000000024);
    *(undefined8 *)(unaff_x19 + 0x78) = uVar1;
    uVar1 = FUN_05067d60(param_1,uStack0000000000000028);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar1;
    *(undefined4 *)(unaff_x19 + 0xac) = uStack000000000000002c;
    uVar1 = FUN_05067d60(param_1,uStack0000000000000030);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar1;
    uVar1 = FUN_05067d60(param_1,uStack0000000000000034);
    *(undefined8 *)(unaff_x19 + 0x40) = uVar1;
    *(undefined4 *)(unaff_x19 + 0xbc) = uStack0000000000000040;
    uVar1 = FUN_05067d60(param_1,uStack0000000000000044);
    *(undefined8 *)(unaff_x19 + 0x98) = uVar1;
    uVar1 = NEON_rev64(in_stack_00000048,4);
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar1;
    uVar1 = FUN_05067d60(param_1,uStack0000000000000050);
    *(undefined8 *)(unaff_x19 + 0x90) = uVar1;
    uVar1 = FUN_05067d60(param_1,uStack0000000000000054);
    *(undefined8 *)(unaff_x19 + 0x70) = uVar1;
    uVar1 = FUN_05067d60(param_1,in_stack_00000058);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
    *(undefined4 *)(unaff_x19 + 200) = *(undefined4 *)(unaff_x19 + 0xac);
    *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x19 + 0x40);
    *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x19 + 0x38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


