/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.RaycastEnvironmentDelegate$$EndInvoke
ENTRY_POINT: 05afb6dc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 85
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKNativeFuncs_RaycastEnvironmentDelegate__EndInvoke(uint param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 uVar4;
  long *unaff_x24;
  long unaff_x25;
  
  if (param_1 < 0xd) {
    uVar1 = 1 << (ulong)(param_1 & 0x1f);
    if ((uVar1 & 0x740) != 0) {
      lVar2 = *(long *)(unaff_x25 + 0xe0);
      puVar3 = (undefined8 *)PTR_DAT_07a02ff0;
      goto LAB_05afb74c;
    }
    if ((uVar1 & 0x1800) != 0) {
      lVar2 = *(long *)(unaff_x25 + 0xe0);
      puVar3 = (undefined8 *)PTR_DAT_07a03010;
      goto LAB_05afb74c;
    }
    if (param_1 == 7) {
      lVar2 = *(long *)(unaff_x25 + 0xe0);
      puVar3 = (undefined8 *)PTR_DAT_07a03028;
      goto LAB_05afb74c;
    }
  }
  if (param_1 != 5) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar4 = thunk_FUN_0367fe20();
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_0367c9fc(lVar2);
    }
    FUN_04a59ee0(uVar4,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x38));
    return uVar4;
  }
  lVar2 = *(long *)(unaff_x25 + 0xe0);
  puVar3 = (undefined8 *)PTR_DAT_07a03020;
LAB_05afb74c:
  uVar4 = *puVar3;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar4 = FUN_05e26f18(uVar4,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x24);
  }
  uVar4 = FUN_05e59d90(uVar4);
  lVar2 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  lVar2 = **(long **)(lVar2 + 0xc0);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  uVar4 = FUN_03156018(uVar4,lVar2);
  return uVar4;
}


