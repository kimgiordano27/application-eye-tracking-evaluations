/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 0559269c
PROGRAM: Untangled-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__DeserializeXmlNode(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined1 in_w8;
  long unaff_x19;
  long *unaff_x23;
  long unaff_x24;
  
  *(undefined1 *)(unaff_x24 + 0x8b0) = in_w8;
  puVar2 = PTR_DAT_06d4f0a8;
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
  FUN_0554c688();
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
    lVar3 = *(long *)puVar2;
  }
  plVar4 = (long *)**(long **)(lVar3 + 0xb8);
  if (plVar4 != (long *)0x0) {
    lVar3 = *(long *)PTR_DAT_06d4f0b0;
    bVar1 = *(byte *)(lVar3 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
       (*(long *)(*(long *)(*plVar4 + 200) + ((ulong)bVar1 - 1) * 8) == lVar3)) {
      *(long **)(unaff_x19 + 0x70) = plVar4;
      if ((bVar1 <= *(byte *)(*plVar4 + 0x130)) &&
         (*(long *)(*(long *)(*plVar4 + 200) + ((ulong)bVar1 - 1) * 8) == lVar3)) goto LAB_0559275c;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02f08440(plVar4,lVar3);
  }
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
LAB_0559275c:
  thunk_FUN_02f411dc(unaff_x19 + 0x70);
  return;
}


