/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager.EnvironmentRaycastProviderDepthManager$$EnsureDepthManagerIsPresent
ENTRY_POINT: 04dc5b58
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager_EnvironmentRaycastProviderDepthManager__EnsureDepthManagerIsPresent
               (void)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  int unaff_w22;
  code *pcVar7;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  int iVar8;
  int unaff_w26;
  uint unaff_w27;
  ulong uVar9;
  code *unaff_x28;
  undefined4 uStack000000000000000c;
  
  uVar2 = (*unaff_x28)();
  if ((int)uVar2 <= (int)unaff_w27) {
    unaff_w27 = uVar2;
  }
  uVar9 = (ulong)unaff_w27;
  if (0 < (int)unaff_w27) {
    iVar8 = 0;
    do {
      iVar3 = FUN_0609d588(unaff_x23 + unaff_w25 + (long)iVar8,unaff_x24 + unaff_w26 + (long)iVar8);
      if (iVar3 != 0) {
        return;
      }
      uVar9 = uVar9 - 1;
      iVar8 = iVar8 + unaff_w22;
    } while (uVar9 != 0);
  }
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02f41e9c(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar6);
  }
  uStack000000000000000c = (*pcVar7)();
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar5 + 0x135);
  lVar6 = lVar5;
  if ((uVar1 & 1) == 0) {
    lVar5 = FUN_02f41e9c(lVar5);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar6 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar7 = (code *)**(undefined8 **)(*(long *)(lVar5 + 0xc0) + 0x268);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar6);
  }
  uVar4 = (*pcVar7)();
  FUN_050d2bd4(&stack0x0000000c,uVar4,0);
  return;
}


