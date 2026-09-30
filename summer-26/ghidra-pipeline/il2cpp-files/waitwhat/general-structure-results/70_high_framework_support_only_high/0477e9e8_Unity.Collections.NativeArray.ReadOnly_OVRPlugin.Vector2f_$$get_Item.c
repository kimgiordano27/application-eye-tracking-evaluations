/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Vector2f>$$get_Item
ENTRY_POINT: 0477e9e8
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


void Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Vector2f>__get_Item
               (long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               byte param_6,undefined4 param_7,int param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long in_stack_00000060;
  
  if ((DAT_075488e8 & 1) == 0) {
    FUN_03188a78(PTR_DAT_070f42f0);
    DAT_075488e8 = 1;
  }
  FUN_05971910(param_1,0);
  puVar2 = PTR_DAT_070f42f0;
  if (param_2 == 0) {
    thunk_FUN_031edd38(PTR_DAT_070c2888);
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    uVar3 = thunk_FUN_031edd38(PTR_DAT_070f3ae8);
    FUN_05897880(uVar5,uVar3,0);
  }
  else {
    if (0 < param_8) {
      if ((*(ushort *)(*(long *)(*(long *)(*(long *)(in_stack_00000060 + 0x20) + 0xc0) + 8) + 0x135)
          & 1) == 0) {
        FUN_031c09d4();
      }
      uVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
      FUN_042e42dc(uVar3,param_7,
                   *(undefined8 *)(*(long *)(*(long *)(in_stack_00000060 + 0x20) + 0xc0) + 0x28));
      lVar4 = *(long *)puVar2;
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      *(long *)(param_1 + 0x18) = param_2;
      *(int *)(param_1 + 0x38) = param_8;
      iVar1 = *(int *)(lVar4 + 0xe4);
      *(undefined8 *)(param_1 + 0x20) = param_3;
      *(undefined8 *)(param_1 + 0x28) = param_4;
      *(undefined8 *)(param_1 + 0x30) = param_5;
      *(byte *)(param_1 + 0x3c) = param_6 & 1;
      if (iVar1 == 0) {
        thunk_FUN_031e5338();
      }
      FUN_069f1120(param_1,0);
      return;
    }
    thunk_FUN_031edd38(PTR_DAT_070c3af0);
    uVar5 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed();
    uVar3 = thunk_FUN_031edd38(PTR_DAT_070f42f8);
    uVar6 = thunk_FUN_031edd38(PTR_DAT_070f3af8);
    FUN_0589b344(uVar5,uVar3,uVar6,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188b9c(uVar5,in_stack_00000060);
}


