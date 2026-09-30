/*
FUNCTION_NAME: FUN_023de070
ENTRY_POINT: 023de070
PROGRAM: Lovesick-libil2cpp.so
SCORE: 172
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_023de070(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 local_38;
  
  puVar1 = StringLiteral_8304;
  puVar2 = Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_laneq_s16__;
  if ((DAT_03782177 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_List<VisualElement>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_8304);
    thunk_FUN_00d48444(OVRPlugin_Mesh_TypeInfo);
    thunk_FUN_00d48444(Method_ConfirmationMenu_YesPressed__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vfms_laneq_f32__);
    thunk_FUN_00d48444(Method_System_RuntimeType_ListBuilder<MethodInfo>_get_Item__);
    thunk_FUN_00d48444(StringLiteral_5954);
    thunk_FUN_00d48444(Method_System_Linq_Expressions_DebugInfoExpression_get_EndLine__);
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StyleSheets_Syntax_StyleSyntaxParser_ParseTerm__
                      );
    thunk_FUN_00d48444(StringLiteral_3856);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vqdmlal_laneq_s16__);
    thunk_FUN_00d48444(
                      Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
                      );
    DAT_03782177 = 1;
  }
  *(undefined8 *)(param_1 + 0x50) = param_2;
  uVar3 = FUN_010cb944(param_1,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x88) = uVar3;
  FUN_010c2c5c(param_1,&local_38,*(undefined8 *)puVar1);
  *(undefined8 *)(param_1 + 0x90) = local_38;
  puVar2 = 
  Method_DG_Tweening_TweenSettingsExtensions_SetTarget<TweenerCore<Quaternion,_Vector3,_QuaternionOptions>>__
  ;
  if ((*(long *)(param_1 + 0x88) != 0) &&
     (plVar4 = *(long **)(param_1 + 0x58), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x5e8))
              (plVar4,*(undefined8 *)(*(long *)(param_1 + 0x88) + 0x28),
               *(undefined8 *)(*plVar4 + 0x5f0));
    lVar6 = *(long *)(param_1 + 0x68);
    lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
    if ((lVar5 != 0) &&
       (FUN_012d1810(lVar5,param_1,*(undefined8 *)OVRPlugin_Mesh_TypeInfo,0),
       puVar1 = System_Collections_Generic_List<VisualElement>_TypeInfo, lVar6 != 0)) {
      *(long *)(lVar6 + 0x68) = lVar5;
      lVar6 = *(long *)(param_1 + 0x68);
      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      if ((lVar5 != 0) &&
         (FUN_011c181c(lVar5,param_1,*(undefined8 *)Method_ConfirmationMenu_YesPressed__,0),
         lVar6 != 0)) {
        *(long *)(lVar6 + 0x70) = lVar5;
        if (*(long *)(param_1 + 0x68) != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x48) = *(undefined8 *)(param_1 + 0x70);
          FUN_023de3c4(param_1);
          lVar6 = *(long *)(param_1 + 0x70);
          lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
          if ((lVar5 != 0) &&
             (FUN_012d1810(lVar5,param_1,
                           *(undefined8 *)Method_Unity_Burst_Intrinsics_Arm_Neon_vfms_laneq_f32__,0)
             , lVar6 != 0)) {
            *(long *)(lVar6 + 0x68) = lVar5;
            lVar6 = *(long *)(param_1 + 0x70);
            lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
            if ((lVar5 != 0) &&
               (FUN_011c181c(lVar5,param_1,
                             *(undefined8 *)
                              Method_System_RuntimeType_ListBuilder<MethodInfo>_get_Item__,0),
               lVar6 != 0)) {
              *(long *)(lVar6 + 0x70) = lVar5;
              lVar5 = *(long *)(param_1 + 0x70);
              if (lVar5 != 0) {
                *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)(param_1 + 0x68);
                *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(param_1 + 0x78);
                FUN_023de3c4(param_1);
                lVar6 = *(long *)(param_1 + 0x78);
                lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                if ((lVar5 != 0) &&
                   (FUN_012d1810(lVar5,param_1,*(undefined8 *)StringLiteral_5954,0), lVar6 != 0)) {
                  *(long *)(lVar6 + 0x68) = lVar5;
                  lVar6 = *(long *)(param_1 + 0x78);
                  lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                  if ((lVar5 != 0) &&
                     (FUN_011c181c(lVar5,param_1,
                                   *(undefined8 *)
                                    Method_System_Linq_Expressions_DebugInfoExpression_get_EndLine__
                                   ,0), lVar6 != 0)) {
                    *(long *)(lVar6 + 0x70) = lVar5;
                    lVar5 = *(long *)(param_1 + 0x78);
                    if (lVar5 != 0) {
                      *(undefined8 *)(lVar5 + 0x40) = *(undefined8 *)(param_1 + 0x70);
                      *(undefined8 *)(lVar5 + 0x48) = *(undefined8 *)(param_1 + 0x80);
                      FUN_023de3c4(param_1);
                      lVar6 = *(long *)(param_1 + 0x80);
                      lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar2);
                      if ((lVar5 != 0) &&
                         (FUN_012d1810(lVar5,param_1,
                                       *(undefined8 *)
                                        Method_UnityEngine_UIElements_StyleSheets_Syntax_StyleSyntaxParser_ParseTerm__
                                       ,0), lVar6 != 0)) {
                        *(long *)(lVar6 + 0x68) = lVar5;
                        lVar6 = *(long *)(param_1 + 0x80);
                        lVar5 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
                        if ((lVar5 != 0) &&
                           (FUN_011c181c(lVar5,param_1,*(undefined8 *)StringLiteral_3856,0),
                           lVar6 != 0)) {
                          *(long *)(lVar6 + 0x70) = lVar5;
                          if (*(long *)(param_1 + 0x80) != 0) {
                            *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x40) =
                                 *(undefined8 *)(param_1 + 0x78);
                            FUN_023de3c4(param_1);
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
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


