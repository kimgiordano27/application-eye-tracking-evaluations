/*
FUNCTION_NAME: OVRPlugin.OVRP_1_78_0$$ovrp_StopEyeTracking
ENTRY_POINT: 056a3fa4
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 123
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;attempted_use
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


long OVRPlugin_OVRP_1_78_0__ovrp_StopEyeTracking(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long unaff_x19;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x21;
  
  FUN_02d965b8(
              UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<OverflowClipBox>,_OverflowClipBox>_TypeInfo
              );
  FUN_02d965b8(
              UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<OverflowInternal>,_OverflowInternal>_TypeInfo
              );
  FUN_02d965b8(PTR_DAT_06a0f0b8);
  FUN_02d965b8(UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<Position>,_Position>_TypeInfo)
  ;
  FUN_02d965b8(
              UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<ScaleMode>,_ScaleMode>_TypeInfo
              );
  FUN_02d965b8(
              UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<SliceType>,_SliceType>_TypeInfo
              );
  FUN_02d965b8(
              UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<TextAnchor>,_TextAnchor>_TypeInfo
              );
  FUN_02d965b8(
              UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<TextGeneratorType>,_TextGeneratorType>_TypeInfo
              );
  FUN_02d965b8(
              UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<TextOverflow>,_TextOverflow>_TypeInfo
              );
  *(undefined1 *)(unaff_x19 + 0x8c3) = 1;
  lVar4 = *(long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
  if (lVar4 == 0) {
    lVar4 = thunk_FUN_02dd3144(*(undefined8 *)
                                UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<OverflowInternal>,_OverflowInternal>_TypeInfo
                              );
    FUN_04e8b9b8(lVar4,7,*(undefined8 *)
                          UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<OverflowClipBox>,_OverflowClipBox>_TypeInfo
                );
    puVar1 = PTR_DAT_069fb9c0;
    uVar5 = *(undefined8 *)
             UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<TextAnchor>,_TextAnchor>_TypeInfo
    ;
    if (*(int *)(*(long *)(PTR_DAT_069fb9c0 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_02df485c();
    }
    uVar5 = FUN_054f73b4(uVar5,0);
    puVar2 = UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<Overflow>,_Overflow>_TypeInfo;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04e8c720(lVar4,uVar5,1,
                 *(undefined8 *)
                  UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<Overflow>,_Overflow>_TypeInfo
                );
    uVar5 = FUN_054f73b4(*(undefined8 *)
                          UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<TextGeneratorType>,_TextGeneratorType>_TypeInfo
                         ,0);
    FUN_04e8c720(lVar4,uVar5,2,*(undefined8 *)puVar2);
    uVar5 = FUN_054f73b4(*(undefined8 *)
                          UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<TextOverflow>,_TextOverflow>_TypeInfo
                         ,0);
    FUN_04e8c720(lVar4,uVar5,3,*(undefined8 *)puVar2);
    uVar5 = FUN_054f73b4(*(undefined8 *)
                          UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<ScaleMode>,_ScaleMode>_TypeInfo
                         ,0);
    FUN_04e8c720(lVar4,uVar5,4,*(undefined8 *)puVar2);
    uVar5 = FUN_054f73b4(*(undefined8 *)
                          UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<SliceType>,_SliceType>_TypeInfo
                         ,0);
    FUN_04e8c720(lVar4,uVar5,5,*(undefined8 *)puVar2);
    uVar5 = FUN_054f73b4(*(undefined8 *)
                          UnityEngine_UIElements_StyleValuePropertyBag<StyleEnum<Position>,_Position>_TypeInfo
                         ,0);
    FUN_04e8c720(lVar4,uVar5,6,*(undefined8 *)puVar2);
    uVar5 = FUN_054f73b4(*(long *)(puVar1 + 0x90) + 0x20,0);
    FUN_04e8c720(lVar4,uVar5,7,*(undefined8 *)puVar2);
    plVar3 = (long *)(*(long *)(*unaff_x21 + 0xb8) + 8);
    *plVar3 = lVar4;
    LeanTween__value(plVar3,lVar4);
  }
  return lVar4;
}


