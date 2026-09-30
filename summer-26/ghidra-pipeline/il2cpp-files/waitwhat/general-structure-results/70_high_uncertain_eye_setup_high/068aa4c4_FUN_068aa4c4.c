/*
FUNCTION_NAME: FUN_068aa4c4
ENTRY_POINT: 068aa4c4
PROGRAM: waitwhat-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_068aa4c4(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = OVRPlugin_OVRP_1_123_0_TypeInfo;
  if ((DAT_075590e7 & 1) == 0) {
    FUN_03188a78(OVRPlugin_OVRP_1_124_0_TypeInfo);
    FUN_03188a78(PTR_DAT_070f3178);
    FUN_03188a78(OVRPlugin_OVRP_1_123_0_TypeInfo);
    DAT_075590e7 = 1;
  }
  (**(code **)(*param_1 + 0x8f8))(param_1,*(undefined8 *)(*param_1 + 0x900));
  FUN_068ae850(param_1,0);
  lVar3 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar2);
  FUN_06881bcc(lVar3,param_1,0);
  lVar4 = param_1[0x2c];
  param_1[100] = lVar3;
  if (lVar4 != 0) {
    lVar5 = *(long *)(lVar4 + 0x10);
    lVar3 = param_1[0x59];
    lVar6 = *(long *)OVRPlugin_OVRP_1_124_0_TypeInfo;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar5 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar3;
      }
      else {
        FUN_042e4a64(lVar4,lVar3,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      lVar3 = param_1[0x2d];
      if (lVar3 != 0) {
        lVar5 = *(long *)(lVar3 + 0x10);
        lVar4 = param_1[0x5a];
        lVar6 = *(long *)PTR_DAT_070f3178;
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = lVar4;
            return;
          }
          FUN_042e4a64(lVar3,lVar4,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                      );
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


