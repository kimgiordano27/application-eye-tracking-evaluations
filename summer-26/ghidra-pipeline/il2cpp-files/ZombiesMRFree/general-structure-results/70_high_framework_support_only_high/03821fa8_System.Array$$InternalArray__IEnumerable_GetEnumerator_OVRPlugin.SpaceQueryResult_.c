/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 03821fa8
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceQueryResult>
               (undefined8 param_1,void *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [88];
  
  puVar3 = *(undefined8 **)(param_3 + 0x38);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_02feb320(param_3);
    puVar3 = *(undefined8 **)(param_3 + 0x38);
  }
  plVar1 = (long *)FUN_03821b18(param_1,*puVar3);
  memcpy(auStack_78,param_2,0x58);
  lVar2 = *(long *)(*(long *)(param_3 + 0x38) + 8);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4(lVar2);
  }
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02fe94e8();
  }
  if ((*(byte *)(lVar2 + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
     (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2)) {
    lVar2 = *(long *)(*(long *)(param_3 + 0x38) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02feb2c4(lVar2);
    }
    if ((*(byte *)(lVar2 + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
       (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2)) {
      memcpy(plVar1 + 6,auStack_78,0x58);
      lVar2 = *(long *)(*(long *)(param_3 + 0x38) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_02feb2c4(lVar2);
      }
      if ((*(byte *)(lVar2 + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
         (*(long *)(*(long *)(*plVar1 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) == lVar2))
      {
        thunk_FUN_03048534(plVar1 + 7,0);
        FUN_05da8e60(param_2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x20));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02fe9884(plVar1);
}


