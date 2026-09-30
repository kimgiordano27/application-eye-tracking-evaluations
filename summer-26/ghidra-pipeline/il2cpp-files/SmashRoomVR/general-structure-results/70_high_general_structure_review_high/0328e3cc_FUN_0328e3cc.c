/*
FUNCTION_NAME: FUN_0328e3cc
ENTRY_POINT: 0328e3cc
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


undefined8 FUN_0328e3cc(long param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  if ((DAT_03ff573e & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_15__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_31__);
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_3__);
    DAT_03ff573e = 1;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    lVar4 = *(long *)(param_1 + 0x20);
    lVar1 = FUN_03920070(*(undefined8 *)
                          Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_3__,0);
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)
                          Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    }
    uVar2 = FUN_03922f24(lVar1,0,0);
    if ((uVar2 & 1) == 0) {
      if ((lVar1 != 0) &&
         (lVar1 = FUN_01ed7044(lVar1,*(undefined8 *)
                                      Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_15__),
         lVar4 != 0)) {
        plVar3 = (long *)(lVar4 + 0xa8);
        *plVar3 = lVar1;
        thunk_FUN_01b4f09c(plVar3,lVar1);
        lVar1 = *plVar3;
        if (lVar1 != 0) {
          *(undefined4 *)(lVar1 + 0xec) = 10;
          *(undefined1 *)(lVar1 + 0xd2) = 1;
          lVar1 = FUN_0391c2b8(lVar1,0);
          if (lVar1 != 0) {
            FUN_0391fb70(lVar1,1,0);
            lVar1 = *(long *)(lVar4 + 0x118);
            if (lVar1 != 0) {
              *(undefined1 *)(lVar1 + 0x2c) = 1;
              lVar1 = FUN_0391c2b8(lVar1,0);
              if (lVar1 != 0) {
                FUN_0391fb70(lVar1,1,0);
                return 0;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    FUN_038f2e04(*(undefined8 *)Method_Unity_VisualScripting_SubtractionHandler_<>c_<_ctor>b__0_31__
                 ,0);
  }
  return 0;
}


