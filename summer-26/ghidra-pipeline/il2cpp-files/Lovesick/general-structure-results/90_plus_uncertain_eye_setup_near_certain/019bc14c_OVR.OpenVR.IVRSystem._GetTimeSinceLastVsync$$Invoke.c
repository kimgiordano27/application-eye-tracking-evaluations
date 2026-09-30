/*
FUNCTION_NAME: OVR.OpenVR.IVRSystem._GetTimeSinceLastVsync$$Invoke
ENTRY_POINT: 019bc14c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void OVR_OpenVR_IVRSystem__GetTimeSinceLastVsync__Invoke(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 unaff_x21;
  long *unaff_x23;
  
  FUN_02021c48();
  *(undefined8 *)(*(long *)(*unaff_x23 + 0xb8) + 8) = unaff_x21;
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
  uVar7 = FUN_02020770();
  uVar7 = FUN_02020524(uVar7,*(undefined8 *)puVar6,*(undefined8 *)puVar5,8,0);
  uVar7 = FUN_02020524(uVar7,*(undefined8 *)puVar3,*(undefined8 *)puVar1,8,0);
  lVar8 = FUN_02020524(uVar7,*(undefined8 *)puVar2,*(undefined8 *)puVar4,8,0);
  if (lVar8 != 0) {
    FUN_01604318(lVar8,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


