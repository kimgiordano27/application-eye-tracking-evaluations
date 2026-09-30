/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 0474aab8
PROGRAM: hellodot-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector2f>__Dispose
          (long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  uStack0000000000000030 = param_2[2];
  uStack0000000000000028 = param_2[1];
  uStack0000000000000020 = *param_2;
  uStack0000000000000040 = uStack0000000000000020;
  uStack0000000000000048 = uStack0000000000000028;
  uStack0000000000000050 = uStack0000000000000030;
  uVar1 = FUN_0474b12c(param_1,&stack0x00000040,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x108));
  if ((int)uVar1 < 0) {
    return 0;
  }
  plVar2 = (long *)FUN_02eb80f0(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x118)
                               );
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 != 0) {
    if (*(uint *)(lVar4 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c84();
    }
    if (plVar2 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar2 + 0x1b8))
                        (plVar2,*(undefined8 *)(lVar4 + (ulong)uVar1 * 0x28 + 0x40),param_2[3],
                         *(undefined8 *)(*plVar2 + 0x1c0));
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      uStack0000000000000050 = param_2[2];
      uStack0000000000000048 = param_2[1];
      uStack0000000000000040 = *param_2;
      OVREnumerable_Enumerator<OVRSceneManager_Metrics>__get_Current
                (param_1,&stack0x00000040,
                 *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x138));
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02ce7c7c();
}


