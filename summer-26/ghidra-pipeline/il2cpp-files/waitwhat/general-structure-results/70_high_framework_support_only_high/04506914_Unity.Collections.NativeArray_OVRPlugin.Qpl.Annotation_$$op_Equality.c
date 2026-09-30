/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$op_Equality
ENTRY_POINT: 04506914
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__op_Equality
               (long param_1,uint param_2,undefined8 *param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 < param_2) {
    LipSyncMicInput__CanStartMic(0xd,0x1b,0);
    uVar2 = *(uint *)(param_1 + 0x18);
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (uVar2 == *(uint *)(lVar1 + 0x18)) {
      FUN_04505df8(param_1,uVar2 + 1,
                   *(undefined8 *)(*(long *)(*(long *)(param_4 + 0x20) + 0xc0) + 0x78));
      uVar2 = *(uint *)(param_1 + 0x18);
      lVar1 = *(long *)(param_1 + 0x10);
    }
    if (uVar2 - param_2 != 0 && (int)param_2 <= (int)uVar2) {
      FUN_0595261c(lVar1,param_2,lVar1,param_2 + 1,uVar2 - param_2,0);
      lVar1 = *(long *)(param_1 + 0x10);
    }
    if (lVar1 != 0) {
      if (param_2 < *(uint *)(lVar1 + 0x18)) {
        uVar4 = param_3[1];
        uVar3 = *param_3;
        lVar1 = lVar1 + (long)(int)param_2 * 0x18;
        *(undefined8 *)(lVar1 + 0x30) = param_3[2];
        *(undefined8 *)(lVar1 + 0x28) = uVar4;
        *(undefined8 *)(lVar1 + 0x20) = uVar3;
        *(ulong *)(param_1 + 0x18) =
             CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20) + 1,
                      (int)*(undefined8 *)(param_1 + 0x18) + 1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03188ce0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


