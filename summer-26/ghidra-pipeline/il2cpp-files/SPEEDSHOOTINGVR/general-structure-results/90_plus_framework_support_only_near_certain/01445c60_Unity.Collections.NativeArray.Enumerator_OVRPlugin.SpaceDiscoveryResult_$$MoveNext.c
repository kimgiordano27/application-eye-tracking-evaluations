/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.SpaceDiscoveryResult>$$MoveNext
ENTRY_POINT: 01445c60
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8
Unity_Collections_NativeArray_Enumerator<OVRPlugin_SpaceDiscoveryResult>__MoveNext
          (long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  
  uVar1 = Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector2f>__System_Collections_IEnumerator_get_Current
                    (param_2,param_3,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0xe8));
  if ((int)uVar1 < 0) {
    return 0;
  }
  plVar2 = (long *)FUN_01169cd0(*(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0xf8));
  lVar4 = *(long *)(param_2 + 0x18);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    if (plVar2 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x1b8))
                        (plVar2,*(undefined4 *)(lVar4 + (ulong)uVar1 * 0x10 + 0x2c),param_3 >> 0x20,
                         *(undefined8 *)(*plVar2 + 0x1c0));
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      FUN_01446f24(param_2,param_3 & 0xffffffff,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x118));
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


