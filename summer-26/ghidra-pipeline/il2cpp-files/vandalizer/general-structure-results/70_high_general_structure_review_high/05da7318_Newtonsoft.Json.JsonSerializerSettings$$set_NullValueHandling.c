/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_NullValueHandling
ENTRY_POINT: 05da7318
PROGRAM: vandalizer-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_JsonSerializerSettings__set_NullValueHandling(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  iVar1 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
  if (iVar1 == 0) {
    thunk_FUN_03257e30(PTR_DAT_0759bb58);
    uVar2 = thunk_FUN_0322f148();
    uVar3 = thunk_FUN_03257e30(PTR_DAT_075d9b18);
    FUN_05e01578(uVar2,uVar3,0);
    uVar3 = thunk_FUN_03257e30(PTR_DAT_075ea960);
                    /* WARNING: Subroutine does not return */
    FUN_031f225c(uVar2,uVar3);
  }
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    if (*(uint *)(param_1 + 3) < *(uint *)(lVar4 + 0x18)) {
      return *(undefined8 *)(lVar4 + (long)(int)*(uint *)(param_1 + 3) * 8 + 0x20);
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


