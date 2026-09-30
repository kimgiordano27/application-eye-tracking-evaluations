/*
FUNCTION_NAME: FUN_01c06b8c
ENTRY_POINT: 01c06b8c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_8;telemetry_or_network_hits_14
*/


void FUN_01c06b8c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  
  puVar2 = Method_UnityEngine_UIElements_TransitionEndEvent_<>c_<_cctor>b__0_0__;
  if ((DAT_03fed3b5 & 1) == 0) {
    thunk_FUN_01ad9084(Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__);
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass45_0_<RequestFileHeaders>b__0__
                      );
    thunk_FUN_01ad9084(Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass46_0_<RequestFile>b__0__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_TransitionEndEvent_<>c_<_cctor>b__0_0__);
    thunk_FUN_01ad9084(
                      Method_BNG_VRKeyboard_<IncreaseInputFieldCareteRoutine>d__11_System_Collections_IEnumerator_Reset__
                      );
    thunk_FUN_01ad9084(Method_UnityEngine_UIElements_TransitionCancelEvent_<>c_<_cctor>b__0_0__);
    DAT_03fed3b5 = 1;
  }
  plVar6 = *(long **)(param_1 + 0x40);
  FUN_03919a14(0x3f000000,*(undefined8 *)puVar2,0);
  puVar2 = Method_UnityEngine_UIElements_TransitionCancelEvent_<>c_<_cctor>b__0_0__;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x428))(plVar6,*(undefined8 *)(*plVar6 + 0x430));
    plVar6 = *(long **)(param_1 + 0x48);
    FUN_03919a14(0x3f000000,*(undefined8 *)puVar2,0);
    puVar2 = Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass46_0_<RequestFile>b__0__;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x428))(plVar6,*(undefined8 *)(*plVar6 + 0x430));
      iVar3 = FUN_039198f8(*(undefined8 *)puVar2,0,0);
      if (iVar3 == 1) {
        if (*(long *)(param_1 + 0x70) == 0) goto LAB_01c06d94;
        FUN_0391fb70(*(long *)(param_1 + 0x70),1,0);
      }
      lVar7 = *(long *)(param_1 + 0x88);
      uVar4 = FUN_0391993c(*(undefined8 *)
                            Method_Meta_WitAi_Requests_VRequest_<>c__DisplayClass45_0_<RequestFileHeaders>b__0__
                           ,0);
      puVar1 = Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__;
      if (lVar7 != 0) {
        FUN_036c4f08(lVar7,uVar4,0);
        uVar8 = *(undefined8 *)(param_1 + 0x78);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_0391f968(uVar8,0,0);
        if ((uVar5 & 1) != 0) {
          lVar7 = *(long *)(param_1 + 0x78);
          iVar3 = FUN_039198f8(*(undefined8 *)puVar2,0,0);
          if (lVar7 == 0) goto LAB_01c06d94;
          FUN_03b1de40(lVar7,iVar3 == 1,0);
        }
        uVar8 = *(undefined8 *)(param_1 + 0x80);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar5 = FUN_0391f968(uVar8,0,0);
        if ((uVar5 & 1) == 0) {
          return;
        }
        lVar7 = *(long *)(param_1 + 0x80);
        iVar3 = FUN_039198f8(*(undefined8 *)
                              Method_BNG_VRKeyboard_<IncreaseInputFieldCareteRoutine>d__11_System_Collections_IEnumerator_Reset__
                             ,0,0);
        if (lVar7 != 0) {
          FUN_03b1de40(lVar7,iVar3 == 1,0);
          return;
        }
      }
    }
  }
LAB_01c06d94:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


