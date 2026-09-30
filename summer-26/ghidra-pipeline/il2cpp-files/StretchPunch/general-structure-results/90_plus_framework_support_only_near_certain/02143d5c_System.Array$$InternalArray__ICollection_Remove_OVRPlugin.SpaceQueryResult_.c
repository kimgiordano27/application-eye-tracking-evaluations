/*
FUNCTION_NAME: System.Array$$InternalArray__ICollection_Remove<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 02143d5c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Array__InternalArray__ICollection_Remove<OVRPlugin_SpaceQueryResult>(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  undefined8 uVar6;
  long *unaff_x27;
  long *unaff_x28;
  
  plVar1 = (long *)FUN_01d7d9bc(**(undefined8 **)(param_1 + 0x6f8),1);
  uVar6 = *(undefined8 *)(*unaff_x27 + 0x18);
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_01dc4f30(*unaff_x28);
  }
  plVar2 = (long *)FUN_033a87c8(uVar6,0);
  if ((plVar2 != (long *)0x0) &&
     (lVar3 = (**(code **)(*plVar2 + 0x418))(plVar2,*(undefined8 *)(*plVar2 + 0x420)),
     plVar1 != (long *)0x0)) {
    if ((lVar3 != 0) &&
       (lVar4 = thunk_FUN_01de26bc(lVar3,*(undefined8 *)(*plVar1 + 0x40)), lVar4 == 0)) {
      uVar6 = thunk_FUN_01dfb5cc();
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar6,0);
    }
    if ((int)plVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db78();
    }
    plVar1[4] = lVar3;
    thunk_FUN_01e10808(plVar1 + 4,lVar3);
    if (unaff_x20 != (long *)0x0) {
      lVar3 = (**(code **)(*unaff_x20 + 0x3f8))();
      FUN_01d7d9bc(*(undefined8 *)StringLiteral_887,0);
      if (lVar3 != 0) {
        lVar3 = FUN_03308a94(lVar3);
        lVar4 = *(long *)(*unaff_x27 + 0x20);
        if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_01dde7f8(lVar4);
        }
        if (lVar3 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = thunk_FUN_01de26bc(lVar3,lVar4);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7df0c(lVar3,lVar4);
          }
        }
        return lVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


