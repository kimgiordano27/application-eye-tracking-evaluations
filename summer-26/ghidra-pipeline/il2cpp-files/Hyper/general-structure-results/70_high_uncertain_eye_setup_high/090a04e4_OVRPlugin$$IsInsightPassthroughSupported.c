/*
FUNCTION_NAME: OVRPlugin$$IsInsightPassthroughSupported
ENTRY_POINT: 090a04e4
PROGRAM: Hyper-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin__IsInsightPassthroughSupported(void)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long lVar6;
  bool bVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uStack0000000000000040;
  undefined4 uStack000000000000009c;
  
  puVar2 = PTR_DAT_0ac56b50;
  uStack0000000000000040 = 0;
  uStack000000000000009c = 0;
  if ((unaff_x20 != 0) && (lVar6 = *(long *)(unaff_x20 + 0x138), lVar6 != 0)) {
    uVar1 = *(uint *)(lVar6 + 0x18);
    bVar7 = 0 < (int)uVar1;
    if (0 < (int)uVar1) {
      uVar8 = 0;
                    /* try { // try from 090a0514 to 091a051b has its CatchHandler @ 090a0564 */
      do {
                    /* try { // try from 090a051c to 091a051f has its CatchHandler @ 090a0560 */
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_04948194();
        }
                    /* try { // try from 090a0520 to 091a0523 has its CatchHandler @ 090a0554 */
                    /* try { // try from 090a0524 to 091a0527 has its CatchHandler @ 090a0550 */
        lVar5 = *(long *)(lVar6 + (long)(int)uVar8 * 8 + 0x20);
                    /* try { // try from 090a0528 to 091a052b has its CatchHandler @ 090a054c */
        if (lVar5 == 0) goto LAB_090a0678;
                    /* try { // try from 090a052c to 091a052f has its CatchHandler @ 090a0548 */
                    /* try { // try from 090a0530 to 091a0533 has its CatchHandler @ 090a029c */
                    /* try { // try from 090a0534 to 091a0537 has its CatchHandler @ 090a0540 */
        uVar3 = UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesLength__UpdateValues
                          (lVar5,0);
                    /* try { // try from 090a0538 to 091a053b has its CatchHandler @ 090a053c */
        if ((uVar3 & 1) != 0) {
                    /* catch() { ... } // from try @ 090a0538 with catch @ 090a053c
                       try { // try from 090a053c to 091a057f has its CatchHandler @ 090a029c */
                    /* catch() { ... } // from try @ 090a0534 with catch @ 090a0540 */
                    /* catch() { ... } // from try @ 090a049c with catch @ 090a0544 */
                    /* catch() { ... } // from try @ 090a052c with catch @ 090a0548 */
                    /* catch() { ... } // from try @ 090a0528 with catch @ 090a054c */
          if ((unaff_x19 == 0) || (lVar4 = FUN_0a17834c(), lVar4 == 0)) goto LAB_090a0678;
                    /* catch() { ... } // from try @ 090a0524 with catch @ 090a0550 */
                    /* catch() { ... } // from try @ 090a0520 with catch @ 090a0554 */
          uVar9 = FUN_0a18a1a0(lVar4,0);
                    /* catch() { ... } // from try @ 090a03fc with catch @ 090a0558 */
                    /* catch() { ... } // from try @ 090a03e4 with catch @ 090a055c */
                    /* catch() { ... } // from try @ 090a051c with catch @ 090a0560 */
                    /* catch() { ... } // from try @ 090a0514 with catch @ 090a0564 */
          lVar4 = FUN_0a17834c();
          if (lVar4 == 0) goto LAB_090a0678;
          FUN_0a1884ac(lVar4,0);
                    /* try { // try from 090a0580 to 091a0583 has its CatchHandler @ 090a05c4 */
                    /* try { // try from 090a0584 to 091a05c7 has its CatchHandler @ 090a029c */
          lVar4 = FUN_0a17834c(lVar5,0);
          if (lVar4 == 0) goto LAB_090a0678;
          FUN_0a18a1a0(lVar4,0);
          lVar5 = FUN_0a17834c(lVar5,0);
                    /* catch() { ... } // from try @ 090a0580 with catch @ 090a05c4 */
          if (lVar5 == 0) goto LAB_090a0678;
                    /* try { // try from 090a05c8 to 091a05cf has its CatchHandler @ 090a05d8 */
          FUN_0a1884ac(lVar5,0);
                    /* try { // try from 090a05d0 to 091a05db has its CatchHandler @ 090a029c */
                    /* catch() { ... } // from try @ 090a05c8 with catch @ 090a05d8 */
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_049a583c();
          }
          uVar3 = FUN_0a1f44cc(uVar9);
          if ((uVar3 & 1) != 0) {
            return bVar7;
          }
        }
        uVar1 = *(uint *)(lVar6 + 0x18);
        uVar8 = uVar8 + 1;
        bVar7 = (int)uVar8 < (int)uVar1;
      } while ((int)uVar8 < (int)uVar1);
    }
    return bVar7;
  }
LAB_090a0678:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


