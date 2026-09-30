/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_Binder
ENTRY_POINT: 05ea16b8
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_Serialization_JsonSerializerProxy__set_Binder(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  int in_w8;
  long unaff_x19;
  
  iVar2 = in_w8 + 1;
  *(int *)(unaff_x19 + 0x30) = iVar2;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
  bVar1 = iVar2 < *(int *)(param_1 + 0x38);
  if (bVar1) {
    uVar3 = FUN_05ea1330();
    *(undefined8 *)(unaff_x19 + 0x18) = uVar3;
    thunk_FUN_036b7ad0((undefined8 *)(unaff_x19 + 0x18),uVar3);
    *(undefined4 *)(unaff_x19 + 0x10) = 1;
  }
  return bVar1;
}


