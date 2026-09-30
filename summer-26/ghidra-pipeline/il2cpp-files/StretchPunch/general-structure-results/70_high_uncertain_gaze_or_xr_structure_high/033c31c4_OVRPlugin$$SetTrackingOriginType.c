/*
FUNCTION_NAME: OVRPlugin$$SetTrackingOriginType
ENTRY_POINT: 033c31c4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin__SetTrackingOriginType(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  uint in_w8;
  uint uVar5;
  long unaff_x19;
  long unaff_x21;
  long lVar6;
  undefined8 uVar7;
  uint unaff_w26;
  uint uVar8;
  long unaff_x28;
  long *plVar9;
  long *plVar10;
  undefined8 in_stack_00000008;
  
  plVar9 = *(long **)(unaff_x28 + 0x980);
  lVar6 = 0;
  uVar8 = 0;
  do {
    if (in_w8 <= uVar8) goto LAB_033c3354;
    plVar10 = (long *)(unaff_x21 + (long)(int)uVar8 * 8 + 0x20);
    plVar1 = (long *)*plVar10;
    if (plVar1 == (long *)0x0) {
LAB_033c3350:
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
                    /* try { // try from 033c31f0 to 034c332f has its CatchHandler @ 033c31f0
                       catch() { ... } // from try @ 033c31f0 with catch @ 033c31f0
                       catch() { ... } // from try @ 033c3784 with catch @ 033c31f0
                       catch() { ... } // from try @ 033c38ac with catch @ 033c31f0
                       catch() { ... } // from try @ 033c390c with catch @ 033c31f0
                       catch() { ... } // from try @ 033c398c with catch @ 033c31f0
                       catch() { ... } // from try @ 033c3a38 with catch @ 033c31f0 */
    lVar2 = (**(code **)(*plVar1 + 0x238))(plVar1,*(undefined8 *)(*plVar1 + 0x240));
    if (0 < (int)unaff_w26) {
      if (lVar2 == 0) goto LAB_033c3350;
      uVar5 = 0;
      do {
        if (*(uint *)(lVar2 + 0x18) <= uVar5) goto LAB_033c3354;
        plVar1 = *(long **)(lVar2 + (long)(int)uVar5 * 8 + 0x20);
        if (plVar1 == (long *)0x0) goto LAB_033c3350;
        uVar3 = (**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
        if (unaff_x19 == 0) goto LAB_033c3350;
        if (*(uint *)(unaff_x19 + 0x18) <= uVar5) goto LAB_033c3354;
        uVar7 = *(undefined8 *)(unaff_x19 + (long)(int)uVar5 * 8 + 0x20);
        if (*(int *)(*plVar9 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        uVar4 = FUN_033ab18c(uVar3,uVar7,0);
        if ((uVar4 & 1) != 0) goto LAB_033c3314;
        uVar5 = uVar5 + 1;
      } while (unaff_w26 != uVar5);
    }
    if (*(int *)(*plVar9 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    uVar4 = FUN_033ab18c(in_stack_00000008,0,0);
    if ((uVar4 & 1) == 0) {
LAB_033c32f0:
      uVar4 = FUN_033087ec(lVar6,0,0);
      if ((uVar4 & 1) != 0) {
        uVar3 = thunk_FUN_01dd295c(StringLiteral_6016);
        uVar3 = FUN_033d6e4c(uVar3,0);
        thunk_FUN_01dd295c(StringLiteral_5868);
        uVar7 = thunk_FUN_01de27b8();
        FUN_033063d0(uVar7,uVar3,0);
        uVar3 = thunk_FUN_01dd295c(StringLiteral_8818);
                    /* WARNING: Subroutine does not return */
        FUN_01d7da3c(uVar7,uVar3);
      }
      if (*(uint *)(unaff_x21 + 0x18) <= uVar8) {
LAB_033c3354:
                    /* WARNING: Subroutine does not return */
        FUN_01d7db78();
      }
      lVar6 = *plVar10;
    }
    else {
      if (*(uint *)(unaff_x21 + 0x18) <= uVar8) goto LAB_033c3354;
      plVar1 = (long *)*plVar10;
      if (plVar1 == (long *)0x0) goto LAB_033c3350;
      uVar3 = (**(code **)(*plVar1 + 0x228))(plVar1,*(undefined8 *)(*plVar1 + 0x230));
      if (*(int *)(*plVar9 + 0xe0) == 0) {
        thunk_FUN_01dc4f30(*plVar9);
      }
      uVar4 = FUN_033ab18c(in_stack_00000008,uVar3,0);
      if ((uVar4 & 1) == 0) goto LAB_033c32f0;
    }
LAB_033c3314:
    in_w8 = *(uint *)(unaff_x21 + 0x18);
    uVar8 = uVar8 + 1;
    if ((int)in_w8 <= (int)uVar8) {
      return lVar6;
    }
  } while( true );
}


