/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Console$$SetPanelPosition
ENTRY_POINT: 06446888
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_Console__SetPanelPosition(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x19;
  undefined8 uVar5;
  long *unaff_x24;
  long unaff_x25;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(param_1);
  }
  uVar2 = FUN_0676b950();
  if (uVar2 < 0xd) {
    uVar1 = 1 << (ulong)(uVar2 & 0x1f);
    if ((uVar1 & 0x740) != 0) {
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_08497488;
      goto LAB_06446914;
    }
    if ((uVar1 & 0x1800) != 0) {
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_084974a8;
      goto LAB_06446914;
    }
    if (uVar2 == 7) {
      lVar3 = *(long *)(unaff_x25 + 0xe0);
      puVar4 = (undefined8 *)PTR_DAT_084974c0;
      goto LAB_06446914;
    }
  }
  if (uVar2 != 5) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090();
    }
    if ((*(ushort *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x30) + 0x135) & 1) == 0) {
      FUN_03ac4090();
    }
    uVar5 = thunk_FUN_03ac74bc();
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090(lVar3);
    }
    FUN_053aa160(uVar5,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x38));
    return uVar5;
  }
  lVar3 = *(long *)(unaff_x25 + 0xe0);
  puVar4 = (undefined8 *)PTR_DAT_084974b8;
LAB_06446914:
  uVar5 = *puVar4;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  uVar5 = FUN_0675ff58(uVar5,0);
  if (*(int *)(*unaff_x24 + 0xe4) == 0) {
    thunk_FUN_03ae8be4(*unaff_x24);
  }
  uVar5 = FUN_06792398(uVar5);
  lVar3 = *(long *)(unaff_x19 + 0x20);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03ac4090(lVar3);
  }
  lVar3 = **(long **)(lVar3 + 0xc0);
  if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = FUN_03ac4090(lVar3);
  }
  uVar5 = FUN_035255bc(uVar5,lVar3);
  return uVar5;
}


