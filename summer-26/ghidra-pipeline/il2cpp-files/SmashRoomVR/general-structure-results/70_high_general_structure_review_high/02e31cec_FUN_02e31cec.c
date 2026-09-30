/*
FUNCTION_NAME: FUN_02e31cec
ENTRY_POINT: 02e31cec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_12;telemetry_or_network_hits_5
*/


undefined1  [16] FUN_02e31cec(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined4 extraout_s0;
  undefined4 uVar5;
  undefined4 extraout_s0_00;
  undefined4 extraout_var;
  undefined4 uVar7;
  undefined4 extraout_var_00;
  undefined8 extraout_var_01;
  undefined8 uVar8;
  undefined8 extraout_var_02;
  undefined1 auVar6 [16];
  
  if ((DAT_03ff01ec & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03ff01ec = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_2 != 0) {
    plVar3 = *(long **)(param_2 + 0x1f8);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_03923030(plVar3,0);
    if ((uVar2 & 1) == 0) {
      if (DAT_03fed256 == '\0') {
        thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__);
        DAT_03fed256 = '\x01';
      }
      uVar5 = **(undefined4 **)
                (*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_2__ +
                0xb8);
      uVar7 = 0;
      uVar8 = 0;
    }
    else {
      if (plVar3 == (long *)0x0) goto LAB_02e31dec;
      lVar4 = plVar3[0xd];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar2 = FUN_03923030(lVar4,0);
      if ((uVar2 & 1) == 0) {
        (**(code **)(*plVar3 + 0x1a8))(plVar3,param_1,*(undefined8 *)(*plVar3 + 0x1b0));
        uVar5 = extraout_s0_00;
        uVar7 = extraout_var_00;
        uVar8 = extraout_var_02;
      }
      else {
        if (plVar3[0xd] == 0) goto LAB_02e31dec;
        FUN_03928fd8(plVar3[0xd],0);
        FUN_03914250(0);
        uVar5 = extraout_s0;
        uVar7 = extraout_var;
        uVar8 = extraout_var_01;
      }
    }
    auVar6._4_4_ = uVar7;
    auVar6._0_4_ = uVar5;
    auVar6._8_8_ = uVar8;
    return auVar6;
  }
LAB_02e31dec:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


