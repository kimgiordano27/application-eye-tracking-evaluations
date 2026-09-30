/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.get_IsSupported
ENTRY_POINT: 05ae49bc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_get_IsSupported
               (void)

{
  uint uVar1;
  void *__src;
  long lVar2;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  
  lVar2 = *(long *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  if (*(long *)(*unaff_x20 + 0x40) == *(long *)(lVar2 + 0x40)) {
    __src = (void *)thunk_FUN_0367ff68();
    memcpy(&stack0x00000000,__src,0x70);
    pcVar3 = *(code **)(*unaff_x19 + 0x1b8);
    memcpy(&stack0x00000150,&stack0x00000070,0x70);
    memcpy(&stack0x000000e0,&stack0x00000000,0x70);
    uVar1 = (*pcVar3)();
    return uVar1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03643084();
}


