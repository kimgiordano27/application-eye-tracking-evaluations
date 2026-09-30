/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_TypeNameHandling
ENTRY_POINT: 070999d0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(void)

{
  undefined *puVar1;
  long lVar2;
  undefined4 in_w8;
  long unaff_x19;
  long *unaff_x20;
  long *plVar3;
  
  *(undefined4 *)(unaff_x19 + 0x144) = in_w8;
  FUN_07145224();
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  lVar2 = FUN_070c20bc(0);
  puVar1 = PTR_DAT_08ea2968;
  if (lVar2 != 0) {
    *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(lVar2 + 0xc0);
    thunk_FUN_03d233cc();
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_03cd7500();
    }
    lVar2 = FUN_070abc58(0);
    plVar3 = (long *)(unaff_x19 + 0x78);
    *plVar3 = lVar2;
    thunk_FUN_03d233cc(plVar3,lVar2);
    plVar3 = (long *)*plVar3;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
      FUN_07099a6c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


