/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_StringEscapeHandling
ENTRY_POINT: 061e28bc
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_StringEscapeHandling(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (*(int *)(param_2 + 0x1c) == *(int *)(param_1 + 0x28)) {
    *(uint *)(param_2 + 0x18) = -(uint)(*(int *)(param_1 + 0x20) == 0);
    *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x10);
    thunk_FUN_037aeb94();
    return;
  }
  thunk_FUN_037a15ac(PTR_DAT_07d8e248);
  uVar1 = thunk_FUN_037788cc();
  uVar2 = thunk_FUN_037a15ac(PTR_DAT_07d99ff8);
  FUN_06242c7c(uVar1,uVar2,0);
  uVar2 = thunk_FUN_037a15ac(PTR_DAT_07dacff8);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar1,uVar2);
}


