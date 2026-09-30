/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreClearRoomDelegate$$BeginInvoke
ENTRY_POINT: 057d36b4
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreClearRoomDelegate__BeginInvoke(long param_1)

{
  int iVar1;
  long lVar2;
  ushort *unaff_x19;
  long unaff_x20;
  ushort *unaff_x21;
  uint unaff_w22;
  ushort *puVar3;
  ushort *puVar4;
  ulong uVar5;
  uint uStack000000000000000c;
  
  if ((*(byte *)(param_1 + 0x135) & 1) == 0) {
    param_1 = FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 0xc0) + 0xe0) + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  if (*unaff_x19 <= unaff_w22) {
    unaff_w22 = (uint)*unaff_x19;
  }
  if (0 < (int)unaff_w22) {
    uVar5 = (ulong)unaff_w22;
    puVar3 = unaff_x19;
    puVar4 = unaff_x21;
    do {
      puVar4 = puVar4 + 2;
      puVar3 = puVar3 + 2;
      iVar1 = FUN_068b5924(puVar4,puVar3,4,0);
      if (iVar1 != 0) {
        return;
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x20) + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  uStack000000000000000c = (uint)*unaff_x21;
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0xe0) + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  FUN_05aec868(&stack0x0000000c,*unaff_x19,0);
  return;
}


