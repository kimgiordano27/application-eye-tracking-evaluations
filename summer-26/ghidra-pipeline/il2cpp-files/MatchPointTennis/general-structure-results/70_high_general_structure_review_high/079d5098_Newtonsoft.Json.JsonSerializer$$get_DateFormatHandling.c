/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$get_DateFormatHandling
ENTRY_POINT: 079d5098
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializer__get_DateFormatHandling(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  
  do {
    uVar1 = (**(code **)(*param_1 + 0x138))();
    if ((uVar1 & 1) != 0) {
      if (unaff_x23 != *unaff_x20) {
        if (unaff_x22 == 0) break;
        unaff_x20 = (long *)(unaff_x22 + 0x20);
      }
      *unaff_x20 = *(long *)(unaff_x23 + 0x20);
      thunk_FUN_044bb4b4(unaff_x20);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + -1;
      return;
    }
    lVar2 = *(long *)(unaff_x23 + 0x20);
    if (lVar2 == 0) {
      return;
    }
    param_1 = *(long **)(lVar2 + 0x10);
    unaff_x22 = unaff_x23;
    unaff_x23 = lVar2;
  } while (param_1 != (long *)0x0);
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


