/*
FUNCTION_NAME: FUN_0373fb78
ENTRY_POINT: 0373fb78
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0373fb78(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  
  if ((DAT_044a9aba & 1) == 0) {
    FUN_01d7d918(Field_System_Reflection_ParameterInfo_ClassImpl);
    FUN_01d7d918(PTR_DAT_0422a860);
    FUN_01d7d918(Field_UnityEngine_EventSystems_RaycastResult_m_GameObject);
    FUN_01d7d918(Field_UnityEngine_InputSystem_UI_NavigationModel_eventData);
    DAT_044a9aba = 1;
  }
  uVar1 = FUN_0326a75c(param_2,0);
  if ((uVar1 & 1) != 0) {
    thunk_FUN_01dd295c(StringLiteral_1111);
    uVar2 = thunk_FUN_01de27b8();
    uVar3 = thunk_FUN_01dd295c(PTR_DAT_0422a868);
    FUN_032870b8(uVar2,uVar3,0);
    uVar3 = thunk_FUN_01dd295c(PTR_DAT_0422a870);
                    /* WARNING: Subroutine does not return */
    FUN_01d7da3c(uVar2,uVar3);
  }
  plVar5 = (long *)(param_1 + 0x68);
  lVar4 = *plVar5;
  if (lVar4 == 0) {
    lVar4 = thunk_FUN_01de27b8(*(undefined8 *)
                                Field_UnityEngine_InputSystem_UI_NavigationModel_eventData);
    System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
              (lVar4,*(undefined8 *)Field_UnityEngine_EventSystems_RaycastResult_m_GameObject);
    *plVar5 = lVar4;
    thunk_FUN_01e10808(plVar5,lVar4);
    lVar4 = *plVar5;
  }
  if ((param_2 != 0) && (uVar2 = FUN_0327d384(param_2,0), lVar4 != 0)) {
    if ((param_3 & 1) == 0) {
      FUN_02f17400(lVar4,uVar2,*(undefined8 *)PTR_DAT_0422a860);
    }
    else {
      FUN_02f17d24(lVar4,uVar2,*(undefined8 *)Field_System_Reflection_ParameterInfo_ClassImpl);
    }
    FUN_0373f6a8(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


