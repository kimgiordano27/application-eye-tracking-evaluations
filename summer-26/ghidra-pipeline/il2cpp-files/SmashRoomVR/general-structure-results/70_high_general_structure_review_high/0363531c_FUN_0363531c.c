/*
FUNCTION_NAME: FUN_0363531c
ENTRY_POINT: 0363531c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_9;telemetry_or_network_hits_3
*/


void FUN_0363531c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  long local_28;
  
  if ((DAT_03ff72ae & 1) == 0) {
    thunk_FUN_01ad9084(StringLiteral_1094);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff72ae = 1;
  }
  local_28 = 0;
  auVar5 = FUN_0391c2b8(param_1,0);
  uVar2 = auVar5._8_8_;
  uVar4 = 0;
  if (auVar5._0_8_ != 0) {
    uVar2 = FUN_01ed84c4(auVar5._0_8_,&local_28,*(undefined8 *)StringLiteral_1094);
    lVar1 = local_28;
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_0362f0b0(param_1);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar4 = FUN_0391f968(uVar3,0,0);
      uVar2 = 0;
      if ((uVar4 & 1) != 0) {
        auVar5 = FUN_0362f0b0(param_1,0);
        uVar2 = auVar5._8_8_;
        uVar4 = 0;
        if (auVar5._0_8_ == 0) goto LAB_03635418;
        uVar4 = FUN_03901b0c(auVar5._0_8_,0);
        if ((int)uVar4 < 1) {
          uVar2 = 0;
        }
        else {
          uVar2 = FUN_0362f0b0(param_1);
          uVar4 = uVar2;
        }
      }
      if (lVar1 == 0) goto LAB_03635418;
      FUN_0395bdc0(lVar1,uVar2,0);
    }
    return;
  }
LAB_03635418:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178(uVar4,uVar2);
}


