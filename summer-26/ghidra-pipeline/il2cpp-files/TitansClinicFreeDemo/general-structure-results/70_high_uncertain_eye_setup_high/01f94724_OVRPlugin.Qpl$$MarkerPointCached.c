/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerPointCached
ENTRY_POINT: 01f94724
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerPointCached(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long *plVar6;
  long unaff_x23;
  long lVar7;
  ulong unaff_x24;
  long lVar8;
  long unaff_x25;
  long *unaff_x26;
  
  do {
                    /* try { // try from 01f94728 to 0209477b has its CatchHandler @ 01f945c4 */
    *unaff_x26 = unaff_x23;
    thunk_FUN_01286abc(unaff_x22,unaff_x23);
    uVar4 = *(uint *)(unaff_x19 + 3);
    uVar5 = (ulong)uVar4;
    unaff_x24 = unaff_x24 + 1;
    if ((long)(int)uVar4 <= (long)unaff_x24) {
      if ((int)uVar4 < 1) {
        return;
      }
      if (unaff_x20 == 0) {
LAB_01f947ec:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      lVar8 = 0;
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f946f4 with catch @ 01f9475c
                        */
      plVar6 = unaff_x19 + 4;
      goto LAB_01f94760;
    }
    if (uVar5 <= unaff_x24) break;
    if (unaff_x21 == (long *)0x0) goto LAB_01f947ec;
    unaff_x23 = *(long *)(unaff_x25 + unaff_x24 * 8);
    if ((unaff_x23 != 0) &&
       (lVar8 = thunk_FUN_0124baac(unaff_x23,*(undefined8 *)(*unaff_x21 + 0x40)), lVar8 == 0))
    goto LAB_01f947f0;
    unaff_x22 = unaff_x26 + 1;
    unaff_x26 = unaff_x26 + 1;
  } while (unaff_x24 < *(uint *)(unaff_x21 + 3));
LAB_01f947e8:
                    /* WARNING: Subroutine does not return */
  FUN_01230ca8();
LAB_01f94760:
  uVar4 = (uint)uVar5;
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f946b8 with catch @ 01f94760
                        */
                    /* catch(type#1 @ 026574d8) { ... } // from try @ 01f946a4 with catch @ 01f94764
                        */
  if ((*(uint *)(unaff_x20 + 0x18) <= (uint)lVar8) ||
     (uVar1 = *(uint *)(unaff_x20 + 0x20 + lVar8 * 4), *(uint *)(unaff_x21 + 3) <= uVar1))
  goto LAB_01f947e8;
                    /* try { // try from 01f9477c to 0209477f has its CatchHandler @ 01f947a0 */
                    /* try { // try from 01f94780 to 020947a7 has its CatchHandler @ 01f945c4 */
  lVar7 = unaff_x21[(long)(int)uVar1 + 4];
  if (lVar7 != 0) {
    lVar2 = thunk_FUN_0124baac(lVar7,*(undefined8 *)(*unaff_x19 + 0x40));
    if (lVar2 == 0) {
LAB_01f947f0:
      uVar3 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
      FUN_01230b78(uVar3,0);
    }
    uVar4 = (uint)unaff_x19[3];
  }
                    /* catch() { ... } // from try @ 01f9477c with catch @ 01f947a0 */
  if (uVar4 <= (uint)lVar8) goto LAB_01f947e8;
                    /* try { // try from 01f947a8 to 020947af has its CatchHandler @ 01f947c4 */
                    /* try { // try from 01f947b0 to 020947bb has its CatchHandler @ 01f945c4 */
  *plVar6 = lVar7;
  thunk_FUN_01286abc(plVar6,lVar7);
                    /* try { // try from 01f947bc to 020947c3 has its CatchHandler @ 01f947c4 */
  uVar5 = unaff_x19[3];
  lVar8 = lVar8 + 1;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 01f947a8 with catch @ 01f947c4
                       catch(type#2 @ 00000000) { ... } // from try @ 01f947bc with catch @ 01f947c4
                        */
  plVar6 = plVar6 + 1;
  if ((int)uVar5 <= (int)lVar8) {
                    /* try { // try from 01f947e0 to 02094883 has its CatchHandler @ 01f947e0
                       catch() { ... } // from try @ 01f947e0 with catch @ 01f947e0
                       catch() { ... } // from try @ 01f94960 with catch @ 01f947e0
                       catch() { ... } // from try @ 01f94a68 with catch @ 01f947e0
                       catch() { ... } // from try @ 01f94ac8 with catch @ 01f947e0 */
    return;
  }
  goto LAB_01f94760;
}


