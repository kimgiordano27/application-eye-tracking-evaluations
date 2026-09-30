/*
FUNCTION_NAME: Unity.AppUI.UI.ActionGroup$$RefreshSelectionUI
ENTRY_POINT: 05859344
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_1;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void Unity_AppUI_UI_ActionGroup__RefreshSelectionUI(long param_1)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  long *plVar7;
  int in_w8;
  undefined8 uVar8;
  long lVar9;
  long *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long *unaff_x22;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  
  if (in_w8 == 0) {
    thunk_FUN_02f6670c();
    param_1 = *unaff_x22;
  }
  uVar8 = *(undefined8 *)(*(long *)(param_1 + 0xb8) + 8);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar8;
  FUN_05116b38();
  if (unaff_x19 != (long *)0x0) {
    lVar9 = unaff_x19[0xb];
    *(long *)(unaff_x20 + 0x10) = unaff_x19[0xd];
    puVar3 = 
    Method_Unity_Burst_FunctionPointer<XRGeneralGrabTransformer_ComputeNewTwoHandedScale_00000941_PostfixBurstDelegate>_get_Value__
    ;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    uVar8 = *(undefined8 *)(lVar9 + 0x50);
    lVar9 = thunk_FUN_02f45270(*(undefined8 *)
                                Method_Unity_Burst_FunctionPointer<XRGeneralGrabTransformer_ComputeNewTwoHandedScale_00000941_PostfixBurstDelegate>_get_Value__
                              );
    FUN_05116b38(lVar9,0);
    *(undefined8 *)(lVar9 + 0x18) = uVar8;
    *(undefined1 *)(lVar9 + 0x20) = 0;
    *(undefined8 *)(lVar9 + 0x28) = unaff_x21;
    FUN_05855904(lVar9,uVar8,0);
    plVar11 = (long *)unaff_x19[0xc];
    *(long *)(unaff_x20 + 0x20) = lVar9;
    puVar4 = 
    Method_Unity_Burst_FunctionPointer<XRGeneralGrabTransformer_ComputeNewOneHandedScale_00000940_PostfixBurstDelegate>_get_Value__
    ;
    if (plVar11 != (long *)0x0) {
      uVar5 = FUN_05079c6c(plVar11,0);
      uVar8 = FUN_02f0880c(*(undefined8 *)puVar4,uVar5);
      *(undefined8 *)(unaff_x20 + 0x28) = uVar8;
      iVar6 = FUN_05079c6c(plVar11,0);
      puVar4 = 
      Method_UnityEngine_XR_Interaction_Toolkit_Utilities_BaseRegistrationList<IXRSelectFilter>_get_registeredSnapshot__
      ;
      if (0 < iVar6) {
        uVar10 = 0;
        do {
          plVar13 = *(long **)(unaff_x20 + 0x28);
          plVar7 = (long *)(**(code **)(*plVar11 + 0x308))
                                     (plVar11,uVar10 & 0xffffffff,*(undefined8 *)(*plVar11 + 0x310))
          ;
          if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
          if ((*(byte *)(*plVar7 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48();
          }
          lVar12 = plVar7[10];
          lVar9 = thunk_FUN_02f45270(*(undefined8 *)puVar3);
          FUN_05116b38(lVar9,0);
          *(long *)(lVar9 + 0x18) = lVar12;
          *(undefined1 *)(lVar9 + 0x20) = 1;
          *(undefined8 *)(lVar9 + 0x28) = unaff_x21;
          FUN_05855904(lVar9,lVar12,1);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089c8();
          }
          lVar12 = thunk_FUN_02f45174(lVar9,*(undefined8 *)(*plVar13 + 0x40));
          if (lVar12 == 0) {
            uVar8 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
            FUN_02f0888c(uVar8,0);
          }
          if (*(uint *)(plVar13 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          uVar1 = uVar10 + 1;
          plVar13[uVar10 + 4] = lVar9;
          iVar6 = FUN_05079c6c(plVar11,0);
          uVar10 = uVar1;
        } while ((long)uVar1 < (long)iVar6);
      }
      puVar3 = Method_UnityEngine_UIElements_BaseField<Vector4>_get_labelElement__;
      lVar9 = *unaff_x19;
      bVar2 = *(byte *)(*(long *)Method_System_Collections_Generic_List_Enumerator<Player>_Dispose__
                       + 0x130);
      if ((*(byte *)(lVar9 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_List_Enumerator<Player>_Dispose__)) {
        bVar2 = *(byte *)(*(long *)Method_UnityEngine_UIElements_BaseSlider<int>_set_pageSize__ +
                         0x130);
        if ((*(byte *)(lVar9 + 0x130) < bVar2) ||
           (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
            *(long *)Method_UnityEngine_UIElements_BaseSlider<int>_set_pageSize__)) {
          *(undefined4 *)(unaff_x20 + 0x18) = 2;
          bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
          if ((*(byte *)(*unaff_x19 + 0x130) < bVar2) ||
             (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar3)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08d48();
          }
          *(long *)(unaff_x20 + 0x30) = unaff_x19[0xf];
        }
        else {
          *(undefined4 *)(unaff_x20 + 0x18) = 1;
        }
      }
      else {
        *(undefined4 *)(unaff_x20 + 0x18) = 0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


