/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_ContractResolver
ENTRY_POINT: 0760ff74
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__set_ContractResolver(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  
  if ((*(byte *)(unaff_x21 + 0xdc8) & 1) == 0) {
    FUN_04077588(PTR_DAT_092d84b8);
    *(undefined1 *)(unaff_x21 + 0xdc8) = 1;
  }
  if (param_2 != 0) {
    FUN_07573f98(param_2,*(undefined8 *)PTR_DAT_092d84b8,*(undefined8 *)(param_1 + 0x10),0);
    return;
  }
  thunk_FUN_040dedf8(PTR_DAT_0929cbf8);
  uVar1 = thunk_FUN_040b4efc();
  uVar2 = thunk_FUN_040dedf8(PTR_DAT_092b9f20);
  FUN_075ce0d0(uVar1,uVar2,0);
  uVar2 = thunk_FUN_040dedf8(PTR_DAT_092d84c8);
                    /* WARNING: Subroutine does not return */
  FUN_040776f4(uVar1,uVar2);
}


