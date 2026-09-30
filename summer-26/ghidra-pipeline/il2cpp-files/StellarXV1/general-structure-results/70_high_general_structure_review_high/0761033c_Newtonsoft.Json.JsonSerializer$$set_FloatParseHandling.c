/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$set_FloatParseHandling
ENTRY_POINT: 0761033c
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


bool Newtonsoft_Json_JsonSerializer__set_FloatParseHandling(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint unaff_w19;
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0xdcc) = 1;
  if ((unaff_w19 & 1) == 0) {
    bVar3 = unaff_w19 == 2;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_09285ae0 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    if ((int)SQRT((double)(int)unaff_w19) < 3) {
      bVar3 = true;
    }
    else {
      iVar4 = 5;
      do {
        iVar2 = iVar4 + -2;
        iVar1 = 0;
        if (iVar2 != 0) {
          iVar1 = (int)unaff_w19 / iVar2;
        }
        bVar3 = unaff_w19 != iVar1 * iVar2;
      } while ((iVar4 <= (int)SQRT((double)(int)unaff_w19)) &&
              (iVar4 = iVar4 + 2, unaff_w19 != iVar1 * iVar2));
    }
  }
  return bVar3;
}


