/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.get_IsSupported
ENTRY_POINT: 04dc5e4c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_get_IsSupported
          (undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong in_x9;
  undefined8 *in_x10;
  long unaff_x20;
  code *pcVar8;
  
  pcVar8 = (code *)*in_x10;
  if ((in_x9 & 1) == 0) {
    FUN_02f41e9c(param_1);
  }
  iVar2 = (*pcVar8)();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar7 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x170);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar7);
  }
  iVar3 = (*pcVar8)();
  if (iVar3 < iVar2) {
    uVar4 = 1;
  }
  else {
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar7 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar7 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x238);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c(lVar7);
    }
    (*pcVar8)();
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar7 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar7 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x18);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c(lVar7);
    }
    (*pcVar8)();
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar7 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar7 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x60);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c(lVar7);
    }
    uVar4 = (*pcVar8)();
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar7 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar7 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x248);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c(lVar7);
    }
    uVar5 = (*pcVar8)();
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar7 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar7 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar8 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x90);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c(lVar7);
    }
    iVar2 = (*pcVar8)();
    FUN_0609bf0c(uVar4,uVar5,(long)iVar2,0);
    uVar4 = 0;
  }
  return uVar4;
}


