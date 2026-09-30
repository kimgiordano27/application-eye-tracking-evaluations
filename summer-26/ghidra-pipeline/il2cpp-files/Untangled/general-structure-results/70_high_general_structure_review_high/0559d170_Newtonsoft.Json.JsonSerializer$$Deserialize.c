/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializer$$Deserialize
ENTRY_POINT: 0559d170
PROGRAM: Untangled-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


long Newtonsoft_Json_JsonSerializer__Deserialize(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if ((DAT_071c2915 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d4f3e0);
    FUN_02f07e70(PTR_DAT_06d4f3e8);
    FUN_02f07e70(PTR_DAT_06d4f3f0);
    DAT_071c2915 = 1;
  }
  if (*(long *)(param_1 + 0x148) != 0) {
    return *(long *)(param_1 + 0x148);
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0x60) != '\0') {
      lVar3 = FUN_055b74f4(*(undefined8 *)(lVar3 + 0x58),0,0);
    }
    lVar2 = thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d4f3e0);
    FUN_055b18cc(lVar2,lVar3,0);
    if (lVar2 != 0) {
      plVar1 = (long *)(param_1 + 0x148);
      lVar3 = FUN_05465414(*(undefined8 *)PTR_DAT_06d4f3e8,*(undefined8 *)(lVar2 + 0x38),
                           *(undefined8 *)PTR_DAT_06d4f3f0,0);
      *plVar1 = lVar3;
      thunk_FUN_02f411dc(plVar1,lVar3);
      return *plVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


