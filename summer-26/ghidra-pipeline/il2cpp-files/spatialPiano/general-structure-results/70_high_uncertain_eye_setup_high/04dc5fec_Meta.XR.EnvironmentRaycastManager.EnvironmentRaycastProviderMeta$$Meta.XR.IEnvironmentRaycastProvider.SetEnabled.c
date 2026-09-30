/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderMeta$$Meta.XR.IEnvironmentRaycastProvider.SetEnabled
ENTRY_POINT: 04dc5fec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderMeta__Meta_XR_IEnvironmentRaycastProvider_SetEnabled
          (undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  code *pcVar6;
  
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar5 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02f41e9c(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x248);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar5);
  }
  uVar3 = (*pcVar6)();
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar4 + 0x135);
  lVar5 = lVar4;
  if ((uVar1 & 1) == 0) {
    lVar4 = FUN_02f41e9c(lVar4);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar5 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar6 = (code *)**(undefined8 **)(*(long *)(lVar4 + 0xc0) + 0x90);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar5);
  }
  iVar2 = (*pcVar6)();
  FUN_0609bf0c(param_1,uVar3,(long)iVar2,0);
  return 0;
}


