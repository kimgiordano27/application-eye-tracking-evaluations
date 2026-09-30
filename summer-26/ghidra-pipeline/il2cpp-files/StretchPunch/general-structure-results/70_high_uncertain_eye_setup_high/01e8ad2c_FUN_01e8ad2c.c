/*
FUNCTION_NAME: FUN_01e8ad2c
ENTRY_POINT: 01e8ad2c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_01e8ad2c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar5 = Field_UnityEngine_EventSystems_RaycastResult_m_GameObject;
  puVar4 = Field_UnityEngine_UIElements_RareData_cursor;
  puVar3 = Field_Unity_Properties_PropertyMember_m_PropertyInfo;
  puVar2 = Field_UnityEngine_Rendering_ProfilingSample_m_Cmd;
  puVar1 = Field_UnityEngine_InputSystem_UI_NavigationModel_eventData;
  if ((DAT_044a2d25 & 1) == 0) {
    FUN_01d7d918(Field_UnityEngine_UIElements_RareData_cursor);
    FUN_01d7d918(Field_Unity_Properties_PropertyMember_m_PropertyInfo);
    FUN_01d7d918(Field_UnityEngine_EventSystems_RaycastResult_m_GameObject);
    FUN_01d7d918(Field_UnityEngine_InputSystem_UI_NavigationModel_eventData);
    FUN_01d7d918(Field_UnityEngine_Rendering_ProfilingSample_m_Cmd);
    DAT_044a2d25 = 1;
  }
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)puVar2;
  thunk_FUN_01e10808();
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar3);
  FUN_02b235c4(uVar6,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  thunk_FUN_01e10808((undefined8 *)(param_1 + 0x30),uVar6);
  uVar6 = thunk_FUN_01de27b8(*(undefined8 *)puVar1);
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (uVar6,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x38) = uVar6;
  thunk_FUN_01e10808((undefined8 *)(param_1 + 0x38),uVar6);
  thunk_FUN_03d711f0(param_1,0);
  return;
}


