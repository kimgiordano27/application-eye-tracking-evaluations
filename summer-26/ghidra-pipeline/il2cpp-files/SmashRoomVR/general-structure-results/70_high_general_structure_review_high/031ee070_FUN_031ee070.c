/*
FUNCTION_NAME: FUN_031ee070
ENTRY_POINT: 031ee070
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_031ee070(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 local_18 [2];
  
  if ((DAT_03ff4362 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d82fd8);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_TMPro_Examples_TeleType_<Start>d__4_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRTrackedKeyboard_<>c_<_ctor>b__113_0__);
    DAT_03ff4362 = 1;
  }
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (param_1 != 0) {
    uVar2 = FUN_03928c2c(param_1,0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    uVar3 = FUN_03922f24(uVar2,0,0);
    if ((uVar3 & 1) == 0) {
      uVar2 = FUN_03928c2c(param_1,0);
      if (*(int *)(*(long *)PTR_DAT_03d82fd8 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)PTR_DAT_03d82fd8);
      }
      uVar2 = FUN_031ee070(uVar2);
      uVar5 = FUN_039230bc(param_1,0);
      puVar6 = (undefined8 *)
               Method_TMPro_Examples_TeleType_<Start>d__4_System_Collections_IEnumerator_Reset__;
    }
    else {
      lVar4 = FUN_0391c2b8(param_1,0);
      if (lVar4 == 0) goto LAB_031ee1b4;
      local_18[0] = FUN_039200ac(lVar4,0);
      uVar2 = FUN_0392ebcc(local_18,0);
      uVar5 = FUN_039230bc(param_1,0);
      puVar6 = (undefined8 *)Method_OVRTrackedKeyboard_<>c_<_ctor>b__113_0__;
    }
    FUN_02ee6c30(uVar2,*puVar6,uVar5,0);
    return;
  }
LAB_031ee1b4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


