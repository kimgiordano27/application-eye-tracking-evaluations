/*
FUNCTION_NAME: Unity.Collections.NativeArray.Enumerator<OVRPlugin.Vector3f>$$Dispose
ENTRY_POINT: 02654688
PROGRAM: SmashRoomVR-libil2cpp.so
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
Unity_Collections_NativeArray_Enumerator<OVRPlugin_Vector3f>__Dispose
          (long param_1,long *param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar2 = FUN_02654a28(param_2,*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x1e0))
  ;
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x70);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_01ae9e74(lVar5);
  }
  if (param_2 != (long *)0x0) {
    if (*(long *)(*param_2 + 0x40) != *(long *)(lVar5 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_01b4841c(param_2);
    }
    puVar3 = (undefined8 *)thunk_FUN_01afac30();
    uVar1 = FUN_02652ec0(param_1,*puVar3,*(undefined4 *)(puVar3 + 1),
                         *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0xf8));
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x18) != 0) {
      if (*(uint *)(*(long *)(param_1 + 0x18) + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      uVar4 = thunk_FUN_01afa70c(*(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x78)
                                );
      return uVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


