/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_Context
ENTRY_POINT: 05da5080
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


void Newtonsoft_Json_JsonSerializer__set_Context(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int unaff_w19;
  long unaff_x21;
  
  iVar1 = FUN_05e1a3d8(param_1,0);
  lVar5 = *(long *)(unaff_x21 + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  if (*(int *)(lVar5 + 0x1c) <= iVar1 - unaff_w19) {
    for (lVar5 = *(long *)(lVar5 + 0x10); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x20)) {
      FUN_05e240e4();
    }
    return;
  }
  thunk_FUN_03257e30(PTR_DAT_0759c0b8);
  uVar2 = thunk_FUN_0322f148();
  uVar3 = thunk_FUN_03257e30(PTR_DAT_075d6798);
  uVar4 = thunk_FUN_03257e30(PTR_DAT_0759c148);
  FUN_05d6f3dc(uVar2,uVar3,uVar4,0);
  uVar3 = thunk_FUN_03257e30(PTR_DAT_075ea890);
                    /* WARNING: Subroutine does not return */
  FUN_031f225c(uVar2,uVar3);
}


