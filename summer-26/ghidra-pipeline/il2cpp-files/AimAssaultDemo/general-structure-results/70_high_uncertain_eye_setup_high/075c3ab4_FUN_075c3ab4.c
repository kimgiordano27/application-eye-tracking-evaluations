/*
FUNCTION_NAME: FUN_075c3ab4
ENTRY_POINT: 075c3ab4
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 80
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_1;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_075c3ab4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar2 = OVRPlugin_OVRP_1_51_0_TypeInfo;
  puVar1 = OVRPlugin_OVRP_1_50_0_TypeInfo;
  if ((DAT_0826e842 & 1) == 0) {
    FUN_0373b518(OVRPlugin_OVRP_1_50_0_TypeInfo);
    FUN_0373b518(OVRPlugin_OVRP_1_51_0_TypeInfo);
    DAT_0826e842 = 1;
  }
  uVar3 = FUN_041e3678(*(undefined8 *)puVar2);
  puVar5 = (undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  *puVar5 = uVar3;
  thunk_FUN_037aeb94(puVar5,uVar3);
  lVar4 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  if (lVar4 != 0) {
    FUN_075b158c(lVar4,0x3d,0);
    return *(undefined8 *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


