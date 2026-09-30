/*
FUNCTION_NAME: ba.a$$h
ENTRY_POINT: 01bc36b4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_9;telemetry_or_network_hits_4
*/


void ba_a__h(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long unaff_x19;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar3 = FUN_0394fadc();
  lVar1 = FUN_038f1768(0);
  if (lVar1 != 0) {
    uVar4 = FUN_038f13b8(uVar3,param_2,param_3,lVar1,0);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x28);
    if (DAT_03fed256 == '\0') {
      thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
      DAT_03fed256 = '\x01';
    }
    puVar2 = *(undefined4 **)
              (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
              0xb8);
    uVar8 = *puVar2;
    uVar7 = puVar2[1];
    uVar6 = puVar2[2];
    uVar5 = puVar2[3];
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_01f259b0(uVar4,param_2,param_3,uVar8,uVar7,uVar6,uVar5,uVar3,
                 *(undefined8 *)
                  Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_0__);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


