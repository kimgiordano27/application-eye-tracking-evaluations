/*
FUNCTION_NAME: FUN_03a96b38
ENTRY_POINT: 03a96b38
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_11;validity_or_gating_hits_15;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void FUN_03a96b38(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((DAT_03ffd42c & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_System_Collections_SortedList_SortedListEnumerator_get_Current__);
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(StringLiteral_2990);
    thunk_FUN_01ad9084(PTR_DAT_03db4890);
    DAT_03ffd42c = 1;
  }
  plVar9 = (long *)(param_1 + 0x18);
  lVar10 = *plVar9;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01ac7298();
  }
  uVar3 = FUN_03922f24(lVar10,0,0);
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_03a96f08(param_1);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_01b4f09c(plVar9,uVar4);
    return;
  }
  plVar5 = (long *)*plVar9;
  if (plVar5 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
    if (iVar2 == *(int *)(param_1 + 0x50)) {
      plVar5 = (long *)*plVar9;
      if (plVar5 == (long *)0x0) goto LAB_03a96ef4;
      iVar2 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
      if (iVar2 == *(int *)(param_1 + 0x54)) {
        return;
      }
    }
    lVar10 = FUN_03a96f08(param_1);
    lVar7 = *(long *)puVar1;
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_01ac7298(lVar7);
    }
    uVar3 = FUN_03922f24(lVar10,0,0);
    if ((uVar3 & 1) == 0) {
      plVar5 = *(long **)(param_1 + 0x18);
      if (plVar5 != (long *)0x0) {
        lVar7 = *(long *)(param_1 + 0x48);
        uVar3 = (**(code **)(*plVar5 + 0x178))(plVar5,*(undefined8 *)(*plVar5 + 0x180));
        plVar8 = (long *)*plVar9;
        if (plVar8 != (long *)0x0) {
          lVar6 = (**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0));
          if (lVar7 != 0) {
            FUN_039fcc1c(0x3f800000,0x3f800000,0x3f800000,0x3f800000,lVar7,lVar10,plVar5,0,
                         uVar3 & 0xffffffff | lVar6 << 0x20,0,0,0);
LAB_03a96ea4:
            lVar7 = *plVar9;
            if (*(int *)(*(long *)StringLiteral_2990 + 0xe0) == 0) {
              thunk_FUN_01ac7298();
            }
            FUN_03ab586c(lVar7,0);
            *plVar9 = lVar10;
            thunk_FUN_01b4f09c(plVar9,lVar10);
            return;
          }
        }
      }
    }
    else {
      plVar5 = (long *)FUN_01b47fd0(*(undefined8 *)
                                     Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                    ,4);
      plVar8 = (long *)*plVar9;
      if (plVar8 != (long *)0x0) {
        local_34 = (**(code **)(*plVar8 + 0x178))(plVar8,*(undefined8 *)(*plVar8 + 0x180));
        puVar1 = 
        Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
        ;
        lVar7 = thunk_FUN_01afa70c(*(undefined8 *)
                                    Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                   ,&local_34);
        if (plVar5 != (long *)0x0) {
          if ((lVar7 != 0) &&
             (lVar6 = thunk_FUN_01afa9e0(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
          goto LAB_03a96efc;
          if ((int)plVar5[3] == 0) goto LAB_03a96ef8;
          plVar5[4] = lVar7;
          thunk_FUN_01b4f09c(plVar5 + 4,lVar7);
          plVar8 = (long *)*plVar9;
          if (plVar8 == (long *)0x0) goto LAB_03a96ef4;
          local_38 = (**(code **)(*plVar8 + 0x198))(plVar8,*(undefined8 *)(*plVar8 + 0x1a0));
          lVar7 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_38);
          if ((lVar7 != 0) &&
             (lVar6 = thunk_FUN_01afa9e0(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
LAB_03a96efc:
            uVar4 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
            FUN_01b48050(uVar4,0);
          }
          if (1 < *(uint *)(plVar5 + 3)) {
            plVar5[5] = lVar7;
            thunk_FUN_01b4f09c(plVar5 + 5,lVar7);
            local_44 = *(undefined4 *)(param_1 + 0x50);
            lVar7 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_44);
            if ((lVar7 != 0) &&
               (lVar6 = thunk_FUN_01afa9e0(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
            goto LAB_03a96efc;
            if (2 < *(uint *)(plVar5 + 3)) {
              plVar5[6] = lVar7;
              thunk_FUN_01b4f09c(plVar5 + 6,lVar7);
              local_48 = *(undefined4 *)(param_1 + 0x54);
              lVar7 = thunk_FUN_01afa70c(*(undefined8 *)puVar1,&local_48);
              if ((lVar7 != 0) &&
                 (lVar6 = thunk_FUN_01afa9e0(lVar7,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0))
              goto LAB_03a96efc;
              if (3 < *(uint *)(plVar5 + 3)) {
                plVar5[7] = lVar7;
                thunk_FUN_01b4f09c(plVar5 + 7,lVar7);
                if (*(int *)(*(long *)
                              Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                            + 0xe0) == 0) {
                  thunk_FUN_01ac7298();
                }
                FUN_038f3024(*(undefined8 *)PTR_DAT_03db4890,plVar5,0);
                goto LAB_03a96ea4;
              }
            }
          }
LAB_03a96ef8:
                    /* WARNING: Subroutine does not return */
          FUN_01b48180();
        }
      }
    }
  }
LAB_03a96ef4:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


