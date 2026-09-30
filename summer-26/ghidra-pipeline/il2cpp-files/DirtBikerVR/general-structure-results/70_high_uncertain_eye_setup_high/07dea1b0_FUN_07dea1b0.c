/*
FUNCTION_NAME: FUN_07dea1b0
ENTRY_POINT: 07dea1b0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_8;weak_xr_or_state_hits_8;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_8
*/


void FUN_07dea1b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_48;
  undefined8 local_38;
  
  puVar4 = OVRPlugin_OVRP_1_67_0_TypeInfo;
  puVar3 = OVRPlugin_OVRP_1_66_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_65_0_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_64_0_TypeInfo;
  local_38 = param_2;
  if ((DAT_0899a1bd & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OVRP_1_67_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_66_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_65_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_64_0_TypeInfo);
    DAT_0899a1bd = 1;
  }
  local_48 = 0;
  uVar5 = FUN_0586fcfc(&local_38,*(undefined8 *)puVar1);
  uVar6 = FUN_0586fd1c(&local_38,*(undefined8 *)puVar2);
  FUN_0586fd9c(&local_48,uVar5,uVar6,*(undefined8 *)puVar3);
  uVar7 = FUN_0459af60(param_1,0x7000f,local_48,*(undefined8 *)puVar4);
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_07e04920(*(long *)(param_1 + 0x20),0x68,0);
    if (*(long *)(param_1 + 0x20) != 0) {
      uVar8 = FUN_07dfe1a8(*(long *)(param_1 + 0x20),0);
      if (*(long *)(param_1 + 0x20) != 0) {
        uVar9 = FUN_07dfdfd8(*(long *)(param_1 + 0x20),0);
        uVar5 = FUN_07f6df6c(uVar9,0);
        FUN_07e9f0ac(uVar8,uVar5,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


