/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_StringEscapeHandling
ENTRY_POINT: 0709a4a4
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long * Newtonsoft_Json_JsonSerializerSettings__get_StringEscapeHandling(void)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  
  plVar2 = (long *)thunk_FUN_03cf4f20();
  if (plVar2 != (long *)0x0) {
    if (*plVar2 != *(long *)PTR_DAT_08ea2980) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fecc(plVar2);
    }
  }
  plVar3 = *(long **)(unaff_x20 + 0x78);
  if (plVar3 != (long *)0x0) {
    plVar3 = (long *)(**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    if (plVar2 != (long *)0x0) {
      if (plVar3 != (long *)0x0) {
        lVar4 = *(long *)PTR_DAT_08ea2990;
        bVar1 = *(byte *)(lVar4 + 0x130);
        if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
           (*(long *)(*(long *)(*plVar3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar4)) {
          plVar2[0xf] = (long)plVar3;
          if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
             (*(long *)(*(long *)(*plVar3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar4))
          goto LAB_0709a55c;
        }
                    /* WARNING: Subroutine does not return */
        FUN_03c8fecc(plVar3);
      }
      plVar2[0xf] = 0;
LAB_0709a55c:
      thunk_FUN_03d233cc(plVar2 + 0xf,plVar3);
      *(undefined1 *)(plVar2 + 0x28) = 0;
      return plVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb30();
}


