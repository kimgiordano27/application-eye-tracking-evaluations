/*
FUNCTION_NAME: FUN_01bc4a24
ENTRY_POINT: 01bc4a24
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_10;telemetry_or_network_hits_4
*/


void FUN_01bc4a24(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  if ((DAT_03fed1ab & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__8_5__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<AttachActionSets>b__9_0__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<AttachActionSets>b__9_1__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_0__);
    thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__);
    DAT_03fed1ab = 1;
  }
  lVar4 = FUN_0391c2b8(param_1,0);
  if ((lVar4 != 0) && (lVar4 = FUN_039230bc(lVar4,0), lVar4 != 0)) {
    uVar5 = FUN_02ee85a0(lVar4,*(undefined8 *)
                                Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_0__
                         ,*(undefined8 *)
                           Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<CreateActions>b__11_1__
                         ,0);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x28),uVar5);
    lVar4 = FUN_0391c2b8(param_1,0);
    puVar3 = Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<AttachActionSets>b__9_1__;
    puVar2 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
    if (lVar4 != 0) {
      FUN_0392316c(lVar4,uVar5,0);
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar4 = FUN_01f25510(*(undefined8 *)puVar3);
      if (lVar4 != 0) {
        lVar4 = FUN_01e8a9f8(lVar4,*(undefined8 *)
                                    Method_UnityEngine_XR_OpenXR_OpenXRAnalytics_<>c_<CreateInitializeEvent>b__8_5__
                            );
        plVar8 = (long *)(param_1 + 0x68);
        *plVar8 = lVar4;
        thunk_FUN_01b4f09c(plVar8,lVar4);
        if ((*plVar8 != 0) && (lVar4 = *(long *)(*plVar8 + 0x28), lVar4 != 0)) {
          lVar6 = *(long *)(lVar4 + 0x10);
          lVar7 = *(long *)
                   Method_UnityEngine_XR_OpenXR_Input_OpenXRInput_<>c_<AttachActionSets>b__9_0__;
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar6 != 0) {
            uVar1 = *(uint *)(lVar4 + 0x18);
            if (uVar1 < *(uint *)(lVar6 + 0x18)) {
              *(uint *)(lVar4 + 0x18) = uVar1 + 1;
              plVar8 = (long *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
              *plVar8 = param_1;
              thunk_FUN_01b4f09c(plVar8,param_1);
              return;
            }
            FUN_02b599e4(lVar4,param_1,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


