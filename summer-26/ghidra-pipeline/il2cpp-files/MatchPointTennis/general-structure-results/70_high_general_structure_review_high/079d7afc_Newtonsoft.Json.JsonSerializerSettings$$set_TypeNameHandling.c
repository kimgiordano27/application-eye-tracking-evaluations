/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$set_TypeNameHandling
ENTRY_POINT: 079d7afc
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__set_TypeNameHandling(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  long *unaff_x21;
  
  FUN_04447ba8();
  *(undefined1 *)(unaff_x20 + 0xd54) = 1;
  lVar6 = *unaff_x21;
  lVar5 = *(long *)(lVar6 + 0x38);
  if (lVar5 == 0) {
                    /* try { // try from 079d7b14 to 07ad7b1b has its CatchHandler @ 079d7bfc */
    FUN_04482014(lVar6);
    lVar5 = *(long *)(lVar6 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
                    /* try { // try from 079d7b2c to 07ad7b33 has its CatchHandler @ 079d7bf8 */
    lVar5 = FUN_04481fb8();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  lVar5 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
                    /* try { // try from 079d7b44 to 07ad7b4b has its CatchHandler @ 079d7bf4 */
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04481fb8();
  }
                    /* try { // try from 079d7b5c to 07ad7b63 has its CatchHandler @ 079d7bf0 */
  *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar5 + 0xb8);
  thunk_FUN_044bb4b4();
  lVar6 = *unaff_x21;
  lVar5 = *(long *)(lVar6 + 0x38);
  if (lVar5 == 0) {
    FUN_04482014(lVar6);
    lVar5 = *(long *)(lVar6 + 0x38);
  }
  lVar5 = *(long *)(lVar5 + 0x10);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_04481fb8();
  }
  if (*(int *)(lVar5 + 0xe4) == 0) {
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


