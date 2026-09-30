/*
FUNCTION_NAME: FUN_0388b510
ENTRY_POINT: 0388b510
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_12;validity_or_gating_hits_12;telemetry_or_network_hits_4;frame_or_lifecycle_behavior
*/


void FUN_0388b510(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_03da85a0;
  if ((DAT_03ff882b & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03da85a0);
    thunk_FUN_01ad9084(PTR_DAT_03da82c0);
    thunk_FUN_01ad9084(PTR_DAT_03da85a8);
    DAT_03ff882b = 1;
  }
  lVar4 = FUN_0214b34c(*(undefined8 *)puVar3);
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x18) == '\0') {
      return;
    }
    lVar4 = FUN_0214b34c(*(undefined8 *)puVar3);
    if (lVar4 != 0) {
      if (*(char *)(lVar4 + 0x19) != '\0') {
        if (*(int *)(*(long *)
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_038f032c(0);
        if ((uVar5 & 1) == 0) {
          return;
        }
      }
      puVar2 = PTR_DAT_03da82c0;
      if (*(int *)(*(long *)PTR_DAT_03da82c0 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      if (DAT_03ff88a3 == '\0') {
        thunk_FUN_01ad9084(PTR_DAT_03da82c0);
        DAT_03ff88a3 = '\x01';
      }
      lVar4 = *(long *)puVar2;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
        lVar4 = *(long *)puVar2;
      }
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0xb8) + 0x18);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)
                            Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
      }
      uVar5 = FUN_03922f24(uVar6,0,0);
      if ((uVar5 & 1) == 0) {
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        if (DAT_03ff88a3 == '\0') {
          thunk_FUN_01ad9084(PTR_DAT_03da82c0);
          DAT_03ff88a3 = '\x01';
        }
        lVar4 = *(long *)puVar2;
        if (*(int *)(lVar4 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
          lVar4 = *(long *)puVar2;
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 0x18);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
LAB_0388b790:
        FUN_03923cd4(lVar4,0);
        return;
      }
      lVar4 = FUN_0214b34c(*(undefined8 *)puVar3);
      if (lVar4 != 0) {
        lVar7 = *(long *)(lVar4 + 0x20);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298(*(long *)puVar1);
        }
        uVar5 = FUN_03922f24(lVar7,0,0);
        if ((uVar5 & 1) != 0) {
          if (*(int *)(*(long *)
                        Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      + 0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          FUN_038f336c(*(undefined8 *)PTR_DAT_03da85a8,0);
          return;
        }
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        lVar4 = FUN_01f25754(lVar7,*(undefined8 *)
                                    Method_Unity_VisualScripting_OrHandler_<>c_<_ctor>b__0_45__);
        if ((lVar7 != 0) && (uVar6 = FUN_039230bc(lVar7,0), lVar4 != 0)) {
          FUN_0392316c(lVar4,uVar6,0);
          goto LAB_0388b790;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


