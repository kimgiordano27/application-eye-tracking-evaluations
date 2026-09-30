/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$GetEnumerator
ENTRY_POINT: 061c2678
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__GetEnumerator
               (long *param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  
  if (*param_1 != 0) {
    iVar1 = thunk_FUN_040b15f0(*param_1 + 8,0);
    if ((long *)*param_1 != (long *)0x0) {
      lVar2 = *(long *)*param_1;
      if ((*(ushort *)(*(long *)(param_3 + 0x20) + 0x135) & 1) == 0) {
        FUN_040b1acc();
      }
      *(undefined4 *)(lVar2 + (long)(iVar1 + -1) * 4) = param_2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


