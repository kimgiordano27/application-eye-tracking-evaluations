/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 050c4a2c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (long *param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_0a51c938 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f1e6b8);
    FUN_04447ba8(PTR_DAT_09f1e540);
    FUN_04447ba8(PTR_DAT_09f27f08);
    FUN_04447ba8(PTR_DAT_09f27f10);
    FUN_04447ba8(PTR_DAT_09f27f00);
    DAT_0a51c938 = 1;
  }
  puVar2 = PTR_DAT_09f1e6b8;
  if (param_2 == 0) {
    if (*(int *)(*(long *)PTR_DAT_09f1e540 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    FUN_094c6c50(*(undefined8 *)PTR_DAT_09f27f00,param_3,0);
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_09f1e6b8 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar3 = FUN_094bbcfc(0);
  if (((uVar3 & 1) != 0) && (lVar4 = *param_1, lVar4 != 0)) {
    if (param_4 != 0) {
      FUN_05baf38c(param_4,lVar4,*(undefined8 *)PTR_DAT_09f27f10);
      lVar4 = *param_1;
    }
    if (lVar4 == 0) goto LAB_050c4bf8;
    FUN_0945fc10(lVar4,0);
  }
  *param_1 = param_2;
  thunk_FUN_044bb4b4(param_1,param_2);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  uVar3 = FUN_094bbcfc(0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (param_4 != 0) {
    lVar4 = *param_1;
    lVar5 = *(long *)(param_4 + 0x10);
    lVar6 = *(long *)PTR_DAT_09f27f08;
    *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
    if (lVar5 == 0) goto LAB_050c4bf8;
    uVar1 = *(uint *)(param_4 + 0x18);
    if (uVar1 < *(uint *)(lVar5 + 0x18)) {
      *(uint *)(param_4 + 0x18) = uVar1 + 1;
      *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
      thunk_FUN_044bb4b4();
    }
    else {
      FUN_05bade44(param_4,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
    }
  }
  if (param_3 != 0) {
    uVar3 = FUN_09525150(param_3,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*param_1 != 0) {
      FUN_0945fbe0(*param_1,0);
      return;
    }
  }
LAB_050c4bf8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


