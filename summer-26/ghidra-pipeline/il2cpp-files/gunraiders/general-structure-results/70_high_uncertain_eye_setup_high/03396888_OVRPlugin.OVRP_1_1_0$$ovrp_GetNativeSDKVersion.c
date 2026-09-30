/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_GetNativeSDKVersion
ENTRY_POINT: 03396888
PROGRAM: gunraiders-libil2cpp.so
SCORE: 70
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_1_0__ovrp_GetNativeSDKVersion(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x19;
  
  FUN_032e04b8(param_1,0);
  uVar3 = FUN_032e935c();
  puVar1 = Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)Michsky_UI_ModernUIPack_SliderManager_SliderEvent_TypeInfo;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03396844 with catch @ 033968bc
                        */
      lVar4 = *(long *)puVar1;
    }
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03396830 with catch @ 033968c0
                        */
                    /* catch(type#1 @ 04025298) { ... } // from try @ 03396860 with catch @ 033968c4
                        */
    return **(undefined8 **)(lVar4 + 0xb8);
  }
  (**(code **)(*unaff_x19 + 0x198))();
  if (*(int *)(*(long *)PTR_DAT_042305b0 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)PTR_DAT_042305b0);
  }
  FUN_03295500(0);
  uVar2 = FUN_033985d4();
  return uVar2;
}


