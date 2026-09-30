/*
FUNCTION_NAME: FUN_01e4cef4
ENTRY_POINT: 01e4cef4
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


void FUN_01e4cef4(long *param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2297);
    thunk_FUN_01ad9084(StringLiteral_2298);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_01ae9ed0(param_3);
    }
  }
  uVar4 = *(undefined8 *)StringLiteral_2298;
  if (*(int *)(*(long *)
                Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
              + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  plVar2 = (long *)FUN_0304eec0(uVar4,0);
  uVar4 = FUN_0304eec0(**(undefined8 **)(param_3 + 0x38),0);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar3 = (**(code **)(*plVar2 + 0x2a8))(plVar2,uVar4,*(undefined8 *)(*plVar2 + 0x2b0));
  if ((uVar3 & 1) == 0) {
    if (param_1 == (long *)0x0) {
      return;
    }
    uVar4 = FUN_03939cec(param_1,1,0);
    if (*(int *)(*(long *)StringLiteral_2297 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)StringLiteral_2297);
    }
    FUN_03939588(uVar4,param_2,0);
    return;
  }
  if (*(int *)(*(long *)StringLiteral_2297 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  if (param_1 != (long *)0x0) {
    bVar1 = *(byte *)(*(long *)
                       Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                     0x130);
    if (bVar1 <= *(byte *)(*param_1 + 0x130)) {
      if (*(long *)(*(long *)(*param_1 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__) {
        param_1 = (long *)0x0;
      }
      goto LAB_01e4d07c;
    }
  }
  param_1 = (long *)0x0;
LAB_01e4d07c:
  FUN_03939c30(param_1,param_2,0);
  return;
}


