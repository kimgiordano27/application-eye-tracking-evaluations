/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$GetMatchingConverter
ENTRY_POINT: 04f9de84
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


bool Newtonsoft_Json_JsonSerializer__GetMatchingConverter(void)

{
  int iVar1;
  ulong uVar2;
  long unaff_x19;
  bool bVar3;
  
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  if (*(int *)(unaff_x19 + 0x10) + -1 < 1) {
    bVar3 = false;
  }
  else {
    do {
      iVar1 = FUN_04e92ad4();
      bVar3 = 0 < iVar1;
      if (iVar1 < 1) {
        return bVar3;
      }
      System_Globalization_SortKey___ctor();
      uVar2 = FUN_02d66d78();
    } while ((uVar2 & 1) == 0);
  }
  return bVar3;
}


