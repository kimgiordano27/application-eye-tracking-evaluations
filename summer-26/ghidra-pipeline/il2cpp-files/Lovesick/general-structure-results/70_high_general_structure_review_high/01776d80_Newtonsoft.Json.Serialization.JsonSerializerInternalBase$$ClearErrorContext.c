/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$ClearErrorContext
ENTRY_POINT: 01776d80
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ClearErrorContext(void)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 in_stack_00000008;
  
  thunk_FUN_00d32864();
  uVar2 = FUN_0177f2c8();
  uVar4 = uVar2;
  if ((((uint)uVar2 >> 10 & 1) != 0) && (uVar4 = uVar2 + (uVar2 >> 0xb & 1) + 0x3ff, uVar4 < uVar2))
  {
    uVar4 = uVar4 >> 1 | 0x8000000000000000;
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
  }
  uVar1 = in_stack_00000008._4_4_ + 0x3fe;
  if ((int)uVar1 < 1) {
    if ((uVar4 < 0x8000000000000058) || (uVar1 != 0xffffffcc)) {
      if ((int)uVar1 < -0x33) {
        uVar4 = 0;
      }
      else {
        uVar4 = uVar4 >> ((ulong)(0xe - in_stack_00000008._4_4_) & 0x3f);
      }
    }
    else {
      uVar4 = 1;
    }
  }
  else if ((int)uVar1 < 0x7ff) {
    uVar4 = uVar4 >> 0xb & 0xfffffffffffff | (ulong)uVar1 << 0x34;
  }
  else {
    uVar4 = 0x7ff0000000000000;
  }
  uVar3 = FUN_01780038();
  uVar2 = uVar4 | 0x8000000000000000;
  if ((uVar3 & 1) == 0) {
    uVar2 = uVar4;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar2;
  return auVar5;
}


