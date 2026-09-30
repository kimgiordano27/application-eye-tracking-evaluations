/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalBase.ReferenceEqualsEqualityComparer$$System.Collections.Generic.IEqualityComparer<System.Object>.Equals
ENTRY_POINT: 050ca6b4
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


bool Newtonsoft_Json_Serialization_JsonSerializerInternalBase_ReferenceEqualsEqualityComparer__System_Collections_Generic_IEqualityComparer<System_Object>_Equals
               (void)

{
  bool bVar1;
  ulong uVar2;
  int in_w8;
  long unaff_x19;
  undefined2 uStack0000000000000004;
  undefined8 in_stack_00000010;
  
  if (in_w8 == 0) {
    thunk_FUN_02f6670c();
  }
  uVar2 = FUN_050ecb98();
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    *(undefined8 *)(unaff_x19 + 0x28) = in_stack_00000010;
    *(uint *)(unaff_x19 + 0x24) = *(uint *)(unaff_x19 + 0x24) | 0x100;
  }
  else {
    uStack0000000000000004 = 0x7a;
    thunk_FUN_02f44ec4(*(undefined8 *)(PTR_DAT_067c9338 + 0x88),&stack0x00000004);
    FUN_050cd75c();
  }
  return bVar1;
}


