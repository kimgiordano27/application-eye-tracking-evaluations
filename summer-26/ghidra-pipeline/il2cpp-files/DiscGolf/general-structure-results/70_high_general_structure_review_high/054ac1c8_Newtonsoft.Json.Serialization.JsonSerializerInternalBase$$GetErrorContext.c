/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$GetErrorContext
ENTRY_POINT: 054ac1c8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Newtonsoft_Json_Serialization_JsonSerializerInternalBase__GetErrorContext(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulong uVar3;
  int in_w8;
  undefined8 *unaff_x20;
  ulong in_stack_00000050;
  undefined2 in_stack_00000058;
  undefined1 uStack000000000000005a;
  undefined5 uStack000000000000005b;
  undefined8 in_stack_00000068;
  
  uVar2 = in_stack_00000068;
  if (in_w8 == 0) {
    thunk_FUN_02df485c();
  }
  uVar3 = FUN_0383f3b4(uVar2,*unaff_x20);
  in_stack_00000050 = 0;
  in_stack_00000058 = 0;
  uStack000000000000005a = 0;
  uStack000000000000005b = 0;
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_054fa008(0x26,0);
  }
  in_stack_00000050 = uVar3;
  LeanTween__value(&stack0x00000050,uVar3);
  auVar1._8_2_ = 0;
  auVar1._0_8_ = in_stack_00000050;
  auVar1[10] = 1;
  auVar1._11_5_ = uStack000000000000005b;
  return auVar1;
}


