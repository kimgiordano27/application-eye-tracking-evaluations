/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ResolvePropertyAndCreatorValues
ENTRY_POINT: 05de6c6c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ResolvePropertyAndCreatorValues
               (undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((DAT_07a4544f & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075ebf38);
    FUN_031f20f4(PTR_DAT_075e5e88);
    DAT_07a4544f = 1;
  }
  puVar1 = PTR_DAT_075ebf38;
  if (param_2 != 0) {
    FUN_05d0d734(param_2,*(undefined8 *)PTR_DAT_075e5e88,*param_1,0);
    FUN_05d0d4dc(param_2,*(undefined8 *)puVar1,*(undefined2 *)(param_1 + 1),0);
    return;
  }
  thunk_FUN_03257e30(PTR_DAT_0759c0f0);
  uVar2 = thunk_FUN_0322f148();
  uVar3 = thunk_FUN_03257e30(PTR_DAT_075d8b98);
  FUN_05d6f364(uVar2,uVar3,0);
  uVar3 = thunk_FUN_03257e30(PTR_DAT_075ebf40);
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar2,uVar3);
}


