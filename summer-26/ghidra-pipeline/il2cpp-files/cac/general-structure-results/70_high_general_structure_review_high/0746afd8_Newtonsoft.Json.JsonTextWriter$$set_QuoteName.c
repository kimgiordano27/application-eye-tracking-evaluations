/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextWriter$$set_QuoteName
ENTRY_POINT: 0746afd8
PROGRAM: cac-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_4;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextWriter__set_QuoteName(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  uVar1 = FUN_0752cd4c(param_1,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_09116c30 + 0xe4) == 0) {
    thunk_FUN_03f6fea8();
  }
  FUN_0746b014();
  thunk_FUN_03f786f8(PTR_DAT_09111b70);
  uVar2 = thunk_FUN_03f4e68c();
  uVar3 = thunk_FUN_03f786f8(PTR_DAT_09131bc8);
  Newtonsoft_Json_Serialization_JsonSerializerInternalReader__GetInternalSerializer(uVar2,uVar3,0);
  uVar3 = thunk_FUN_03f786f8(PTR_DAT_09131d58);
                    /* WARNING: Subroutine does not return */
  FUN_03f134f0(uVar2,uVar3);
}


