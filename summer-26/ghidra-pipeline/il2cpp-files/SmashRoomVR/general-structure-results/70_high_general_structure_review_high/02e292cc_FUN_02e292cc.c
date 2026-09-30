/*
FUNCTION_NAME: FUN_02e292cc
ENTRY_POINT: 02e292cc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_11;telemetry_or_network_hits_3
*/


void FUN_02e292cc(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if ((DAT_03ff01b1 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_4157);
    DAT_03ff01b1 = 1;
  }
  lVar3 = FUN_02ddcecc(0);
  puVar2 = StringLiteral_4157;
  puVar1 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + 0xc9) != '\0') {
      uVar4 = FUN_039230bc(param_1,0);
      uVar4 = FUN_02edd6e8(uVar4,*(undefined8 *)puVar2,0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar1);
      }
      FUN_038f2acc(uVar4,0);
    }
    puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if ((param_2 != 0) && (lVar3 = *(long *)(param_2 + 0x18), lVar3 != 0)) {
      if (*(int *)(lVar3 + 0x24) == 0) {
        lVar6 = param_1[0x3e];
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_03922f24(lVar3,lVar6,0);
        if ((uVar5 & 1) != 0) {
          (**(code **)(*param_1 + 0x248))(param_1,param_1[0x51],*(undefined8 *)(*param_1 + 0x250));
        }
        lVar3 = param_1[0x50];
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_03923030(lVar3,0);
        if ((uVar5 & 1) != 0) {
          if (param_1[0x50] == 0) goto LAB_02e29500;
          uVar4 = *(undefined8 *)(param_1[0x50] + 0x70);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar5 = FUN_03923030(uVar4,0);
          if ((uVar5 & 1) != 0) {
            if (param_1[0x50] == 0) goto LAB_02e29500;
            uVar4 = *(undefined8 *)(param_2 + 0x18);
            uVar7 = *(undefined8 *)(param_1[0x50] + 0x70);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            uVar5 = FUN_0391f968(uVar4,uVar7,0);
            if ((uVar5 & 1) != 0) {
              (**(code **)(*param_1 + 0x248))(param_1,0,*(undefined8 *)(*param_1 + 0x250));
            }
          }
        }
        uVar4 = (**(code **)(*param_1 + 0x238))(param_1,*(undefined8 *)(*param_1 + 0x240));
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar5 = FUN_03923030(uVar4,0);
        if (((uVar5 & 1) == 0) && (*(char *)((long)param_1 + 0x36d) == '\0')) {
          if (*(long *)(param_2 + 0x18) != 0) {
            uVar4 = FUN_02de1fc4(*(long *)(param_2 + 0x18),param_1,0,0);
                    /* WARNING: Could not recover jumptable at 0x02e294fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x248))(param_1,uVar4,*(undefined8 *)(*param_1 + 0x250));
            return;
          }
          goto LAB_02e29500;
        }
      }
      return;
    }
  }
LAB_02e29500:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


