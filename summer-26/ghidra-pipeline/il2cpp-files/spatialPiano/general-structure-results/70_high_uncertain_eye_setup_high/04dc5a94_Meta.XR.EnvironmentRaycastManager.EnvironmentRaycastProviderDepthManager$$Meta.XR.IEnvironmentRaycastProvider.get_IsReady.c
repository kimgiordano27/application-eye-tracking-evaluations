/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$Meta.XR.IEnvironmentRaycastProvider.get_IsReady
ENTRY_POINT: 04dc5a94
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__Meta_XR_IEnvironmentRaycastProvider_get_IsReady
               (long param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong in_x9;
  undefined8 *in_x10;
  long unaff_x20;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  int iVar9;
  code *pcVar10;
  ulong uVar11;
  undefined4 uStack000000000000000c;
  
  pcVar10 = (code *)*in_x10;
  if ((in_x9 & 1) == 0) {
    param_1 = FUN_02f41e9c(param_1);
  }
  iVar2 = (*pcVar10)(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x50));
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar8 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_02f41e9c(lVar7);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar8);
  }
  uVar3 = (*pcVar10)();
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar8 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_02f41e9c(lVar7);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x268);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar8);
  }
  uVar4 = (*pcVar10)();
  if ((int)uVar4 <= (int)uVar3) {
    uVar3 = uVar4;
  }
  uVar11 = (ulong)uVar3;
  if (0 < (int)uVar3) {
    iVar9 = 0;
    do {
      iVar5 = FUN_0609d588(unaff_x23 + unaff_w25 + (long)iVar9,unaff_x24 + iVar2 + (long)iVar9);
      if (iVar5 != 0) {
        return;
      }
      uVar11 = uVar11 - 1;
      iVar9 = iVar9 + unaff_w22;
    } while (uVar11 != 0);
  }
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar8 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_02f41e9c(lVar7);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar8);
  }
  uStack000000000000000c = (*pcVar10)();
  lVar7 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar7 + 0x135);
  lVar8 = lVar7;
  if ((uVar1 & 1) == 0) {
    lVar7 = FUN_02f41e9c(lVar7);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar8 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar10 = (code *)**(undefined8 **)(*(long *)(lVar7 + 0xc0) + 0x268);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar8);
  }
  uVar6 = (*pcVar10)();
  FUN_050d2bd4(&stack0x0000000c,uVar6,0);
  return;
}


