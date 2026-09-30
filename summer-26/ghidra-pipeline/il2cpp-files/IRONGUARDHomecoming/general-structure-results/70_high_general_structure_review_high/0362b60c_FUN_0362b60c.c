/*
FUNCTION_NAME: FUN_0362b60c
ENTRY_POINT: 0362b60c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_19;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_0362b60c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  
  if ((DAT_04833aa6 & 1) == 0) {
    thunk_FUN_01efb3a4(
                      Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
                      );
    thunk_FUN_01efb3a4(
                      Method_Unity_VisualScripting_StaticFunctionInvoker<float,_Vector3,_Vector3>__ctor__
                      );
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_42__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_43__);
    thunk_FUN_01efb3a4(Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>__ctor__);
    thunk_FUN_01efb3a4(Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_44__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_45__);
    thunk_FUN_01efb3a4(Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_46__);
    DAT_04833aa6 = 1;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar5 = FUN_01f08890(*(undefined8 *)
                          Method_Unity_VisualScripting_StaticFunctionInvoker<float,_Vector3,_Vector3>__ctor__
                         ,*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x18));
    plVar10 = (long *)(param_1 + 0x48);
    *plVar10 = lVar5;
    thunk_FUN_01f51358(plVar10,lVar5);
    puVar4 = Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_45__;
    puVar3 = Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_44__;
    puVar2 = Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_42__;
    puVar1 = 
    Method_Oculus_Interaction_PointerInteractor<DistanceGrabInteractor,_DistanceGrabInteractable>_InteractableUnselected__
    ;
    lVar5 = *(long *)(param_1 + 0x30);
    if (lVar5 != 0) {
      uVar11 = 0;
      lVar12 = 0x20;
      while( true ) {
        if (*(int *)(lVar5 + 0x18) <= (int)uVar11) {
          return;
        }
        lVar5 = thunk_FUN_01f117cc(*(undefined8 *)
                                    Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_46__
                                  );
        FUN_035ac8e8(lVar5,0);
        if (lVar5 == 0) break;
        *(long *)(lVar5 + 0x18) = param_1;
        thunk_FUN_01f51358((long *)(lVar5 + 0x18),param_1);
        uVar6 = *(undefined8 *)(param_1 + 0x40);
        lVar8 = *(long *)(param_1 + 0x48);
        if (*(int *)(*(long *)Method_Oculus_Platform_Message<LivestreamingStatus>_get_Data__ + 0xe0)
            == 0) {
          thunk_FUN_01ee6d7c();
        }
        uVar6 = FUN_023aa7e0(uVar6,*(undefined8 *)
                                    Method_UnityEngine_UIElements_PointerEventBase<PointerUpEvent>__ctor__
                            );
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) {
LAB_0362b938:
                    /* WARNING: Subroutine does not return */
          FUN_01f08a44();
        }
        *(undefined8 *)(lVar8 + lVar12) = uVar6;
        thunk_FUN_01f51358();
        lVar8 = *plVar10;
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_0362b938;
        if (*(long *)(lVar8 + lVar12) == 0) break;
        plVar7 = (long *)FUN_0233642c(*(long *)(lVar8 + lVar12),
                                      *(undefined8 *)
                                       Method_Unity_VisualScripting_InequalityHandler_<>c_<_ctor>b__0_43__
                                     );
        lVar8 = *(long *)(param_1 + 0x30);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_0362b938;
        if ((*(long *)(lVar8 + lVar12) == 0) ||
           (uVar6 = FUN_040766fc(*(long *)(lVar8 + lVar12),0), plVar7 == (long *)0x0)) break;
        (**(code **)(*plVar7 + 0x558))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x560));
        lVar8 = *plVar10;
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_0362b938;
        if (*(long *)(lVar8 + lVar12) == 0) break;
        lVar8 = FUN_0233642c(*(long *)(lVar8 + lVar12),*(undefined8 *)puVar2);
        lVar9 = *(long *)(param_1 + 0x38);
        if (lVar9 == 0) break;
        if (*(uint *)(lVar9 + 0x18) <= uVar11) goto LAB_0362b938;
        if (lVar8 == 0) break;
        FUN_0404ceac(lVar8,*(undefined8 *)(lVar9 + lVar12),0);
        lVar8 = *plVar10;
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_0362b938;
        if (*(long *)(lVar8 + lVar12) == 0) break;
        FUN_04073314(*(long *)(lVar8 + lVar12),0,0);
        *(uint *)(lVar5 + 0x10) = uVar11;
        lVar8 = *(long *)(param_1 + 0x30);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_0362b938;
        lVar8 = *(long *)(lVar8 + lVar12);
        uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
        FUN_034f6024(uVar6,lVar5,*(undefined8 *)puVar3,0);
        if (lVar8 == 0) break;
        FUN_03604bcc(lVar8,uVar6,0);
        lVar8 = *(long *)(param_1 + 0x30);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar11) goto LAB_0362b938;
        lVar8 = *(long *)(lVar8 + lVar12);
        uVar6 = thunk_FUN_01f117cc(*(undefined8 *)puVar1);
        FUN_034f6024(uVar6,lVar5,*(undefined8 *)puVar4,0);
        if (lVar8 == 0) break;
        FUN_03604d04(lVar8,uVar6,0);
        lVar5 = *(long *)(param_1 + 0x30);
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 8;
        if (lVar5 == 0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


