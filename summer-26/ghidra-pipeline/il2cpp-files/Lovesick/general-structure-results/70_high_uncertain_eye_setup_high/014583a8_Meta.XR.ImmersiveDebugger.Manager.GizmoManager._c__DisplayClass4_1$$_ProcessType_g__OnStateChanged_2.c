/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager.<>c__DisplayClass4_1$$<ProcessType>g__OnStateChanged|2
ENTRY_POINT: 014583a8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_12;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager_<>c__DisplayClass4_1__<ProcessType>g__OnStateChanged_2
               (long param_1)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x19;
  ulong unaff_x21;
  long unaff_x23;
  int iVar6;
  undefined8 *unaff_x25;
  long unaff_x26;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 in_stack_00000080;
  long in_stack_00000088;
  
code_r0x014583a8:
  if ((((unaff_x23 != 0) && (*(long *)(unaff_x23 + 0x58) != 0)) &&
      (FUN_0132138c(*(long *)(unaff_x23 + 0x58),*(undefined4 *)(param_1 + unaff_x21 * 4 + 0x20),
                    &stack0x00000088,*(undefined8 *)PTR_DAT_033ee2d8), lVar3 = in_stack_00000088,
      in_stack_00000088 != 0)) && (*(long *)(in_stack_00000088 + 0x18) != 0)) {
    lVar8 = *(long *)(*(long *)(in_stack_00000088 + 0x18) + 0x10);
    FUN_014451a0(in_stack_00000088,&stack0x00000078,&stack0x00000068,0);
    if (lVar8 != 0) {
      if (0 < *(int *)(lVar8 + 0x18)) {
        iVar6 = 0;
        do {
          FUN_01445258(lVar3,iVar6,0);
          FUN_0132138c(lVar8,iVar6,&stack0x00000088,*unaff_x25);
          if ((in_stack_00000088 == 0) || (lVar5 = *(long *)(unaff_x19 + 0x20), lVar5 == 0))
          goto LAB_01458610;
          if (*(uint *)(lVar5 + 0x18) <= unaff_x21) goto LAB_01458614;
          uVar7 = *(undefined8 *)(in_stack_00000088 + 0x10);
          cVar2 = *(char *)(lVar3 + 0x20);
          uVar10 = *(undefined4 *)(lVar5 + unaff_x21 * 0x10 + 0x20);
          uVar1 = *(undefined4 *)(lVar3 + 0x24);
          FUN_0132138c(lVar8,iVar6,&stack0x00000088,*unaff_x25);
          if (in_stack_00000088 == 0) goto LAB_01458610;
          uVar9 = *(undefined8 *)(in_stack_00000088 + 0x78);
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_System_Int64_System_IConvertible_ToDateTime__);
          if (lVar5 == 0) goto LAB_01458610;
          FUN_013e7d0c(uVar10,lVar5,uVar7,cVar2 != '\0',uVar1,uVar9,0);
          if (*(long *)(lVar3 + 0x18) == 0) goto LAB_01458610;
          uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0x18) + 0x18);
          lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                      Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_31__
                                    );
          if (lVar4 == 0) goto LAB_01458610;
          FUN_01320f6c(lVar4,uVar7,
                       *(undefined8 *)
                        Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__1__)
          ;
          *(long *)(lVar5 + 0x68) = lVar4;
          FUN_00bbc1c8(unaff_x26,lVar5,
                       *(undefined8 *)Sirenix_Serialization_FormatterLocator_TypeInfo);
          iVar6 = iVar6 + 1;
          unaff_x19 = in_stack_00000040;
        } while (iVar6 < *(int *)(lVar8 + 0x18));
      }
      param_1 = *(long *)(unaff_x19 + 0x30);
      unaff_x21 = unaff_x21 + 1;
      if (param_1 != 0) goto LAB_01458394;
    }
  }
LAB_01458610:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_01458394:
  while ((long)(int)*(uint *)(param_1 + 0x18) <= (long)unaff_x21) {
    *(long *)(unaff_x19 + 0x38) = unaff_x26;
    in_stack_00000030._4_4_ = in_stack_00000030._4_4_ + 1;
    if ((int)*(uint *)(in_stack_00000028 + 0x18) <= (int)in_stack_00000030._4_4_) {
      return;
    }
    if (*(uint *)(in_stack_00000028 + 0x18) <= in_stack_00000030._4_4_) goto LAB_01458614;
    unaff_x19 = *(long *)(in_stack_00000028 + (long)(int)in_stack_00000030._4_4_ * 8 + 0x20);
    unaff_x26 = thunk_FUN_00d62348(*(undefined8 *)
                                    Method_UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable_GetGrabTransformers__
                                  );
    if (((unaff_x26 == 0) ||
        (FUN_01320e50(unaff_x26,*(undefined8 *)StringLiteral_12253), unaff_x19 == 0)) ||
       (param_1 = *(long *)(unaff_x19 + 0x30), param_1 == 0)) goto LAB_01458610;
    in_stack_00000040 = unaff_x19;
    unaff_x21 = 0;
  }
  unaff_x23 = in_stack_00000038;
  if (*(uint *)(param_1 + 0x18) <= unaff_x21) {
LAB_01458614:
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  goto code_r0x014583a8;
}


