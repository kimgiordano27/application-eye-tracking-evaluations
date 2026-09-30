/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$remove_Error
ENTRY_POINT: 0760f698
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__remove_Error(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),&stack0x0000000c);
  if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((lVar1 != 0) &&
     (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*param_1 + 0x40)), lVar2 == 0)) {
    uVar3 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar3,0);
  }
  if ((int)param_1[3] != 0) {
    param_1[4] = lVar1;
    thunk_FUN_040ec700(param_1 + 4,lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


