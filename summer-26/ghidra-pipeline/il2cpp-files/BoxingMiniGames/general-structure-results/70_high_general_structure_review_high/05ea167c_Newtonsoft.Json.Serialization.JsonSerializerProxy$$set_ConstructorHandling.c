/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$set_ConstructorHandling
ENTRY_POINT: 05ea167c
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


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy__set_ConstructorHandling(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    iVar2 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = iVar2;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x28) + 0x38) <= iVar2) {
      return 0;
    }
    uVar1 = FUN_05ea1330();
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    thunk_FUN_036b7ad0((undefined8 *)(param_1 + 0x18),uVar1);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


