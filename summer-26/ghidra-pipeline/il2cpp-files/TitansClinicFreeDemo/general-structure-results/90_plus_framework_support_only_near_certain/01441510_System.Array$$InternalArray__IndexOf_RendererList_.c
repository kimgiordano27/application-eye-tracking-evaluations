/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<RendererList>
ENTRY_POINT: 01441510
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


undefined8 System_Array__InternalArray__IndexOf<RendererList>(long param_1)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 uVar5;
  long *unaff_x21;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  lVar2 = FUN_01f7d8a0();
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar3 = OVRPlugin__set_tiledMultiResLevel(lVar2,0);
  if ((uVar3 & 1) == 0) {
    return 1;
  }
  uVar5 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  plVar4 = (long *)FUN_01f7d8a0(uVar5,0);
  if (plVar4 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
    if (*(byte *)(*plVar4 + 0x130) < bVar1) {
      plVar4 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar4 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_027b3ec0) {
      plVar4 = (long *)0x0;
    }
  }
  uVar5 = thunk_FUN_01248288(plVar4,0);
  return uVar5;
}


