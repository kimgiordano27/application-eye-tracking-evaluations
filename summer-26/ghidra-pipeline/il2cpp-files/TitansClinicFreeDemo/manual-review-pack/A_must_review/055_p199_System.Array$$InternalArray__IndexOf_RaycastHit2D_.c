/*
FUNCTION_NAME: System.Array$$InternalArray__IndexOf<RaycastHit2D>
ENTRY_POINT: 014408e0
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 125
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_interaction_hits_2
*/


undefined8 System_Array__InternalArray__IndexOf<RaycastHit2D>(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long unaff_x19;
  undefined8 uVar7;
  
  thunk_FUN_01279b34(PTR_DAT_027b32e0);
  puVar6 = *(undefined8 **)(unaff_x19 + 0x38);
  if (puVar6 == (undefined8 *)0x0) {
    FUN_0122e7a4();
    puVar6 = *(undefined8 **)(unaff_x19 + 0x38);
  }
  puVar2 = PTR_DAT_027b32e0;
  uVar7 = *puVar6;
  if (*(int *)(*(long *)PTR_DAT_027b32e0 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  lVar3 = FUN_01f7d8a0(uVar7,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01230ca0();
  }
  uVar4 = OVRPlugin__set_tiledMultiResLevel(lVar3,0);
  if ((uVar4 & 1) == 0) {
    return 1;
  }
  uVar7 = **(undefined8 **)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01220628();
  }
  plVar5 = (long *)FUN_01f7d8a0(uVar7,0);
  if (plVar5 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)PTR_DAT_027b3ec0 + 0x130);
    if (*(byte *)(*plVar5 + 0x130) < bVar1) {
      plVar5 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar5 + 200) + (ulong)bVar1 * 8 + -8) !=
             *(long *)PTR_DAT_027b3ec0) {
      plVar5 = (long *)0x0;
    }
  }
  uVar7 = thunk_FUN_01248288(plVar5,0);
  return uVar7;
}


