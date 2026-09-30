/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValueAsync
ENTRY_POINT: 079d8e64
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


void Newtonsoft_Json_JsonTextReader__ParsePostValueAsync(void)

{
  undefined8 *puVar1;
  int in_w8;
  long lVar2;
  long unaff_x19;
  int unaff_w20;
  undefined4 unaff_w21;
  
  FUN_07a612b4(*(undefined8 *)(unaff_x19 + 0x18),unaff_w21,*(undefined8 *)(unaff_x19 + 0x18),
               unaff_w20,in_w8 - unaff_w20,0);
  lVar2 = *(long *)(unaff_x19 + 0x10);
  if (lVar2 != 0) {
    if (*(uint *)(unaff_x19 + 0x20) < *(uint *)(lVar2 + 0x18)) {
      puVar1 = (undefined8 *)(lVar2 + (long)(int)*(uint *)(unaff_x19 + 0x20) * 8 + 0x20);
      *puVar1 = 0;
      thunk_FUN_044bb4b4(puVar1,0);
      lVar2 = *(long *)(unaff_x19 + 0x18);
      if (lVar2 == 0) goto LAB_079d8f44;
      if (*(uint *)(unaff_x19 + 0x20) < *(uint *)(lVar2 + 0x18)) {
        puVar1 = (undefined8 *)(lVar2 + (long)(int)*(uint *)(unaff_x19 + 0x20) * 8 + 0x20);
        *puVar1 = 0;
        thunk_FUN_044bb4b4(puVar1,0);
        *(int *)(unaff_x19 + 0x24) = *(int *)(unaff_x19 + 0x24) + 1;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
LAB_079d8f44:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


