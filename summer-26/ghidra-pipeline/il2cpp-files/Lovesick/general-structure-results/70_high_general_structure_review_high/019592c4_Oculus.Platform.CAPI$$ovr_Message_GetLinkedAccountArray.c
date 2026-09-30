/*
FUNCTION_NAME: Oculus.Platform.CAPI$$ovr_Message_GetLinkedAccountArray
ENTRY_POINT: 019592c4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;frame_behavior
EVIDENCE: validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior
*/


void Oculus_Platform_CAPI__ovr_Message_GetLinkedAccountArray(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(StringLiteral_12368);
  thunk_FUN_00d48444(Method_System_Memory<byte>_get_Length__);
  thunk_FUN_00d48444(
                    Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRHoverFilterDelegate__ctor__
                    );
  *(undefined1 *)(unaff_x21 + 0x1e6) = 1;
  lVar4 = FUN_00da4fb8(*unaff_x20,5);
  uVar3 = FUN_0267bd34(*unaff_x19,0);
  puVar1 = 
  Method_DG_Tweening_Core_DOTweenComponent_<WaitForRewind>d__18_System_Collections_IEnumerator_Reset__
  ;
  if (lVar4 != 0) {
    if (*(int *)(lVar4 + 0x18) != 0) {
      *(undefined4 *)(lVar4 + 0x20) = uVar3;
      uVar3 = FUN_0267bd34(*(undefined8 *)puVar1,0);
      puVar1 = Method_UnityEngine_XR_Interaction_Toolkit_Filtering_XRHoverFilterDelegate__ctor__;
      if (1 < *(uint *)(lVar4 + 0x18)) {
        *(undefined4 *)(lVar4 + 0x24) = uVar3;
        uVar3 = FUN_0267bd34(*(undefined8 *)puVar1,0);
        puVar1 = Method_System_Memory<byte>_get_Length__;
        if (2 < *(uint *)(lVar4 + 0x18)) {
          *(undefined4 *)(lVar4 + 0x28) = uVar3;
          uVar3 = FUN_0267bd34(*(undefined8 *)puVar1,0);
          puVar1 = Method_System_Collections_Generic_Dictionary<string,_Color32>__ctor__;
          if (3 < *(uint *)(lVar4 + 0x18)) {
            *(undefined4 *)(lVar4 + 0x2c) = uVar3;
            uVar3 = FUN_0267bd34(*(undefined8 *)puVar1,0);
            puVar1 = StringLiteral_9921;
            if (4 < *(uint *)(lVar4 + 0x18)) {
              *(undefined4 *)(lVar4 + 0x30) = uVar3;
              **(long **)(*(long *)puVar1 + 0xb8) = lVar4;
              puVar2 = StringLiteral_12501;
              lVar4 = FUN_00da4fb8(*unaff_x20,5);
              uVar3 = FUN_0267bd34(*(undefined8 *)puVar2,0);
              puVar2 = Method_UnityEngine_UIElements_UIR_LinkedPool<VectorImageRenderInfo>_Get__;
              if (lVar4 == 0) goto LAB_019594ac;
              if (*(int *)(lVar4 + 0x18) != 0) {
                *(undefined4 *)(lVar4 + 0x20) = uVar3;
                uVar3 = FUN_0267bd34(*(undefined8 *)puVar2,0);
                puVar2 = Method_System_Numerics_Vector<ushort>_op_Inequality__;
                if (1 < *(uint *)(lVar4 + 0x18)) {
                  *(undefined4 *)(lVar4 + 0x24) = uVar3;
                  uVar3 = FUN_0267bd34(*(undefined8 *)puVar2,0);
                  puVar2 = 
                  Method_UnityEngine_XR_Interaction_Toolkit_UI_BodyUI_HandMenu_<OnEnable>b__72_2__;
                  if (2 < *(uint *)(lVar4 + 0x18)) {
                    *(undefined4 *)(lVar4 + 0x28) = uVar3;
                    uVar3 = FUN_0267bd34(*(undefined8 *)puVar2,0);
                    puVar2 = Method_System_Collections_Generic_List<RegexNode>_get_Item__;
                    if (3 < *(uint *)(lVar4 + 0x18)) {
                      *(undefined4 *)(lVar4 + 0x2c) = uVar3;
                      uVar3 = FUN_0267bd34(*(undefined8 *)puVar2,0);
                      if (4 < *(uint *)(lVar4 + 0x18)) {
                        *(undefined4 *)(lVar4 + 0x30) = uVar3;
                        *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = lVar4;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
LAB_019594ac:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


