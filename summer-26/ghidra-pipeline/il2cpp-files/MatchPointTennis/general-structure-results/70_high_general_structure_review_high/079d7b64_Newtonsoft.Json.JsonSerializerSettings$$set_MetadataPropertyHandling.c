/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_MetadataPropertyHandling
ENTRY_POINT: 079d7b64
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_MetadataPropertyHandling(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long lVar6;
  long *unaff_x21;
  
  lVar6 = *unaff_x21;
  lVar5 = *(long *)(lVar6 + 0x38);
  if (lVar5 == 0) {
                    /* try { // try from 079d7b74 to 07ad7b7b has its CatchHandler @ 079d7bec */
    FUN_04482014(lVar6);
    lVar5 = *(long *)(lVar6 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04481fb8();
  }
                    /* try { // try from 079d7b8c to 07ad7b93 has its CatchHandler @ 079d7be8 */
  if (*(int *)(lVar5 + 0xe4) == 0) {
                    /* try { // try from 079d7b94 to 07ad7c17 has its CatchHandler @ 079d7a4c */
    thunk_FUN_044a54b4();
  }
  puVar1 = PTR_DAT_09f21428;
  lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04481fb8();
  }
  puVar2 = PTR_DAT_09f29478;
  *(undefined8 *)(unaff_x19 + 0x18) = **(undefined8 **)(lVar5 + 0xb8);
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x18));
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar3 = FUN_079ca07c();
  uVar4 = thunk_FUN_0448520c(*(undefined8 *)puVar2);
  FUN_079d3cd4(uVar4,uVar3);
  *(undefined8 *)(unaff_x19 + 0x28) = uVar4;
  thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x28),uVar4);
  return;
}


