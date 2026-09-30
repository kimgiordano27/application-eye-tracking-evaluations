/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Shared.PlayerNameTagSpawner.<SpawnCoroutine>d__4$$System.IDisposable.Dispose
ENTRY_POINT: 04d438ac
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8
Meta_XR_MultiplayerBlocks_Shared_PlayerNameTagSpawner_<SpawnCoroutine>d__4__System_IDisposable_Dispose
          (long param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  uint in_w9;
  ushort *unaff_x19;
  ushort *unaff_x20;
  long unaff_x21;
  long lVar7;
  
  if ((in_w9 & 1) == 0) {
    param_1 = FUN_02d9a2e0(param_1);
  }
  if ((*(byte *)(*(long *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x1b8) + 0x20) + 0x135) & 1) == 0)
  {
    FUN_02d9a2e0();
  }
  lVar4 = *(long *)(unaff_x21 + 0x20);
  uVar1 = *unaff_x20;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  lVar4 = *(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x160) + 0x20);
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02d9a2e0();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x58);
  plVar6 = *(long **)(lVar4 + 0x38);
  if (plVar6 == (long *)0x0) {
    FUN_02d9a33c(lVar4);
    plVar6 = *(long **)(lVar4 + 0x38);
  }
  lVar7 = *plVar6;
  lVar4 = *(long *)(lVar7 + 0x38);
  if (lVar4 == 0) {
    FUN_02d6084c(PTR_DAT_067680f8);
    lVar4 = *(long *)(lVar7 + 0x38);
    if (lVar4 == 0) {
      FUN_02d9a33c(lVar7);
      lVar4 = *(long *)(lVar7 + 0x38);
    }
  }
  if (*(long *)(*(long *)(lVar4 + 8) + 0x38) == 0) {
    FUN_02d9a33c();
  }
  if (uVar1 < 0x3f) {
    lVar4 = *(long *)(unaff_x21 + 0x20);
    uVar1 = *(ushort *)(lVar4 + 0x135);
    if ((uVar1 & 1) == 0) {
      FUN_02d9a2e0();
      lVar4 = *(long *)(unaff_x21 + 0x20);
      uVar1 = *(ushort *)(lVar4 + 0x135);
    }
    uVar2 = *unaff_x20;
    if ((uVar1 & 1) == 0) {
      FUN_02d9a2e0();
      lVar4 = *(long *)(unaff_x21 + 0x20);
    }
    *unaff_x19 = uVar2;
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x60);
    if ((*(byte *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    if (DAT_06b7795f == '\0') {
      FUN_02d6084c(PTR_DAT_067680f8);
      DAT_06b7795f = '\x01';
    }
    lVar4 = *(long *)(lVar4 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    if (*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x50) + 0x38) == 0) {
      FUN_02d9a33c();
    }
    lVar4 = *(long *)(unaff_x21 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x198);
    if ((*(byte *)(*(long *)(lVar4 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    if (DAT_06b7795b == '\0') {
      FUN_02d6084c(PTR_DAT_067680f8);
      DAT_06b7795b = '\x01';
    }
    lVar4 = *(long *)(lVar4 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02d9a2e0();
    }
    if (*(long *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x50) + 0x38) == 0) {
      FUN_02d9a33c();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_02d9a2e0();
    }
    iVar3 = FUN_04d41554();
    FUN_06013f40(unaff_x19 + 1,unaff_x20 + 1,(long)iVar3,0);
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}


