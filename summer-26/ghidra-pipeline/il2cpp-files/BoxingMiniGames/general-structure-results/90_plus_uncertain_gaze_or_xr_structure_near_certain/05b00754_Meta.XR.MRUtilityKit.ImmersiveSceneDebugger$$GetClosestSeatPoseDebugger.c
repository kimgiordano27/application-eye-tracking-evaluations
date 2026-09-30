/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger$$GetClosestSeatPoseDebugger
ENTRY_POINT: 05b00754
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 91
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8 Meta_XR_MRUtilityKit_ImmersiveSceneDebugger__GetClosestSeatPoseDebugger(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  int in_w8;
  undefined8 *puVar5;
  long unaff_x19;
  long *unaff_x24;
  long unaff_x25;
  
  if (in_w8 == 0) {
    thunk_FUN_036a1978();
  }
  uVar3 = FUN_05e4c8a4();
  if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
    thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
  }
  uVar2 = FUN_05e32ff8(uVar3,0);
  if (uVar2 < 0xd) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x740) != 0) {
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar5 = (undefined8 *)PTR_DAT_07a02ff0;
      goto LAB_05b007fc;
    }
    if ((uVar1 & 0x1800) != 0) {
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar5 = (undefined8 *)PTR_DAT_07a03010;
      goto LAB_05b007fc;
    }
    if (uVar2 == 7) {
      lVar4 = *(long *)(unaff_x25 + 0xe0);
      puVar5 = (undefined8 *)PTR_DAT_07a03028;
      goto LAB_05b007fc;
    }
  }
  if (uVar2 != 5) {
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_0367c9fc();
    }
    uVar3 = thunk_FUN_0367fe20();
    lVar4 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0367c9fc(lVar4);
    }
    FUN_04a5b804(uVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x38));
    return uVar3;
  }
  lVar4 = *(long *)(unaff_x25 + 0xe0);
  puVar5 = (undefined8 *)PTR_DAT_07a03020;
LAB_05b007fc:
  uVar3 = *puVar5;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  uVar3 = FUN_05e26f18(uVar3,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_036a1978(*unaff_x24);
  }
  uVar3 = FUN_05e59d90(uVar3);
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc(lVar4);
  }
  lVar4 = **(long **)(lVar4 + 0xc0);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0367c9fc(lVar4);
  }
  uVar3 = FUN_03156018(uVar3,lVar4);
  return uVar3;
}


