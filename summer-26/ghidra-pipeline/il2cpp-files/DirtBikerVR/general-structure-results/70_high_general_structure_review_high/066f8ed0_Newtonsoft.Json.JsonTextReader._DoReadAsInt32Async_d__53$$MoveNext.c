/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<DoReadAsInt32Async>d__53$$MoveNext
ENTRY_POINT: 066f8ed0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_JsonTextReader_<DoReadAsInt32Async>d__53__MoveNext
               (long *param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar4 = thunk_FUN_03ac74bc();
    uVar5 = thunk_FUN_03af1434(PTR_DAT_084912a0);
    uVar3 = thunk_FUN_03af1434(PTR_DAT_0849fa68);
    FUN_066b7574(uVar4,uVar5,uVar3,0);
  }
  else {
    iVar1 = thunk_FUN_03a9985c(param_2,0);
    if (iVar1 == 1) {
      if (param_3 < 0) {
        thunk_FUN_03af1434(PTR_DAT_08491280);
        uVar4 = thunk_FUN_03ac74bc();
        uVar5 = thunk_FUN_03af1434(PTR_DAT_08493fe0);
        uVar3 = thunk_FUN_03af1434(PTR_DAT_08491498);
        System_Threading_CancellationToken__get_IsCancellationRequested(uVar4,uVar5,uVar3,0);
      }
      else {
        iVar1 = FUN_06769a04(param_2,0);
        iVar2 = (**(code **)(*param_1 + 0x3c8))(param_1,*(undefined8 *)(*param_1 + 0x3d0));
        if (iVar2 <= iVar1 - param_3) {
          FUN_066f8dac(param_1,param_2,param_3);
          return;
        }
        thunk_FUN_03af1434(PTR_DAT_08488490);
        uVar4 = thunk_FUN_03ac74bc();
        uVar5 = thunk_FUN_03af1434(PTR_DAT_08493000);
        FUN_066b6070(uVar4,uVar5,0);
      }
    }
    else {
      thunk_FUN_03af1434(PTR_DAT_08488490);
      uVar4 = thunk_FUN_03ac74bc();
      uVar5 = thunk_FUN_03af1434(PTR_DAT_08492ff0);
      uVar3 = thunk_FUN_03af1434(PTR_DAT_084912a0);
      FUN_066af718(uVar4,uVar5,uVar3,0);
    }
  }
  uVar5 = thunk_FUN_03af1434(PTR_DAT_084a8098);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar4,uVar5);
}


