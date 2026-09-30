/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.ctor
ENTRY_POINT: 0746f784
PROGRAM: m3ar-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings___ctor(undefined1 param_1 [16])

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x19;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  ulong uStack0000000000000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  undefined4 uStack000000000000001c;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  ulong uStack0000000000000030;
  ulong uStack0000000000000038;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  ulong uStack0000000000000048;
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000054;
  undefined4 in_stack_00000058;
  
  uStack0000000000000008 = param_1._8_8_;
  _uStack0000000000000000 = param_1._0_8_;
  uStack0000000000000030 = _uStack0000000000000000;
  uStack0000000000000038 = uStack0000000000000008;
  _uStack0000000000000040 = _uStack0000000000000000;
  uStack0000000000000048 = uStack0000000000000008;
  uVar1 = FUN_040379f4();
  uVar2 = FUN_0746f67c(uVar1,uStack0000000000000008._4_4_,uStack0000000000000010);
  if (unaff_x19 != 0) {
    *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
    uVar2 = FUN_0746f67c(uVar2,uStack0000000000000038 & 0xffffffff,uStack0000000000000038._4_4_);
    *(undefined8 *)(unaff_x19 + 0x10) = uVar2;
    FUN_0746f638(uVar1,uStack0000000000000020);
    FUN_07469a80();
    *(undefined4 *)(unaff_x19 + 0xb0) = uStack0000000000000000;
    uVar2 = FUN_0746f638(uVar1,uStack0000000000000004);
    *(undefined8 *)(unaff_x19 + 0x50) = uVar2;
    uVar2 = FUN_0746f638(uVar1,uStack0000000000000008 & 0xffffffff);
    *(undefined8 *)(unaff_x19 + 0x48) = uVar2;
    uVar2 = NEON_rev64(uStack0000000000000014,4);
    *(undefined8 *)(unaff_x19 + 0xb4) = uVar2;
    uVar2 = FUN_0746f638(uVar1,uStack000000000000001c);
    *(undefined8 *)(unaff_x19 + 0x58) = uVar2;
    uVar2 = FUN_0746f638(uVar1,uStack0000000000000024);
    *(undefined8 *)(unaff_x19 + 0x78) = uVar2;
    uVar2 = FUN_0746f638(uVar1,uStack0000000000000028);
    *(undefined8 *)(unaff_x19 + 0x30) = uVar2;
    *(undefined4 *)(unaff_x19 + 0xac) = uStack000000000000002c;
    uVar2 = FUN_0746f638(uVar1,uStack0000000000000030 & 0xffffffff);
    *(undefined8 *)(unaff_x19 + 0x38) = uVar2;
    uVar2 = FUN_0746f638(uVar1,uStack0000000000000030._4_4_);
    *(undefined8 *)(unaff_x19 + 0x40) = uVar2;
    *(undefined4 *)(unaff_x19 + 0xbc) = uStack0000000000000040;
    uVar2 = FUN_0746f638(uVar1,uStack0000000000000044);
    *(undefined8 *)(unaff_x19 + 0x98) = uVar2;
    uVar2 = NEON_rev64(uStack0000000000000048,4);
    *(undefined8 *)(unaff_x19 + 0xc0) = uVar2;
    uVar2 = FUN_0746f638(uVar1,uStack0000000000000050);
    *(undefined8 *)(unaff_x19 + 0x90) = uVar2;
    uVar2 = FUN_0746f638(uVar1,uStack0000000000000054);
    *(undefined8 *)(unaff_x19 + 0x70) = uVar2;
    uVar1 = FUN_0746f638(uVar1,in_stack_00000058);
    *(undefined8 *)(unaff_x19 + 0x28) = uVar1;
    *(undefined4 *)(unaff_x19 + 200) = *(undefined4 *)(unaff_x19 + 0xac);
    *(undefined8 *)(unaff_x19 + 0x20) = *(undefined8 *)(unaff_x19 + 0x10);
    *(undefined8 *)(unaff_x19 + 0x88) = *(undefined8 *)(unaff_x19 + 0x40);
    *(undefined8 *)(unaff_x19 + 0x80) = *(undefined8 *)(unaff_x19 + 0x38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0403188c();
}


