/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.Vector3f>$$MoveNext
ENTRY_POINT: 03ccfc38
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_Vector3f>__MoveNext
               (long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int in_w8;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  if (0 < in_w8) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x18);
      if (lVar4 == 0) {
LAB_03ccfce4:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c8();
      }
      if (-1 < *(int *)(lVar4 + lVar5 + 0x20)) {
        if (param_2 == 0) goto LAB_03ccfce4;
        uVar1 = *(undefined8 *)(lVar4 + lVar5 + 0x28);
        uVar2 = *(undefined8 *)(lVar4 + lVar5 + 0x30);
        uVar3 = FUN_03ccca58(param_2,uVar1,uVar2,
                             *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x188));
        if ((uVar3 & 1) == 0) {
          FUN_03cccc58(param_1,uVar1,uVar2,
                       *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x148));
        }
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x18;
    } while ((long)uVar6 < (long)*(int *)(param_1 + 0x24));
  }
  return;
}


