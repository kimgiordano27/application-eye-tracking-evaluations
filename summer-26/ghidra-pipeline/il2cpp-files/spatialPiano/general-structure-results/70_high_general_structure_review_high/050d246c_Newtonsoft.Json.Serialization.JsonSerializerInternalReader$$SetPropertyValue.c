/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalReader$$SetPropertyValue
ENTRY_POINT: 050d246c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


uint Newtonsoft_Json_Serialization_JsonSerializerInternalReader__SetPropertyValue
               (undefined1 param_1 [16])

{
  bool in_ZR;
  bool in_CY;
  uint uVar1;
  ulong uVar2;
  undefined4 *unaff_x19;
  uint unaff_w20;
  long unaff_x24;
  long unaff_x25;
  long *plVar3;
  undefined1 uStack0000000000000008;
  undefined1 uStack000000000000000c;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000050;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000070;
  undefined2 uStack0000000000000078;
  undefined6 uStack000000000000007a;
  undefined2 uStack0000000000000080;
  long in_stack_00000098;
  
  uStack0000000000000010 = param_1._0_8_;
  uStack0000000000000080 = param_1._6_2_;
  uStack0000000000000078 = param_1._8_2_;
  uStack000000000000007a = param_1._10_6_;
  plVar3 = *(long **)(unaff_x25 + 0xd90);
                    /* try { // try from 050d2484 to 051d248b has its CatchHandler @ 050d2524 */
  uStack000000000000000c = 0;
  uStack0000000000000008 = 0;
                    /* try { // try from 050d248c to 051d248f has its CatchHandler @ 050d251c */
  uStack0000000000000020 = uStack0000000000000010;
  uStack0000000000000030 = uStack0000000000000010;
  uStack0000000000000040 = uStack0000000000000010;
  uStack0000000000000050 = uStack0000000000000010;
  uStack0000000000000060 = uStack0000000000000010;
  uStack0000000000000070 = uStack0000000000000010;
  if (in_CY && !in_ZR) {
    *unaff_x19 = 0;
    if ((unaff_w20 >> 9 & 1) == 0) {
                    /* try { // try from 050d24cc to 051d24d7 has its CatchHandler @ 050d2524 */
                    /* try { // try from 050d24d8 to 051d24e3 has its CatchHandler @ 050d251c */
                    /* try { // try from 050d24e4 to 051d24e7 has its CatchHandler @ 050d24f8 */
                    /* catch() { ... } // from try @ 050d24c0 with catch @ 050d24e8
                       try { // try from 050d24e8 to 051d2543 has its CatchHandler @ 050d2258 */
      if (*(int *)(*plVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 050d2344 with catch @ 050d24ec */
        thunk_FUN_02f6670c();
      }
                    /* catch() { ... } // from try @ 050d230c with catch @ 050d24f0 */
                    /* catch() { ... } // from try @ 050d24ac with catch @ 050d24f4 */
                    /* catch() { ... } // from try @ 050d22f4 with catch @ 050d24f8
                       catch() { ... } // from try @ 050d24e4 with catch @ 050d24f8 */
                    /* catch() { ... } // from try @ 050d23bc with catch @ 050d24fc */
                    /* catch() { ... } // from try @ 050d2360 with catch @ 050d2500 */
                    /* catch() { ... } // from try @ 050d2314 with catch @ 050d2504 */
                    /* catch() { ... } // from try @ 050d22d8 with catch @ 050d2508 */
      uVar2 = FUN_050e1db8();
                    /* catch() { ... } // from try @ 050d2440 with catch @ 050d250c */
                    /* catch() { ... } // from try @ 050d2410 with catch @ 050d2510
                       catch() { ... } // from try @ 050d2490 with catch @ 050d2510 */
      uVar1 = 0;
      if ((uVar2 & 1) != 0) {
                    /* catch() { ... } // from try @ 050d23a0 with catch @ 050d251c
                       catch() { ... } // from try @ 050d248c with catch @ 050d251c
                       catch() { ... } // from try @ 050d24d8 with catch @ 050d251c */
                    /* catch() { ... } // from try @ 050d23f8 with catch @ 050d2520
                       catch() { ... } // from try @ 050d2498 with catch @ 050d2520 */
        if (*(int *)(*plVar3 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 050d237c with catch @ 050d2524
                       catch() { ... } // from try @ 050d2484 with catch @ 050d2524
                       catch() { ... } // from try @ 050d24cc with catch @ 050d2524 */
          thunk_FUN_02f6670c();
        }
        uVar1 = FUN_050def98(&stack0x00000010);
      }
    }
    else {
      uStack0000000000000008 = 0;
                    /* try { // try from 050d2544 to 051d2547 has its CatchHandler @ 050d255c */
      if (*(int *)(*plVar3 + 0xe4) == 0) {
        thunk_FUN_02f6670c();
      }
                    /* catch() { ... } // from try @ 050d2544 with catch @ 050d255c */
      uVar1 = FUN_050df8d4();
    }
  }
  else {
                    /* try { // try from 050d2490 to 051d2497 has its CatchHandler @ 050d2510 */
    uStack000000000000000c = 0;
                    /* try { // try from 050d2498 to 051d249f has its CatchHandler @ 050d2520 */
    if (*(int *)(*plVar3 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
    }
                    /* try { // try from 050d24ac to 051d24bb has its CatchHandler @ 050d24f4 */
    uVar1 = Newtonsoft_Json_Serialization_ReflectionAttributeProvider__GetAttributes();
                    /* try { // try from 050d24c0 to 051d24cb has its CatchHandler @ 050d24e8 */
  }
                    /* try { // try from 050d2564 to 051d256b has its CatchHandler @ 050d26c4 */
                    /* try { // try from 050d256c to 051d257f has its CatchHandler @ 050d2258 */
  if (*(long *)(unaff_x24 + 0x28) == in_stack_00000098) {
                    /* try { // try from 050d2580 to 051d2597 has its CatchHandler @ 050d2628 */
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


