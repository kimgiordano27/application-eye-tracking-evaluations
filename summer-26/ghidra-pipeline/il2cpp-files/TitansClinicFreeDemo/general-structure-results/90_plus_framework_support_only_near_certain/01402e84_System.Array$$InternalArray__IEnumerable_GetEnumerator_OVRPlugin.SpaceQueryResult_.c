/*
FUNCTION_NAME: System.Array$$InternalArray__IEnumerable_GetEnumerator<OVRPlugin.SpaceQueryResult>
ENTRY_POINT: 01402e84
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array__InternalArray__IEnumerable_GetEnumerator<OVRPlugin_SpaceQueryResult>
          (long *param_1,long param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    FUN_0122e7a4(param_3);
  }
  puVar5 = PTR_DAT_027b4120;
  if ((param_1 == (long *)0x0) || (puVar5 = PTR_DAT_027b4140, param_2 == 0)) {
    uVar4 = thunk_FUN_01279b34(puVar5);
    uVar4 = FUN_0220c210(uVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_01230b78(uVar4,param_3);
  }
  lVar3 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0122e748();
  }
  lVar6 = *param_1;
  bVar2 = *(byte *)(lVar6 + 0x130);
  if ((*(byte *)(lVar3 + 0x130) <= bVar2) &&
     (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
    lVar3 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0122e748(lVar3);
      lVar6 = *param_1;
      bVar2 = *(byte *)(lVar6 + 0x130);
    }
    if ((*(byte *)(lVar3 + 0x130) <= bVar2) &&
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
      lVar3 = *(long *)(*(long *)(param_3 + 0x38) + 0x10);
      lVar1 = *(long *)(*(long *)(param_3 + 0x38) + 0x18);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0122e748(lVar3);
        lVar6 = *param_1;
        bVar2 = *(byte *)(lVar6 + 0x130);
      }
      if ((*(byte *)(lVar3 + 0x130) <= bVar2) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) == lVar3)) {
        lVar3 = thunk_FUN_0121496c(*(undefined8 *)
                                    (lVar6 + (ulong)*(ushort *)(lVar1 + 0x50) * 0x10 + 0x140),lVar1)
        ;
                    /* WARNING: Could not recover jumptable at 0x014030b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(lVar3 + 8))(param_1,param_2,lVar3);
        return uVar4;
      }
    }
LAB_01403164:
                    /* WARNING: Subroutine does not return */
    FUN_01230f60(param_1);
  }
  lVar3 = *(long *)(*(long *)(param_3 + 0x38) + 0x28);
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0122e748(lVar3);
  }
  lVar3 = thunk_FUN_0124baac(param_1,lVar3);
  if (lVar3 == 0) {
    lVar3 = *(long *)(*(long *)(param_3 + 0x38) + 0x48);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0122e748();
    }
    if ((*(byte *)(*param_1 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
       (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3)) {
      if ((*(byte *)(*(long *)(*(long *)(param_3 + 0x38) + 0x60) + 0x135) & 1) == 0) {
        FUN_0122e748();
      }
      uVar4 = thunk_FUN_0124bba8();
      FUN_01d5a3d8(uVar4,param_1,0,param_2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x68));
    }
    else {
      if ((*(byte *)(*(long *)(*(long *)(param_3 + 0x38) + 0x50) + 0x135) & 1) == 0) {
        FUN_0122e748();
      }
      uVar4 = thunk_FUN_0124bba8();
      lVar3 = *(long *)(*(long *)(param_3 + 0x38) + 0x48);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_0122e748(lVar3);
      }
      if ((*(byte *)(*param_1 + 0x130) < *(byte *)(lVar3 + 0x130)) ||
         (*(long *)(*(long *)(*param_1 + 200) + (ulong)*(byte *)(lVar3 + 0x130) * 8 + -8) != lVar3))
      goto LAB_01403164;
      FUN_01d5fbe0(uVar4,param_1,0,param_2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x58));
    }
  }
  else {
    if ((*(byte *)(*(long *)(*(long *)(param_3 + 0x38) + 0x30) + 0x135) & 1) == 0) {
      FUN_0122e748();
    }
    uVar4 = thunk_FUN_0124bba8();
    lVar3 = *(long *)(*(long *)(param_3 + 0x38) + 0x28);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0122e748(lVar3);
    }
    lVar6 = thunk_FUN_0124baac(param_1,lVar3);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01230f60(param_1,lVar3);
    }
    FUN_01d535d4(uVar4,lVar6,0,param_2,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x38));
  }
  return uVar4;
}


