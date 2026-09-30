/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateISerializable
ENTRY_POINT: 054b2cb8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined1  [16]
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateISerializable(long param_1)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined1 uStack000000000000000a;
  undefined5 uStack000000000000000b;
  undefined8 in_stack_00000018;
  
  if (*(int *)(**(long **)(param_1 + 0x9c8) + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar2 = FUN_0555cf5c(in_stack_00000018,0);
  uStack000000000000000a = 0;
  uStack000000000000000b = 0;
  if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_054fa008(0x26,0);
  }
  LeanTween__value();
  auVar1._8_2_ = 0;
  auVar1._0_8_ = uVar2;
  auVar1[10] = 1;
  auVar1._11_5_ = uStack000000000000000b;
  return auVar1;
}


