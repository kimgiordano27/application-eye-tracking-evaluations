/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_PreserveReferencesHandling
ENTRY_POINT: 058b963c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


int Newtonsoft_Json_JsonSerializerSettings__get_PreserveReferencesHandling
              (long param_1,long param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  
  if ((DAT_076d4ffc & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_07290a18);
    DAT_076d4ffc = 1;
  }
  if (param_1 != 0) {
    iVar4 = thunk_FUN_032f8ab8(0);
    param_1 = param_1 + iVar4;
  }
  puVar3 = PTR_DAT_07290a18;
  if (param_2 != 0) {
    iVar4 = thunk_FUN_032f8ab8(0);
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(*(long *)puVar3);
    }
    iVar1 = (param_3 - param_4) + 1;
    iVar4 = FUN_058b9298(param_1 + (long)iVar1 * 2,param_4,param_2 + iVar4,uVar2,param_5 & 1,0);
    iVar1 = iVar1 + iVar4;
    if (iVar4 < 0) {
      iVar1 = -1;
    }
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


