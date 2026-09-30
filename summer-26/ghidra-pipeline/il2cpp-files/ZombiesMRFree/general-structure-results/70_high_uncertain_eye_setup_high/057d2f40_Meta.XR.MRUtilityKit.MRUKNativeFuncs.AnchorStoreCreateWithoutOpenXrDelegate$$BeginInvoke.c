/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreCreateWithoutOpenXrDelegate$$BeginInvoke
ENTRY_POINT: 057d2f40
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreCreateWithoutOpenXrDelegate__BeginInvoke
               (long param_1)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  ushort *unaff_x19;
  long unaff_x20;
  ushort *unaff_x21;
  ushort *puVar5;
  ushort *puVar6;
  ulong uVar7;
  uint uStack000000000000000c;
  
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *unaff_x21;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x20) + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  uVar1 = (uint)uVar2;
  if ((uint)*unaff_x19 <= (uint)uVar2) {
    uVar1 = (uint)*unaff_x19;
  }
  if (uVar1 != 0) {
    uVar7 = (ulong)uVar1;
    puVar5 = unaff_x19;
    puVar6 = unaff_x21;
    do {
      puVar6 = puVar6 + 2;
      puVar5 = puVar5 + 2;
      iVar3 = FUN_068b5924(puVar6,puVar5,4,0);
      if (iVar3 != 0) {
        return;
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x20) + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  uStack000000000000000c = (uint)*unaff_x21;
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x20) + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  FUN_05aec868(&stack0x0000000c,*unaff_x19,0);
  return;
}


