/*
FUNCTION_NAME: OVRPlugin$$LoadRenderModel
ENTRY_POINT: 07c8b6a8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__LoadRenderModel(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  uint unaff_w20;
  long unaff_x21;
  undefined8 uVar4;
  
  FUN_07c8b7b8();
  lVar2 = *(long *)(unaff_x19 + 0x30);
  if (lVar2 != 0) {
    if (*(uint *)(lVar2 + 0x18) <= unaff_w20) {
LAB_07c8b7b4:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 07c8b798 with catch @ 07c8b7b4
                       catch(type#2 @ 00000000) { ... } // from try @ 07c8b7ac with catch @ 07c8b7b4
                        */
      FUN_04447e4c();
    }
    lVar3 = *(long *)(lVar2 + unaff_x21 * 8 + 0x20);
    if (lVar3 != 0) {
      if (*(char *)(lVar3 + 0x2c) == '\0') {
        uVar4 = 0x7f800000;
      }
      else {
                    /* try { // try from 07c8b6d8 to 07d8b6df has its CatchHandler @ 07c8b754 */
        uVar4 = FUN_07c8bdd0(*(undefined4 *)(lVar3 + 0x18),*(undefined4 *)(lVar3 + 0x1c),
                             *(undefined4 *)(lVar3 + 0x20));
        lVar2 = *(long *)(unaff_x19 + 0x30);
        if (lVar2 == 0) goto LAB_07c8b7b0;
      }
                    /* try { // try from 07c8b708 to 07d8b733 has its CatchHandler @ 07c8b5dc */
      if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_07c8b7b4;
      lVar2 = *(long *)(lVar2 + unaff_x21 * 8 + 0x20);
      if (lVar2 != 0) {
        uVar1 = FUN_07c8bf18(*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
                             *(undefined4 *)(lVar2 + 0x20));
        if ((uVar1 & 1) == 0) {
LAB_07c8b768:
                    /* try { // try from 07c8b76c to 07d8b76f has its CatchHandler @ 07c8b790 */
                    /* try { // try from 07c8b770 to 07d8b797 has its CatchHandler @ 07c8b5dc */
          uVar1 = (ulong)(*(char *)(unaff_x19 + 0x10) == '\0');
                    /* catch() { ... } // from try @ 07c8b76c with catch @ 07c8b790 */
                    /* try { // try from 07c8b798 to 07d8b79f has its CatchHandler @ 07c8b7b4 */
                    /* try { // try from 07c8b7a0 to 07d8b7ab has its CatchHandler @ 07c8b5dc */
                    /* try { // try from 07c8b7ac to 07d8b7b3 has its CatchHandler @ 07c8b7b4 */
          FUN_07c8bd1c(uVar4,*(undefined4 *)(&DAT_01c758f0 + uVar1 * 4),
                       *(undefined4 *)(&DAT_01c751a8 + uVar1 * 4),DAT_01c75e4c);
          return;
        }
        lVar2 = *(long *)(unaff_x19 + 0x30);
                    /* try { // try from 07c8b734 to 07d8b737 has its CatchHandler @ 07c8b74c */
        if (lVar2 != 0) {
                    /* try { // try from 07c8b738 to 07d8b76b has its CatchHandler @ 07c8b5dc */
          if (*(uint *)(lVar2 + 0x18) <= unaff_w20) goto LAB_07c8b7b4;
          lVar2 = *(long *)(lVar2 + unaff_x21 * 8 + 0x20);
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07c8b734 with catch @ 07c8b74c
                        */
          if (lVar2 != 0) {
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07c8b6f4 with catch @ 07c8b750
                        */
                    /* catch(type#1 @ 0991e038) { ... } // from try @ 07c8b6d8 with catch @ 07c8b754
                        */
            uVar4 = FUN_07c8bdd0(*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
                                 *(undefined4 *)(lVar2 + 0x20));
            goto LAB_07c8b768;
          }
        }
      }
    }
  }
LAB_07c8b7b0:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


