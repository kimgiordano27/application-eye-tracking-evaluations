/*
FUNCTION_NAME: FUN_01bd7460
ENTRY_POINT: 01bd7460
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_8;validity_or_gating_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_01bd7460(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  
  puVar2 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
                    /* try { // try from 01bd7464 to 01cd749b has its CatchHandler @ 01bd7438 */
  if ((DAT_03fed264 & 1) == 0) {
                    /* catch() { ... } // from try @ 01bd745c with catch @ 01bd7488 */
    thunk_FUN_01ad9084(
                      Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_12__);
                    /* try { // try from 01bd749c to 01cd74bf has its CatchHandler @ 01bd749c
                       catch() { ... } // from try @ 01bd749c with catch @ 01bd749c
                       catch() { ... } // from try @ 01bd74c8 with catch @ 01bd749c */
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_13__);
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_14__);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_15__);
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_16__);
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_ScheduledItem_<>c_<_cctor>b__25_0__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_17__);
    DAT_03fed264 = 1;
  }
  puVar5 = Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_17__;
  puVar4 = Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_14__;
  puVar3 = Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_13__;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_038f2acc(*(undefined8 *)puVar5,0);
  uVar9 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x38) = uVar9;
  thunk_FUN_01b4f09c();
  lVar10 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar4);
  plVar12 = (long *)(param_1 + 0x28);
  *plVar12 = lVar10;
  thunk_FUN_01b4f09c(plVar12,lVar10);
  lVar10 = *plVar12;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar11 = FUN_03922f24(lVar10,0,0);
  if ((uVar11 & 1) != 0) {
    lVar10 = FUN_0391c2b8(param_1,0);
    if (lVar10 == 0) goto LAB_01bd7708;
    lVar10 = FUN_01ed7044(lVar10,*(undefined8 *)
                                  Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_16__);
    *plVar12 = lVar10;
    thunk_FUN_01b4f09c(plVar12,lVar10);
  }
  puVar2 = Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_12__;
  if (*plVar12 != 0) {
    FUN_03b36d90(*plVar12,*(undefined1 *)(param_1 + 0x78),0);
    lVar10 = FUN_01e8a9f8(param_1,*(undefined8 *)puVar2);
    plVar12 = (long *)(param_1 + 0x30);
    *plVar12 = lVar10;
    thunk_FUN_01b4f09c(plVar12,lVar10);
    lVar10 = *plVar12;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar11 = FUN_03922f24(lVar10,0,0);
    if ((uVar11 & 1) != 0) {
      lVar10 = FUN_0391c2b8(param_1,0);
      if (lVar10 == 0) goto LAB_01bd7708;
      lVar10 = FUN_01ed7044(lVar10,*(undefined8 *)
                                    Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_15__);
      *plVar12 = lVar10;
      thunk_FUN_01b4f09c(plVar12,lVar10);
    }
    puVar2 = Method_UnityEngine_UIElements_ScheduledItem_<>c_<_cctor>b__25_0__;
    if (*plVar12 != 0) {
      FUN_0391b78c(*plVar12,0,0);
      lVar10 = *plVar12;
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      bVar7 = FUN_01bd52c8(0);
      if (lVar10 != 0) {
        *(byte *)(lVar10 + 0xd3) = bVar7 & 1;
        lVar10 = *plVar12;
        if (lVar10 != 0) {
          if (*(int *)(lVar10 + 0xec) == 5) {
            if (*(int *)(*(long *)
                          Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            iVar8 = UnityEngine_UIElements_StyleCache__SetValue(0);
            bVar6 = iVar8 == 0xb;
          }
          else {
            bVar6 = true;
          }
          FUN_0391b78c(lVar10,bVar6,0);
          return;
        }
      }
    }
  }
LAB_01bd7708:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


