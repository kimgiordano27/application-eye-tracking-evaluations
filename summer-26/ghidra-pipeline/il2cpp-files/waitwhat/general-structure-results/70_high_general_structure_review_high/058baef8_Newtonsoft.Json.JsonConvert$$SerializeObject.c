/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 058baef8
PROGRAM: waitwhat-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_8;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObject(long param_1)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  long lVar2;
  
  FUN_03188a78(*(undefined8 *)(param_1 + 0x58));
  FUN_03188a78(PTR_DAT_071023a8);
  *(undefined1 *)(unaff_x20 + 0x5d2) = 1;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x19 + 0x18);
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x19 + 0x38);
    if (lVar2 == 0) {
      iVar1 = *(int *)(unaff_x19 + 0x44);
      if (iVar1 == 0) {
        lVar2 = *(long *)PTR_DAT_071023a8;
      }
      else {
        if (*(int *)(*(long *)PTR_DAT_070c2058 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        lVar2 = FUN_058c7b08(iVar1,0);
        if ((lVar2 == 0) || (*(long *)(lVar2 + 0xc0) == 0)) goto LAB_058bafc4;
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x58);
      }
    }
    *(long *)(unaff_x19 + 0x18) = lVar2;
  }
  if (*(int *)(*(long *)PTR_DAT_070c2058 + 0xe4) == 0) {
    thunk_FUN_031e5338();
  }
  lVar2 = FUN_058c7d24(lVar2,0);
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0xc0);
    *(long *)(unaff_x19 + 0x20) = lVar2;
    if (lVar2 != 0) {
      *(undefined8 *)(unaff_x19 + 0x28) = *(undefined8 *)(lVar2 + 0x58);
      return;
    }
  }
LAB_058bafc4:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


