/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$GetMouseStateFromRaycast
ENTRY_POINT: 04d1e914
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 83
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__GetMouseStateFromRaycast
               (long param_1,ushort *param_2,ushort *param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  long unaff_x20;
  ushort *puVar5;
  ushort *puVar6;
  ulong uVar7;
  uint uStack000000000000000c;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    FUN_02d9a2e0(param_1);
  }
  if (DAT_06b77976 == '\0') {
    FUN_02d6084c(PTR_DAT_067680f8);
    DAT_06b77976 = '\x01';
  }
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  if (DAT_06b77979 == '\0') {
    FUN_02d6084c(PTR_DAT_067680f8);
    DAT_06b77979 = '\x01';
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  if (*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02d9a33c();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  if (*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x50) + 0x38) == 0) {
    FUN_02d9a33c();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *param_2;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x158) + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  uVar1 = (uint)uVar2;
  if ((uint)*param_3 <= (uint)uVar2) {
    uVar1 = (uint)*param_3;
  }
  if (uVar1 != 0) {
    uVar7 = (ulong)uVar1;
    puVar5 = param_3;
    puVar6 = param_2;
    do {
      puVar6 = puVar6 + 2;
      puVar5 = puVar5 + 2;
      iVar3 = FUN_0601547c(puVar6,puVar5,4,0);
      if (iVar3 != 0) {
        return;
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x38) + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  uStack000000000000000c = (uint)*param_2;
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x158) + 0x20) + 0x135) & 1) == 0) {
    FUN_02d9a2e0();
  }
  FUN_05004840(&stack0x0000000c,*param_3,0);
  return;
}


