/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$HasFlag
ENTRY_POINT: 0329c938
PROGRAM: gunraiders-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__HasFlag(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_032f97b8(param_1,0);
  if (param_2 < 4) {
    *(uint *)(param_1 + 0x10) = param_2;
    return;
  }
  thunk_FUN_01c273e8(PTR_DAT_0422fcc0);
  uVar1 = thunk_FUN_01c496e0();
  uVar2 = thunk_FUN_01c273e8(UnityEngine_Rendering_DebugUI_Foldout_TypeInfo);
  FUN_03247e00(uVar1,uVar2,0);
  uVar2 = thunk_FUN_01c273e8(
                            Method_System_Collections_Generic_Dictionary<Column,_MultiColumnCollectionHeader_ColumnData>_ContainsKey__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_01c5d37c(uVar1,uVar2);
}


