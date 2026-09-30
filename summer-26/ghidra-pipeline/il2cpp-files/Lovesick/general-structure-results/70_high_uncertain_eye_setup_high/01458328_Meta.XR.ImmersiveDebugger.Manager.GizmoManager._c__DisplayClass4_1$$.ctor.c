/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.GizmoManager.<>c__DisplayClass4_1$$.ctor
ENTRY_POINT: 01458328
PROGRAM: Lovesick-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_14;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_GizmoManager_<>c__DisplayClass4_1___ctor(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  uint in_w8;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  ulong uVar10;
  long unaff_x23;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  undefined4 in_stack_00000068;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000078;
  undefined4 in_stack_00000080;
  long in_stack_00000088;
  
  puVar3 = 
  Method_UnityEngine_Experimental_Rendering_RenderGraphModule_TextureResource_ReleasePooledGraphicsResource__
  ;
  if (0 < (int)in_w8) {
    uVar7 = 0;
    do {
      if (in_w8 <= uVar7) {
LAB_01458614:
                    /* WARNING: Subroutine does not return */
        FUN_00da5194();
      }
      lVar9 = *(long *)(unaff_x20 + (long)(int)uVar7 * 8 + 0x20);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)
                                  Method_UnityEngine_XR_Interaction_Toolkit_XRGrabInteractable_GetGrabTransformers__
                                );
      if (((lVar4 == 0) || (FUN_01320e50(lVar4,*(undefined8 *)StringLiteral_12253), lVar9 == 0)) ||
         (lVar6 = *(long *)(lVar9 + 0x30), lVar6 == 0)) {
LAB_01458610:
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar10 = 0;
      while ((long)uVar10 < (long)(int)*(uint *)(lVar6 + 0x18)) {
        if (*(uint *)(lVar6 + 0x18) <= uVar10) goto LAB_01458614;
        if (((unaff_x23 == 0) || (*(long *)(unaff_x23 + 0x58) == 0)) ||
           ((FUN_0132138c(*(long *)(unaff_x23 + 0x58),*(undefined4 *)(lVar6 + uVar10 * 4 + 0x20),
                          &stack0x00000088,*(undefined8 *)PTR_DAT_033ee2d8),
            lVar6 = in_stack_00000088, in_stack_00000088 == 0 ||
            (*(long *)(in_stack_00000088 + 0x18) == 0)))) goto LAB_01458610;
        lVar13 = *(long *)(*(long *)(in_stack_00000088 + 0x18) + 0x10);
        FUN_014451a0(in_stack_00000088,&stack0x00000078,&stack0x00000068,0);
        if (lVar13 == 0) goto LAB_01458610;
        if (0 < *(int *)(lVar13 + 0x18)) {
          iVar11 = 0;
          do {
            FUN_01445258(lVar6,iVar11,0);
            FUN_0132138c(lVar13,iVar11,&stack0x00000088,*(undefined8 *)puVar3);
            if ((in_stack_00000088 == 0) || (lVar8 = *(long *)(lVar9 + 0x20), lVar8 == 0))
            goto LAB_01458610;
            if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_01458614;
            uVar12 = *(undefined8 *)(in_stack_00000088 + 0x10);
            cVar2 = *(char *)(lVar6 + 0x20);
            uVar15 = *(undefined4 *)(lVar8 + uVar10 * 0x10 + 0x20);
            uVar1 = *(undefined4 *)(lVar6 + 0x24);
            FUN_0132138c(lVar13,iVar11,&stack0x00000088,*(undefined8 *)puVar3);
            if (in_stack_00000088 == 0) goto LAB_01458610;
            uVar14 = *(undefined8 *)(in_stack_00000088 + 0x78);
            lVar8 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_System_Int64_System_IConvertible_ToDateTime__);
            if (lVar8 == 0) goto LAB_01458610;
            FUN_013e7d0c(uVar15,lVar8,uVar12,cVar2 != '\0',uVar1,uVar14,0);
            if (*(long *)(lVar6 + 0x18) == 0) goto LAB_01458610;
            uVar12 = *(undefined8 *)(*(long *)(lVar6 + 0x18) + 0x18);
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                                        Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_31__
                                      );
            if (lVar5 == 0) goto LAB_01458610;
            FUN_01320f6c(lVar5,uVar12,
                         *(undefined8 *)
                          Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__1__
                        );
            *(long *)(lVar8 + 0x68) = lVar5;
            FUN_00bbc1c8(lVar4,lVar8,*(undefined8 *)Sirenix_Serialization_FormatterLocator_TypeInfo)
            ;
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)(lVar13 + 0x18));
        }
        lVar6 = *(long *)(lVar9 + 0x30);
        uVar10 = uVar10 + 1;
        if (lVar6 == 0) goto LAB_01458610;
      }
      *(long *)(lVar9 + 0x38) = lVar4;
      in_w8 = *(uint *)(unaff_x20 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)in_w8);
  }
  return;
}


