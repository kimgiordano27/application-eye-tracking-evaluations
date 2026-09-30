/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader.<ParseUnquotedPropertyAsync>d__33$$SetStateMachine
ENTRY_POINT: 066fed40
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_1
*/


void Newtonsoft_Json_JsonTextReader_<ParseUnquotedPropertyAsync>d__33__SetStateMachine
               (long param_1,long param_2,int param_3,int param_4,byte param_5,byte param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_084a04d8;
  if ((DAT_0897b7b3 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084a04d8);
    DAT_0897b7b3 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0670c6f4(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_03af1434(PTR_DAT_08491298);
    uVar3 = thunk_FUN_03ac74bc();
    uVar4 = thunk_FUN_03af1434(PTR_DAT_08494058);
    uVar2 = thunk_FUN_03af1434(PTR_DAT_084a82b8);
    FUN_066b7574(uVar3,uVar4,uVar2,0);
  }
  else {
    if (param_3 < 0) {
      thunk_FUN_03af1434(PTR_DAT_08491280);
      uVar3 = thunk_FUN_03ac74bc();
      puVar1 = PTR_DAT_08486d40;
    }
    else {
      if (-1 < param_4) {
        if (param_4 <= *(int *)(param_2 + 0x18) - param_3) {
          *(long *)(param_1 + 0x28) = param_2;
          thunk_FUN_03afed3c((long *)(param_1 + 0x28),param_2);
          *(int *)(param_1 + 0x30) = param_3;
          *(int *)(param_1 + 0x34) = param_3;
          *(int *)(param_1 + 0x38) = param_4 + param_3;
          *(int *)(param_1 + 0x3c) = param_4 + param_3;
          *(byte *)(param_1 + 0x41) = param_5 & 1;
          *(byte *)(param_1 + 0x42) = param_6 & 1;
          *(undefined1 *)(param_1 + 0x40) = 0;
          *(undefined1 *)(param_1 + 0x43) = 1;
          return;
        }
        thunk_FUN_03af1434(PTR_DAT_08488490);
        uVar3 = thunk_FUN_03ac74bc();
        uVar4 = thunk_FUN_03af1434(PTR_DAT_084914a8);
        FUN_066b6070(uVar3,uVar4,0);
        goto LAB_066feef4;
      }
      thunk_FUN_03af1434(PTR_DAT_08491280);
      uVar3 = thunk_FUN_03ac74bc();
      puVar1 = PTR_DAT_084912a8;
    }
    uVar4 = thunk_FUN_03af1434(puVar1);
    uVar2 = thunk_FUN_03af1434(PTR_DAT_08491498);
    System_Threading_CancellationToken__get_IsCancellationRequested(uVar3,uVar4,uVar2,0);
  }
LAB_066feef4:
  uVar4 = thunk_FUN_03af1434(PTR_DAT_084a82c8);
                    /* WARNING: Subroutine does not return */
  FUN_03a8a884(uVar3,uVar4);
}


