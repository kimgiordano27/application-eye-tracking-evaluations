/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_FloatParseHandling
ENTRY_POINT: 08e0d8c0
PROGRAM: Hyper-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8
Newtonsoft_Json_JsonSerializerSettings__set_FloatParseHandling(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x23;
  undefined8 *puVar6;
  long *unaff_x24;
  long unaff_x25;
  undefined8 *puVar7;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  
  puVar1 = PTR_DAT_0ac6a940;
  puVar7 = *(undefined8 **)(unaff_x25 + 0x960);
  puVar6 = *(undefined8 **)(unaff_x23 + 0x948);
  lVar4 = param_1[2];
                    /* try { // try from 08e0d8d0 to 08f0d8d3 has its CatchHandler @ 08e0d96c */
                    /* try { // try from 08e0d8d4 to 08f0d91b has its CatchHandler @ 08e0d940 */
  if (lVar4 == 0) {
    if (*(int *)(param_2 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      param_1 = *(undefined8 **)(*unaff_x24 + 0xb8);
    }
    uVar5 = *param_1;
    lVar4 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac6a950);
    FUN_063d4f5c(lVar4,uVar5,*(undefined8 *)PTR_DAT_0ac6a970,0);
                    /* catch() { ... } // from try @ 08e0d6ec with catch @ 08e0d91c
                       try { // try from 08e0d91c to 08f0d98b has its CatchHandler @ 08e0d478 */
                    /* catch() { ... } // from try @ 08e0d668 with catch @ 08e0d920 */
                    /* catch() { ... } // from try @ 08e0d61c with catch @ 08e0d924 */
    plVar2 = (long *)(*(long *)(*unaff_x24 + 0xb8) + 0x10);
    *plVar2 = lVar4;
    thunk_FUN_049ee3d8(plVar2,lVar4);
  }
  uVar5 = thunk_FUN_04983f60(*unaff_x28);
  FUN_06421e50();
  uVar3 = thunk_FUN_04983f60(*unaff_x26);
  FUN_0717ef20(uVar3,lVar4,uVar5,*puVar7);
  uVar5 = thunk_FUN_04983f60(*puVar6);
  FUN_06351420(uVar5,uVar3,*(undefined8 *)puVar1);
  return uVar5;
}


