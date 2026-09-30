/*
FUNCTION_NAME: UnityEngine.CubemapArray$$Internal_Create
ENTRY_POINT: 068b791c
PROGRAM: waitwhat-libil2cpp.so
SCORE: 78
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void UnityEngine_CubemapArray__Internal_Create(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x19;
  
  FUN_042e4a64(param_2,param_3,*(undefined8 *)(param_1 + 0x70));
  lVar4 = FUN_069d3b50();
  puVar2 = OVRPlugin_OVRP_1_123_0_TypeInfo;
  puVar1 = PTR_DAT_070c2278;
  if (lVar4 != 0) {
    uVar3 = FUN_069d7c74(lVar4,0);
    uVar3 = FUN_06a6331c(uVar3,0);
    uVar6 = *(undefined8 *)puVar2;
    *(undefined4 *)(unaff_x19 + 0x400) = uVar3;
    uVar6 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed(uVar6);
    FUN_06881bcc();
    *(undefined8 *)(unaff_x19 + 0x408) = uVar6;
    FUN_068c1a90();
    FUN_068c1bc4();
    FUN_068c1d54();
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_031e5338();
    }
    uVar5 = FUN_069896a4(0);
    if ((uVar5 & 1) == 0) {
      *(undefined1 *)(unaff_x19 + 0x2d0) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


