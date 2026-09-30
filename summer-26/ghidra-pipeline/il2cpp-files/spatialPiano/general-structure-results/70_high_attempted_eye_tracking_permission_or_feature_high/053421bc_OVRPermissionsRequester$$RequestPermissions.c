/*
FUNCTION_NAME: OVRPermissionsRequester$$RequestPermissions
ENTRY_POINT: 053421bc
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__RequestPermissions(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  
  do {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      param_1 = *unaff_x22;
    }
    lVar3 = **(long **)(param_1 + 0xb8);
    if (lVar3 == 0) {
LAB_05342298:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    if ((long)*(int *)(lVar3 + 0x18) <= (long)unaff_x20) {
      return;
    }
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02f6670c();
      lVar3 = **(long **)(*unaff_x22 + 0xb8);
      if (lVar3 == 0) goto LAB_05342298;
    }
    lVar3 = FUN_03abf644(lVar3,unaff_x20 & 0xffffffff,*unaff_x23);
    if (lVar3 == 0) goto LAB_05342298;
    iVar1 = *(int *)(lVar3 + 0x18) + -1;
    uVar2 = FUN_02f0880c(*unaff_x24,iVar1);
    if (unaff_x19 == 0) goto LAB_05342298;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) {
LAB_0534229c:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    lVar3 = unaff_x19 + unaff_x20 * 8;
    *(undefined8 *)(lVar3 + 0x20) = uVar2;
    if (**(long **)(*unaff_x22 + 0xb8) == 0) goto LAB_05342298;
    uVar2 = FUN_03abf644(**(long **)(*unaff_x22 + 0xb8),unaff_x20 & 0xffffffff,*unaff_x23);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) goto LAB_0534229c;
    FUN_050f8cdc(uVar2,*(undefined8 *)(lVar3 + 0x20),iVar1,0);
    unaff_x20 = unaff_x20 + 1;
    param_1 = *unaff_x22;
  } while( true );
}


