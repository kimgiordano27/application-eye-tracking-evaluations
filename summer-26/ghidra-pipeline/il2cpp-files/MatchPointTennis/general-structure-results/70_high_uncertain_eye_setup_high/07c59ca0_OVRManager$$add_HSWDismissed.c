/*
FUNCTION_NAME: OVRManager$$add_HSWDismissed
ENTRY_POINT: 07c59ca0
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


void OVRManager__add_HSWDismissed(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 uVar6;
  undefined8 *unaff_x22;
  undefined8 unaff_d8;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined8 uStack0000000000000014;
  
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
                    /* try { // try from 07c59cac to 07d59caf has its CatchHandler @ 07c59cbc */
  lVar3 = thunk_FUN_04485110();
  if (lVar3 != 0) {
                    /* catch() { ... } // from try @ 07c59cac with catch @ 07c59cbc */
    if ((int)unaff_x20[3] != 0) {
      unaff_x20[4] = unaff_x21;
      thunk_FUN_044bb4b4();
      lVar3 = thunk_FUN_0448520c(*unaff_x22);
      *(undefined8 *)(lVar3 + 0x10) = unaff_d8;
      *(undefined1 *)(lVar3 + 0x18) = 1;
      FUN_07a80df4(lVar3,0);
      uVar6 = DAT_01c75048;
                    /* try { // try from 07c59cf4 to 07d59d1b has its CatchHandler @ 07c59d30 */
      *(undefined4 *)(lVar3 + 0x1c) = 2;
      *(undefined8 *)(lVar3 + 0x10) = uVar6;
      lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
      if (lVar4 == 0) goto LAB_07c59ea8;
                    /* try { // try from 07c59d1c to 07d59d27 has its CatchHandler @ 07c5974c */
      if (1 < *(uint *)(unaff_x20 + 3)) {
                    /* try { // try from 07c59d28 to 07d59d2f has its CatchHandler @ 07c59d30 */
        unaff_x20[5] = lVar3;
                    /* catch() { ... } // from try @ 07c59cf4 with catch @ 07c59d30
                       catch() { ... } // from try @ 07c59d28 with catch @ 07c59d30 */
        thunk_FUN_044bb4b4(unaff_x20 + 5,lVar3);
                    /* try { // try from 07c59d34 to 07d59f43 has its CatchHandler @ 07c59d34
                       catch() { ... } // from try @ 07c59d34 with catch @ 07c59d34
                       catch() { ... } // from try @ 07c5a048 with catch @ 07c59d34
                       catch() { ... } // from try @ 07c5a110 with catch @ 07c59d34
                       catch() { ... } // from try @ 07c5a1d0 with catch @ 07c59d34
                       catch() { ... } // from try @ 07c5a284 with catch @ 07c59d34 */
        lVar3 = thunk_FUN_0448520c(*unaff_x22);
        *(undefined8 *)(lVar3 + 0x10) = unaff_d8;
        *(undefined1 *)(lVar3 + 0x18) = 1;
        FUN_07a80df4(lVar3,0);
        *(undefined4 *)(lVar3 + 0x1c) = 1;
        *(undefined4 *)(lVar3 + 0x10) = 0x42f00000;
        *(undefined1 *)(lVar3 + 0x18) = 0;
        lVar4 = thunk_FUN_04485110(lVar3,*(undefined8 *)(*unaff_x20 + 0x40));
        puVar2 = PTR_DAT_09f50028;
        puVar1 = PTR_DAT_09f25358;
        if (lVar4 == 0) goto LAB_07c59ea8;
        if (2 < *(uint *)(unaff_x20 + 3)) {
          unaff_x20[6] = lVar3;
          thunk_FUN_044bb4b4(unaff_x20 + 6,lVar3);
          *(undefined8 *)(unaff_x19 + 0x38) = unaff_x20;
          thunk_FUN_044bb4b4((undefined8 *)(unaff_x19 + 0x38));
          *(undefined4 *)(unaff_x19 + 0x74) = 0xffffffff;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
          }
          FUN_095381c0(0);
          *(undefined8 *)(unaff_x19 + 0xa0) = uStack0000000000000014;
          *(ulong *)(unaff_x19 + 0x98) = CONCAT44(uStack0000000000000010,in_stack_00000008._4_4_);
          *(undefined8 *)(unaff_x19 + 0x94) = in_stack_00000008;
          *(undefined8 *)(unaff_x19 + 0x8c) = in_stack_00000000;
          lVar3 = *(long *)puVar2;
          if (*(int *)(lVar3 + 0xe4) == 0) {
            thunk_FUN_044a54b4();
            lVar3 = *(long *)puVar2;
          }
          lVar4 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
          if (lVar4 == 0) {
            if (*(int *)(lVar3 + 0xe4) == 0) {
              thunk_FUN_044a54b4();
              lVar3 = *(long *)puVar2;
            }
            uVar6 = **(undefined8 **)(lVar3 + 0xb8);
            lVar4 = thunk_FUN_0448520c(*(undefined8 *)PTR_DAT_09f4fff8);
            FUN_074915c8(lVar4,uVar6,*(undefined8 *)PTR_DAT_09f50020,0);
            plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
            *plVar5 = lVar4;
            thunk_FUN_044bb4b4(plVar5,lVar4);
          }
          *(long *)(unaff_x19 + 0xa8) = lVar4;
          thunk_FUN_044bb4b4((long *)(unaff_x19 + 0xa8),lVar4);
          FUN_0952dd08();
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_04447e4c();
  }
LAB_07c59ea8:
  uVar6 = thunk_FUN_04491d98();
                    /* WARNING: Subroutine does not return */
  FUN_04447d10(uVar6,0);
}


