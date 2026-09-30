/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_StringEscapeHandling
ENTRY_POINT: 0709a4e0
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_StringEscapeHandling(void)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  code *in_x9;
  long unaff_x19;
  
  plVar2 = (long *)(*in_x9)();
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03c8fb30();
  }
  if (plVar2 != (long *)0x0) {
    lVar3 = *(long *)PTR_DAT_08ea2990;
    bVar1 = *(byte *)(lVar3 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + ((ulong)bVar1 - 1) * 8) == lVar3)) {
      *(long **)(unaff_x19 + 0x78) = plVar2;
      if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
         (*(long *)(*(long *)(*plVar2 + 200) + ((ulong)bVar1 - 1) * 8) == lVar3)) goto LAB_0709a55c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03c8fecc(plVar2);
  }
  *(undefined8 *)(unaff_x19 + 0x78) = 0;
LAB_0709a55c:
  thunk_FUN_03d233cc(unaff_x19 + 0x78,plVar2);
  *(undefined1 *)(unaff_x19 + 0x140) = 0;
  return;
}


