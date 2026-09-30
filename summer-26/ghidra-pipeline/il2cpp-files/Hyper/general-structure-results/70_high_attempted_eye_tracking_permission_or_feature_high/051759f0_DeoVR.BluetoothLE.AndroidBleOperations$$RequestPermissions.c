/*
FUNCTION_NAME: DeoVR.BluetoothLE.AndroidBleOperations$$RequestPermissions
ENTRY_POINT: 051759f0
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


undefined8 DeoVR_BluetoothLE_AndroidBleOperations__RequestPermissions(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  undefined8 unaff_x20;
  long lVar4;
  long *unaff_x21;
  
  *(undefined8 *)(param_1 + 0x28) = unaff_x20;
  thunk_FUN_049ee3d8();
  lVar4 = *(long *)(unaff_x19 + 0x20);
  if ((lVar4 != 0) &&
     (lVar2 = thunk_FUN_04983e64(lVar4,*(undefined8 *)(*unaff_x21 + 0x40)), lVar2 == 0)) {
    uVar3 = thunk_FUN_04991a58();
                    /* WARNING: Subroutine does not return */
    FUN_04948050(uVar3,0);
  }
  puVar1 = PTR_DAT_0ac20850;
  if (*(uint *)(unaff_x21 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_04948194();
  }
  unaff_x21[6] = lVar4;
  thunk_FUN_049ee3d8(unaff_x21 + 6,lVar4);
  lVar4 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
  FUN_050c5e98();
  lVar2 = *(long *)(unaff_x19 + 0x28);
  if (lVar2 != 0) {
    if (*(char *)(unaff_x19 + 0x40) == '\0') {
      uVar3 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac2dee8);
      FUN_050d73c8(uVar3,0,0,lVar2,0);
    }
    else {
      uVar3 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac2ea88);
      FUN_050d7408(uVar3,0,0,lVar2,0);
    }
    if (lVar4 == 0) goto LAB_05175b98;
    FUN_050b3ff0(lVar4,uVar3,0);
  }
  lVar2 = *(long *)(unaff_x19 + 0x30);
  if (lVar2 == 0) {
    if (lVar4 == 0) goto LAB_05175b98;
  }
  else {
    if (*(char *)(unaff_x19 + 0x41) == '\0') {
      uVar3 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac2dee8);
      FUN_050d73c8(uVar3,0,1,lVar2,0);
    }
    else {
      uVar3 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0ac2ea88);
      FUN_050d7408(uVar3,0,1,lVar2,0);
    }
    if (lVar4 == 0) {
LAB_05175b98:
                    /* WARNING: Subroutine does not return */
      FUN_0494818c();
    }
    FUN_050b3ff0(lVar4,uVar3,0);
  }
  puVar1 = PTR_DAT_0ac2e7c0;
  FUN_050b3ff0(lVar4,*(undefined8 *)(unaff_x19 + 0x38),0);
  uVar3 = thunk_FUN_04983f60(*(undefined8 *)puVar1);
  FUN_050d6520(uVar3,lVar4,0);
  return uVar3;
}


