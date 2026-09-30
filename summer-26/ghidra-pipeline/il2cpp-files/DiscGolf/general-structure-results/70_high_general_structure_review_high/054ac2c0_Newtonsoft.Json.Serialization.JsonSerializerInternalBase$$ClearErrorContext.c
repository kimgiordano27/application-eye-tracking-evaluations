/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase$$ClearErrorContext
ENTRY_POINT: 054ac2c0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalBase__ClearErrorContext(long *param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  long unaff_x21;
  int unaff_w22;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  long in_stack_00000050;
  undefined2 uStack0000000000000058;
  undefined1 uStack000000000000005a;
  undefined5 uStack000000000000005b;
  undefined8 in_stack_00000068;
  
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_0554fe30(*param_1,0);
  if (unaff_x21 == 0) {
    if (unaff_w22 == 6) {
      in_stack_00000050 = in_stack_00000020;
      uStack0000000000000058 = (undefined2)in_stack_00000028;
      uStack000000000000005a = (undefined1)((ulong)in_stack_00000028 >> 0x10);
      uStack000000000000005b = (undefined5)((ulong)in_stack_00000028 >> 0x18);
    }
    else if (unaff_w22 == 0) {
      lVar2 = FUN_054ac3a8();
      in_stack_00000050 = 0;
      uStack0000000000000058 = 0;
      uStack000000000000005a = 0;
      uStack000000000000005b = 0;
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_054fa008(0x26,0);
      }
      in_stack_00000050 = lVar2;
      LeanTween__value(&stack0x00000050,lVar2);
      uStack0000000000000058 = 0;
      uStack000000000000005a = 1;
    }
    auVar1._8_2_ = uStack0000000000000058;
    auVar1._0_8_ = in_stack_00000050;
    auVar1[10] = uStack000000000000005a;
    auVar1._11_5_ = uStack000000000000005b;
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96858();
}


