/*
FUNCTION_NAME: bw.<>c$$.cctor
ENTRY_POINT: 01bd74b0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void bw_<>c___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  long *unaff_x20;
  long *plVar9;
  long unaff_x21;
  
  thunk_FUN_01ad9084();
  thunk_FUN_01ad9084(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                    );
                    /* try { // try from 01bd74c0 to 01cd74c7 has its CatchHandler @ 01bd74ec */
                    /* try { // try from 01bd74c8 to 01cd74ff has its CatchHandler @ 01bd749c */
  thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_15__);
  thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_16__);
  thunk_FUN_01ad9084(Method_UnityEngine_UIElements_ScheduledItem_<>c_<_cctor>b__25_0__);
                    /* catch() { ... } // from try @ 01bd74c0 with catch @ 01bd74ec */
  thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
  thunk_FUN_01ad9084(Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_17__);
                    /* try { // try from 01bd7500 to 01cd7523 has its CatchHandler @ 01bd7500
                       catch() { ... } // from try @ 01bd7500 with catch @ 01bd7500
                       catch() { ... } // from try @ 01bd752c with catch @ 01bd7500 */
  *(undefined1 *)(unaff_x21 + 0x264) = 1;
  puVar2 = Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_17__;
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if (*(int *)(*unaff_x20 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  FUN_038f2acc(*(undefined8 *)puVar2,0);
  uVar6 = FUN_01e8a9f8();
  *(undefined8 *)(unaff_x19 + 0x38) = uVar6;
  thunk_FUN_01b4f09c();
  lVar7 = FUN_01e8a9f8();
  plVar9 = (long *)(unaff_x19 + 0x28);
  *plVar9 = lVar7;
  thunk_FUN_01b4f09c(plVar9,lVar7);
  lVar7 = *plVar9;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar8 = FUN_03922f24(lVar7,0,0);
  if ((uVar8 & 1) != 0) {
    lVar7 = FUN_0391c2b8();
    if (lVar7 == 0) goto LAB_01bd7708;
    lVar7 = FUN_01ed7044(lVar7,*(undefined8 *)
                                Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_16__);
    *plVar9 = lVar7;
    thunk_FUN_01b4f09c(plVar9,lVar7);
  }
  if (*plVar9 != 0) {
    FUN_03b36d90(*plVar9,*(undefined1 *)(unaff_x19 + 0x78),0);
    lVar7 = FUN_01e8a9f8();
    plVar9 = (long *)(unaff_x19 + 0x30);
    *plVar9 = lVar7;
    thunk_FUN_01b4f09c(plVar9,lVar7);
    lVar7 = *plVar9;
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar8 = FUN_03922f24(lVar7,0,0);
    if ((uVar8 & 1) != 0) {
      lVar7 = FUN_0391c2b8();
      if (lVar7 == 0) goto LAB_01bd7708;
      lVar7 = FUN_01ed7044(lVar7,*(undefined8 *)
                                  Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_15__);
      *plVar9 = lVar7;
      thunk_FUN_01b4f09c(plVar9,lVar7);
    }
    puVar1 = Method_UnityEngine_UIElements_ScheduledItem_<>c_<_cctor>b__25_0__;
    if (*plVar9 != 0) {
      FUN_0391b78c(*plVar9,0,0);
      lVar7 = *plVar9;
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      bVar4 = FUN_01bd52c8(0);
      if (lVar7 != 0) {
        *(byte *)(lVar7 + 0xd3) = bVar4 & 1;
        lVar7 = *plVar9;
        if (lVar7 != 0) {
          if (*(int *)(lVar7 + 0xec) == 5) {
            if (*(int *)(*(long *)
                          Method_OVRRuntimeController_<UpdateControllerModel>d__16_System_Collections_IEnumerator_Reset__
                        + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            iVar5 = UnityEngine_UIElements_StyleCache__SetValue(0);
            bVar3 = iVar5 == 0xb;
          }
          else {
            bVar3 = true;
          }
          FUN_0391b78c(lVar7,bVar3,0);
          return;
        }
      }
    }
  }
LAB_01bd7708:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


