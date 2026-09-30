/*
FUNCTION_NAME: OVRManager$$set_headPoseRelativeOffsetRotation
ENTRY_POINT: 033a8618
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 143
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


void OVRManager__set_headPoseRelativeOffsetRotation(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  undefined8 uVar8;
  long unaff_x22;
  
  FUN_01d7d918(*(undefined8 *)(param_1 + 0x6c8));
  FUN_01d7d918(StringLiteral_8454);
  FUN_01d7d918(StringLiteral_8455);
  *(undefined1 *)(unaff_x22 + 0x88b) = 1;
  puVar3 = StringLiteral_7990;
  puVar2 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033d8040();
  uVar8 = *(undefined8 *)puVar3;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  FUN_033a87c8(uVar8);
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  plVar5 = (long *)FUN_032df734();
  if (plVar5 == (long *)0x0) {
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  else {
    lVar7 = *(long *)StringLiteral_4428;
    bVar1 = *(byte *)(lVar7 + 0x130);
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar1 - 1) * 8) != lVar7)) goto LAB_033a87c0;
    *(long **)(unaff_x19 + 0x10) = plVar5;
    if ((*(byte *)(*plVar5 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar5 + 200) + ((ulong)bVar1 - 1) * 8) != lVar7)) goto LAB_033a87c0;
  }
  puVar2 = StringLiteral_8452;
  thunk_FUN_01e10808(unaff_x19 + 0x10,plVar5);
  uVar4 = FUN_032e188c();
  FUN_033a87c8(*(undefined8 *)puVar2);
  plVar5 = (long *)FUN_032df62c();
  if (plVar5 != (long *)0x0) {
    if (*(long *)(*plVar5 + 0x40) != *(long *)(*(long *)StringLiteral_7277 + 0x40)) {
LAB_033a87c0:
                    /* WARNING: Subroutine does not return */
      FUN_01d7df0c(plVar5);
    }
    puVar6 = (undefined4 *)thunk_FUN_01de290c();
    *(undefined4 *)(unaff_x19 + 0x18) = *puVar6;
  }
  *(uint *)(unaff_x19 + 0x18) = *(uint *)(unaff_x19 + 0x18) | uVar4 & 1;
  return;
}


