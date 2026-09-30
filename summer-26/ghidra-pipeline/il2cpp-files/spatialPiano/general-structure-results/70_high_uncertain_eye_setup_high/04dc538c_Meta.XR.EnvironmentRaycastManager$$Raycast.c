/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$Raycast
ENTRY_POINT: 04dc538c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_EnvironmentRaycastManager__Raycast(long param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  int unaff_w22;
  code *pcVar7;
  
  pcVar7 = (code *)**(undefined8 **)(*(long *)(param_1 + 0xc0) + 0x170);
  if ((*(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02f41e9c(*(long *)(unaff_x20 + 0x20));
  }
  iVar2 = (*pcVar7)();
  if (iVar2 < unaff_w22) {
    uVar3 = 1;
  }
  else {
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar6 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_02f41e9c(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x1e0);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c(lVar6);
    }
    (*pcVar7)();
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar6 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_02f41e9c(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x18);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c(lVar6);
    }
    (*pcVar7)();
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar6 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_02f41e9c(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x60);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c(lVar6);
    }
    uVar3 = (*pcVar7)();
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar6 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_02f41e9c(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x1f0);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c(lVar6);
    }
    uVar4 = (*pcVar7)();
    lVar5 = *(long *)(unaff_x20 + 0x20);
    uVar1 = *(ushort *)(lVar5 + 0x135);
    lVar6 = lVar5;
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_02f41e9c(lVar5);
      uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
      lVar6 = *(long *)(unaff_x20 + 0x20);
    }
    pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x90);
    if ((uVar1 & 1) == 0) {
      FUN_02f41e9c(lVar6);
    }
    iVar2 = (*pcVar7)();
    FUN_0609bf0c(uVar3,uVar4,(long)iVar2,0);
    uVar3 = 0;
  }
  return uVar3;
}


