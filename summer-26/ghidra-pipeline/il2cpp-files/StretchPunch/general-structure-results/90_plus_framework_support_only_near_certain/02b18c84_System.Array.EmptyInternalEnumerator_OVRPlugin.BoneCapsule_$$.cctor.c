/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.BoneCapsule>$$.cctor
ENTRY_POINT: 02b18c84
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 134
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_1;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_BoneCapsule>___cctor(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *unaff_x26;
  long *unaff_x27;
  long in_stack_00000008;
  
  uVar4 = *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x160);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar4 = FUN_033a87c8(uVar4,0);
  if (in_stack_00000008 != 0) {
                    /* try { // try from 02b18cb4 to 02c18d0b has its CatchHandler @ 02b18cb4
                       catch() { ... } // from try @ 02b18cb4 with catch @ 02b18cb4
                       catch() { ... } // from try @ 02b18dd8 with catch @ 02b18cb4
                       catch() { ... } // from try @ 02b18e60 with catch @ 02b18cb4
                       catch() { ... } // from try @ 02b18ea4 with catch @ 02b18cb4
                       catch() { ... } // from try @ 02b18ed4 with catch @ 02b18cb4
                       catch() { ... } // from try @ 02b18f54 with catch @ 02b18cb4 */
    lVar1 = FUN_032df734(in_stack_00000008,*(undefined8 *)StringLiteral_2869,uVar4,0);
    lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x120);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01dde7f8(lVar5);
    }
    if (lVar1 == 0) {
                    /* try { // try from 02b18e00 to 02c18e17 has its CatchHandler @ 02b18e98 */
      FUN_033b3310(0x10,0);
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    lVar2 = thunk_FUN_01de26bc(lVar1,lVar5);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(lVar1,lVar5);
    }
                    /* try { // try from 02b18d0c to 02c18d37 has its CatchHandler @ 02b18dd8 */
    if (0 < *(int *)(lVar2 + 0x18)) {
      uVar6 = 0;
      plVar7 = (long *)(lVar2 + 0x20);
      do {
        uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
        if (uVar3 <= uVar6) {
LAB_02b18df0:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        if (*plVar7 == 0) {
          FUN_033b3310(0x11,0);
          uVar3 = (ulong)*(uint *)(lVar2 + 0x18);
        }
        if (uVar3 <= uVar6) goto LAB_02b18df0;
        FUN_02b185f4();
        uVar6 = uVar6 + 1;
        plVar7 = plVar7 + 2;
      } while ((long)uVar6 < (long)*(int *)(lVar2 + 0x18));
    }
    *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
    if (*(int *)(*unaff_x26 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
    }
    lVar1 = OVR_OpenVR_IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo___ctor(0);
    if (lVar1 != 0) {
      FUN_029bf94c();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


