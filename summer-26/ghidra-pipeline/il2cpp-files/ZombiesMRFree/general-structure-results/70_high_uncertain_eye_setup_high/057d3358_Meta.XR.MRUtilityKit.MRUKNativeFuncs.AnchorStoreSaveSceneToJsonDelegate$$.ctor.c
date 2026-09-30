/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.AnchorStoreSaveSceneToJsonDelegate$$.ctor
ENTRY_POINT: 057d3358
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 86
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKNativeFuncs_AnchorStoreSaveSceneToJsonDelegate___ctor
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
    FUN_02feb2c4(param_1);
  }
  if (DAT_07395271 == '\0') {
    FUN_02fe925c(PTR_DAT_06f8f610);
    DAT_07395271 = '\x01';
  }
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  if (DAT_07395270 == '\0') {
    FUN_02fe925c(PTR_DAT_06f8f610);
    DAT_07395270 = '\x01';
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4();
  }
  if (*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x38) + 0x38) == 0) {
    FUN_02feb320();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4();
  }
  if (*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x38) + 0x38) == 0) {
    FUN_02feb320();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x20) + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *param_2;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0xb8) + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
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
  uStack000000000000000c = (uint)*param_2;
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02feb2c4();
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0xb8) + 0x20) + 0x135) & 1) == 0) {
    FUN_02feb2c4();
  }
  FUN_05aec868(&stack0x0000000c,*param_3,0);
  return;
}


