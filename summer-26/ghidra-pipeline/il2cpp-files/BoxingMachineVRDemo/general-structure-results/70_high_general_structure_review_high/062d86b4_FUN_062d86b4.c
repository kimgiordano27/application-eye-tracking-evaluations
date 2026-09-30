/*
FUNCTION_NAME: FUN_062d86b4
ENTRY_POINT: 062d86b4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void FUN_062d86b4(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if ((DAT_06b8bd31 & 1) == 0) {
    FUN_02d6084c(Method_System_Net_WebRequestStream_Close_internal__);
    DAT_06b8bd31 = 1;
  }
  puVar3 = Method_System_Net_WebRequestStream_Close_internal__;
  if (param_4 != 0) {
    uVar5 = FUN_062d7ea4(param_4);
    cVar2 = *(char *)(param_4 + 0x58);
    uVar1 = *(undefined4 *)(param_4 + 0x14);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
    }
    uVar4 = 1;
    if (cVar2 == '\0') {
      uVar4 = 2;
    }
    FUN_062edf64(uVar5,param_2,uVar4,uVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


