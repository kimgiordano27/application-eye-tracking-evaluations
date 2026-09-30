/*
FUNCTION_NAME: DeoVR.BluetoothLE.AndroidBleOperations.<>c__DisplayClass8_0$$<RequestPermissions>b__0
ENTRY_POINT: 05178a5c
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_7;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


void DeoVR_BluetoothLE_AndroidBleOperations_<>c__DisplayClass8_0__<RequestPermissions>b__0
               (undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  undefined8 uVar8;
  long *unaff_x23;
  
  puVar2 = (undefined8 *)FUN_04980e68(param_1,param_2,0);
  plVar3 = (long *)(*(code *)*puVar2)();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  lVar5 = *plVar3;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == *unaff_x23) {
        puVar2 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_05178ad4;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar2 = (undefined8 *)FUN_04980e68(plVar3,*unaff_x23,0);
LAB_05178ad4:
  lVar5 = (*(code *)*puVar2)(plVar3,puVar2[1]);
  puVar1 = PTR_DAT_0ac2e420;
  lVar4 = thunk_FUN_04983e64(lVar5,*(undefined8 *)PTR_DAT_0ac2e420);
  if (lVar4 == 0) {
    return;
  }
  if (lVar5 == 0) {
    lVar4 = 0;
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
LAB_05178b4c:
    thunk_FUN_049ee3d8(unaff_x19 + 0x28,lVar4);
    return;
  }
  uVar8 = *(undefined8 *)puVar1;
  lVar4 = thunk_FUN_04983e64(lVar5,uVar8);
  if (lVar4 != 0) {
    uVar8 = *(undefined8 *)puVar1;
    *(long *)(unaff_x19 + 0x28) = lVar4;
    lVar4 = thunk_FUN_04983e64(lVar5,uVar8);
    if (lVar4 != 0) goto LAB_05178b4c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494850c(lVar5,uVar8);
}


