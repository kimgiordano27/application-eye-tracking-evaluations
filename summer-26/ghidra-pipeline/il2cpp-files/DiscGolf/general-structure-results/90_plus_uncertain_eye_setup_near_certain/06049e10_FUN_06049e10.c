/*
FUNCTION_NAME: FUN_06049e10
ENTRY_POINT: 06049e10
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 96
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;telemetry_or_network_hits_1;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_06049e10(void *param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if ((DAT_06dc4c45 & 1) == 0) {
    FUN_02d965b8(OVRPlugin_OVRP_1_100_0_TypeInfo);
    FUN_02d965b8(Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>__ctor__);
    DAT_06dc4c45 = 1;
  }
  puVar3 = Method_Oculus_Avatar2_EntityJointMonitorBase<InterpolatingJoint>__ctor__;
  if (param_2 == 0) {
    thunk_FUN_02dfd288(PTR_DAT_06a0ac70);
    uVar7 = thunk_FUN_02dd3144();
    uVar8 = thunk_FUN_02dfd288(Method_System_Configuration_ConfigurationSection_ResetModified__);
    FUN_05452924(uVar7,uVar8,0);
    uVar8 = thunk_FUN_02dfd288(Method_System_Configuration_ConfigurationSection_SerializeSection__);
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar7,uVar8);
  }
  FUN_06049f78(param_3);
  uVar5 = thunk_FUN_0536b75c(param_3,*(undefined8 *)puVar3,0);
  if ((uVar5 & 1) == 0) {
    bVar4 = thunk_FUN_0536b75c(param_3,*(undefined8 *)OVRPlugin_OVRP_1_100_0_TypeInfo,0);
  }
  else {
    bVar4 = 1;
  }
  lVar6 = FUN_0604a0b0(*(undefined8 *)(param_2 + 0x20),param_3);
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(param_2 + 0x38);
    uVar8 = *(undefined8 *)(param_2 + 0x40);
    uVar10 = *(undefined8 *)(lVar6 + 0x20);
    uVar1 = *(undefined4 *)(lVar6 + 0x28);
    uVar9 = *(undefined8 *)(param_2 + 0x30);
    uVar2 = *(undefined1 *)(lVar6 + 0x1d);
    memset(param_1,0,0x4b8);
    FUN_05f1c418(param_1,uVar10,uVar1,uVar8,uVar7,uVar7,uVar9,uVar2,bVar4 & 1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


