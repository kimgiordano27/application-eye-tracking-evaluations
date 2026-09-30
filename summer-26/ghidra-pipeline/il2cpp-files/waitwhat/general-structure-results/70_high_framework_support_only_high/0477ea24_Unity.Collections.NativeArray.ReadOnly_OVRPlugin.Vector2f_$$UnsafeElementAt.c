/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector2f>$$UnsafeElementAt
ENTRY_POINT: 0477ea24
PROGRAM: waitwhat-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__UnsafeElementAt(ulong param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x23;
  int unaff_w24;
  long unaff_x25;
  undefined4 unaff_w26;
  byte unaff_w27;
  long unaff_x28;
  
  if ((param_1 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f42f0);
    *(undefined1 *)(unaff_x28 + 0x8e8) = 1;
  }
  FUN_05971910();
  puVar2 = PTR_DAT_070f42f0;
  if (unaff_x25 == 0) {
    thunk_FUN_031edd38(PTR_DAT_070c2888);
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    uVar3 = thunk_FUN_031edd38(PTR_DAT_070f3ae8);
    FUN_05897880(uVar5,uVar3,0);
  }
  else {
    if (0 < unaff_w24) {
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 8) + 0x135) & 1) ==
          0) {
        FUN_031c09d4();
      }
      uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      FUN_042e42dc(uVar3,unaff_w26,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x28));
      lVar4 = *(long *)puVar2;
      *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
      *(long *)(unaff_x20 + 0x18) = unaff_x25;
      *(int *)(unaff_x20 + 0x38) = unaff_w24;
      iVar1 = *(int *)(lVar4 + 0xe4);
      *(undefined8 *)(unaff_x20 + 0x20) = unaff_x23;
      *(undefined8 *)(unaff_x20 + 0x28) = unaff_x22;
      *(undefined8 *)(unaff_x20 + 0x30) = unaff_x21;
      *(byte *)(unaff_x20 + 0x3c) = unaff_w27 & 1;
      if (iVar1 == 0) {
        thunk_FUN_031e5338();
      }
      FUN_069f1120();
      return;
    }
    thunk_FUN_031edd38(PTR_DAT_070c3af0);
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    uVar3 = thunk_FUN_031edd38(PTR_DAT_070f42f8);
    uVar6 = thunk_FUN_031edd38(PTR_DAT_070f3af8);
    FUN_0589b344(uVar5,uVar3,uVar6,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar5);
}


