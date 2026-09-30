/*
FUNCTION_NAME: FUN_02edd0ec
ENTRY_POINT: 02edd0ec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_6;telemetry_or_network_hits_6;frame_or_lifecycle_behavior
*/


void FUN_02edd0ec(long param_1,long param_2,byte param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((DAT_03ff0871 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__);
    DAT_03ff0871 = 1;
  }
  FUN_03081994(param_1,0);
  plVar9 = (long *)(param_1 + 0x10);
  *plVar9 = param_2;
  thunk_FUN_01b4f09c(plVar9,param_2);
  plVar5 = (long *)*plVar9;
  *(byte *)(param_1 + 0x18) = param_3 & 1;
  puVar1 = Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__;
  if (plVar5 != (long *)0x0) {
    iVar3 = (**(code **)(*plVar5 + 0x198))(plVar5,*(undefined8 *)(*plVar5 + 0x1a0));
    *(int *)(param_1 + 0x1c) = iVar3 >> 3;
    if (param_4 == 0) {
      lVar7 = System_TimeZoneInfo_TransitionTime__System_Runtime_Serialization_ISerializable_GetObjectData
                        (iVar3 >> 3,0);
    }
    else {
      lVar6 = FUN_03062c44(param_4,0);
      if (lVar6 == 0) goto LAB_02edd2ec;
      uVar11 = *(undefined8 *)puVar1;
      lVar7 = thunk_FUN_01afa9e0(lVar6,uVar11);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b4841c(lVar6,uVar11);
      }
    }
    puVar2 = Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__;
    if (lVar7 != 0) {
      if (*(int *)(lVar7 + 0x18) < *(int *)(param_1 + 0x1c)) {
        uVar11 = thunk_FUN_01ad9084(
                                   Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                                   );
        uVar11 = FUN_01b47fd0(uVar11,2);
        FUN_01852fbc(lVar7);
        puVar1 = 
        Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
        ;
        local_34 = (undefined4)*(undefined8 *)(lVar7 + 0x18);
        uVar8 = thunk_FUN_01ad9084(
                                  Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                                  );
        uVar8 = thunk_FUN_01afa70c(uVar8,&local_34);
        FUN_01852fbc(uVar11);
        FUN_01855950(uVar11,uVar8);
        FUN_01855748(uVar11,0,uVar8);
        local_38 = *(undefined4 *)(param_1 + 0x1c);
        uVar8 = thunk_FUN_01ad9084(puVar1);
        uVar8 = thunk_FUN_01afa70c(uVar8,&local_38);
        FUN_01852fbc(uVar11);
        FUN_01855950(uVar11,uVar8);
        FUN_01855748(uVar11,1,uVar8);
        uVar8 = thunk_FUN_01ad9084(StringLiteral_7158);
        uVar11 = FUN_02ec9af8(uVar8,uVar11,0);
        thunk_FUN_01ad9084(StringLiteral_6625);
        uVar8 = thunk_FUN_01afaadc();
        FUN_02f0f55c(uVar8,uVar11,0);
        uVar11 = thunk_FUN_01ad9084(StringLiteral_7159);
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar8,uVar11);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar9 + 600))(plVar9,*(undefined8 *)(*plVar9 + 0x260));
        *(undefined4 *)(param_1 + 0x40) = uVar4;
        uVar11 = FUN_01b47fd0(*(undefined8 *)puVar1,*(undefined4 *)(param_1 + 0x1c));
        puVar10 = (undefined8 *)(param_1 + 0x20);
        *puVar10 = uVar11;
        thunk_FUN_01b4f09c(puVar10,uVar11);
        uVar11 = *puVar10;
        uVar4 = *(undefined4 *)(param_1 + 0x1c);
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar4 = FUN_030415cc(uVar4,*(undefined4 *)(lVar7 + 0x18),0);
        FUN_0306bccc(lVar7,0,uVar11,0,uVar4,0);
        uVar11 = FUN_01b47fd0(*(undefined8 *)puVar1,*(undefined4 *)(param_1 + 0x1c));
        *(undefined8 *)(param_1 + 0x28) = uVar11;
        thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x28),uVar11);
        plVar5 = *(long **)(param_1 + 0x10);
        if (plVar5 != (long *)0x0) {
          iVar3 = (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
          *(int *)(param_1 + 0x44) = iVar3 >> 3;
          uVar11 = FUN_01b47fd0(*(undefined8 *)puVar1,*(undefined4 *)(param_1 + 0x1c));
          *(undefined8 *)(param_1 + 0x30) = uVar11;
          thunk_FUN_01b4f09c();
          uVar11 = FUN_01b47fd0(*(undefined8 *)puVar1,*(undefined4 *)(param_1 + 0x1c));
          *(undefined8 *)(param_1 + 0x38) = uVar11;
          thunk_FUN_01b4f09c((undefined8 *)(param_1 + 0x38),uVar11);
          return;
        }
      }
    }
  }
LAB_02edd2ec:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


