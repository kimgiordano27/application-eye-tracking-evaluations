/*
FUNCTION_NAME: OVRPermissionsRequester$$ShouldRequestPermission
ENTRY_POINT: 0602e6bc
PROGRAM: vandalizer-libil2cpp.so
SCORE: 84
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_9;telemetry_or_network_hits_4;attempted_eye_tracking_permission_or_feature_enable
*/


void OVRPermissionsRequester__ShouldRequestPermission(long param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x19;
  ulong unaff_x20;
  int unaff_w21;
  long *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  long unaff_x26;
  
  while( true ) {
    uVar2 = FUN_047af170(param_1,param_2,param_3);
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) break;
    FUN_05e255b0(uVar2,*(undefined8 *)(unaff_x26 + unaff_x20 * 8),unaff_w21,0);
    unaff_x20 = unaff_x20 + 1;
    unaff_x25 = unaff_x25 + 8;
    lVar1 = *unaff_x22;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar1 = *unaff_x22;
    }
    lVar3 = **(long **)(lVar1 + 0xb8);
    if (lVar3 == 0) {
LAB_0602e704:
                    /* WARNING: Subroutine does not return */
      FUN_031f2390();
    }
    if ((long)*(int *)(lVar3 + 0x18) <= (long)unaff_x20) {
      return;
    }
    if (*(int *)(lVar1 + 0xe4) == 0) {
      Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
      lVar3 = **(long **)(*unaff_x22 + 0xb8);
      if (lVar3 == 0) goto LAB_0602e704;
    }
    lVar1 = FUN_047af170(lVar3,unaff_x20 & 0xffffffff,*unaff_x23);
    if (lVar1 == 0) goto LAB_0602e704;
    unaff_w21 = *(int *)(lVar1 + 0x18) + -1;
    uVar2 = FUN_031f21dc(*unaff_x24,unaff_w21);
    if (unaff_x19 == 0) goto LAB_0602e704;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_x20) break;
    *(undefined8 *)(unaff_x26 + unaff_x20 * 8) = uVar2;
    thunk_FUN_0329bf60(unaff_x26 + unaff_x25,uVar2);
    param_1 = **(long **)(*unaff_x22 + 0xb8);
    if (param_1 == 0) goto LAB_0602e704;
    param_3 = *unaff_x23;
    param_2 = unaff_x20 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


