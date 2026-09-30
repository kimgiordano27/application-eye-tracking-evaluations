/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKNativeFuncs.GetHeadsetPoseAtTimeDelegate$$Invoke
ENTRY_POINT: 05afce18
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_MRUtilityKit_MRUKNativeFuncs_GetHeadsetPoseAtTimeDelegate__Invoke(long param_1)

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
  
  uVar3 = (**(code **)(param_1 + 0x598))();
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
        goto FUN_05afcedc;
      }
      if ((uVar1 & 0x1800) != 0) {
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar6 = (undefined8 *)PTR_DAT_07a03010;
        goto FUN_05afcedc;
      }
      if (uVar2 == 7) {
        lVar5 = *(long *)(unaff_x25 + 0xe0);
        puVar6 = (undefined8 *)PTR_DAT_07a03028;
        goto FUN_05afcedc;
      }
    }
    if (uVar2 == 5) {
      lVar5 = *(long *)(unaff_x25 + 0xe0);
      puVar6 = (undefined8 *)PTR_DAT_07a03020;
FUN_05afcedc:
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
  FUN_04a5a6a0(uVar4,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x38));
  return uVar4;
}


