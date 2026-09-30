/*
FUNCTION_NAME: FUN_07de5498
ENTRY_POINT: 07de5498
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_3
*/


uint FUN_07de5498(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  
  if ((DAT_0899a191 & 1) == 0) {
    FUN_03a8a718(OVRPlugin_OVRP_1_114_0_TypeInfo);
    FUN_03a8a718(OVRPlugin_OVRP_1_115_0_TypeInfo);
    DAT_0899a191 = 1;
  }
  puVar2 = OVRPlugin_OVRP_1_115_0_TypeInfo;
  if (param_1 != param_2) {
    uVar4 = 0;
    if ((param_1 == 0) || (param_2 == 0)) goto LAB_07de556c;
    iVar1 = *(int *)(param_1 + 0x18);
    if (iVar1 != *(int *)(param_2 + 0x18)) {
      uVar4 = 0;
      goto LAB_07de556c;
    }
    if (0 < iVar1) {
      iVar7 = 0;
      do {
        uVar5 = FUN_04eafaec(param_1,iVar7,*(undefined8 *)puVar2);
        uVar6 = FUN_04eafaec(param_2,iVar7,*(undefined8 *)puVar2);
        uVar4 = FUN_07e26b5c(uVar5,uVar6,0);
        if ((uVar4 & 1) != 0) break;
        bVar3 = iVar1 + -1 != iVar7;
        iVar7 = iVar7 + 1;
      } while (bVar3);
      uVar4 = uVar4 ^ 1;
      goto LAB_07de556c;
    }
  }
  uVar4 = 1;
LAB_07de556c:
  return uVar4 & 1;
}


