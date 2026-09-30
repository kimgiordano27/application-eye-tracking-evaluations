/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMap$$GetPixelFromWorldPosition
ENTRY_POINT: 014a2aec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 195
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction
MODULES: eye_source;validity_gate;pose_vector;ray_interaction;ui_interaction;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_interaction_sink;functionality_gaze_interaction_hits_2
*/


undefined8 Meta_XR_MRUtilityKit_SpaceMap__GetPixelFromWorldPosition(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long lVar6;
  undefined8 *unaff_x22;
  
  thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_18__);
  thunk_FUN_00d48444(Obi_ObiBoneBlueprint_<Initialize>d__15_TypeInfo);
  thunk_FUN_00d48444(UnityEngine_UIElements_BaseSlider<int>_TypeInfo);
  thunk_FUN_00d48444(DG_Tweening_Core_DOTweenComponent_<WaitForPosition>d__21_TypeInfo);
  thunk_FUN_00d48444(PTR_DAT_033eb478);
  thunk_FUN_00d48444(StringLiteral_720);
  thunk_FUN_00d48444(Method_UnityEngine_Component_GetComponentsInChildren<Collider>__);
  *(undefined1 *)(unaff_x20 + 0xcb8) = 1;
  lVar3 = thunk_FUN_00d62348(*unaff_x22);
  puVar1 = UnityEngine_UIElements_BaseSlider<int>_TypeInfo;
  if (lVar3 != 0) {
    FUN_017b46ec(lVar3,0);
    *(undefined8 *)(lVar3 + 0x10) = unaff_x21;
    lVar6 = *(long *)(unaff_x19 + 0x20);
    lVar4 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if ((lVar4 != 0) &&
       (FUN_0136b58c(lVar4,lVar3,
                     *(undefined8 *)
                      DG_Tweening_Core_DOTweenComponent_<WaitForPosition>d__21_TypeInfo,0),
       lVar6 != 0)) {
      iVar2 = FUN_01322fd0(lVar6,0,lVar4,
                           *(undefined8 *)
                            Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_18__
                          );
      puVar1 = StringLiteral_720;
      if (-1 < iVar2) {
        if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_014a2c34;
        if (iVar2 < *(int *)(*(long *)(unaff_x19 + 0x20) + 0x18)) {
          *(int *)(unaff_x19 + 0x38) = iVar2;
          return 1;
        }
      }
      uVar5 = FUN_015f5b28(*(undefined8 *)
                            Method_UnityEngine_Component_GetComponentsInChildren<Collider>__,
                           *(undefined8 *)(lVar3 + 0x10),0);
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)puVar1);
      }
      FUN_014ded68(uVar5,0);
      return 0;
    }
  }
LAB_014a2c34:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


