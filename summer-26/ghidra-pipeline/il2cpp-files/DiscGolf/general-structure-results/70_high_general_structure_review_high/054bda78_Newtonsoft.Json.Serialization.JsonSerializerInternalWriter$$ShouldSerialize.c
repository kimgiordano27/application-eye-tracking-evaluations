/*
FUNCTION_NAME: Newtonsoft.Json.Serialization.JsonSerializerInternalWriter$$ShouldSerialize
ENTRY_POINT: 054bda78
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Newtonsoft_Json_Serialization_JsonSerializerInternalWriter__ShouldSerialize(void)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  int unaff_w20;
  int iVar7;
  long unaff_x21;
  uint unaff_w23;
  int unaff_w24;
  long unaff_x25;
  long *plVar8;
  int unaff_w26;
  
                    /* try { // try from 054bda78 to 055bda7b has its CatchHandler @ 054bdb1c */
  plVar8 = *(long **)(unaff_x25 + 0x540);
  do {
    if (*(int *)(unaff_x21 + 0x18) <= (int)unaff_w23) break;
                    /* try { // try from 054bda88 to 055bda8b has its CatchHandler @ 054bdb08 */
                    /* try { // try from 054bda8c to 055bdabf has its CatchHandler @ 054bdb04 */
    sVar3 = FUN_053674f8();
    lVar4 = *plVar8;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_02df485c(lVar4);
      lVar4 = *plVar8;
    }
    lVar6 = *(long *)(lVar4 + 0xb8);
                    /* try { // try from 054bdac0 to 055bdafb has its CatchHandler @ 054bdb00 */
    if (*(short *)(lVar6 + 10) == sVar3) {
LAB_054bdae8:
      uVar5 = *(uint *)(unaff_x21 + 0x18);
      uVar1 = unaff_w23 + 1;
      if (uVar1 != uVar5) {
                    /* try { // try from 054bdafc to 055bdaff has its CatchHandler @ 054bdb30 */
        if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 054bdac0 with catch @ 054bdb00
                       try { // try from 054bdb00 to 055bdb4b has its CatchHandler @ 054bd8ec */
                    /* catch() { ... } // from try @ 054bda8c with catch @ 054bdb04 */
          thunk_FUN_02df485c(lVar4);
                    /* catch() { ... } // from try @ 054bda88 with catch @ 054bdb08 */
          uVar5 = *(uint *)(unaff_x21 + 0x18);
        }
                    /* catch() { ... } // from try @ 054bd9b4 with catch @ 054bdb0c
                       catch() { ... } // from try @ 054bd9ec with catch @ 054bdb0c */
                    /* catch() { ... } // from try @ 054bda1c with catch @ 054bdb10 */
        if (uVar5 <= unaff_w23) {
LAB_054bdbfc:
                    /* WARNING: Subroutine does not return */
          FUN_02d96868();
        }
                    /* catch() { ... } // from try @ 054bd9d8 with catch @ 054bdb14 */
                    /* catch() { ... } // from try @ 054bda64 with catch @ 054bdb18 */
                    /* catch() { ... } // from try @ 054bda78 with catch @ 054bdb1c */
                    /* catch() { ... } // from try @ 054bd9a0 with catch @ 054bdb20 */
                    /* catch() { ... } // from try @ 054bda74 with catch @ 054bdb24 */
                    /* catch() { ... } // from try @ 054bda70 with catch @ 054bdb28 */
        *(undefined2 *)(unaff_x21 + (long)(int)unaff_w23 * 2 + 0x20) =
             *(undefined2 *)(*(long *)(*plVar8 + 0xb8) + 10);
                    /* catch() { ... } // from try @ 054bd960 with catch @ 054bdb2c */
        unaff_w23 = uVar1;
        iVar7 = unaff_w20;
        if (unaff_w20 < unaff_w26) {
          do {
                    /* catch() { ... } // from try @ 054bda10 with catch @ 054bdb30
                       catch() { ... } // from try @ 054bdafc with catch @ 054bdb30 */
            iVar2 = iVar7 + 1;
            sVar3 = FUN_053674f8();
            lVar4 = *plVar8;
                    /* try { // try from 054bdb4c to 055bdb4f has its CatchHandler @ 054bdb58 */
            if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 054bdb4c with catch @ 054bdb58 */
              thunk_FUN_02df485c(lVar4);
                    /* try { // try from 054bdb5c to 055bdb63 has its CatchHandler @ 054bdb6c */
              lVar4 = *plVar8;
            }
            lVar6 = *(long *)(lVar4 + 0xb8);
                    /* try { // try from 054bdb64 to 055bdb6f has its CatchHandler @ 054bd8ec */
                    /* catch() { ... } // from try @ 054bdb5c with catch @ 054bdb6c */
            if (*(short *)(lVar6 + 10) != sVar3) {
                    /* try { // try from 054bdb70 to 055bdbe3 has its CatchHandler @ 054bdb70
                       catch() { ... } // from try @ 054bdb70 with catch @ 054bdb70
                       catch() { ... } // from try @ 054bdc2c with catch @ 054bdb70
                       catch() { ... } // from try @ 054bdc70 with catch @ 054bdb70
                       catch() { ... } // from try @ 054bdcac with catch @ 054bdb70 */
              if (*(int *)(lVar4 + 0xe4) == 0) {
                thunk_FUN_02df485c(lVar4);
                lVar6 = *(long *)(*plVar8 + 0xb8);
              }
              unaff_w20 = iVar7;
              if (*(short *)(lVar6 + 8) != sVar3) break;
            }
            unaff_w20 = unaff_w26;
            iVar7 = iVar2;
          } while (unaff_w26 != iVar2);
        }
      }
    }
    else {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_02df485c(lVar4);
        lVar4 = *plVar8;
        lVar6 = *(long *)(lVar4 + 0xb8);
      }
      if (*(short *)(lVar6 + 8) == sVar3) goto LAB_054bdae8;
      if (*(uint *)(unaff_x21 + 0x18) <= unaff_w23) goto LAB_054bdbfc;
      *(short *)(unaff_x21 + (long)(int)unaff_w23 * 2 + 0x20) = sVar3;
      unaff_w23 = unaff_w23 + 1;
    }
    unaff_w20 = unaff_w20 + 1;
  } while (unaff_w20 < unaff_w24);
                    /* try { // try from 054bdbe4 to 055bdbff has its CatchHandler @ 054bdc74 */
  FUN_0536a284(0);
  return;
}


