/*
FUNCTION_NAME: FUN_075bfe14
ENTRY_POINT: 075bfe14
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_075bfe14(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if ((DAT_0826e718 & 1) == 0) {
    FUN_0373b518(OVRPlugin_OVRP_1_28_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_31_0_TypeInfo);
    DAT_0826e718 = 1;
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
LAB_075bfeb4:
    return *(undefined8 *)(param_1 + 0x20);
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar3 + 0x18);
    *(undefined4 *)(lVar3 + 0x18) = 0;
    *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
    if (0 < iVar1) {
      FUN_062658d0(*(undefined8 *)(lVar3 + 0x10),0,iVar1,0);
      lVar3 = *(long *)(param_1 + 0x20);
      if (lVar3 == 0) goto LAB_075bfec4;
    }
    puVar2 = OVRPlugin_OVRP_1_28_0_TypeInfo;
    FUN_049cf100(lVar3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)OVRPlugin_OVRP_1_28_0_TypeInfo
                );
    if (*(long *)(param_1 + 0x20) != 0) {
      FUN_049cf100(*(long *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x18),*(undefined8 *)puVar2);
      *(undefined1 *)(param_1 + 0x28) = 0;
      goto LAB_075bfeb4;
    }
  }
LAB_075bfec4:
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


