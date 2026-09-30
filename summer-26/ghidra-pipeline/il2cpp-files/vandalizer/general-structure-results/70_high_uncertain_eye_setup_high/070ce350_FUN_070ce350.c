/*
FUNCTION_NAME: FUN_070ce350
ENTRY_POINT: 070ce350
PROGRAM: vandalizer-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_13;weak_xr_or_state_hits_13;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_13
*/


void FUN_070ce350(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar2 = OVRPlugin_OVRP_1_30_0_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_21_0_TypeInfo;
  if ((DAT_07a5a987 & 1) == 0) {
    FUN_031f20f4(OVRPlugin_OVRP_1_31_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_32_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_34_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_35_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_30_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_36_0_TypeInfo);
    FUN_031f20f4(OVRPlugin_OVRP_1_21_0_TypeInfo);
    DAT_07a5a987 = 1;
  }
  puVar4 = OVRPlugin_OVRP_1_36_0_TypeInfo;
  puVar3 = OVRPlugin_OVRP_1_35_0_TypeInfo;
  uVar5 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_070ce4c4();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  FUN_0516fdf4(param_1,param_2,param_3,uVar5,*(undefined8 *)puVar3);
  lVar6 = *(long *)puVar4;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
    lVar6 = *(long *)puVar4;
  }
  FUN_06fc7f68(param_1,**(undefined8 **)(lVar6 + 0xb8),0);
  puVar1 = OVRPlugin_OVRP_1_32_0_TypeInfo;
  if (*(long *)(param_1 + 0x4e8) != 0) {
    FUN_06fc7f68(*(long *)(param_1 + 0x4e8),*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 8),0
                );
    lVar6 = FUN_05438430(param_1,*(undefined8 *)puVar1);
    puVar1 = OVRPlugin_OVRP_1_34_0_TypeInfo;
    if (lVar6 != 0) {
      FUN_06fc7f68(lVar6,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),0);
      FUN_03a1a6b4(param_1,*(undefined8 *)puVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


