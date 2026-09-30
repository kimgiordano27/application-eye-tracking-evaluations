/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.DebugInspector.InspectionRegistry$$.ctor
ENTRY_POINT: 04c04720
PROGRAM: hellodot-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_10;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_DebugInspector_InspectionRegistry___ctor(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x29;
  
                    /* try { // try from 04c04720 to 04d0472b has its CatchHandler @ 04c0402c */
  uVar1 = FUN_04c04934(0,1);
                    /* try { // try from 04c0472c to 04d04733 has its CatchHandler @ 04c04734 */
                    /* catch() { ... } // from try @ 04c04634 with catch @ 04c04734
                       catch() { ... } // from try @ 04c046f8 with catch @ 04c04734
                       catch() { ... } // from try @ 04c0472c with catch @ 04c04734 */
  if (5 < *(uint *)(unaff_x20 + 0x18)) {
                    /* try { // try from 04c04738 to 04d0482b has its CatchHandler @ 04c04738
                       catch() { ... } // from try @ 04c04738 with catch @ 04c04738
                       catch() { ... } // from try @ 04c0488c with catch @ 04c04738
                       catch() { ... } // from try @ 04c04aa8 with catch @ 04c04738
                       catch() { ... } // from try @ 04c04ad0 with catch @ 04c04738
                       catch() { ... } // from try @ 04c04b80 with catch @ 04c04738
                       catch() { ... } // from try @ 04c04c04 with catch @ 04c04738
                       catch() { ... } // from try @ 04c04c64 with catch @ 04c04738 */
    lVar4 = *(long *)(unaff_x20 + 0x48);
    if (lVar4 == 0) {
      lVar2 = 0;
    }
    else {
      uVar5 = *unaff_x29;
      lVar2 = thunk_FUN_02cea798(lVar4,uVar5);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar4,uVar5);
      }
    }
    uVar5 = FUN_04c04934(lVar2,1);
    if (*(uint *)(unaff_x20 + 0x18) < 7) goto LAB_04c04864;
    lVar4 = *(long *)(unaff_x20 + 0x50);
    if (lVar4 == 0) {
      lVar2 = 0;
    }
    else {
      uVar6 = *unaff_x29;
      lVar2 = thunk_FUN_02cea798(lVar4,uVar6);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce8018(lVar4,uVar6);
      }
    }
    uVar6 = FUN_04c04934(lVar2,1);
    if (*(uint *)(unaff_x20 + 0x18) < 8) goto LAB_04c04864;
    lVar4 = *(long *)(unaff_x20 + 0x58);
    if (lVar4 == 0) {
      lVar2 = 0;
    }
    else {
      uVar7 = *unaff_x29;
      lVar2 = thunk_FUN_02cea798(lVar4,uVar7);
      if (lVar2 == 0) goto LAB_04c04824;
    }
    uVar3 = FUN_04c04934(lVar2,1);
    if (8 < *(uint *)(unaff_x20 + 0x18)) {
      lVar4 = *(long *)(unaff_x20 + 0x60);
      if (lVar4 == 0) {
                    /* try { // try from 04c0482c to 04d0483f has its CatchHandler @ 04c04ba8 */
        lVar2 = 0;
      }
      else {
        uVar7 = *unaff_x29;
        lVar2 = thunk_FUN_02cea798(lVar4,uVar7);
        if (lVar2 == 0) {
LAB_04c04824:
                    /* WARNING: Subroutine does not return */
          FUN_02ce8018(lVar4,uVar7);
        }
      }
      uVar7 = FUN_04c04934(lVar2,1);
      *unaff_x19 = unaff_x22;
      unaff_x19[1] = unaff_x21;
      unaff_x19[2] = uVar1;
      unaff_x19[3] = uVar5;
      unaff_x19[4] = uVar6;
      unaff_x19[5] = uVar3;
      unaff_x19[6] = uVar7;
      unaff_x19[7] = unaff_x23;
                    /* try { // try from 04c04858 to 04d0485b has its CatchHandler @ 04c04b9c */
      return;
    }
  }
LAB_04c04864:
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c84();
}


