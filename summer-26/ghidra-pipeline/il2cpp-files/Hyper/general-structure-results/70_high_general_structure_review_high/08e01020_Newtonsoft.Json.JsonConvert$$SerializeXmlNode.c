/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$SerializeXmlNode
ENTRY_POINT: 08e01020
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x08e010cc) */

void Newtonsoft_Json_JsonConvert__SerializeXmlNode(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *unaff_x21;
  long *plVar5;
  long in_stack_00000018;
  
  lVar2 = FUN_08dc2b6c();
  puVar1 = PTR_DAT_0ac6a080;
  if (lVar2 == 0) {
    lVar3 = 0;
    plVar5 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
    *plVar5 = 0;
LAB_08e01090:
    thunk_FUN_049ee3d8(plVar5,lVar3);
    if (in_stack_00000018 != 0) {
      FUN_08de4a2c(in_stack_00000018,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar4 = *(undefined8 *)PTR_DAT_0ac6a080;
  lVar3 = thunk_FUN_04983e64(lVar2,uVar4);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)puVar1;
    plVar5 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 0x10);
    *plVar5 = lVar3;
    lVar3 = thunk_FUN_04983e64(lVar2,uVar4);
                    /* try { // try from 08e0106c to 08f0107b has its CatchHandler @ 08e010ec */
    if (lVar3 != 0) goto LAB_08e01090;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 08e0107c to 08f01117 has its CatchHandler @ 08e00fb8 */
  FUN_0494850c(lVar2,uVar4);
}


