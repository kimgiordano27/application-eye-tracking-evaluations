/*
FUNCTION_NAME: FUN_07032604
ENTRY_POINT: 07032604
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_10;weak_xr_or_state_hits_10;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_10
*/


long FUN_07032604(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long local_38;
  
  if ((DAT_07eebdfc & 1) == 0) {
    FUN_03642964(OVRPlugin_OVRP_1_78_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_6_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_79_0_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_7_0_TypeInfo);
    FUN_03642964(Unity_Jobs_LowLevel_Unsafe_JobsUtility_TypeInfo);
    FUN_03642964(OVRPlugin_OVRP_1_81_0_TypeInfo);
    DAT_07eebdfc = 1;
  }
  puVar1 = OVRPlugin_OVRP_1_6_0_TypeInfo;
  local_38 = 0;
  if (param_1 != (long *)0x0) {
    uVar2 = (**(code **)(*param_1 + 0x158))(param_1,*(undefined8 *)(*param_1 + 0x160));
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_036a1978(lVar7);
      lVar7 = *(long *)puVar1;
    }
    if (**(long **)(lVar7 + 0xb8) != 0) {
      uVar3 = FUN_055fcd94(**(long **)(lVar7 + 0xb8),uVar2,&local_38,
                           *(undefined8 *)OVRPlugin_OVRP_1_7_0_TypeInfo);
      if ((uVar3 & 1) != 0) {
        return local_38;
      }
      uVar4 = thunk_FUN_071c6398(param_1,0);
      lVar7 = thunk_FUN_0367fe20(*(undefined8 *)OVRPlugin_OVRP_1_78_0_TypeInfo);
      FUN_05e5ae34(lVar7,0);
      if (lVar7 != 0) {
        *(undefined8 *)(lVar7 + 0x10) = uVar4;
        thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x10),uVar4);
        uVar4 = FUN_05c8d7b8(*(undefined8 *)OVRPlugin_OVRP_1_81_0_TypeInfo,uVar4,0);
        uVar5 = thunk_FUN_0367fe20(*(undefined8 *)Unity_Jobs_LowLevel_Unsafe_JobsUtility_TypeInfo);
        FUN_06ea9e10(uVar5,uVar4,0);
        *(undefined8 *)(lVar7 + 0x18) = uVar5;
        thunk_FUN_036b7ad0((undefined8 *)(lVar7 + 0x18),uVar5);
        lVar6 = *(long *)puVar1;
        local_38 = lVar7;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          thunk_FUN_036a1978();
          lVar6 = *(long *)puVar1;
        }
        if (**(long **)(lVar6 + 0xb8) != 0) {
          FUN_055fb2b8(**(long **)(lVar6 + 0xb8),uVar2,local_38,
                       *(undefined8 *)OVRPlugin_OVRP_1_79_0_TypeInfo);
          return local_38;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03642c18();
}


