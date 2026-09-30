/*
FUNCTION_NAME: FUN_03294068
ENTRY_POINT: 03294068
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_7;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_03294068(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_03ff5770 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d85ed0);
    thunk_FUN_01ad9084(
                      Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d85ed8);
    thunk_FUN_01ad9084(PTR_DAT_03d85ee0);
    DAT_03ff5770 = 1;
  }
  puVar2 = 
  Method_System_Net_Security_SslStream_<>c__DisplayClass21_0_<SetAndVerifySelectionCallback>b__0__;
  if (*(char *)(param_1 + 0xc1) != '\0') {
    if (*(char *)(param_1 + 0x109) != '\0') {
      uVar5 = *(undefined8 *)(param_1 + 0xd8);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_03923a90(uVar5,0);
      *(undefined2 *)(param_1 + 0x108) = 0;
    }
    puVar1 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    iVar3 = FUN_0325d650(0);
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298(*(long *)puVar1);
    }
    if (iVar3 != 0) {
      FUN_038f2e04(*(undefined8 *)PTR_DAT_03d85ee0,0);
      return;
    }
    FUN_038f2acc(*(undefined8 *)PTR_DAT_03d85ed8,0);
  }
  lVar4 = *(long *)(param_1 + 0x118);
  if (lVar4 != 0) {
    iVar3 = *(int *)(lVar4 + 0x18);
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (0 < iVar3) {
      FUN_03062488(*(undefined8 *)(lVar4 + 0x10),0,iVar3,0);
    }
  }
  *(undefined8 *)(param_1 + 0x118) = 0;
  thunk_FUN_01b4f09c(param_1 + 0x118,0);
  *(undefined1 *)(param_1 + 0xc1) = 0;
  return;
}


