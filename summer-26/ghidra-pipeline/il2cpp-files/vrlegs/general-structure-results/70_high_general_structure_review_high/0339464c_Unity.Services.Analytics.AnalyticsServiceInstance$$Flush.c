/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsServiceInstance$$Flush
ENTRY_POINT: 0339464c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_2;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Analytics_AnalyticsServiceInstance__Flush(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x19;
  undefined8 unaff_x21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000000;
  
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists((ulong)&stack0x00000000 | 8);
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(int *)(unaff_x19 + 0x18) != 0) {
    *(undefined8 *)(unaff_x19 + 0x28) = unaff_x21;
    *(undefined8 *)(unaff_x19 + 0x20) = in_stack_00000000;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x28,0);
    in_stack_00000000 = 1;
    uVar5 = thunk_FUN_01a89e68(*unaff_x23);
    FUN_03394124(uVar5,0,*unaff_x24);
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((ulong)&stack0x00000000 | 8,uVar5);
    puVar4 = Photon_Voice_ILogger_TypeInfo;
    puVar3 = QFSW_QC_ILogStorage_TypeInfo;
    puVar2 = QFSW_QC_ILogQueue_TypeInfo;
    puVar1 = UnityEngine_ILogHandler_TypeInfo;
    if (1 < *(uint *)(unaff_x19 + 0x18)) {
      *(undefined8 *)(unaff_x19 + 0x38) = uVar5;
      *(undefined8 *)(unaff_x19 + 0x30) = in_stack_00000000;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(unaff_x19 + 0x38,0);
      *(long *)(*(long *)(*unaff_x22 + 0xb8) + 8) = unaff_x19;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar4);
      FUN_0219a4f0(uVar5,*(undefined8 *)puVar1);
      puVar6 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x10);
      *puVar6 = uVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar6,uVar5);
      uVar5 = thunk_FUN_01a89e68(*(undefined8 *)puVar3);
      FUN_0219a508(uVar5,0x20,*(undefined8 *)puVar2);
      puVar6 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x18);
      *puVar6 = uVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar6,uVar5);
      uVar5 = thunk_FUN_01a89e68(*unaff_x22);
      FUN_03394278();
      puVar6 = (undefined8 *)(*(long *)(*unaff_x22 + 0xb8) + 0x20);
      *puVar6 = uVar5;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar6,uVar5);
      lVar7 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined8 *)(lVar7 + 0x30) = *(undefined8 *)(lVar7 + 0x20);
      *(undefined4 *)(lVar7 + 0x28) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar7 = *(long *)(*unaff_x22 + 0xb8);
      *(undefined1 *)(lVar7 + 0x38) = 1;
      *(undefined4 *)(lVar7 + 0x3c) = 0x3f800000;
      *(undefined1 *)(lVar7 + 0x40) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


