/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetTimeSinceLastVsync$$.ctor
ENTRY_POINT: 019bc074
PROGRAM: Lovesick-libil2cpp.so
SCORE: 93
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVR_OpenVR_IVRSystem__GetTimeSinceLastVsync___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  long *unaff_x23;
  
  thunk_FUN_00d48444(StringLiteral_9875);
  thunk_FUN_00d48444(UnityEngine_ProBuilder_EdgeUtility_<>c__DisplayClass0_0_TypeInfo);
  thunk_FUN_00d48444(StringLiteral_3287);
  thunk_FUN_00d48444(Method_DG_Tweening_Plugins_Core_PathCore_Path_Draw__);
  thunk_FUN_00d48444(Method_System_String_Ctor__);
  thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_11__);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_Clear__
                    );
  thunk_FUN_00d48444(StringLiteral_9956);
  *(undefined1 *)(unaff_x20 + 0x653) = 1;
  lVar7 = *unaff_x23;
  if (*(int *)(lVar7 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar7 = *unaff_x23;
  }
  puVar1 = Obi_IBendTwistConstraintsUser_TypeInfo;
  if (*(long *)(*(long *)(lVar7 + 0xb8) + 8) == 0) {
    if (*(int *)(lVar7 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar7 = *unaff_x23;
    }
    uVar8 = **(undefined8 **)(lVar7 + 0xb8);
    lVar7 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    if (lVar7 == 0) goto LAB_019bc218;
    FUN_02021c48(lVar7,uVar8,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>_GetEnumerator__
                 ,0);
    *(long *)(*(long *)(*unaff_x23 + 0xb8) + 8) = lVar7;
  }
  puVar6 = StringLiteral_9956;
  puVar5 = StringLiteral_3287;
  puVar4 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_11__;
  puVar3 = Method_DG_Tweening_Plugins_Core_PathCore_Path_Draw__;
  puVar2 = 
  Method_System_Collections_Generic_List<TrackedDeviceGraphicRaycaster_RaycastHitData>_Clear__;
  puVar1 = UnityEngine_ProBuilder_EdgeUtility_<>c__DisplayClass0_0_TypeInfo;
  if (*(int *)(*(long *)Method_OVRPlugin_<>c_<_cctor>b__796_105__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar8 = FUN_02020770();
  uVar8 = FUN_02020524(uVar8,*(undefined8 *)puVar6,*(undefined8 *)puVar5,8,0);
  uVar8 = FUN_02020524(uVar8,*(undefined8 *)puVar3,*(undefined8 *)puVar1,8,0);
  lVar7 = FUN_02020524(uVar8,*(undefined8 *)puVar2,*(undefined8 *)puVar4,8,0);
  if (lVar7 != 0) {
    FUN_01604318(lVar7,0);
    return;
  }
LAB_019bc218:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


