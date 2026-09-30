/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 08e01128
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_5;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08e0127c) */

void Newtonsoft_Json_JsonConvert__DeserializeXmlNode(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_0ac3e600;
  if ((DAT_0b32ebf4 & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac6a080);
    FUN_04947ee4(PTR_DAT_0ac3e600);
    DAT_0b32ebf4 = 1;
  }
  lVar3 = *(long *)puVar1;
                    /* try { // try from 08e01168 to 08f01177 has its CatchHandler @ 08e01178 */
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_049a583c();
    lVar3 = *(long *)puVar1;
  }
                    /* catch() { ... } // from try @ 08e01118 with catch @ 08e01178
                       catch() { ... } // from try @ 08e01168 with catch @ 08e01178 */
                    /* try { // try from 08e0117c to 08f0117f has its CatchHandler @ 08e01188 */
  lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
  if (lVar3 != 0) {
    FUN_08de4a04(lVar3,0);
    thunk_FUN_049ee3d8();
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar4 = *(long *)puVar1;
    }
    lVar4 = FUN_08dc2d58(*(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x10),param_1,0);
    puVar2 = PTR_DAT_0ac6a080;
    if (lVar4 == 0) {
      lVar5 = 0;
      plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar7 = 0;
    }
    else {
      uVar6 = *(undefined8 *)PTR_DAT_0ac6a080;
      lVar5 = thunk_FUN_04983e64(lVar4,uVar6);
      if (lVar5 == 0) {
LAB_08e01224:
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(lVar4,uVar6);
      }
      uVar6 = *(undefined8 *)puVar2;
      plVar7 = (long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x10);
      *plVar7 = lVar5;
      lVar5 = thunk_FUN_04983e64(lVar4,uVar6);
      if (lVar5 == 0) goto LAB_08e01224;
    }
    thunk_FUN_049ee3d8(plVar7,lVar5);
    if (lVar3 != 0) {
      FUN_08de4a2c(lVar3,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


