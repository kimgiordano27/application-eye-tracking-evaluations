/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.CameraUpdateNativeTextureDelegate$$EndInvoke
ENTRY_POINT: 05afc294
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKNativeFuncs_CameraUpdateNativeTextureDelegate__EndInvoke(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  undefined8 uVar5;
  long *unaff_x24;
  long unaff_x25;
  
  thunk_FUN_036a1978();
  uVar2 = FUN_05e32ff8();
  if (uVar2 < 0xd) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x740) != 0) {
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_07a02ff0;
      goto LAB_05afc314;
    }
    if ((uVar1 & 0x1800) != 0) {
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_07a03010;
      goto LAB_05afc314;
    }
    if (uVar2 == 7) {
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_07a03028;
      goto LAB_05afc314;
    }
  }
  if (uVar2 != 5) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar5 = thunk_FUN_0367fe20();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0367c9fc(lVar3);
    }
    FUN_04a5a2b8(uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
    return uVar5;
  }
  lVar3 = *(long *)(unaff_x25 + 0xe0);
  puVar4 = (undefined8 *)PTR_DAT_07a03020;
LAB_05afc314:
  uVar5 = *puVar4;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar5 = FUN_05e26f18(uVar5,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x24);
  }
  uVar5 = FUN_05e59d90(uVar5);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc(lVar3);
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_0367c9fc(lVar3);
  }
  uVar5 = FUN_03156018(uVar5,lVar3);
  return uVar5;
}


