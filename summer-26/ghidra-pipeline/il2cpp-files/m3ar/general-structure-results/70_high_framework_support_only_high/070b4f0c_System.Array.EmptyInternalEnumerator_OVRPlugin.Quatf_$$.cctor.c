/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Quatf>$$.cctor
ENTRY_POINT: 070b4f0c
PROGRAM: m3ar-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_Quatf>___cctor
               (long param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint in_w9;
  long unaff_x19;
  long lVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 in_stack_00000008;
  
  if (in_w9 < param_3) {
    FUN_07506bd4(0);
    in_w9 = *(uint *)(param_2 + 0x18);
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if ((int)(in_w9 - param_3) < (int)(uVar2 - *(int *)(param_1 + 0x28))) {
    FUN_0750636c(5,0);
    uVar2 = *(uint *)(param_1 + 0x20);
  }
  if (0 < (int)uVar2) {
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0403188c();
    }
    uVar4 = 0;
    puVar5 = (undefined4 *)(lVar3 + 0x2c);
    do {
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__MoveNext:
                    /* WARNING: Subroutine does not return */
        FUN_04031894();
      }
      if (-1 < (int)puVar5[-3]) {
        in_stack_00000008 = 0;
        FUN_05622568(*puVar5,&stack0x00000008,puVar5[-1],
                     *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x158));
        if (*(uint *)(param_2 + 0x18) <= param_3)
        goto System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceQueryResult>__MoveNext;
        lVar1 = (long)(int)param_3;
        param_3 = param_3 + 1;
        *(undefined8 *)(param_2 + lVar1 * 8 + 0x20) = in_stack_00000008;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 4;
    } while (uVar2 != uVar4);
  }
  return;
}


