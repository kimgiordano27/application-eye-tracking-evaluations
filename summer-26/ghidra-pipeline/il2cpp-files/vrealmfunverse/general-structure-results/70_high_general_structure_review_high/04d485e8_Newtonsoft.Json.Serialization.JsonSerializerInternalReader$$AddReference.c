/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$AddReference
ENTRY_POINT: 04d485e8
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__AddReference
               (undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + 0x6c6) & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_0632aaf8);
    *(undefined1 *)(unaff_x20 + 0x6c6) = 1;
  }
  if (param_2 != 0) {
    if (*(int *)(*(long *)PTR_DAT_0632aaf8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_04d47f58(param_2);
    return;
  }
  thunk_FUN_02ba3594(PTR_DAT_06315b90);
  uVar1 = thunk_FUN_02b79644();
  uVar2 = thunk_FUN_02ba3594(PTR_DAT_06322b68);
  FUN_04cee07c(uVar1,uVar2,0);
  uVar2 = thunk_FUN_02ba3594(PTR_DAT_063326a0);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar1,uVar2);
}


