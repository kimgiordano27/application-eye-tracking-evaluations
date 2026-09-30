/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetAppMonoscopic
ENTRY_POINT: 01f96504
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetAppMonoscopic(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  int in_w8;
  long *unaff_x19;
  long unaff_x20;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *unaff_x23;
  uint uVar9;
  
  puVar3 = PTR_DAT_027b3650;
  if (in_w8 == 0) {
    if ((int)unaff_x23[3] <= *(int *)(unaff_x20 + 0x18)) {
      return;
    }
    lVar5 = FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
    FUN_01f89ca0(*unaff_x19,0,lVar5,0,*(undefined4 *)(unaff_x20 + 0x18),0);
    *unaff_x19 = lVar5;
  }
  else {
    iVar1 = (int)unaff_x23[3];
    uVar2 = iVar1 - 1;
    if (*(int *)(unaff_x20 + 0x18) == iVar1) {
      if (iVar1 == 0) goto LAB_01f9658c;
      unaff_x19 = unaff_x23 + (long)(int)uVar2 + 4;
                    /* try { // try from 01f96524 to 02096527 has its CatchHandler @ 01f965b4 */
      lVar5 = *unaff_x19;
                    /* try { // try from 01f96528 to 0209652f has its CatchHandler @ 01f965b0 */
      if (lVar5 == 0) goto LAB_01f96724;
                    /* try { // try from 01f96530 to 02096533 has its CatchHandler @ 01f965a8 */
                    /* try { // try from 01f96534 to 02096537 has its CatchHandler @ 01f9658c */
                    /* try { // try from 01f96538 to 0209653b has its CatchHandler @ 01f96584 */
      uVar7 = *(undefined8 *)PTR_DAT_027b3650;
                    /* try { // try from 01f9653c to 0209653f has its CatchHandler @ 01f9657c */
                    /* try { // try from 01f96540 to 02096543 has its CatchHandler @ 01f96578 */
      lVar4 = thunk_FUN_0124baac(lVar5,uVar7);
                    /* try { // try from 01f96544 to 0209654f has its CatchHandler @ 01f960e4 */
      if (lVar4 == 0) {
LAB_01f96748:
                    /* WARNING: Subroutine does not return */
        FUN_01230f60(lVar5,uVar7);
      }
      uVar7 = *(undefined8 *)puVar3;
                    /* try { // try from 01f96550 to 02096553 has its CatchHandler @ 01f96568 */
                    /* try { // try from 01f96554 to 02096557 has its CatchHandler @ 01f96560 */
      lVar4 = thunk_FUN_0124baac(lVar5,uVar7);
                    /* try { // try from 01f96558 to 0209655b has its CatchHandler @ 01f96570 */
      if (lVar4 == 0) goto LAB_01f96748;
                    /* catch() { ... } // from try @ 01f964b4 with catch @ 01f9655c
                       try { // try from 01f9655c to 020965cb has its CatchHandler @ 01f960e4 */
                    /* catch() { ... } // from try @ 01f96554 with catch @ 01f96560 */
      if (*(int *)(lVar4 + 0x18) == 0) {
LAB_01f9658c:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
                    /* catch() { ... } // from try @ 01f962f0 with catch @ 01f96564 */
      plVar6 = *(long **)(lVar4 + 0x20);
                    /* catch() { ... } // from try @ 01f96550 with catch @ 01f96568 */
                    /* catch() { ... } // from try @ 01f962bc with catch @ 01f9656c */
                    /* catch() { ... } // from try @ 01f964e0 with catch @ 01f96570
                       catch() { ... } // from try @ 01f96558 with catch @ 01f96570 */
                    /* catch() { ... } // from try @ 01f962d0 with catch @ 01f96574 */
                    /* catch() { ... } // from try @ 01f96540 with catch @ 01f96578 */
                    /* catch() { ... } // from try @ 01f9653c with catch @ 01f9657c */
      if ((plVar6 != (long *)0x0) &&
         (lVar5 = thunk_FUN_0124baac(plVar6,*(undefined8 *)(*unaff_x23 + 0x40)), lVar5 == 0)) {
LAB_01f96734:
        uVar7 = thunk_FUN_012668ac();
                    /* WARNING: Subroutine does not return */
        FUN_01230b78(uVar7,0);
      }
      if (*(uint *)(unaff_x23 + 3) <= uVar2) goto LAB_01f9658c;
    }
    else {
      plVar6 = (long *)FUN_01230af8(*(undefined8 *)PTR_DAT_027b3650);
      FUN_01f89ca0(*unaff_x19,0,plVar6,0,uVar2,0);
      if (plVar6 == (long *)0x0) {
LAB_01f96724:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca0();
      }
      if ((int)uVar2 < (int)plVar6[3]) {
        uVar9 = 0;
        plVar8 = plVar6 + (long)(int)uVar2 + 4;
        do {
          lVar5 = *unaff_x19;
          if (lVar5 == 0) goto LAB_01f96724;
          if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_01f9658c;
          lVar5 = *(long *)(lVar5 + (long)(int)uVar2 * 8 + 0x20);
          if (lVar5 == 0) goto LAB_01f96724;
          uVar7 = *(undefined8 *)puVar3;
          lVar4 = thunk_FUN_0124baac(lVar5,uVar7);
          if (lVar4 == 0) {
LAB_01f96728:
                    /* WARNING: Subroutine does not return */
            FUN_01230f60(lVar5,uVar7);
          }
          uVar7 = *(undefined8 *)puVar3;
          lVar4 = thunk_FUN_0124baac(lVar5,uVar7);
          if (lVar4 == 0) goto LAB_01f96728;
          if (*(uint *)(lVar4 + 0x18) <= uVar9) goto LAB_01f9658c;
          lVar5 = *(long *)(lVar4 + (long)(int)uVar9 * 8 + 0x20);
          if ((lVar5 != 0) &&
             (lVar4 = thunk_FUN_0124baac(lVar5,*(undefined8 *)(*plVar6 + 0x40)), lVar4 == 0))
          goto LAB_01f96734;
          if (*(uint *)(plVar6 + 3) <= uVar2 + uVar9) goto LAB_01f9658c;
          *plVar8 = lVar5;
          thunk_FUN_01286abc(plVar8,lVar5);
          uVar9 = uVar9 + 1;
          plVar8 = plVar8 + 1;
        } while ((int)(uVar2 + uVar9) < (int)plVar6[3]);
      }
    }
    *unaff_x19 = (long)plVar6;
  }
  thunk_FUN_01286abc();
  return;
}


