/*
FUNCTION_NAME: OVRPermissionsRequester$$ShouldRequestPermission
ENTRY_POINT: 07c99a88
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__ShouldRequestPermission(undefined1 param_1 [16])

{
  long lVar1;
  uint uVar2;
  long in_x9;
  uint in_w10;
  long in_x11;
  long in_x12;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_1._8_8_;
  uVar3 = param_1._0_8_;
  while( true ) {
    lVar1 = in_x12 + in_x9 * 0x10;
    in_x9 = in_x9 + 1;
    *(undefined8 *)(lVar1 + 0x28) = uVar4;
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    lVar1 = *(long *)(unaff_x20 + 0x88);
    if (lVar1 == 0) break;
    uVar2 = (uint)in_x9;
    if ((int)*(uint *)(lVar1 + 0x18) <= (int)uVar2) {
      return;
    }
    if (*(uint *)(lVar1 + 0x18) <= uVar2) {
LAB_07c99bac:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    lVar1 = *(long *)(lVar1 + in_x9 * 8 + 0x20);
    if (lVar1 == 0) break;
    if (*(uint *)(lVar1 + 0x18) <= in_w10) goto LAB_07c99bac;
    in_x12 = *(long *)(unaff_x19 + 0x48);
    if (in_x12 == 0) break;
    if (*(uint *)(in_x12 + 0x18) <= uVar2) goto LAB_07c99bac;
    lVar1 = lVar1 + in_x11 * 0x10;
    uVar4 = *(undefined8 *)(lVar1 + 0x28);
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e44();
}


