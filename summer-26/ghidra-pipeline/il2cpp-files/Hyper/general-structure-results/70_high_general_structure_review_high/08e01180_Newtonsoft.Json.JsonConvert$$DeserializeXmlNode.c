/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXmlNode
ENTRY_POINT: 08e01180
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

void Newtonsoft_Json_JsonConvert__DeserializeXmlNode(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x21;
  long *plVar6;
  
                    /* try { // try from 08e01180 to 08f0118b has its CatchHandler @ 08e00fb8 */
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 08e0117c with catch @ 08e01188
                        */
    FUN_08de4a04(lVar4,0);
    thunk_FUN_049ee3d8();
    lVar2 = *unaff_x21;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar2 = *unaff_x21;
    }
    lVar2 = FUN_08dc2d58(*(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10));
    puVar1 = PTR_DAT_0ac6a080;
    if (lVar2 == 0) {
      lVar3 = 0;
      plVar6 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
      *plVar6 = 0;
    }
    else {
      uVar5 = *(undefined8 *)PTR_DAT_0ac6a080;
      lVar3 = thunk_FUN_04983e64(lVar2,uVar5);
      if (lVar3 == 0) {
LAB_08e01224:
                    /* WARNING: Subroutine does not return */
        FUN_0494850c(lVar2,uVar5);
      }
      uVar5 = *(undefined8 *)puVar1;
      plVar6 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
      *plVar6 = lVar3;
      lVar3 = thunk_FUN_04983e64(lVar2,uVar5);
      if (lVar3 == 0) goto LAB_08e01224;
    }
    thunk_FUN_049ee3d8(plVar6,lVar3);
    if (lVar4 != 0) {
      FUN_08de4a2c(lVar4,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


