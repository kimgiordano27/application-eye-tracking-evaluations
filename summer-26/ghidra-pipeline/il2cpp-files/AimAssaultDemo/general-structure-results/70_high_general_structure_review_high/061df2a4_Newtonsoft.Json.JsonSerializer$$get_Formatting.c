/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_Formatting
ENTRY_POINT: 061df2a4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_JsonSerializer__get_Formatting(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int unaff_w19;
  
  if (*(int *)(*(long *)PTR_DAT_07d863e8 + 0xe4) == 0) {
    thunk_FUN_03798b70();
  }
  iVar1 = -0x80000000;
  if (SQRT((double)unaff_w19) != INFINITY) {
    iVar1 = (int)SQRT((double)unaff_w19);
  }
  if (iVar1 < 3) {
    bVar3 = true;
  }
  else {
    iVar4 = 3;
    do {
      iVar2 = 0;
      if (iVar4 != 0) {
        iVar2 = unaff_w19 / iVar4;
      }
      iVar2 = iVar2 * iVar4;
    } while ((unaff_w19 != iVar2) && (iVar4 = iVar4 + 2, iVar4 <= iVar1));
    bVar3 = unaff_w19 != iVar2;
  }
  return bVar3;
}


