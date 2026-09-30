/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings.<>c__DisplayClass93_0$$<set_ReferenceResolver>b__0
ENTRY_POINT: 0559ee04
PROGRAM: Untangled-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings_<>c__DisplayClass93_0__<set_ReferenceResolver>b__0(void)

{
  long lVar1;
  long *plVar2;
  int in_w8;
  long unaff_x21;
  int unaff_w22;
  
  while( true ) {
    if (in_w8 < unaff_w22) {
      return;
    }
    lVar1 = FUN_0559b2fc();
    if (lVar1 == 0) break;
    if (0 < *(int *)(lVar1 + 0x10)) {
      FUN_0559b2fc();
      FUN_0559e27c();
    }
    plVar2 = *(long **)(unaff_x21 + 0x78);
    unaff_w22 = unaff_w22 + 1;
    if (plVar2 == (long *)0x0) break;
    lVar1 = (**(code **)(*plVar2 + 0x238))(plVar2,*(undefined8 *)(*plVar2 + 0x240));
    if (lVar1 == 0) break;
    in_w8 = *(int *)(lVar1 + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


