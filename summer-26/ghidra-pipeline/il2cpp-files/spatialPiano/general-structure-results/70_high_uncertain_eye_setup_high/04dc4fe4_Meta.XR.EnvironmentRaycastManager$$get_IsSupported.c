/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$get_IsSupported
ENTRY_POINT: 04dc4fe4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__get_IsSupported(long param_1,long param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  int unaff_w22;
  long unaff_x23;
  long unaff_x24;
  int unaff_w25;
  int iVar8;
  int unaff_w26;
  code *pcVar9;
  ulong uVar10;
  undefined4 uStack000000000000000c;
  
  pcVar9 = (code *)**(undefined8 **)(*(long *)(param_2 + 0xc0) + 0x38);
  if ((*(ushort *)(param_1 + 0x135) & 1) == 0) {
    FUN_02f41e9c(param_1);
  }
  uVar2 = (*pcVar9)();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar7 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x210);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar7);
  }
  uVar3 = (*pcVar9)();
  if ((int)uVar3 <= (int)uVar2) {
    uVar2 = uVar3;
  }
  uVar10 = (ulong)uVar2;
  if (0 < (int)uVar2) {
    iVar8 = 0;
    do {
      iVar4 = FUN_0609d588(unaff_x23 + unaff_w25 + (long)iVar8,unaff_x24 + unaff_w26 + (long)iVar8);
      if (iVar4 != 0) {
        return;
      }
      uVar10 = uVar10 - 1;
      iVar8 = iVar8 + unaff_w22;
    } while (uVar10 != 0);
  }
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar7 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x38);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar7);
  }
  uStack000000000000000c = (*pcVar9)();
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(ushort *)(lVar6 + 0x135);
  lVar7 = lVar6;
  if ((uVar1 & 1) == 0) {
    lVar6 = FUN_02f41e9c(lVar6);
    uVar1 = *(ushort *)(*(long *)(unaff_x20 + 0x20) + 0x135);
    lVar7 = *(long *)(unaff_x20 + 0x20);
  }
  pcVar9 = (code *)**(undefined8 **)(*(long *)(lVar6 + 0xc0) + 0x210);
  if ((uVar1 & 1) == 0) {
    FUN_02f41e9c(lVar7);
  }
  uVar5 = (*pcVar9)();
  FUN_050d2bd4(&stack0x0000000c,uVar5,0);
  return;
}


