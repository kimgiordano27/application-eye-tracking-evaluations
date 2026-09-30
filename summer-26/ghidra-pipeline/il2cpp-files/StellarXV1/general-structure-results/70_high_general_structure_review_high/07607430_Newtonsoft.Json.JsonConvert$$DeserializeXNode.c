/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 07607430
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


long Newtonsoft_Json_JsonConvert__DeserializeXNode(void)

{
  long unaff_x19;
  long unaff_x20;
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(unaff_x20 + 0xd89) & 1) == 0) {
    FUN_04077588(PTR_DAT_092d5ee0);
    *(undefined1 *)(unaff_x20 + 0xd89) = 1;
  }
  plVar1 = (long *)(unaff_x19 + 0x30);
  lVar2 = *plVar1;
  thunk_FUN_04085a30();
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(unaff_x19 + 0xc0);
    lVar2 = thunk_FUN_040b4efc(*(undefined8 *)PTR_DAT_092d5ee0);
    FUN_075f46d0(lVar2,uVar3,0);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    *(undefined1 *)(lVar2 + 0xd0) = *(undefined1 *)(unaff_x19 + 0x10);
    thunk_FUN_04085a30();
    *(long *)(unaff_x19 + 0x30) = lVar2;
    thunk_FUN_040ec700(plVar1,lVar2);
  }
  lVar2 = *plVar1;
  thunk_FUN_04085a30();
  return lVar2;
}


