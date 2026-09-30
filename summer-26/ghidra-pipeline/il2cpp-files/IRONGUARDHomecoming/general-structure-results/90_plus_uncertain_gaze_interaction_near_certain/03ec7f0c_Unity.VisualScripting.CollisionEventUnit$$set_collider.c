/*
FUNCTION_NAME: Unity.VisualScripting.CollisionEventUnit$$set_collider
ENTRY_POINT: 03ec7f0c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 161
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_4;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03ec7fd8) */

undefined8 Unity_VisualScripting_CollisionEventUnit__set_collider(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x22;
  long *unaff_x23;
  
  thunk_FUN_01efb3a4();
  thunk_FUN_01efb3a4(Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__);
  *(undefined1 *)(unaff_x22 + 0xcb1) = 1;
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__;
  plVar2 = (long *)FUN_03ec808c();
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_01ee6d7c(*unaff_x23);
  }
  uVar3 = FUN_03ec4ae4(plVar2);
  if (plVar2 != (long *)0x0) {
    lVar5 = *plVar2;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03ec7fb4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_01ecb238(plVar2,*(long *)puVar1,0);
LAB_03ec7fb4:
    (*(code *)*puVar4)(plVar2,puVar4[1]);
  }
  return uVar3;
}


