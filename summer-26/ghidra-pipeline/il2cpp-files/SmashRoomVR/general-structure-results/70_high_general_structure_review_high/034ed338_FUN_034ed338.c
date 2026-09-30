/*
FUNCTION_NAME: FUN_034ed338
ENTRY_POINT: 034ed338
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


void FUN_034ed338(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_40 [16];
  
  puVar3 = PTR_DAT_03d951f0;
  if ((DAT_03ff6cbb & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d951f0);
    thunk_FUN_01ad9084(Method_OVRTrackedKeyboard_<>c_<_ctor>b__113_0__);
    DAT_03ff6cbb = 1;
  }
  FUN_02223608(param_1,*(undefined8 *)puVar3);
  if (param_2 == 0) {
    thunk_FUN_01ad9084(StringLiteral_2191);
    uVar5 = thunk_FUN_01afaadc();
    uVar4 = thunk_FUN_01ad9084(StringLiteral_2314);
    FUN_02fd1220(uVar5,uVar4,0);
    uVar4 = thunk_FUN_01ad9084(PTR_DAT_03d951f8);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar5,uVar4);
  }
  uVar1 = FUN_034406a0(param_2,0);
  puVar3 = PTR_DAT_03d95200;
  if ((uVar1 & 1) != 0) {
LAB_034ed4d0:
    uVar5 = thunk_FUN_01ad9084(puVar3);
    uVar5 = FUN_02ede300(uVar5,param_2,0);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
                      );
    uVar4 = thunk_FUN_01afaadc();
    FUN_02fd7c54(uVar4,uVar5,0);
    uVar5 = thunk_FUN_01ad9084(PTR_DAT_03d951f8);
                    /* WARNING: Subroutine does not return */
    FUN_01b48050(uVar4,uVar5);
  }
  lVar2 = FUN_03440680(param_2,0);
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar1 = FUN_03922f24(uVar5,0,0);
    puVar3 = PTR_DAT_03d95208;
    if ((uVar1 & 1) != 0) goto LAB_034ed4d0;
    local_40 = FUN_034405b8(param_2,0);
    uVar5 = FUN_0303ad8c(local_40,0);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
    thunk_FUN_01b4f09c();
    lVar2 = FUN_03440680(param_2,0);
    if (lVar2 != 0) {
      uVar5 = FUN_02ee6c30(*(undefined8 *)(lVar2 + 0x10),
                           *(undefined8 *)Method_OVRTrackedKeyboard_<>c_<_ctor>b__113_0__,
                           *(undefined8 *)(param_2 + 0x10),0);
      *(undefined8 *)(param_1 + 0x38) = uVar5;
      thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x38),uVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


