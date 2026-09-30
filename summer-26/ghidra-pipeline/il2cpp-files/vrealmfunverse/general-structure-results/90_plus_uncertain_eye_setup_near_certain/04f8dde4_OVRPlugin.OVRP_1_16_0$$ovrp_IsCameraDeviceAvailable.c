/*
FUNCTION_NAME: OVRPlugin.OVRP_1_16_0$$ovrp_IsCameraDeviceAvailable
ENTRY_POINT: 04f8dde4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 94
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_5;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_6;functionality_eye_api_context_without_clear_sink_hits_3
*/


undefined8 OVRPlugin_OVRP_1_16_0__ovrp_IsCameraDeviceAvailable(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  
  puVar1 = System_Converter<MetaXRAcousticMaterial,_MetaXRAcousticMaterial>_TypeInfo;
  if (((param_1 & 1) != 0) && (*(long *)(unaff_x20 + 0x70) != 0)) {
    OVRPlugin_OVRP_1_15_0__ovrp_InitializeMixedReality();
    if (*(long *)(unaff_x20 + 0x70) != 0) {
      uVar2 = FUN_04f8de84();
      return uVar2;
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
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
    lVar3 = *(long *)puVar1;
  }
  *unaff_x19 = **(undefined8 **)(lVar3 + 0xb8);
  thunk_FUN_02bb0e9c();
  return 0;
}


