/*
FUNCTION_NAME: FUN_02e2619c
ENTRY_POINT: 02e2619c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_7;telemetry_or_network_hits_3
*/


void FUN_02e2619c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  
  if ((DAT_03ff0199 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff0199 = 1;
  }
  FUN_02e21528(param_1,param_3);
  if (param_3 == 0) {
LAB_02e262b4:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar2 = FUN_02de1fc4(param_3,param_1,0,0);
  FUN_02e216fc(param_1,uVar2);
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(char *)(param_3 + 0x69) != '\0') {
    uVar2 = *(undefined8 *)(param_3 + 0x58);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(uVar2,0);
    if ((uVar3 & 1) == 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x160);
    }
    else {
      uVar2 = *(undefined8 *)(param_3 + 0x58);
    }
    *(undefined8 *)(param_1 + 0x218) = uVar2;
    thunk_FUN_01b4f09c(param_1 + 0x218);
    uVar2 = *(undefined8 *)(param_1 + 0x218);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar3 = FUN_03923030(uVar2,0);
    if ((uVar3 & 1) != 0) {
      plVar4 = *(long **)(param_1 + 0x218);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x1b8))(plVar4,*(undefined8 *)(*plVar4 + 0x1c0));
        plVar4 = *(long **)(param_1 + 0x218);
        if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x02e262a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x198))(plVar4,*(undefined8 *)(*plVar4 + 0x1a0));
          return;
        }
      }
      goto LAB_02e262b4;
    }
  }
  return;
}


