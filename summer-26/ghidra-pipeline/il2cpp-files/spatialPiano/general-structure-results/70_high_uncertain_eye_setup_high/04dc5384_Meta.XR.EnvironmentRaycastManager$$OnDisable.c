/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$OnDisable
ENTRY_POINT: 04dc5384
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentRaycastManager__OnDisable(undefined8 param_1)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  int unaff_w22;
  code *pcVar7;
  
  lVar3 = FUN_02f41e9c(param_1);
  pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar3 + 0xc0) + 0x170);
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c(*(long *)(unaff_x20 + 0x20));
  }
  iVar2 = (*pcVar7)();
  if (iVar2 < unaff_w22) {
    uVar4 = 1;
  }
  else {
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar3 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x1e0);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c(lVar3);
    }
    (*pcVar7)();
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar3 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x18);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c(lVar3);
    }
    (*pcVar7)();
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar3 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x60);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c(lVar3);
    }
    uVar4 = (*pcVar7)();
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar3 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x1f0);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c(lVar3);
    }
    uVar5 = (*pcVar7)();
    lVar6 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar6 + 0x135);
    lVar3 = lVar6;
    if ((uVar1 & 1) == 0) {
      lVar6 = FUN_02f41e9c(lVar6);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar3 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x90);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c(lVar3);
    }
    iVar2 = (*pcVar7)();
    FUN_0609bf0c(uVar4,uVar5,(long)iVar2,0);
    uVar4 = 0;
  }
  return uVar4;
}


