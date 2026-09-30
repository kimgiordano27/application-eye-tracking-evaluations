/*
FUNCTION_NAME: FUN_075bfc84
ENTRY_POINT: 075bfc84
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_5;weak_xr_or_state_hits_5;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_5
*/


void FUN_075bfc84(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_0826e716 & 1) == 0) {
    FUN_0373b518(OVRPlugin_OVRP_1_31_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_32_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_1_0_TypeInfo);
    DAT_0826e716 = 1;
  }
  puVar3 = OVRPlugin_OVRP_1_32_0_TypeInfo;
  puVar2 = OVRPlugin_OVRP_1_1_0_TypeInfo;
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x18);
    *(undefined4 *)(lVar5 + 0x18) = 0;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_062658d0(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
    }
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = thunk_FUN_037788cc(*(undefined8 *)puVar2);
    FUN_049ce7e8(uVar4,uVar6,*(undefined8 *)puVar3);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    thunk_FUN_037aeb94((undefined8 *)(param_1 + 0x20),uVar4);
    *(undefined1 *)(param_1 + 0x28) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


