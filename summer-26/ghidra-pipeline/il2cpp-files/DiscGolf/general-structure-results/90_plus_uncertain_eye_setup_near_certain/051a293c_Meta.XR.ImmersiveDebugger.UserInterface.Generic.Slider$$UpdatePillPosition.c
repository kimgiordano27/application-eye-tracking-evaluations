/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$UpdatePillPosition
ENTRY_POINT: 051a293c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 137
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_1
*/


bool Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__UpdatePillPosition(long param_1)

{
  uint uVar1;
  uint in_w10;
  uint uVar2;
  long lVar3;
  long unaff_x19;
  uint unaff_w20;
  
  uVar1 = in_w10;
  if (in_w10 <= unaff_w20) {
    uVar1 = unaff_w20;
  }
  do {
    uVar2 = in_w10;
    if (uVar1 == uVar2) {
      *(undefined8 *)(unaff_x19 + 0x10) = 0;
      *(uint *)(unaff_x19 + 8) = unaff_w20 + 1;
      goto LAB_051a29a4;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    *(uint *)(unaff_x19 + 8) = uVar2 + 1;
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    if (*(uint *)(lVar3 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96868();
    }
    in_w10 = uVar2 + 1;
  } while (*(int *)(lVar3 + 0x20 +
                   (-(ulong)(uVar2 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar2 << 5)) < 0);
  *(undefined8 *)(unaff_x19 + 0x10) = *(undefined8 *)(lVar3 + 0x20 + (long)(int)uVar2 * 0x20 + 0x18)
  ;
  LeanTween__value((undefined8 *)(unaff_x19 + 0x10));
LAB_051a29a4:
  return uVar2 < unaff_w20;
}


