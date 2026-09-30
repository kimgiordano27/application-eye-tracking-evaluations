/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerProxy$$.ctor
ENTRY_POINT: 05908644
PROGRAM: waitwhat-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


undefined8 Newtonsoft_Json_Serialization_JsonSerializerProxy___ctor(long param_1)

{
  uint uVar1;
  int in_w9;
  long in_x10;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w22;
  undefined8 *unaff_x23;
  uint unaff_w24;
  uint uVar2;
  int unaff_w25;
  long lVar3;
  long unaff_x26;
  
  *(undefined2 *)(unaff_x20 + (long)unaff_w25 * 2) = *(undefined2 *)(in_x10 + 10);
                    /* try { // try from 05908650 to 05a08653 has its CatchHandler @ 0590866c */
                    /* try { // try from 05908654 to 05a08657 has its CatchHandler @ 05908664 */
                    /* try { // try from 05908658 to 05a0865b has its CatchHandler @ 05908660 */
  if (unaff_w24 == 0) {
    param_1 = unaff_x26;
  }
                    /* catch() { ... } // from try @ 0590861c with catch @ 0590865c */
                    /* catch() { ... } // from try @ 05908658 with catch @ 05908660 */
  uVar1 = in_w9 + (unaff_w24 ^ 1);
                    /* catch() { ... } // from try @ 05908654 with catch @ 05908664 */
                    /* catch() { ... } // from try @ 05908638 with catch @ 05908668 */
  uVar2 = *(uint *)(param_1 + 8);
                    /* catch() { ... } // from try @ 05908650 with catch @ 0590866c */
  lVar3 = *(long *)PTR_DAT_070fbe70;
  if (uVar2 < uVar1) {
    FUN_05950030(0);
    uVar2 = *(uint *)(param_1 + 8);
  }
  if ((*(ushort *)(*(long *)(lVar3 + 0x20) + 0x135) & 1) == 0) {
    FUN_031c09d4();
  }
  FUN_049f4510(&stack0x00000010,unaff_x20 + (long)(int)uVar1 * 2,uVar2 - uVar1,*unaff_x23);
  *unaff_x19 = unaff_w22;
                    /* try { // try from 059086b4 to 05a086b7 has its CatchHandler @ 05908884 */
  return 1;
}


