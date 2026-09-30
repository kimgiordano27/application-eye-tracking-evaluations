/*
FUNCTION_NAME: Unity.Services.Core.Internal.LockedComponentRegistry$$.ctor
ENTRY_POINT: 06698190
PROGRAM: waitwhat-libil2cpp.so
SCORE: 106
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;telemetry
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Unity_Services_Core_Internal_LockedComponentRegistry___ctor(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  int unaff_w24;
  long lVar9;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  puVar3 = OVRPlugin_TrackingConfidence___TypeInfo;
  *(int *)(unaff_x20 + 0x38) = unaff_w24;
  lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                    (*(undefined8 *)puVar3);
                    /* try { // try from 066981a4 to 067981a7 has its CatchHandler @ 066981b4 */
  iVar1 = unaff_w24 + 3;
  if (-1 < unaff_w24) {
    iVar1 = unaff_w24;
  }
                    /* catch() { ... } // from try @ 066981a4 with catch @ 066981b4 */
  FUN_069a776c(lVar8,0x20,iVar1 >> 2,4,0);
  *(long *)(unaff_x20 + 0x48) = lVar8;
  in_stack_00000038 = 0;
  in_stack_00000040 = 0;
  FUN_045cc924(&stack0x00000038,4,2,1,*(undefined8 *)Best_HTTP_JSON_LitJson_IJsonWrapper_TypeInfo);
  if (lVar8 != 0) {
    FUN_03ac55f0(lVar8,in_stack_00000038,in_stack_00000040,0,0,4,
                 *(undefined8 *)System_Text_Json_Serialization_IJsonOnSerialized_TypeInfo);
    lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                      (*(undefined8 *)puVar3);
    FUN_069a776c(lVar8,0x20,unaff_w21,4,0);
    *(long *)(unaff_x20 + 0x50) = lVar8;
    puVar5 = Oculus_Avatar2_IJointMonitor_TypeInfo;
    if (lVar8 != 0) {
      FUN_03ac523c(lVar8,in_stack_00000080,in_stack_00000088,0,0,unaff_w21,
                   *(undefined8 *)Oculus_Avatar2_IJointMonitor_TypeInfo);
      lVar8 = *unaff_x19;
      if ((*(ushort *)
            (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo + 0x20
                      ) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      uVar2 = *(undefined4 *)(lVar8 + 8);
      lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                        (*(undefined8 *)puVar3);
      FUN_069a776c(lVar8,0x20,uVar2,4,0);
      uVar7 = in_stack_00000078;
      uVar6 = in_stack_00000070;
      puVar4 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
      *(long *)(unaff_x20 + 0x58) = lVar8;
      lVar9 = *unaff_x19;
      if ((*(ushort *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
        FUN_031c09d4();
      }
      if (lVar8 != 0) {
        FUN_03ac523c(lVar8,uVar6,uVar7,0,0,*(undefined4 *)(lVar9 + 8),*(undefined8 *)puVar5);
        lVar8 = *unaff_x19;
        if ((*(ushort *)
              (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo +
                        0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        uVar2 = *(undefined4 *)(lVar8 + 8);
        lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                          (*(undefined8 *)puVar3);
        FUN_069a776c(lVar8,0x20,uVar2,8,0);
        uVar7 = in_stack_00000058;
        uVar6 = in_stack_00000050;
        puVar4 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
        *(long *)(unaff_x20 + 0x60) = lVar8;
        lVar9 = *unaff_x19;
        if ((*(ushort *)(*(long *)(*(long *)puVar4 + 0x20) + 0x135) & 1) == 0) {
          FUN_031c09d4();
        }
        if (lVar8 != 0) {
          FUN_03ac54b4(lVar8,uVar6,uVar7,0,0,*(undefined4 *)(lVar9 + 8),
                       *(undefined8 *)Newtonsoft_Json_IJsonLineInfo_TypeInfo);
          lVar8 = *unaff_x19;
          if ((*(ushort *)
                (*(long *)(*(long *)Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo +
                          0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          uVar2 = *(undefined4 *)(lVar8 + 8);
          lVar8 = Best_HTTP_Profiler_Network_NetworkStatsCollector__get_ReceivedAndUnprocessed
                            (*(undefined8 *)puVar3);
          FUN_069a776c(lVar8,0x20,uVar2,4,0);
          uVar7 = in_stack_00000068;
          uVar6 = in_stack_00000060;
          puVar3 = Oculus_Interaction_PoseDetection_IJointDeltaProvider_TypeInfo;
          *(long *)(unaff_x20 + 0x68) = lVar8;
          lVar9 = *unaff_x19;
          if ((*(ushort *)(*(long *)(*(long *)puVar3 + 0x20) + 0x135) & 1) == 0) {
            FUN_031c09d4();
          }
          if (lVar8 != 0) {
            FUN_03ac523c(lVar8,uVar6,uVar7,0,0,*(undefined4 *)(lVar9 + 8),*(undefined8 *)puVar5);
            puVar3 = PTR_DAT_070f7080;
            *(undefined4 *)(unaff_x20 + 0x3c) = unaff_w21;
            FUN_0456d550(&stack0x00000080,*(undefined8 *)puVar3);
            FUN_0456d550(&stack0x00000070,*(undefined8 *)puVar3);
            FUN_0456d550(&stack0x00000060,*(undefined8 *)puVar3);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


