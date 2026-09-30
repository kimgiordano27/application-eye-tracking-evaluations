/*
FUNCTION_NAME: FUN_01cbe40c
ENTRY_POINT: 01cbe40c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_12;telemetry_or_network_hits_4
*/


void FUN_01cbe40c(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_03feda60 & 1) == 0) {
    thunk_FUN_01ad9084(Method_TMPro_TMP_Text_<>c_<_ctor>b__622_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    DAT_03feda60 = 1;
  }
  if (param_5 != 0) {
    uVar2 = FUN_01cb8664(param_5);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(long *)(param_5 + 0x10) != 0) {
      uVar3 = FUN_0391c2b8(*(long *)(param_5 + 0x10),0);
      uVar4 = FUN_0391c2b8(param_4,0);
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar2 = FUN_03922f24(uVar3,uVar4,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      lVar5 = FUN_01e8a9f8(param_4,*(undefined8 *)Method_TMPro_TMP_Text_<>c_<_ctor>b__622_0__);
      if (lVar5 != 0) {
        uVar3 = FUN_038ea7cc(lVar5,0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar2 = FUN_0391f968(uVar3,0,0);
        if ((uVar2 & 1) == 0) {
          return;
        }
        uVar3 = FUN_038ea7cc(lVar5,0);
        lVar6 = FUN_0391c27c(param_4,0);
        if (lVar6 != 0) {
          uVar4 = FUN_03928d34(lVar6,0);
          uVar7 = FUN_038ea5b4(lVar5,0);
          FUN_038eab80(uVar4,param_2,param_3,uVar7,uVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


