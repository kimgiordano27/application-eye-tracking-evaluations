/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings.<>c__DisplayClass93_0$$.ctor
ENTRY_POINT: 028adf94
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0___ctor
               (undefined8 param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  int in_w8;
  undefined8 *puVar3;
  long unaff_x29;
  undefined8 uVar4;
  uint uStack000000000000000c;
  undefined8 in_stack_00000028;
  undefined8 uStack0000000000000030;
  long in_stack_00000040;
  
  uStack0000000000000030 = 0;
  uVar2 = Math_Clamp_mAB687477D3AAC0E7243D724F45626026980CE2FF_inline
                    (param_2 - in_w8,param_2,0x1c,(MethodInfo *)0x0);
  *(undefined4 *)(unaff_x29 + -0xec) = uVar2;
  *(undefined8 *)(in_stack_00000040 + 0x208) = uStack0000000000000030;
  *(undefined8 *)(in_stack_00000040 + 0x200) = uStack0000000000000030;
  Decimal__ctor_mC089D0AF6A28E017DE6F2F0966D8EBEBFE2DAAF7
            (unaff_x29 + -0x18,in_stack_00000028._4_4_,in_stack_00000028._4_4_,
             in_stack_00000028._4_4_,*(byte *)(unaff_x29 + -0xe4) & 1,
             *(undefined4 *)(unaff_x29 + -0xec));
  puVar3 = *(undefined8 **)(in_stack_00000040 + 0x138);
  uVar4 = *(undefined8 *)(in_stack_00000040 + 0x200);
  puVar3[1] = *(undefined8 *)(in_stack_00000040 + 0x208);
  *puVar3 = uVar4;
  *(undefined1 *)(unaff_x29 + -0x39) = 1;
  uStack000000000000000c = (uint)*(byte *)(unaff_x29 + -0x39);
  lVar1 = tpidr_el0;
  lVar1 = *(long *)(lVar1 + 0x28) - *(long *)(unaff_x29 + -8);
  if (lVar1 == 0) {
    return uStack000000000000000c & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar1);
}


