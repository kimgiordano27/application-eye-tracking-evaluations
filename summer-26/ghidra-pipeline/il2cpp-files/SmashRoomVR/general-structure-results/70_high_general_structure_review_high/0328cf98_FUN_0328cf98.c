/*
FUNCTION_NAME: FUN_0328cf98
ENTRY_POINT: 0328cf98
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_12;telemetry_or_network_hits_3
*/


void FUN_0328cf98(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  
  if ((DAT_03ff5732 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d85b90);
    DAT_03ff5732 = 1;
  }
  if ((1 < *(int *)(param_1 + 0x24) - 1U) && (*(long *)(param_1 + 0x148) != 0)) {
    if (*(long *)(param_1 + 0xa8) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0xa8) + 0xd2) = 1;
      if (*(long *)(param_1 + 0x118) != 0) {
        *(undefined1 *)(*(long *)(param_1 + 0x118) + 0x2c) = 1;
        lVar4 = *(long *)(param_1 + 0x120);
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),0,*(undefined8 *)(lVar4 + 0x28))
          ;
        }
        uVar2 = FUN_02edd6e8(*(undefined8 *)PTR_DAT_03d85b90,*(undefined8 *)(param_1 + 0x28),0);
        if (*(int *)(*(long *)
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            );
        }
        FUN_038f2acc(uVar2,0);
        FUN_03920f1c(param_1,*(undefined8 *)(param_1 + 0x148),0);
        *(undefined8 *)(param_1 + 0x148) = 0;
        thunk_FUN_01b4f09c(param_1 + 0x148,0);
        FUN_0328c228();
        FUN_0328d260(param_1);
        puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
        plVar5 = (long *)(param_1 + 0xb8);
        lVar4 = *plVar5;
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar3 = FUN_0391f968(lVar4,0,0);
        if ((uVar3 & 1) != 0) {
          if (*plVar5 == 0) goto LAB_0328d198;
          uVar2 = FUN_0392013c(*plVar5,0);
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_01ac7298(*(long *)puVar1);
          }
          FUN_03923a90(uVar2,0);
          *(undefined8 *)(param_1 + 0xb8) = 0;
          thunk_FUN_01b4f09c(plVar5,0);
          *(undefined8 *)(param_1 + 0xb0) = 0;
          thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0xb0),0);
          *(undefined8 *)(param_1 + 0x150) = 0;
          thunk_FUN_01b4f09c(param_1 + 0x150,0);
        }
        if (DAT_03fed257 == '\0') {
          thunk_FUN_01ad9084(Method_Mono_Security_PKCS7_EncryptedData__ctor__);
          DAT_03fed257 = '\x01';
        }
        uVar6 = *(undefined4 *)
                 (*(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8)
                 + 1);
        *(undefined8 *)(param_1 + 0xe8) =
             **(undefined8 **)(*(long *)Method_Mono_Security_PKCS7_EncryptedData__ctor__ + 0xb8);
        *(undefined4 *)(param_1 + 0xf0) = uVar6;
        goto LAB_0328d180;
      }
    }
LAB_0328d198:
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
LAB_0328d180:
  FUN_0328d19c(param_1,2);
  return;
}


