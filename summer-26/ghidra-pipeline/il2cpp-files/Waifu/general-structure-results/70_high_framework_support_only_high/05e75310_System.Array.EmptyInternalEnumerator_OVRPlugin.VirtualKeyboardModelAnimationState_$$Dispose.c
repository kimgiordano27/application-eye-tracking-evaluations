/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.VirtualKeyboardModelAnimationState>$$Dispose
ENTRY_POINT: 05e75310
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_VirtualKeyboardModelAnimationState>__Dispose
               (long param_1)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long in_x9;
  undefined8 *puVar5;
  long unaff_x19;
  undefined4 unaff_w21;
  long unaff_x25;
  
  puVar5 = (undefined8 *)(in_x9 + 0x10);
  *puVar5 = 0;
  puVar1 = (ulong *)(param_1 + ((ulong)puVar5 >> 0x12 & 0x7fff) * 8 + 0x464e0);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar3) {
      *puVar1 = *puVar1 | 1L << ((ulong)puVar5 >> 0xc & 0x3f);
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  *(undefined4 *)(unaff_x19 + 0x2c) = unaff_w21;
  if (*(int *)(*(long *)(unaff_x25 + 0x88) + 0xe0) == 0) {
    FUN_033b9870();
  }
  lVar4 = FUN_067f6a20(0);
  if (lVar4 != 0) {
    FUN_05b73180();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


