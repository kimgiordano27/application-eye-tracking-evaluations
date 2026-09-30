/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager$$GetState
ENTRY_POINT: 01458598
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_12;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_GizmoRendererManager__GetState(void)

{
  undefined4 uVar1;
  char cVar2;
  int in_w8;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 *unaff_x21;
  ulong unaff_x23;
  int unaff_w24;
  undefined8 uVar5;
  long unaff_x26;
  undefined8 uVar6;
  long unaff_x28;
  undefined4 uVar7;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  long in_stack_00000038;
  long in_stack_00000040;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 in_stack_00000080;
  long in_stack_00000088;
  
  while( true ) {
    unaff_w24 = unaff_w24 + 1;
    lVar4 = in_stack_00000040;
    if (in_w8 <= unaff_w24) {
      do {
        lVar3 = *(long *)(lVar4 + 0x30);
        unaff_x23 = unaff_x23 + 1;
        if (lVar3 == 0) goto LAB_01458610;
        while ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)unaff_x23) {
          *(long *)(lVar4 + 0x38) = unaff_x26;
          in_stack_00000030._4_4_ = in_stack_00000030._4_4_ + 1;
          if ((int)*(uint *)(in_stack_00000028 + 0x18) <= (int)in_stack_00000030._4_4_) {
            return;
          }
          if (*(uint *)(in_stack_00000028 + 0x18) <= in_stack_00000030._4_4_) goto LAB_01458614;
          lVar4 = *(long *)(in_stack_00000028 + (long)(int)in_stack_00000030._4_4_ * 8 + 0x20);
          unaff_x26 = thunk_FUN_00d62348(*(undefined8 *)
                                          Method_UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable_GetGrabTransformers__
                                        );
          if (((unaff_x26 == 0) ||
              (FUN_01320e50(unaff_x26,*(undefined8 *)StringLiteral_12253), lVar4 == 0)) ||
             (lVar3 = *(long *)(lVar4 + 0x30), lVar3 == 0)) goto LAB_01458610;
          in_stack_00000040 = lVar4;
          unaff_x23 = 0;
        }
        if (*(uint *)(lVar3 + 0x18) <= unaff_x23) goto LAB_01458614;
        if (((in_stack_00000038 == 0) || (*(long *)(in_stack_00000038 + 0x58) == 0)) ||
           ((FUN_0132138c(*(long *)(in_stack_00000038 + 0x58),
                          *(undefined4 *)(lVar3 + unaff_x23 * 4 + 0x20),&stack0x00000088,
                          *(undefined8 *)PTR_DAT_033ee2d8), unaff_x20 = in_stack_00000088,
            in_stack_00000088 == 0 || (*(long *)(in_stack_00000088 + 0x18) == 0))))
        goto LAB_01458610;
        unaff_x28 = *(long *)(*(long *)(in_stack_00000088 + 0x18) + 0x10);
        FUN_014451a0(in_stack_00000088,&stack0x00000078,&stack0x00000068,0);
        if (unaff_x28 == 0) goto LAB_01458610;
      } while (*(int *)(unaff_x28 + 0x18) < 1);
      unaff_w24 = 0;
    }
    FUN_01445258(unaff_x20,unaff_w24,0);
    FUN_0132138c(unaff_x28,unaff_w24,&stack0x00000088,*unaff_x21);
    if ((in_stack_00000088 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) break;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x23) {
LAB_01458614:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    uVar5 = *(undefined8 *)(in_stack_00000088 + 0x10);
    cVar2 = *(char *)(unaff_x20 + 0x20);
    uVar7 = *(undefined4 *)(lVar4 + unaff_x23 * 0x10 + 0x20);
    uVar1 = *(undefined4 *)(unaff_x20 + 0x24);
    FUN_0132138c(unaff_x28,unaff_w24,&stack0x00000088,*unaff_x21);
    if (in_stack_00000088 == 0) break;
    uVar6 = *(undefined8 *)(in_stack_00000088 + 0x78);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Int64_System_IConvertible_ToDateTime__);
    if (lVar4 == 0) break;
    FUN_013e7d0c(uVar7,lVar4,uVar5,cVar2 != '\0',uVar1,uVar6,0);
    if (*(long *)(unaff_x20 + 0x18) == 0) break;
    uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_31__
                              );
    if (lVar3 == 0) break;
    FUN_01320f6c(lVar3,uVar5,
                 *(undefined8 *)
                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__1__);
    *(long *)(lVar4 + 0x68) = lVar3;
    FUN_00bbc1c8(unaff_x26,lVar4,*(undefined8 *)Sirenix_Serialization_FormatterLocator_TypeInfo);
    in_w8 = *(int *)(unaff_x28 + 0x18);
  }
LAB_01458610:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


