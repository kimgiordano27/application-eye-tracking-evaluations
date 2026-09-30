/*
FUNCTION_NAME: FUN_01bc3584
ENTRY_POINT: 01bc3584
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_20;validity_or_gating_hits_21;telemetry_or_network_hits_10
*/


void FUN_01bc3584(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((DAT_03fed19f & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03fed19f = 1;
  }
  uVar1 = FUN_0394f7a8(0,0);
  if ((uVar1 & 1) != 0) {
    uVar4 = FUN_0394fadc(0);
    lVar2 = FUN_038f1768(0);
    if (lVar2 == 0) goto LAB_01bc37a8;
    uVar5 = FUN_038f13b8(uVar4,param_2,param_3,lVar2,0);
    uVar4 = *(undefined8 *)(param_4 + 0x20);
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    puVar3 = *(undefined4 **)
              (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
              0xb8);
    uVar9 = *puVar3;
    uVar8 = puVar3[1];
    uVar7 = puVar3[2];
    uVar6 = puVar3[3];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_01f259b0(uVar5,param_2,param_3,uVar9,uVar8,uVar7,uVar6,uVar4,
                 *(undefined8 *)
                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
  }
  uVar1 = FUN_0394f7a8(1,0);
  if ((uVar1 & 1) == 0) {
    return;
  }
  uVar4 = FUN_0394fadc(0);
  lVar2 = FUN_038f1768(0);
  if (lVar2 != 0) {
    uVar5 = FUN_038f13b8(uVar4,param_2,param_3,lVar2,0);
    uVar4 = *(undefined8 *)(param_4 + 0x28);
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    puVar3 = *(undefined4 **)
              (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
              0xb8);
    uVar9 = *puVar3;
    uVar8 = puVar3[1];
    uVar7 = puVar3[2];
    uVar6 = puVar3[3];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_01f259b0(uVar5,param_2,param_3,uVar9,uVar8,uVar7,uVar6,uVar4,
                 *(undefined8 *)
                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    return;
  }
LAB_01bc37a8:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


