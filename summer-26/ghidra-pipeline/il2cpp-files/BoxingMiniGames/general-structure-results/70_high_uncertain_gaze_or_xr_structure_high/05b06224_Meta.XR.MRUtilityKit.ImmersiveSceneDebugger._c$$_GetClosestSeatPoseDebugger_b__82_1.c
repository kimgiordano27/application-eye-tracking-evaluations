/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.ImmersiveSceneDebugger.<>c$$<GetClosestSeatPoseDebugger>b__82_1
ENTRY_POINT: 05b06224
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 88
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;data_collection
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_file_logging_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


undefined8
Meta_XR_MRUtilityKit_ImmersiveSceneDebugger_<>c__<GetClosestSeatPoseDebugger>b__82_1
          (long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long unaff_x19;
  long *unaff_x24;
  long unaff_x25;
  
  uVar3 = (**(code **)(param_1 + 0x598))(param_2,*(undefined8 *)(param_1 + 0x5a0));
  if ((uVar3 & 1) != 0) {
    if (*(int *)(*(long *)(unaff_x25 + 0x98) + 0xe4) == 0) {
      thunk_FUN_036a1978();
    }
    uVar4 = FUN_05e4c8a4();
    if (*(int *)(*(long *)(unaff_x25 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_036a1978(*(long *)(unaff_x25 + 0xe0));
    }
    uVar2 = FUN_05e32ff8(uVar4,0);
    if (uVar2 < 0xd) {
      uVar1 = 1 << (ulong)(uVar2 & 0x1f);
      if ((uVar1 & 0x740) != 0) {
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar6 = (undefined8 *)PTR_DAT_07a02ff0;
        goto LAB_05b062e4;
      }
      if ((uVar1 & 0x1800) != 0) {
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar6 = (undefined8 *)PTR_DAT_07a03010;
        goto LAB_05b062e4;
      }
      if (uVar2 == 7) {
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar6 = (undefined8 *)PTR_DAT_07a03028;
        goto LAB_05b062e4;
      }
    }
    if (uVar2 == 5) {
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar6 = (undefined8 *)PTR_DAT_07a03020;
LAB_05b062e4:
      uVar4 = *puVar6;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_036a1978();
      }
      uVar4 = FUN_05e26f18(uVar4,0);
      if (*(int *)(*unaff_x24 + 0xe4) == 0) {
        thunk_FUN_036a1978(*unaff_x24);
      }
      uVar4 = FUN_05e59d90(uVar4);
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0367c9fc(lVar5);
      }
      lVar5 = **(long **)(lVar5 + 0xc0);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_0367c9fc(lVar5);
      }
      uVar4 = FUN_03156018(uVar4,lVar5);
      return uVar4;
    }
  }
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc();
  }
  if ((*(ushort *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
    FUN_0367c9fc();
  }
  uVar4 = thunk_FUN_0367fe20();
  lVar5 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0367c9fc(lVar5);
  }
  FUN_04a5d57c(uVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
  return uVar4;
}


