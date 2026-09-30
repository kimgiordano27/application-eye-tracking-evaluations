/*
FUNCTION_NAME: FUN_03b21b10
ENTRY_POINT: 03b21b10
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x03b21b5c) */

void FUN_03b21b10(float param_1,float param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_03ffdb4d & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ffdb4d = 1;
  }
  if (600.0 < param_1) {
    param_1 = 600.0;
  }
  if (param_1 <= -600.0) {
    param_1 = -600.0;
  }
  if (param_2 <= -600.0) {
    param_2 = -600.0;
  }
  fVar4 = *(float *)(param_3 + 0x38) - param_1;
  fVar5 = *(float *)(param_3 + 0x3c) - param_2;
  if (DAT_00b55084 <= fVar4 * fVar4 + fVar5 * fVar5) {
    *(float *)(param_3 + 0x38) = param_1;
    *(float *)(param_3 + 0x3c) = param_2;
    uVar1 = FUN_03b212b4(param_3,0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar2 = FUN_0391f968(uVar1,0,0);
    if ((uVar2 & 1) != 0) {
      plVar3 = (long *)FUN_03b212b4(param_3,0);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
                    /* WARNING: Could not recover jumptable at 0x03b21bfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x2f8))(plVar3,*(undefined8 *)(*plVar3 + 0x300));
      return;
    }
  }
  return;
}


