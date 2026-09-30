/*
FUNCTION_NAME: FUN_02dd5278
ENTRY_POINT: 02dd5278
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_11;telemetry_or_network_hits_4
*/


void FUN_02dd5278(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03feff21 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feff21 = 1;
  }
  uVar4 = *(undefined8 *)(param_5 + 0x88);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar2 = FUN_03923030(uVar4,0);
  if ((uVar2 & 1) != 0) {
    lVar5 = *(long *)(param_5 + 0x88);
    if ((lVar5 != 0) && (lVar3 = FUN_0391fab4(lVar5,0), lVar3 != 0)) {
      uVar4 = FUN_03928d34(lVar3,0);
      if ((*(long *)(param_5 + 0x88) != 0) &&
         (uVar7 = param_2, uVar8 = param_3, lVar3 = FUN_0391fab4(*(long *)(param_5 + 0x88),0),
         lVar3 != 0)) {
        uVar6 = FUN_039274a0(lVar3,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar5 = FUN_01f259b0(uVar4,param_2,param_3,uVar6,uVar7,uVar8,param_4,lVar5,
                             *(undefined8 *)
                              Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__
                            );
        if (lVar5 != 0) {
          FUN_0391fb70(lVar5,1,0);
          FUN_03923a44(*(undefined4 *)(param_5 + 0x60),lVar5,0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  return;
}


