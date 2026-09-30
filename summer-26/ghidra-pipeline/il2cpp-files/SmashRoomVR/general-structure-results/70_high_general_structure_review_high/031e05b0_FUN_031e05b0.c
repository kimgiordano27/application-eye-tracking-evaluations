/*
FUNCTION_NAME: FUN_031e05b0
ENTRY_POINT: 031e05b0
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_13;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_031e05b0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long lVar9;
  undefined4 local_24;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ff4244 & 1) == 0) {
    thunk_FUN_01ad9084(PTR_DAT_03d817c8);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_ValidateCommandEvent_<>c_<_cctor>b__0_0__);
    thunk_FUN_01ad9084(PTR_DAT_03d82888);
    thunk_FUN_01ad9084(PTR_DAT_03d82890);
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Current__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(PTR_DAT_03d82898);
    thunk_FUN_01ad9084(PTR_DAT_03d828a0);
    DAT_03ff4244 = 1;
  }
  (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
  plVar5 = param_1 + 5;
  lVar9 = *plVar5;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar4 = FUN_03922f24(lVar9,0,0);
  if ((uVar4 & 1) != 0) {
    lVar9 = FUN_0391c2b8(param_1,0);
    if (lVar9 == 0) goto LAB_031e0860;
    lVar9 = FUN_01ed7044(lVar9,*(undefined8 *)
                                Method_UnityEngine_UIElements_ValidateCommandEvent_<>c_<_cctor>b__0_0__
                        );
    *plVar5 = lVar9;
    thunk_FUN_01b4f09c(plVar5,lVar9);
  }
  if ((*plVar5 != 0) && (lVar9 = FUN_0391c2b8(*plVar5,0), lVar9 != 0)) {
    FUN_01ed7044(lVar9,*(undefined8 *)PTR_DAT_03d82888);
    if ((*plVar5 != 0) &&
       ((lVar9 = FUN_0391c2b8(*plVar5,0), lVar9 != 0 &&
        (lVar9 = FUN_01ed712c(lVar9,*(undefined8 *)PTR_DAT_03d82890), puVar2 = PTR_DAT_03d82898,
        puVar1 = PTR_DAT_03d817c8, lVar9 != 0)))) {
      *(long *)(lVar9 + 0x20) = (long)param_1;
      thunk_FUN_01b4f09c((long *)(lVar9 + 0x20),param_1);
      *(undefined4 *)(param_1 + 4) = 0x28;
      iVar3 = FUN_038e90d0(0);
      **(int **)(*(long *)puVar2 + 0xb8) = iVar3;
      if (iVar3 == 24000) {
        uVar8 = 1;
      }
      else if (iVar3 == 0xac44) {
        uVar8 = 2;
      }
      else if (iVar3 == 48000) {
        uVar8 = 3;
      }
      else {
        uVar8 = 0;
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      FUN_031b3540(uVar8);
      puVar1 = 
      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
      ;
      if (*(char *)(*(long *)(*(long *)puVar2 + 0xb8) + 4) != '\0') {
        plVar5 = (long *)FUN_01b47fd0(*(undefined8 *)
                                       Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                      ,1);
        local_24 = **(undefined4 **)(*(long *)puVar2 + 0xb8);
        lVar9 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_24);
        if (plVar5 == (long *)0x0) goto LAB_031e0860;
        if ((lVar9 != 0) &&
           (lVar6 = thunk_FUN_01afa9e0(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
          uVar7 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
          FUN_01b48050(uVar7,0);
        }
        puVar2 = PTR_DAT_03d828a0;
        puVar1 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__;
        if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
        plVar5[4] = lVar9;
        thunk_FUN_01b4f09c(plVar5 + 4,lVar9);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_038f2cec(*(undefined8 *)puVar2,plVar5,0);
      }
      return;
    }
  }
LAB_031e0860:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


