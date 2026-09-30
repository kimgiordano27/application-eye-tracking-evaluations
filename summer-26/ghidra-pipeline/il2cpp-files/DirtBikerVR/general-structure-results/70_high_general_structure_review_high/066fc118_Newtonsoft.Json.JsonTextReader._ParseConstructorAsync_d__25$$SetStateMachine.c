/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParseConstructorAsync>d__25$$SetStateMachine
ENTRY_POINT: 066fc118
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


undefined8
Newtonsoft_Json_JsonTextReader_<ParseConstructorAsync>d__25__SetStateMachine
          (undefined8 param_1,long param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar4;
  int iVar5;
  undefined *puVar3;
  
  if (param_2 == 0) {
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar1 = thunk_FUN_03ac74bc();
    uVar4 = thunk_FUN_03af1434(PTR_DAT_084912a0);
    FUN_066af6a0(uVar1,uVar4,0);
    uVar4 = thunk_FUN_03af1434(PTR_DAT_084a81b8);
                    /* WARNING: Subroutine does not return */
    FUN_03a8a884(uVar1,uVar4);
  }
  if (param_4 < 0) {
    uVar1 = thunk_FUN_03af1434(PTR_DAT_08491290);
    uVar1 = FUN_06793434(uVar1,0);
    thunk_FUN_03af1434(PTR_DAT_08491280);
    uVar4 = thunk_FUN_03ac74bc();
    puVar3 = PTR_DAT_08491288;
  }
  else {
    if (-1 < param_5) {
      iVar5 = (int)*(ulong *)(param_2 + 0x18);
      if (param_5 <= iVar5 - param_4) {
        if (param_5 == 0) {
          return 0xffffffff;
        }
        if ((*(ulong *)(param_2 + 0x18) & 0xffffffff) == 0) {
          param_2 = 0;
        }
        else {
          if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          param_2 = param_2 + 0x20;
        }
        uVar1 = FUN_0677dbec(param_2,param_3,param_4,param_5,0);
        return uVar1;
      }
      uVar1 = thunk_FUN_03af1434(PTR_DAT_084914a8);
      uVar1 = FUN_06793434(uVar1,0);
      thunk_FUN_03af1434(PTR_DAT_08488490);
      uVar4 = thunk_FUN_03ac74bc();
      FUN_066b6070(uVar4,uVar1,0);
      goto LAB_066fc288;
    }
    uVar1 = thunk_FUN_03af1434(PTR_DAT_084912b0);
    uVar1 = FUN_06793434(uVar1,0);
    thunk_FUN_03af1434(PTR_DAT_08491280);
    uVar4 = thunk_FUN_03ac74bc();
    puVar3 = PTR_DAT_084912a8;
  }
  uVar2 = thunk_FUN_03af1434(puVar3);
  System_Threading_CancellationToken__get_IsCancellationRequested(uVar4,uVar2,uVar1,0);
LAB_066fc288:
  uVar1 = thunk_FUN_03af1434(PTR_DAT_084a81b8);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar4,uVar1);
}


