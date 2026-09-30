/*
FUNCTION_NAME: OVREyeGaze$$OnDisable
ENTRY_POINT: 0332fa64
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 71
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_1;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnDisable(void)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  *(undefined1 *)(unaff_x21 + 0x462) = 1;
  if (unaff_x19 == (long *)0x0) {
    thunk_FUN_01dd295c(StringLiteral_1111);
    uVar3 = thunk_FUN_01de27b8();
    uVar4 = thunk_FUN_01dd295c(StringLiteral_6698);
    FUN_032870b8(uVar3,uVar4,0);
  }
  else {
                    /* try { // try from 0332fa70 to 0342fa73 has its CatchHandler @ 0332faa0 */
                    /* try { // try from 0332fa74 to 0342fa77 has its CatchHandler @ 0332fa94 */
    if (*(char *)(unaff_x20 + 0x55) == '\0') {
      FUN_03328964();
      return;
    }
                    /* try { // try from 0332fa78 to 0342fa7b has its CatchHandler @ 0332faa0 */
                    /* try { // try from 0332fa7c to 0342fa7f has its CatchHandler @ 0332f780 */
                    /* try { // try from 0332fa80 to 0342fa83 has its CatchHandler @ 0332fa8c */
    lVar6 = *unaff_x19;
                    /* try { // try from 0332fa84 to 0342fabb has its CatchHandler @ 0332f780 */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 0332fa80 with catch @ 0332fa8c
                        */
    bVar1 = *(byte *)(*(long *)StringLiteral_6796 + 0x130);
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 0332f984 with catch @ 0332fa90
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 0332fa74 with catch @ 0332fa94
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 0332f9e8 with catch @ 0332fa98
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 0332f8a8 with catch @ 0332fa9c
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 0332fa70 with catch @ 0332faa0
                       catch(type#1 @ 03fad958) { ... } // from try @ 0332fa78 with catch @ 0332faa0
                        */
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 0332f8e8 with catch @ 0332faa4
                        */
                    /* try { // try from 0332fabc to 0342fabf has its CatchHandler @ 0332facc */
                    /* catch() { ... } // from try @ 0332fabc with catch @ 0332facc */
    if ((((bVar1 <= *(byte *)(lVar6 + 0x130)) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)StringLiteral_6796))
        && (plVar2 = (long *)(**(code **)(lVar6 + 0x238))(), plVar2 != (long *)0x0)) &&
       (*plVar2 == *(long *)StringLiteral_6802)) {
      FUN_03330890();
      return;
    }
                    /* try { // try from 0332fb04 to 0342fb2b has its CatchHandler @ 0332fb40 */
    thunk_FUN_01dd295c(StringLiteral_1149);
    uVar3 = thunk_FUN_01de27b8();
    uVar4 = thunk_FUN_01dd295c(StringLiteral_6797);
                    /* try { // try from 0332fb2c to 0342fb37 has its CatchHandler @ 0332f780 */
    uVar5 = thunk_FUN_01dd295c(StringLiteral_6698);
                    /* try { // try from 0332fb38 to 0342fb3f has its CatchHandler @ 0332fb40 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0332fb04 with catch @ 0332fb40
                       catch(type#2 @ 00000000) { ... } // from try @ 0332fb38 with catch @ 0332fb40
                        */
    FUN_03287130(uVar3,uVar4,uVar5,0);
  }
  uVar4 = thunk_FUN_01dd295c(StringLiteral_6806);
                    /* WARNING: Subroutine does not return */
  FUN_01d7da3c(uVar3,uVar4);
}


