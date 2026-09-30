/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 0474aa14
PROGRAM: hellodot-libil2cpp.so
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
Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__get_Current
          (long param_1,undefined8 param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000020;
  
  uStack0000000000000000 = param_2;
  uStack0000000000000020 = param_2;
  uVar1 = FUN_0474b12c(param_3,&stack0x00000020,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x108));
  if ((int)uVar1 < 0) {
    return 0;
  }
  plVar2 = (long *)FUN_02eb80f0(*(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x22 + 0x20) + 0xc0) + 0x118));
  lVar4 = *(long *)(param_3 + 0x18);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    if (plVar2 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x1b8))
                        (plVar2,*(undefined8 *)(lVar4 + (ulong)uVar1 * 0x28 + 0x40),
                         *(undefined8 *)(param_4 + 0x18),*(undefined8 *)(*plVar2 + 0x1c0));
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


