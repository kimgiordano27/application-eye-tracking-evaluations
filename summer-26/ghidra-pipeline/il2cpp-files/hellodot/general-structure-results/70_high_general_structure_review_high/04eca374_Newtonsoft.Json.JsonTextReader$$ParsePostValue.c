/*
FUNCTION_NAME: Newtonsoft.Json.JsonTextReader$$ParsePostValue
ENTRY_POINT: 04eca374
PROGRAM: hellodot-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonTextReader__ParsePostValue(void)

{
  byte bVar1;
  long lVar2;
  long *plVar3;
  long unaff_x19;
  long *unaff_x23;
  
  FUN_04e88f50();
  lVar2 = *unaff_x23;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_02cd038c();
    lVar2 = *unaff_x23;
  }
  plVar3 = (long *)**(long **)(lVar2 + 0xb8);
  if (plVar3 == (long *)0x0) {
    *(undefined8 *)(unaff_x19 + 0x70) = 0;
    return;
  }
  lVar2 = *(long *)PTR_DAT_065f8060;
  bVar1 = *(byte *)(lVar2 + 0x130);
  if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
     (*(long *)(*(long *)(*plVar3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
    *(long **)(unaff_x19 + 0x70) = plVar3;
    if ((bVar1 <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + ((ulong)bVar1 - 1) * 8) == lVar2)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce8018();
}


