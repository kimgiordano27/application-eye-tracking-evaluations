/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Cursor$$SetCursorRay
ENTRY_POINT: 028e72d4
PROGRAM: sharks-libil2cpp.so
SCORE: 154
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_4
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Cursor__SetCursorRay(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined *puVar6;
  
  if (unaff_x21 != 0) {
                    /* try { // try from 028e72e4 to 029e73f7 has its CatchHandler @ 028e72e4
                       catch() { ... } // from try @ 028e72e4 with catch @ 028e72e4
                       catch() { ... } // from try @ 028e7510 with catch @ 028e72e4
                       catch() { ... } // from try @ 028e7598 with catch @ 028e72e4
                       catch() { ... } // from try @ 028e75a0 with catch @ 028e72e4
                       catch() { ... } // from try @ 028e7648 with catch @ 028e72e4 */
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    uVar1 = FUN_02170a40();
    if ((uVar1 & 1) == 0) {
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_0185daa4();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x20);
      if (lVar2 == 0) goto LAB_028e73ac;
      lVar3 = *(long *)(unaff_x19 + 0x20);
      uVar4 = *unaff_x20;
      uVar5 = unaff_x20[1];
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0185daa4();
      }
      uVar1 = FUN_02170a40(lVar2,uVar4,uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x280));
      if ((uVar1 & 1) == 0) {
        return;
      }
      thunk_FUN_01851c08(PTR_DAT_037f9268);
      uVar4 = thunk_FUN_018617ec();
      puVar6 = PTR_DAT_037fb690;
    }
    else {
      thunk_FUN_01851c08(PTR_DAT_037f9268);
      uVar4 = thunk_FUN_018617ec();
      puVar6 = PTR_DAT_037fb688;
    }
    uVar5 = thunk_FUN_01851c08(puVar6);
    uVar4 = FUN_02a473b8(uVar5,uVar4,0);
    thunk_FUN_01851c08(PTR_DAT_037f8d50);
    uVar5 = thunk_FUN_01861bbc();
    FUN_02bcf690(uVar5,uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_017fc474(uVar5);
  }
LAB_028e73ac:
                    /* WARNING: Subroutine does not return */
  FUN_017fc5a8();
}


