/*
FUNCTION_NAME: OVRPermissionsRequester$$RequestPermissions
ENTRY_POINT: 069635dc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__RequestPermissions(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 unaff_x21;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  
  uVar1 = *(uint *)(param_2 + 0x18);
  if (uVar1 < *(uint *)(param_1 + 0x18)) {
    *(uint *)(param_2 + 0x18) = uVar1 + 1;
    puVar6 = (undefined8 *)(param_1 + (long)(int)uVar1 * 8 + 0x20);
    *puVar6 = unaff_x21;
    thunk_FUN_03afed3c(puVar6);
  }
  else {
    FUN_04de85b0();
  }
  lVar2 = thunk_FUN_03ac74bc(*unaff_x26);
  FUN_07fb6598(lVar2,0);
  lVar3 = thunk_FUN_03ac74bc(*unaff_x25);
  FUN_07fb6550(lVar3,0);
  uVar4 = thunk_FUN_03ac74bc(*unaff_x24);
  FUN_059f48f4();
  if ((lVar3 != 0) && (FUN_059f854c(lVar3,uVar4,*unaff_x28), lVar2 != 0)) {
    *(long *)(lVar2 + 0x18) = lVar3;
    *(undefined4 *)(lVar2 + 0x10) = 3;
    thunk_FUN_03afed3c((long *)(lVar2 + 0x18),lVar3);
    lVar3 = FUN_07fb6304();
    if (lVar3 != 0) {
      lVar7 = *(long *)(lVar3 + 0x10);
      lVar8 = *unaff_x27;
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          plVar5 = (long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
          *plVar5 = lVar2;
          thunk_FUN_03afed3c(plVar5,lVar2);
          return;
        }
        FUN_04de85b0(lVar3,lVar2,*(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


