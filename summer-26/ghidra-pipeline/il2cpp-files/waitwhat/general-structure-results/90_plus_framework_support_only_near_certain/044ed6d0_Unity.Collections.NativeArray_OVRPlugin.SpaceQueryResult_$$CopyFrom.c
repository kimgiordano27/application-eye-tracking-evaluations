/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$CopyFrom
ENTRY_POINT: 044ed6d0
PROGRAM: waitwhat-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__CopyFrom
                (undefined8 param_1,uint param_2,int param_3)

{
  ulong uVar1;
  uint in_w8;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x21;
  ulong uVar4;
  long lVar5;
  
  uVar3 = (ulong)param_2;
  if (in_w8 < param_2) {
    FUN_05951134(0);
  }
  if ((param_3 < 0) || (*(int *)(unaff_x21 + 0x18) - param_3 < (int)param_2)) {
    FUN_05951160(0);
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_05941350(8,0);
  }
  if ((int)param_2 < (int)(param_3 + param_2)) {
    uVar4 = -(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 | uVar3 << 4;
    lVar5 = (long)(int)(param_3 + param_2) - (long)(int)param_2;
    do {
      lVar2 = *(long *)(unaff_x21 + 0x10);
      if (lVar2 == 0) {
LAB_044ed788:
                    /* WARNING: Subroutine does not return */
        FUN_03188cd8();
      }
      if (*(uint *)(lVar2 + 0x18) <= (uint)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_03188ce0();
      }
      if (unaff_x20 == 0) goto LAB_044ed788;
      uVar1 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar2 + uVar4 + 0x20),
                         *(undefined8 *)(lVar2 + uVar4 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar1 & 1) != 0) {
        return uVar3;
      }
      lVar5 = lVar5 + -1;
      uVar4 = uVar4 + 0x10;
      uVar3 = (ulong)((uint)uVar3 + 1);
    } while (lVar5 != 0);
  }
  return 0xffffffff;
}


