/*
FUNCTION_NAME: FUN_05513310
ENTRY_POINT: 05513310
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_12;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_4
*/


long FUN_05513310(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  
  if ((DAT_06bbf5db & 1) == 0) {
    FUN_02f08768(UnityEngine_XR_OpenXR_OpenXRSettings_RenderMode_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_62_0_TypeInfo);
    FUN_02f08768(OVRInput_OVRControllerRTouch_TypeInfo);
    FUN_02f08768(OVRPlugin_OVRP_1_64_0_TypeInfo);
    FUN_02f08768(UnityEngine_XR_OpenXR_OpenXRLoaderBase_ReceiveNativeEventDelegate_TypeInfo);
    DAT_06bbf5db = 1;
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    lVar4 = thunk_FUN_02f45270(*(undefined8 *)OVRPlugin_OVRP_1_64_0_TypeInfo);
    FUN_0492c420(lVar4,*(undefined8 *)OVRPlugin_OVRP_1_62_0_TypeInfo);
    *(long *)(param_1 + 0x18) = lVar4;
    if (lVar4 == 0) goto LAB_0551341c;
  }
  puVar1 = UnityEngine_XR_OpenXR_OpenXRLoaderBase_ReceiveNativeEventDelegate_TypeInfo;
  uVar2 = FUN_0492ca50(lVar4,*(undefined8 *)OVRInput_OVRControllerRTouch_TypeInfo);
  lVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
  FUN_05116b38(lVar4,0);
  lVar3 = *(long *)(param_1 + 0x18);
  *(undefined4 *)(lVar4 + 0x10) = uVar2;
  *(undefined4 *)(lVar4 + 0x14) = 2;
  if (lVar3 != 0) {
    FUN_0492cd38(lVar3,param_2,lVar4,
                 *(undefined8 *)UnityEngine_XR_OpenXR_OpenXRSettings_RenderMode_TypeInfo);
    return lVar4;
  }
LAB_0551341c:
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


