/*
FUNCTION_NAME: FUN_01f1f85c
ENTRY_POINT: 01f1f85c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_20;telemetry_or_network_hits_3
*/


void FUN_01f1f85c(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if (*(long *)(param_3 + 0x38) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    thunk_FUN_01ad9084(StringLiteral_2650);
    thunk_FUN_01ad9084(StringLiteral_2651);
    thunk_FUN_01ad9084(StringLiteral_2652);
    thunk_FUN_01ad9084(StringLiteral_2653);
    thunk_FUN_01ad9084(StringLiteral_2654);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_01ae9ed0(param_3);
    }
  }
  if (param_2 != 0) {
    lVar1 = FUN_01e8a9f8(param_2,**(undefined8 **)(param_3 + 0x38));
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar2 = FUN_03923030(lVar1,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (lVar1 != 0) {
      uVar2 = FUN_0391b750(lVar1,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      FUN_0391b78c(lVar1,0,0);
      lVar3 = FUN_01b47fd0(*(undefined8 *)
                            Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_50__,9);
      if (lVar3 != 0) {
        if (*(int *)(lVar3 + 0x18) != 0) {
          *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)StringLiteral_2654;
          thunk_FUN_01b4f09c();
          uVar5 = *(undefined8 *)(*(long *)(param_3 + 0x38) + 0x10);
          if (*(int *)(*(long *)
                        Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          plVar4 = (long *)FUN_0304eec0(uVar5,0);
          if (plVar4 == (long *)0x0) goto LAB_01f1fb7c;
          uVar5 = (**(code **)(*plVar4 + 0x1a8))(plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
          if (1 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x28) = uVar5;
            thunk_FUN_01b4f09c((undefined8 *)(lVar3 + 0x28),uVar5);
            if (2 < *(uint *)(lVar3 + 0x18)) {
              *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)StringLiteral_2651;
              thunk_FUN_01b4f09c((undefined8 *)(lVar3 + 0x30));
              uVar5 = FUN_039230bc(lVar1,0);
              if (3 < *(uint *)(lVar3 + 0x18)) {
                *(undefined8 *)(lVar3 + 0x38) = uVar5;
                thunk_FUN_01b4f09c((undefined8 *)(lVar3 + 0x38),uVar5);
                if (4 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)StringLiteral_2652;
                  thunk_FUN_01b4f09c();
                  if (param_1 == 0) goto LAB_01f1fb7c;
                  uVar5 = FUN_039230bc(param_1,0);
                  if (5 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x48) = uVar5;
                    thunk_FUN_01b4f09c((undefined8 *)(lVar3 + 0x48),uVar5);
                    if (6 < *(uint *)(lVar3 + 0x18)) {
                      *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)StringLiteral_2653;
                      thunk_FUN_01b4f09c();
                      plVar4 = (long *)FUN_0304eec0(*(undefined8 *)
                                                     (*(long *)(param_3 + 0x38) + 0x10),0);
                      if (plVar4 == (long *)0x0) goto LAB_01f1fb7c;
                      uVar5 = (**(code **)(*plVar4 + 0x1a8))
                                        (plVar4,*(undefined8 *)(*plVar4 + 0x1b0));
                      if (7 < *(uint *)(lVar3 + 0x18)) {
                        *(undefined8 *)(lVar3 + 0x58) = uVar5;
                        thunk_FUN_01b4f09c((undefined8 *)(lVar3 + 0x58),uVar5);
                        if (8 < *(uint *)(lVar3 + 0x18)) {
                          *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)StringLiteral_2650;
                          thunk_FUN_01b4f09c();
                          uVar5 = FUN_02ee6e18(lVar3,0);
                          if (*(int *)(*(long *)
                                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                      + 0xe0) == 0) {
                            thunk_FUN_01ac7298(*(long *)
                                                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                                              );
                          }
                          FUN_038f2e04(uVar5,0);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
    }
  }
LAB_01f1fb7c:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


