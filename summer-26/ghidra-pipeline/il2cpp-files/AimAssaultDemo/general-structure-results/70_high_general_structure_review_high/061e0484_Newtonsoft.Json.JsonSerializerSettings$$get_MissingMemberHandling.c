/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_MissingMemberHandling
ENTRY_POINT: 061e0484
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


void Newtonsoft_Json_JsonSerializerSettings__get_MissingMemberHandling(int param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  int unaff_w19;
  long unaff_x21;
  
  lVar4 = *(long *)(unaff_x21 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0373b7b4();
  }
  if (*(int *)(lVar4 + 0x1c) <= param_1 - unaff_w19) {
    for (lVar4 = *(long *)(lVar4 + 0x10); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
      FUN_06265634();
    }
    return;
  }
  thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
  uVar1 = thunk_FUN_037788cc();
  uVar2 = thunk_FUN_037a15ac(PTR_DAT_07d95d78);
  uVar3 = thunk_FUN_037a15ac(PTR_DAT_07d868a0);
  FUN_061a1bb8(uVar1,uVar2,uVar3,0);
  uVar2 = thunk_FUN_037a15ac(PTR_DAT_07dacf10);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar1,uVar2);
}


