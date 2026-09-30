/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 05e1d320
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  uint uVar1;
  ulong uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int unaff_w21;
  long *unaff_x22;
  int unaff_w23;
  undefined1 auVar7 [16];
  undefined8 in_stack_00000008;
  
  lVar6 = *(long *)(*(long *)(*unaff_x22 + 0xb8) + 0x40);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  if (*(uint *)(lVar6 + 0x18) <= unaff_w21 + (unaff_w23 >> 0x1f & 0x15U)) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar4 = FUN_05e259f4();
  if ((((uint)uVar4 >> 10 & 1) != 0) &&
     (uVar2 = uVar4 + (uVar4 >> 0xb & 1) + 0x3ff, bVar3 = uVar2 < uVar4, uVar4 = uVar2, bVar3)) {
    in_stack_00000008._4_4_ = in_stack_00000008._4_4_ + 1;
    uVar4 = uVar2 >> 1 | 0x8000000000000000;
  }
  uVar1 = in_stack_00000008._4_4_ + 0x3fe;
  if ((int)uVar1 < 1) {
    if ((uVar1 == 0xffffffcc) && (0x8000000000000057 < uVar4)) {
      uVar4 = 1;
    }
    else if ((int)uVar1 < -0x33) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 >> ((ulong)(-in_stack_00000008._4_4_ - 0x3f2) & 0x3f);
    }
  }
  else if (uVar1 < 0x7ff) {
    uVar4 = uVar4 >> 0xb & 0xfffffffffffff | (ulong)uVar1 << 0x34;
  }
  else {
    uVar4 = 0x7ff0000000000000;
  }
  uVar5 = FUN_05e26c68();
  uVar2 = uVar4 | 0x8000000000000000;
  if ((uVar5 & 1) == 0) {
    uVar2 = uVar4;
  }
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar2;
  return auVar7;
}


