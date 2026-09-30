/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ReferenceLoopHandling
ENTRY_POINT: 061e0448
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_ReferenceLoopHandling
               (long param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (param_2 == 0) {
    thunk_FUN_037a15ac(PTR_DAT_07d8ebe8);
    uVar3 = thunk_FUN_037788cc();
    uVar4 = thunk_FUN_037a15ac(PTR_DAT_07d902d8);
    FUN_061a1b40(uVar3,uVar4,0);
  }
  else {
    iVar2 = thunk_FUN_0374ada8(param_2,0);
    if (iVar2 == 1) {
      if (param_3 < 0) {
        thunk_FUN_037a15ac(PTR_DAT_07d8eed0);
        uVar3 = thunk_FUN_037788cc();
        uVar4 = thunk_FUN_037a15ac(PTR_DAT_07d868a0);
        uVar5 = thunk_FUN_037a15ac(PTR_DAT_07d95d88);
        FUN_061a5334(uVar3,uVar4,uVar5,0);
      }
      else {
        iVar2 = FUN_0625b654(param_2,0);
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        if (*(int *)(lVar6 + 0x1c) <= iVar2 - param_3) {
          for (lVar6 = *(long *)(lVar6 + 0x10); lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x20)) {
            lVar1 = 0x18;
            if (*(char *)(param_1 + 0x18) != '\0') {
              lVar1 = 0x10;
            }
            FUN_06265634(param_2,*(undefined8 *)(lVar6 + lVar1),param_3,0);
            param_3 = param_3 + 1;
          }
          return;
        }
        thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
        uVar3 = thunk_FUN_037788cc();
        uVar4 = thunk_FUN_037a15ac(PTR_DAT_07d95d78);
        uVar5 = thunk_FUN_037a15ac(PTR_DAT_07d868a0);
        FUN_061a1bb8(uVar3,uVar4,uVar5,0);
      }
    }
    else {
      thunk_FUN_037a15ac(PTR_DAT_07d8ee68);
      uVar3 = thunk_FUN_037788cc();
      uVar4 = thunk_FUN_037a15ac(PTR_DAT_07d97910);
      FUN_061a843c(uVar3,uVar4,0);
    }
  }
  uVar4 = thunk_FUN_037a15ac(PTR_DAT_07dacf10);
                    /* WARNING: Subroutine does not return */
  FUN_0373b680(uVar3,uVar4);
}


