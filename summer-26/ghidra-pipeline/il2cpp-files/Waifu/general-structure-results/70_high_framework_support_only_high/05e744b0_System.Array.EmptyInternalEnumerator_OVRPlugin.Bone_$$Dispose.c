/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Bone>$$Dispose
ENTRY_POINT: 05e744b0
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


void System_Array_EmptyInternalEnumerator<OVRPlugin_Bone>__Dispose
               (ulong param_1,ulong param_2,long param_3,uint param_4,undefined8 *param_5)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long in_x9;
  ulong in_x10;
  long in_x11;
  long in_x12;
  long in_x13;
  int in_w14;
  ulong in_x15;
  ulong *in_x16;
  long in_x17;
  ulong uStack0000000000000000;
  
  do {
    puVar1 = (ulong *)(in_x11 + param_2 * 8 + in_x12);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | in_x13 << ((ulong)param_5 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      param_4 = param_4 + 1;
      do {
        in_x10 = in_x10 + 1;
        if (in_x10 == param_1) {
          return;
        }
        if (*(uint *)(in_x9 + 0x18) <= in_x10) goto LAB_05e744ec;
      } while (*(int *)(in_x9 + in_x10 * in_x17 + 0x20) < 0);
      lVar4 = in_x9 + in_x10 * in_x17;
      uVar5 = *(undefined8 *)(lVar4 + 0x30);
      uStack0000000000000000 = (ulong)*(uint *)(lVar4 + 0x28);
      if (in_w14 != 0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(in_x16,0x10);
          if (bVar3) {
            *in_x16 = *in_x16 | in_x15;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (*(uint *)(param_3 + 0x18) <= param_4) {
LAB_05e744ec:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      lVar4 = param_3 + (long)(int)param_4 * 0x10;
      param_5 = (undefined8 *)(lVar4 + 0x28);
      *param_5 = uVar5;
      *(ulong *)(lVar4 + 0x20) = uStack0000000000000000;
    } while (in_w14 == 0);
    param_2 = (ulong)param_5 >> 0x12 & 0x7fff;
  } while( true );
}


