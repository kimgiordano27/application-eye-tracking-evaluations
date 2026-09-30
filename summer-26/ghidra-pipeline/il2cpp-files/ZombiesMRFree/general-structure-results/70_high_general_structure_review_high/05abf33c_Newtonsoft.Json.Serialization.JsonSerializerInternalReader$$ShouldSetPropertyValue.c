/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$ShouldSetPropertyValue
ENTRY_POINT: 05abf33c
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalReader__ShouldSetPropertyValue(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long lVar6;
  long *unaff_x21;
  
  lVar3 = FUN_02feb2c4();
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02feb2c4();
  }
  *(undefined8 *)(unaff_x19 + 0x10) = **(undefined8 **)(lVar3 + 0xb8);
  thunk_FUN_03048534();
  lVar6 = *unaff_x21;
  lVar3 = *(long *)(lVar6 + 0x38);
  if (lVar3 == 0) {
                    /* try { // try from 05abf384 to 05bbf3f3 has its CatchHandler @ 05abf034 */
    FUN_02feb320(lVar6);
    lVar3 = *(long *)(lVar6 + 0x38);
  }
  lVar3 = *(long *)(lVar3 + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02feb2c4();
  }
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  puVar1 = PTR_DAT_06f6dbb8;
  lVar3 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_02feb2c4();
  }
  puVar2 = PTR_DAT_06f9b3c0;
  *(undefined8 *)(unaff_x19 + 0x18) = **(undefined8 **)(lVar3 + 0xb8);
  thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x18));
  *(undefined4 *)(unaff_x19 + 0x20) = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    /* try { // try from 05abf3f4 to 05bbf3fb has its CatchHandler @ 05abf434 */
    thunk_FUN_02fdcff0();
  }
                    /* try { // try from 05abf3fc to 05bbf407 has its CatchHandler @ 05abf034 */
  uVar4 = FUN_05aa33a0(0);
                    /* try { // try from 05abf408 to 05bbf40b has its CatchHandler @ 05abf420 */
                    /* try { // try from 05abf40c to 05bbf40f has its CatchHandler @ 05abf418 */
  uVar5 = thunk_FUN_0301080c(*(undefined8 *)puVar2);
                    /* try { // try from 05abf410 to 05bbf417 has its CatchHandler @ 05abf428 */
                    /* catch() { ... } // from try @ 05abf40c with catch @ 05abf418
                       try { // try from 05abf418 to 05bbf44f has its CatchHandler @ 05abf034 */
  FUN_05abb3d8(uVar5,uVar4);
                    /* catch() { ... } // from try @ 05abf15c with catch @ 05abf41c */
  *(undefined8 *)(unaff_x19 + 0x28) = uVar5;
                    /* catch() { ... } // from try @ 05abf408 with catch @ 05abf420 */
                    /* catch() { ... } // from try @ 05abf124 with catch @ 05abf424 */
                    /* catch() { ... } // from try @ 05abf31c with catch @ 05abf428
                       catch() { ... } // from try @ 05abf410 with catch @ 05abf428 */
                    /* catch() { ... } // from try @ 05abf2ec with catch @ 05abf430 */
  thunk_FUN_03048534((undefined8 *)(unaff_x19 + 0x28),uVar5);
  return;
}


