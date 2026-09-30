/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 058baf54
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  long lVar1;
  long unaff_x19;
  undefined8 uVar2;
  
  lVar1 = FUN_058c7b08();
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0xc0) != 0)) {
    uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x58);
    *(undefined8 *)(unaff_x19 + 0x18) = uVar2;
    if (*(int *)(*(long *)PTR_DAT_070c2058 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    lVar1 = FUN_058c7d24(uVar2,0);
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 0xc0);
      *(long *)(unaff_x19 + 0x20) = lVar1;
      if (lVar1 != 0) {
        *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(lVar1 + 0x58);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


