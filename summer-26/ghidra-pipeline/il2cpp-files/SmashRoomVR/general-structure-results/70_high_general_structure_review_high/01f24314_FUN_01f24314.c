/*
FUNCTION_NAME: FUN_01f24314
ENTRY_POINT: 01f24314
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


void FUN_01f24314(long param_1,undefined4 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    thunk_FUN_01ad9084(StringLiteral_2670);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_01ae9ed0(param_3);
    }
  }
  uVar1 = FUN_03277590(param_1,param_2,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (param_1 != 0) {
    plVar2 = (long *)FUN_01e8a9f8(param_1,**(undefined8 **)(param_3 + 0x38));
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar1 = FUN_03923030(plVar2,0);
    if ((uVar1 & 1) == 0) {
      lVar4 = FUN_0391c2b8(param_1,0);
      if (lVar4 != 0) {
        FUN_01ed7044(lVar4,*(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10));
        return;
      }
    }
    else if (plVar2 != (long *)0x0) {
      lVar4 = *plVar2;
      uVar1 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar1 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *(long *)StringLiteral_2670) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_01f24438;
          }
          uVar1 = uVar1 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar1 != 0);
      }
      puVar3 = (undefined8 *)FUN_01ae9f78(plVar2,*(long *)StringLiteral_2670,0);
LAB_01f24438:
                    /* WARNING: Could not recover jumptable at 0x01f24448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar3)(plVar2,puVar3[1]);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


