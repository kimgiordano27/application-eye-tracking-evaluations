/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.LayerMask_DirectConverter$$DoSerialize
ENTRY_POINT: 064596c0
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_VisualScripting_FullSerializer_LayerMask_DirectConverter__DoSerialize(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x19;
  long *plVar3;
  undefined8 *unaff_x25;
  undefined8 uStack0000000000000000;
  
                    /* try { // try from 064596d8 to 065596df has its CatchHandler @ 06459778 */
  uStack0000000000000000 = 0;
  lVar1 = FUN_060c3e24();
  plVar3 = (long *)(unaff_x19 + 0x58);
  *plVar3 = lVar1;
  thunk_FUN_02f411dc(plVar3,lVar1);
                    /* try { // try from 064596f8 to 06559723 has its CatchHandler @ 06459774 */
  lVar1 = *plVar3;
  uVar2 = thunk_FUN_02ef1808(*unaff_x25);
  FUN_04ced988();
  if (lVar1 != 0) {
                    /* try { // try from 06459724 to 0655974b has its CatchHandler @ 0645950c */
    FUN_060b0564(lVar1,uVar2,0);
                    /* try { // try from 0645974c to 0655974f has its CatchHandler @ 06459770 */
                    /* try { // try from 06459750 to 06559753 has its CatchHandler @ 06459784 */
                    /* try { // try from 06459754 to 06559757 has its CatchHandler @ 06459780 */
                    /* try { // try from 06459758 to 0655975b has its CatchHandler @ 0645977c */
                    /* try { // try from 0645975c to 0655975f has its CatchHandler @ 06459778 */
    uStack0000000000000000 = 0;
                    /* catch() { ... } // from try @ 06459698 with catch @ 06459760
                       try { // try from 06459760 to 0655979b has its CatchHandler @ 0645950c */
    uVar2 = FUN_060c3e24();
                    /* catch() { ... } // from try @ 0645961c with catch @ 06459764 */
                    /* catch() { ... } // from try @ 064595e4 with catch @ 06459768 */
                    /* catch() { ... } // from try @ 064595d0 with catch @ 0645976c */
    *(undefined8 *)(unaff_x19 + 0x60) = uVar2;
                    /* catch() { ... } // from try @ 0645974c with catch @ 06459770 */
    thunk_FUN_02f411dc();
                    /* catch() { ... } // from try @ 064596f8 with catch @ 06459774 */
                    /* catch() { ... } // from try @ 064596d8 with catch @ 06459778
                       catch() { ... } // from try @ 0645975c with catch @ 06459778 */
                    /* catch() { ... } // from try @ 064596b4 with catch @ 0645977c
                       catch() { ... } // from try @ 06459758 with catch @ 0645977c */
                    /* catch() { ... } // from try @ 0645966c with catch @ 06459780
                       catch() { ... } // from try @ 06459754 with catch @ 06459780 */
                    /* catch() { ... } // from try @ 0645962c with catch @ 06459784
                       catch() { ... } // from try @ 06459750 with catch @ 06459784 */
    uStack0000000000000000 = 0;
    uVar2 = FUN_060c3e24();
    *(undefined8 *)(unaff_x19 + 0x68) = uVar2;
    thunk_FUN_02f411dc((undefined8 *)(unaff_x19 + 0x68),uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


