/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeObject
ENTRY_POINT: 07107278
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonConvert__SerializeObject(void)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x23;
  
  plVar2 = (long *)**(long **)(*unaff_x23 + 0xb8);
  if (plVar2 != (long *)0x0) {
    lVar3 = *(long *)PTR_DAT_0920fa48;
    bVar1 = *(byte *)(lVar3 + 0x130);
    if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
       (*(long *)(*(long *)(*plVar2 + 200) + ((ulong)bVar1 - 1) * 8) == lVar3)) {
      *(long **)(unaff_x19 + 0x70) = plVar2;
      if ((bVar1 <= *(byte *)(*plVar2 + 0x130)) &&
         (*(long *)(*(long *)(*plVar2 + 200) + ((ulong)bVar1 - 1) * 8) == lVar3)) goto LAB_071072f0;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03d2d8e4(plVar2,lVar3);
  }
  *(undefined8 *)(unaff_x19 + 0x70) = 0;
LAB_071072f0:
  thunk_FUN_03d1023c(unaff_x19 + 0x70);
  return;
}


