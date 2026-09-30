/*
FUNCTION_NAME: FUN_04f8ddac
ENTRY_POINT: 04f8ddac
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_8;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 FUN_04f8ddac(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((DAT_066c9d93 & 1) == 0) {
    FUN_02b3c81c(System_Converter<MetaXRAcousticMaterial,_MetaXRAcousticMaterial>_TypeInfo);
    DAT_066c9d93 = 1;
  }
  uVar2 = FUN_04f8d9ec(param_1);
  puVar1 = System_Converter<MetaXRAcousticMaterial,_MetaXRAcousticMaterial>_TypeInfo;
  if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x70) != 0)) {
    OVRPlugin_OVRP_1_15_0__ovrp_InitializeMixedReality(param_1);
    if (*(long *)(param_1 + 0x70) != 0) {
      uVar3 = FUN_04f8de84(*(long *)(param_1 + 0x70),param_2);
      return uVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  if (*(int *)(*(long *)System_Converter<MetaXRAcousticMaterial,_MetaXRAcousticMaterial>_TypeInfo +
              0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  if (DAT_066c9907 == '\0') {
    FUN_02b3c81c(System_Converter<MetaXRAcousticMaterial,_MetaXRAcousticMaterial>_TypeInfo);
    DAT_066c9907 = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar4 = *(long *)puVar1;
  }
  *param_2 = **(undefined8 **)(lVar4 + 0xb8);
  thunk_FUN_02bb0e9c(param_2);
  return 0;
}


