/*
FUNCTION_NAME: System.Array$$InternalArray__IReadOnlyList_get_Item<OVRPlugin.AppPerfFrameStats>
ENTRY_POINT: 01f59934
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__IReadOnlyList_get_Item<OVRPlugin_AppPerfFrameStats>
               (undefined8 param_1,int param_2,void *param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  void *__src;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  ulong __n;
  void *__dest;
  void *__s;
  int *piStack_20;
  void *pvStack_18;
  int iStack_c;
  long lStack_8;
  undefined *puVar7;
  
  lVar1 = tpidr_el0;
  lStack_8 = *(long *)(lVar1 + 0x28);
  lVar8 = *(long *)(param_4 + 0x38);
  if (lVar8 == 0) {
    thunk_FUN_01ad9084(StringLiteral_2698);
    thunk_FUN_01ad9084(
                      Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                      );
    lVar8 = *(long *)(param_4 + 0x38);
    if (lVar8 == 0) {
      FUN_01ae9ed0(param_4);
      lVar8 = *(long *)(param_4 + 0x38);
    }
  }
  __n = (ulong)*(uint *)(*(long *)(lVar8 + 0x10) + 0xfc);
  uVar10 = __n + 0xf & 0x1fffffff0;
  __dest = (void *)((long)&piStack_20 - uVar10);
  __s = (void *)((long)__dest - uVar10);
  memset(__s,0,__n);
  if (param_2 < 0) {
    piStack_20 = (int *)CONCAT44(piStack_20._4_4_,param_2);
    uVar2 = thunk_FUN_01ad9084(
                              Method_OVRTrackedKeyboard_<UpdateTrackingStateCoroutine>d__95_System_Collections_IEnumerator_Reset__
                              );
    uVar2 = thunk_FUN_01afa70c(uVar2,&piStack_20);
    uVar5 = thunk_FUN_01ad9084(StringLiteral_2772);
    uVar6 = thunk_FUN_01ad9084(StringLiteral_2768);
    uVar4 = thunk_FUN_01ad9084(StringLiteral_2201);
    uVar2 = FUN_02ee7164(uVar5,uVar6,uVar4,uVar2,0);
  }
  else {
    if (*(int *)(*(long *)StringLiteral_2698 + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    uVar2 = FUN_0396177c(param_1,0);
    lVar8 = **(long **)(param_4 + 0x38);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_01ae9e74(lVar8);
    }
    plVar3 = (long *)thunk_FUN_01afa9e0(uVar2,lVar8);
    puVar7 = Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__;
    if (plVar3 != (long *)0x0) {
      lVar8 = **(long **)(param_4 + 0x38);
      if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_01ae9e74(lVar8);
      }
      lVar9 = *plVar3;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      iStack_c = param_2;
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == lVar8) {
            lVar8 = lVar9 + (long)*piVar11 * 0x10 + 0x138;
            goto LAB_01f59b58;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      lVar8 = FUN_01ae9f78(plVar3,lVar8,0);
LAB_01f59b58:
      piStack_20 = &iStack_c;
      lVar8 = *(long *)(lVar8 + 8);
      pvStack_18 = __dest;
      (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar3,&piStack_20,__dest);
      __src = __dest;
LAB_01f59b80:
      memcpy(__s,__src,__n);
      memcpy(__dest,__s,__n);
      memcpy(param_3,__dest,__n);
      if (*(long *)(lVar1 + 0x28) == lStack_8) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar2 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x18);
    if (*(int *)(*(long *)
                  Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                + 0xe0) == 0) {
      thunk_FUN_01ac7298();
    }
    plVar3 = (long *)FUN_0304eec0(uVar2,0);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    uVar10 = FUN_030596e4(plVar3,0);
    if ((uVar10 & 1) == 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x18);
      thunk_FUN_01ad9084(
                        Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                        );
      FUN_01853f74();
      plVar3 = (long *)FUN_0304eec0(uVar2,0);
      FUN_01852fbc();
      uVar2 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
      uVar5 = thunk_FUN_01ad9084(StringLiteral_2773);
      puVar7 = StringLiteral_2770;
    }
    else {
      uVar2 = (**(code **)(*plVar3 + 0x438))(plVar3,*(undefined8 *)(*plVar3 + 0x440));
      if (*(int *)(*(long *)puVar7 + 0xe0) == 0) {
        thunk_FUN_01ac7298(*(long *)puVar7);
      }
      uVar10 = FUN_03057a60(0,uVar2,0);
      if ((uVar10 & 1) == 0) {
        uVar2 = FUN_0306584c(uVar2,param_2,0);
        lVar8 = *(long *)(*(long *)(param_4 + 0x38) + 0x10);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_01ae9e74(lVar8);
        }
        __src = (void *)FUN_01b48074(uVar2,lVar8,__dest);
        goto LAB_01f59b80;
      }
      uVar2 = *(undefined8 *)(*(long *)(param_4 + 0x38) + 0x18);
      thunk_FUN_01ad9084(
                        Method_UnityEngine_UIElements_Experimental_PointerUpLinkTagEvent_<>c_<_cctor>b__0_0__
                        );
      FUN_01853f74();
      plVar3 = (long *)FUN_0304eec0(uVar2,0);
      FUN_01852fbc();
      uVar2 = (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
      uVar5 = thunk_FUN_01ad9084(StringLiteral_2773);
      puVar7 = StringLiteral_2771;
    }
    uVar6 = thunk_FUN_01ad9084(puVar7);
    uVar2 = FUN_02ee6c30(uVar5,uVar2,uVar6,0);
  }
  thunk_FUN_01ad9084(
                    Method_UnityEngine_XR_Interaction_Toolkit_AffordanceSystem_State_XRInteractableAffordanceStateProvider_<ClickAnimation>d__91_System_Collections_IEnumerator_Reset__
                    );
  uVar5 = thunk_FUN_01afaadc();
  FUN_02fd7c54(uVar5,uVar2,0);
                    /* WARNING: Subroutine does not return */
  FUN_01b48050(uVar5,param_4);
}


