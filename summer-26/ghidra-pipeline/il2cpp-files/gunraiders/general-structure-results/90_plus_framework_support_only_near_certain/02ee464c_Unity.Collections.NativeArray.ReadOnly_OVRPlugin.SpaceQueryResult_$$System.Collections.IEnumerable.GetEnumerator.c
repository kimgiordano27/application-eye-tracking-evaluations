/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 02ee464c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_01c72394(param_1);
  }
  if (*param_2 != 0) {
    iVar1 = *(int *)((long)param_2 + 0xc);
    if (iVar1 == 0) {
      thunk_FUN_01c273e8(PTR_DAT_04237cd0);
      uVar2 = thunk_FUN_01c496e0();
      uVar3 = thunk_FUN_01c273e8(
                                VoxelBusters_EssentialKit_AddressBookCore_ReadContactsInternalCallback_TypeInfo
                                );
      FUN_032d1aa4(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
      FUN_01c5d37c(uVar2,param_3);
    }
    if (1 < iVar1) {
      FUN_03cfc1d4(*param_2,iVar1,0);
      *(undefined4 *)((long)param_2 + 0xc) = 0;
    }
    *param_2 = 0;
  }
  return;
}


