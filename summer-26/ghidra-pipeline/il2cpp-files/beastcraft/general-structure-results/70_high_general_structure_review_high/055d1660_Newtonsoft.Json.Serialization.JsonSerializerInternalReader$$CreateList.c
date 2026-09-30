/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateList
ENTRY_POINT: 055d1660
PROGRAM: beastcraft-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16] Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateList(void)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulong uVar3;
  long *unaff_x20;
  undefined8 *unaff_x22;
  ulong in_stack_00000030;
  undefined2 in_stack_00000038;
  undefined1 uStack000000000000003a;
  undefined5 uStack000000000000003b;
  
  FUN_0450523c(&stack0x00000020,*unaff_x22);
  uVar2 = (**(code **)(*unaff_x20 + 0x318))();
  uVar3 = FUN_055d16f0(uVar2,uVar2);
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  uStack000000000000003a = 0;
  uStack000000000000003b = 0;
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05617c70(0x26,0);
  }
  in_stack_00000030 = uVar3;
  thunk_FUN_02ee2be8(&stack0x00000030,uVar3);
  auVar1._8_2_ = 0;
  auVar1._0_8_ = in_stack_00000030;
  auVar1[10] = 1;
  auVar1._11_5_ = uStack000000000000003b;
  return auVar1;
}


