/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDebugger$$CreateDebugPrefabSource
ENTRY_POINT: 01497cc0
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDebugger__CreateDebugPrefabSource(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  thunk_FUN_00d48444();
  thunk_FUN_00d48444(StringLiteral_3253);
  thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass6_0_<DOJump>b__3__);
  thunk_FUN_00d48444(
                    Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<DragGesture>_get_recognizer__
                    );
  thunk_FUN_00d48444(StringLiteral_10079);
  thunk_FUN_00d48444(
                    Method_UnityEngine_UIElements_UxmlFactory<VisualElement,_VisualElement_UxmlTraits>__ctor__
                    );
  thunk_FUN_00d48444(StringLiteral_286);
  thunk_FUN_00d48444(Oculus_Interaction_Input_HandSkeleton_TypeInfo);
  thunk_FUN_00d48444(System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo___TypeInfo);
  *(undefined1 *)(unaff_x20 + 0xca7) = 1;
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  if (DAT_03775606 == '\0') {
    thunk_FUN_00d48444(System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo___TypeInfo);
    DAT_03775606 = '\x01';
  }
  puVar1 = StringLiteral_286;
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar2 = *unaff_x22;
  }
  uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18);
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    FUN_01298e34(lVar2,uVar3,*(undefined8 *)PTR_DAT_033ec8b0);
    *(long *)(unaff_x19 + 0x10) = lVar2;
    if (DAT_03775606 == '\0') {
      thunk_FUN_00d48444(System_Runtime_Serialization_Formatters_Binary_WriteObjectInfo___TypeInfo);
      DAT_03775606 = '\x01';
    }
    puVar1 = StringLiteral_10079;
    lVar2 = *unaff_x22;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar2 = *unaff_x22;
    }
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x18);
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = 
    Method_UnityEngine_UIElements_UxmlFactory<VisualElement,_VisualElement_UxmlTraits>__ctor__;
    if (lVar2 != 0) {
      FUN_01298e34(lVar2,uVar3,*(undefined8 *)StringLiteral_6152);
      *(long *)(unaff_x19 + 0x18) = lVar2;
      lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = Oculus_Interaction_Input_HandSkeleton_TypeInfo;
      if (lVar2 != 0) {
        FUN_01298da0(lVar2,*(undefined8 *)StringLiteral_3253);
        *(long *)(unaff_x19 + 0x20) = lVar2;
        lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        puVar1 = Method_UnityEngine_XR_Interaction_Toolkit_AR_Gesture<DragGesture>_get_recognizer__;
        if (lVar2 != 0) {
          FUN_01298da0(lVar2,*(undefined8 *)
                              Method_DG_Tweening_DOTweenModulePhysics_<>c__DisplayClass6_0_<DOJump>b__3__
                      );
          *(long *)(unaff_x19 + 0x28) = lVar2;
          lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
          if (lVar2 != 0) {
            FUN_01298da0(lVar2,*(undefined8 *)StringLiteral_8150);
            *(long *)(unaff_x19 + 0x30) = lVar2;
            FUN_017b46ec();
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


