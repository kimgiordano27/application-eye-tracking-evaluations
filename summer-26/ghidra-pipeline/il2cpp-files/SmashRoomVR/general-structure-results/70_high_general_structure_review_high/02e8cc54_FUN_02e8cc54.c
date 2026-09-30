/*
FUNCTION_NAME: FUN_02e8cc54
ENTRY_POINT: 02e8cc54
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_10;validity_or_gating_hits_13;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


void FUN_02e8cc54(long *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  int local_5c;
  int local_58;
  int local_54;
  
  if ((DAT_03ff05b0 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__);
    thunk_FUN_01ad9084(StringLiteral_5962);
    thunk_FUN_01ad9084(StringLiteral_6152);
    thunk_FUN_01ad9084(StringLiteral_6153);
    DAT_03ff05b0 = 1;
  }
  puVar4 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
  if ((char)param_1[9] != '\0') {
    plVar11 = param_1 + 8;
    lVar9 = *plVar11;
    if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar6 = FUN_0391f968(lVar9,0,0);
    iVar3 = (int)param_1[4];
    if (((uVar6 & 1) == 0) || (iVar3 != param_2)) {
      *(int *)(param_1 + 4) = param_2;
      puVar5 = StringLiteral_5962;
      lVar10 = param_1[8];
      uVar2 = *(undefined4 *)((long)param_1 + 0x14);
      lVar9 = param_1[3];
      if (*(int *)(*(long *)StringLiteral_5962 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      lVar9 = FUN_02e8cff0(param_2,uVar2,(int)lVar9);
      *plVar11 = lVar9;
      thunk_FUN_01b4f09c(plVar11,lVar9);
      if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar6 = FUN_0391f968(lVar10,0,0);
      if ((uVar6 & 1) == 0) {
        local_5c = param_2;
        uVar7 = thunk_FUN_01afa70c(*(undefined8 *)
                                    Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                   ,&local_5c);
        uVar7 = FUN_02ede300(*(undefined8 *)StringLiteral_6153,uVar7,0);
        FUN_02e7aa28(3,0,uVar7);
      }
      else {
        iVar1 = iVar3;
        if (param_2 <= iVar3) {
          iVar1 = param_2;
        }
        uVar7 = FUN_01b47fd0(*(undefined8 *)Method_OVRResources_<>c__DisplayClass2_0_<Load>b__0__,
                             iVar1);
        if (lVar10 == 0) {
LAB_02e8ceb8:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        FUN_038e9a04(lVar10,uVar7,0,0);
        if (*plVar11 == 0) goto LAB_02e8ceb8;
        FUN_038e9b8c(*plVar11,uVar7,0,0);
        puVar4 = 
        Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
        ;
        local_54 = param_2;
        uVar7 = thunk_FUN_01afa70c(*(undefined8 *)
                                    Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                   ,&local_54);
        local_58 = iVar3;
        uVar8 = thunk_FUN_01afa70c(*(undefined8 *)puVar4,&local_58);
        uVar7 = FUN_02ee7120(*(undefined8 *)StringLiteral_6152,uVar7,uVar8,0);
        FUN_02e7aa28(3,0,uVar7);
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        FUN_02e8d1c4(lVar10);
      }
      (**(code **)(*param_1 + 0x2a8))(param_1,*(undefined8 *)(*param_1 + 0x2b0));
    }
  }
  return;
}


