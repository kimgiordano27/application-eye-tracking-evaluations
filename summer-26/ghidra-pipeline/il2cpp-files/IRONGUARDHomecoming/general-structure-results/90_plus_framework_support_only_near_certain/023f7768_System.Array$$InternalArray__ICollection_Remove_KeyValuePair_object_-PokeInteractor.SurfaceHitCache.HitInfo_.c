/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<KeyValuePair<object,-PokeInteractor.SurfaceHitCache.HitInfo>>
ENTRY_POINT: 023f7768
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 160
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ray_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;ray_or_cast_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_interaction_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x023f785c) */

void System_Array__InternalArray__ICollection_Remove<KeyValuePair<object,_PokeInteractor_SurfaceHitCache_HitInfo>>
               (long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  void *unaff_x19;
  size_t unaff_x20;
  void *unaff_x21;
  void *unaff_x22;
  long *plVar5;
  long unaff_x25;
  int unaff_w26;
  ulong unaff_x27;
  long unaff_x28;
  long unaff_x29;
  
  (**(code **)(param_1 + 0x138))();
  if (unaff_x25 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990();
  }
  if ((unaff_x27 & 1) != 0) {
    unaff_w26 = 0;
  }
  plVar5 = *(long **)(unaff_x29 + -0x28);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_023f77ec;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)
           FUN_01ecb238(plVar5,*(long *)
                                Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                        ,0);
LAB_023f77ec:
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  if ((unaff_w26 == 3) || (unaff_w26 == 0)) {
    memcpy(unaff_x21,unaff_x22,unaff_x20);
    memcpy(unaff_x19,unaff_x21,unaff_x20);
  }
  if (*(long *)(unaff_x28 + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


