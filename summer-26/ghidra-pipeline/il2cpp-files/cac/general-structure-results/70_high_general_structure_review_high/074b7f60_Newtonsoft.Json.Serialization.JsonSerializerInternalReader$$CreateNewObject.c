/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$CreateNewObject
ENTRY_POINT: 074b7f60
PROGRAM: cac-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_Serialization_JsonSerializerInternalReader__CreateNewObject
          (long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *in_x9;
  long *unaff_x19;
  undefined8 uVar4;
  
  uVar1 = (*in_x9)(param_2,*(undefined8 *)(param_1 + 0x400));
  if (((uVar1 & 1) == 0) || (uVar1 = (**(code **)(*unaff_x19 + 0x408))(), (uVar1 & 1) != 0)) {
    return 0;
  }
  lVar2 = (**(code **)(*unaff_x19 + 0x488))();
  uVar4 = *(undefined8 *)PTR_DAT_09121188;
  if (*(int *)(*(long *)(PTR_DAT_0910b550 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_03f6fea8(*(long *)(PTR_DAT_0910b550 + 0xe0));
  }
  lVar3 = FUN_074c4a14(uVar4,0);
  if (lVar2 != lVar3) {
    return 0;
  }
  lVar2 = (**(code **)(*unaff_x19 + 0x4a8))();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f1362c();
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    return *(undefined8 *)(lVar2 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f13634();
}


