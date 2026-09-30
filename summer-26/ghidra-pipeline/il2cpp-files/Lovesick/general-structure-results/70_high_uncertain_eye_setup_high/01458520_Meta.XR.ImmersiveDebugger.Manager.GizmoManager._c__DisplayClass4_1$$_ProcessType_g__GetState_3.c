/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager.<>c__DisplayClass4_1$$<ProcessType>g__GetState|3
ENTRY_POINT: 01458520
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager_<>c__DisplayClass4_1__<ProcessType>g__GetState_3
               (ulong param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5,
               undefined8 param_6)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  int unaff_w24;
  undefined8 uVar5;
  undefined4 unaff_s9;
  undefined4 unaff_s11;
  undefined4 unaff_s13;
  undefined4 uStack0000000000000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000018;
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
    uStack0000000000000008 = unaff_s11;
    uStack0000000000000010 = unaff_s9;
    uStack0000000000000018 = unaff_s13;
    FUN_013e7d0c(param_1,param_2,param_3,param_4,param_5,param_6,0);
    if (*(long *)(unaff_x20 + 0x18) == 0) break;
    uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x18);
    lVar3 = thunk_FUN_00d62348(*(undefined8 *)
                                Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_31__
                              );
    if (lVar3 == 0) break;
    FUN_01320f6c(lVar3,uVar5,
                 *(undefined8 *)
                  Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__1__);
    *(long *)(param_2 + 0x68) = lVar3;
    FUN_00bbc1c8(unaff_x19,param_2,*(undefined8 *)Sirenix_Serialization_FormatterLocator_TypeInfo);
    unaff_w24 = unaff_w24 + 1;
    lVar3 = in_stack_00000040;
    if (*(int *)(unaff_x22 + 0x18) <= unaff_w24) {
      do {
        lVar4 = *(long *)(lVar3 + 0x30);
        unaff_x23 = unaff_x23 + 1;
        if (lVar4 == 0) goto LAB_01458610;
        while ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)unaff_x23) {
          *(long *)(lVar3 + 0x38) = unaff_x19;
          in_stack_00000030._4_4_ = in_stack_00000030._4_4_ + 1;
          if ((int)*(uint *)(in_stack_00000028 + 0x18) <= (int)in_stack_00000030._4_4_) {
            return;
          }
          if (*(uint *)(in_stack_00000028 + 0x18) <= in_stack_00000030._4_4_) goto LAB_01458614;
          lVar3 = *(long *)(in_stack_00000028 + (long)(int)in_stack_00000030._4_4_ * 8 + 0x20);
          unaff_x19 = thunk_FUN_00d62348(*(undefined8 *)
                                          Method_UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable_GetGrabTransformers__
                                        );
          if (((unaff_x19 == 0) ||
              (FUN_01320e50(unaff_x19,*(undefined8 *)StringLiteral_12253), lVar3 == 0)) ||
             (lVar4 = *(long *)(lVar3 + 0x30), lVar4 == 0)) goto LAB_01458610;
          in_stack_00000040 = lVar3;
          unaff_x23 = 0;
        }
        if (*(uint *)(lVar4 + 0x18) <= unaff_x23) goto LAB_01458614;
        if (((in_stack_00000038 == 0) || (*(long *)(in_stack_00000038 + 0x58) == 0)) ||
           ((FUN_0132138c(*(long *)(in_stack_00000038 + 0x58),
                          *(undefined4 *)(lVar4 + unaff_x23 * 4 + 0x20),&stack0x00000088,
                          *(undefined8 *)PTR_DAT_033ee2d8), unaff_x20 = in_stack_00000088,
            in_stack_00000088 == 0 || (*(long *)(in_stack_00000088 + 0x18) == 0))))
        goto LAB_01458610;
        unaff_x22 = *(long *)(*(long *)(in_stack_00000088 + 0x18) + 0x10);
        FUN_014451a0(in_stack_00000088,&stack0x00000078,&stack0x00000068,0);
        if (unaff_x22 == 0) goto LAB_01458610;
      } while (*(int *)(unaff_x22 + 0x18) < 1);
      unaff_w24 = 0;
    }
    FUN_01445258(unaff_x20,unaff_w24,0);
    FUN_0132138c(unaff_x22,unaff_w24,&stack0x00000088,*unaff_x21);
    unaff_s11 = in_stack_00000080;
    unaff_s13 = in_stack_00000070;
    unaff_s9 = in_stack_00000068;
    if ((in_stack_00000088 == 0) || (lVar3 = *(long *)(lVar3 + 0x20), lVar3 == 0)) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x23) {
LAB_01458614:
                    /* WARNING: Subroutine does not return */
      FUN_00da5194();
    }
    param_3 = *(undefined8 *)(in_stack_00000088 + 0x10);
    cVar2 = *(char *)(unaff_x20 + 0x20);
    param_1 = (ulong)*(uint *)(lVar3 + unaff_x23 * 0x10 + 0x20);
    uVar1 = *(uint *)(unaff_x20 + 0x24);
    FUN_0132138c(unaff_x22,unaff_w24,&stack0x00000088,*unaff_x21);
    if (in_stack_00000088 == 0) break;
    param_6 = *(undefined8 *)(in_stack_00000088 + 0x78);
    param_2 = thunk_FUN_00d62348(*(undefined8 *)Method_System_Int64_System_IConvertible_ToDateTime__
                                );
    if (param_2 == 0) break;
    param_4 = (ulong)(cVar2 != '\0');
    param_5 = (ulong)uVar1;
  }
LAB_01458610:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


