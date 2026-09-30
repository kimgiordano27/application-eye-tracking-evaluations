/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$MoveNext
ENTRY_POINT: 04d40b94
PROGRAM: Untangled-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__MoveNext
          (long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  long *unaff_x21;
  
  uVar2 = FUN_04d40ef0();
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02eea768(lVar4);
  }
  if (unaff_x21 != (long *)0x0) {
    if (*(long *)(*unaff_x21 + 0x40) != *(long *)(lVar4 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_02f08440();
    }
    puVar3 = (undefined8 *)thunk_FUN_02ef195c();
    uVar1 = FUN_04d3f214(param_1,*puVar3,puVar3[1],
                         *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x108));
    if ((int)uVar1 < 0) {
      return 0;
    }
    lVar4 = *(long *)(param_1 + 0x18);
    if (lVar4 != 0) {
      if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      return *(undefined8 *)(lVar4 + (ulong)uVar1 * 0x20 + 0x38);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


