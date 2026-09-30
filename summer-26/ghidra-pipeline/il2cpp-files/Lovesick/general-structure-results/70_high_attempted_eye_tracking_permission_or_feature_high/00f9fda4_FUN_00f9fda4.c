/*
FUNCTION_NAME: FUN_00f9fda4
ENTRY_POINT: 00f9fda4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: validity_gate;ray_interaction;frame_behavior;keyword_support;attempted_use
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;attempted_eye_tracking_permission_or_feature_enable
*/


void FUN_00f9fda4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int local_44;
  int local_38;
  int local_34;
  
  if ((DAT_03775995 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass9_0_<DOPath>b__0__);
    thunk_FUN_00d48444(Method_RCG_Lovesick_Dialogue_DialoguePopup_OnPlayableStarted__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<FieldInfo>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                      );
    thunk_FUN_00d48444(UnityEngine_XR_Interaction_Toolkit_XRGazeInteractor_TypeInfo);
    DAT_03775995 = 1;
  }
  if (*(char *)(param_1 + 0x19) == '\0') {
    if (param_2 != 0) {
      lVar6 = *(long *)(param_1 + 0x40);
      uVar4 = FUN_0268fd4c(param_2,0);
      if (lVar6 != 0) {
        uVar5 = FUN_01322618(lVar6,uVar4,
                             *(undefined8 *)
                              Method_UnityEngine_ProBuilder_ProBuilderMesh_<SetSelectedFaces>b__246_1__
                            );
        if ((uVar5 & 1) == 0) {
          return;
        }
        lVar6 = *(long *)(param_1 + 0x40);
        uVar4 = FUN_0268fd4c(param_2,0);
        if (lVar6 != 0) {
          uVar3 = FUN_01323730(lVar6,uVar4,
                               *(undefined8 *)
                                Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass9_0_<DOPath>b__0__
                              );
          puVar2 = 
          Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__;
          puVar1 = UnityEngine_XR_Interaction_Toolkit_XRGazeInteractor_TypeInfo;
          lVar6 = *(long *)(param_1 + 0x48);
          if (lVar6 != 0) {
            FUN_0132138c(lVar6,uVar3,&local_44,
                         *(undefined8 *)
                          Method_System_Collections_Generic_Dictionary<Type,_VisualElement_TypeData>__ctor__
                        );
            local_38 = local_44 + -1;
            FUN_0132149c(lVar6,uVar3,&local_38,*(undefined8 *)puVar1);
            if (*(long *)(param_1 + 0x48) != 0) {
              FUN_0132138c(*(long *)(param_1 + 0x48),uVar3,&local_34,*(undefined8 *)puVar2);
              if (local_34 != 0) {
                return;
              }
              lVar6 = *(long *)(param_1 + 0x38);
              if (lVar6 != 0) {
                uVar4 = FUN_0268fd4c(param_2,0);
                (**(code **)(lVar6 + 0x18))
                          (*(undefined8 *)(lVar6 + 0x40),uVar4,*(undefined8 *)(lVar6 + 0x28));
              }
              if (*(long *)(param_1 + 0x48) != 0) {
                FUN_01324ac8(*(long *)(param_1 + 0x48),uVar3,
                             *(undefined8 *)
                              Method_RCG_Lovesick_Dialogue_DialoguePopup_OnPlayableStarted__);
                lVar6 = *(long *)(param_1 + 0x40);
                uVar4 = FUN_0268fd4c(param_2,0);
                if (lVar6 != 0) {
                  FUN_0132448c(lVar6,uVar4,
                               *(undefined8 *)
                                Method_System_Collections_Generic_List<FieldInfo>__ctor__);
                  return;
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
  return;
}


