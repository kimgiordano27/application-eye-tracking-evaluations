/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$ReconstructNormalAtWorldPos
ENTRY_POINT: 04dc3d24
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


undefined8
Meta_XR_EnvironmentDepthRaycaster__ReconstructNormalAtWorldPos
          (undefined8 param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  
  lVar8 = *(long *)(param_3 + 0x20);
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar5 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_02f41e9c(lVar8);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar5 = *(long *)(param_3 + 0x20);
  }
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x158);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02f41e9c(lVar5);
  }
  iVar2 = (*pcVar9)(param_2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x158));
  lVar8 = *(long *)(param_3 + 0x20);
  uVar1 = *(ushort *)(lVar8 + 0x135);
  lVar5 = lVar8;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_02f41e9c(lVar8);
    uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
    lVar5 = *(long *)(param_3 + 0x20);
  }
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x170);
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02f41e9c(lVar5);
  }
  iVar3 = (*pcVar9)(param_1,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x170));
  if (iVar3 < iVar2) {
    uVar6 = 1;
  }
  else {
    lVar8 = *(long *)(param_3 + 0x20);
    uVar1 = *(ushort *)(lVar8 + 0x135);
    lVar5 = lVar8;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_02f41e9c(lVar8);
      uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
      lVar5 = *(long *)(param_3 + 0x20);
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x128);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_02f41e9c(lVar5);
    }
    uVar4 = (*pcVar9)(param_2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x128));
    lVar8 = *(long *)(param_3 + 0x20);
    uVar1 = *(ushort *)(lVar8 + 0x135);
    lVar5 = lVar8;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_02f41e9c(lVar8);
      uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
      lVar5 = *(long *)(param_3 + 0x20);
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x18);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_02f41e9c(lVar5);
    }
    (*pcVar9)(param_1,uVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18));
    lVar8 = *(long *)(param_3 + 0x20);
    uVar1 = *(ushort *)(lVar8 + 0x135);
    lVar5 = lVar8;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_02f41e9c(lVar8);
      uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
      lVar5 = *(long *)(param_3 + 0x20);
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x60);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_02f41e9c(lVar5);
    }
    uVar6 = (*pcVar9)(param_1,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x60));
    lVar8 = *(long *)(param_3 + 0x20);
    uVar1 = *(ushort *)(lVar8 + 0x135);
    lVar5 = lVar8;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_02f41e9c(lVar8);
      uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
      lVar5 = *(long *)(param_3 + 0x20);
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x138);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_02f41e9c(lVar5);
    }
    uVar7 = (*pcVar9)(param_2,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x138));
    lVar8 = *(long *)(param_3 + 0x20);
    uVar1 = *(ushort *)(lVar8 + 0x135);
    lVar5 = lVar8;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_02f41e9c(lVar8);
      uVar1 = *(ushort *)(*(long *)(param_3 + 0x20) + 0x135);
      lVar5 = *(long *)(param_3 + 0x20);
    }
    pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x90);
    if ((uVar1 & 1) == 0) {
      lVar5 = FUN_02f41e9c(lVar5);
    }
    iVar2 = (*pcVar9)(param_1,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x90));
    FUN_0609bf0c(uVar6,uVar7,(long)iVar2,0);
    uVar6 = 0;
  }
  return uVar6;
}


