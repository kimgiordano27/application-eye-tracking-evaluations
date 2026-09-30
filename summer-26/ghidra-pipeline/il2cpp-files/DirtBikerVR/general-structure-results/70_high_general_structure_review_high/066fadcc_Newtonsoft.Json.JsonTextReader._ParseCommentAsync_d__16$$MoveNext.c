/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParseCommentAsync>d__16$$MoveNext
ENTRY_POINT: 066fadcc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_JsonTextReader_<ParseCommentAsync>d__16__MoveNext
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x21;
  
  iVar1 = thunk_FUN_03a9985c();
  if (iVar1 == 1) {
    if (param_3 < 0) {
      thunk_FUN_03af1434(PTR_DAT_08491280);
      uVar3 = thunk_FUN_03ac74bc();
      uVar4 = thunk_FUN_03af1434(PTR_DAT_08493fe0);
      uVar2 = thunk_FUN_03af1434(PTR_DAT_08491498);
      System_Threading_CancellationToken__get_IsCancellationRequested(uVar3,uVar4,uVar2,0);
    }
    else {
      iVar1 = FUN_06769a04();
      lVar5 = *(long *)(unaff_x21 + 0x10);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(int *)(lVar5 + 0x18) <= iVar1 - param_3) {
        FUN_066f9064(lVar5);
        return;
      }
      thunk_FUN_03af1434(PTR_DAT_08488490);
      uVar3 = thunk_FUN_03ac74bc();
      uVar4 = thunk_FUN_03af1434(PTR_DAT_08493000);
      FUN_066b6070(uVar3,uVar4,0);
    }
  }
  else {
    thunk_FUN_03af1434(PTR_DAT_08488490);
    uVar3 = thunk_FUN_03ac74bc();
    uVar4 = thunk_FUN_03af1434(PTR_DAT_08492ff0);
    uVar2 = thunk_FUN_03af1434(PTR_DAT_084912a0);
    FUN_066af718(uVar3,uVar4,uVar2,0);
  }
  uVar4 = thunk_FUN_03af1434(PTR_DAT_084a8150);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar3,uVar4);
}


