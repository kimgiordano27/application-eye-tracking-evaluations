/*
FUNCTION_NAME: FUN_03e6777c
ENTRY_POINT: 03e6777c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 82
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_03e6777c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar6 = PTR_DAT_04252830;
  puVar5 = PTR_DAT_04251638;
  puVar3 = Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material;
  puVar2 = Field_UnityEngine_EventSystems_RaycastResult_m_GameObject;
  puVar1 = Field_UnityEngine_InputSystem_UI_NavigationModel_eventData;
  if ((DAT_044b21b0 & 1) == 0) {
    FUN_01d7d918(PTR_DAT_04252830);
    FUN_01d7d918(Field_UnityEngine_EventSystems_RaycastResult_m_GameObject);
    FUN_01d7d918(Field_UnityEngine_InputSystem_UI_NavigationModel_eventData);
    FUN_01d7d918(
                Field_UnityEngine_Rendering_Universal_Internal_FinalBlitPass_BlitMaterialData_material
                );
    FUN_01d7d918(PTR_DAT_04251638);
    FUN_01d7d918(StringLiteral_2317);
    DAT_044b21b0 = 1;
  }
  puVar4 = StringLiteral_2317;
  uVar7 = thunk_FUN_01de27b8(*(undefined8 *)puVar1);
  System_Array_InternalEnumerator<OVRPlugin_Vector4f>__System_Collections_IEnumerator_get_Current
            (uVar7,*(undefined8 *)puVar2);
  **(undefined8 **)(*(long *)puVar5 + 0xb8) = uVar7;
  thunk_FUN_01e10808(*(undefined8 *)(*(long *)puVar5 + 0xb8),uVar7);
  uVar7 = *(undefined8 *)puVar6;
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar7 = FUN_033a87c8(uVar7,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 8);
  *puVar8 = uVar7;
  thunk_FUN_01e10808(puVar8,uVar7);
  *(undefined8 *)(*(long *)(*(long *)puVar5 + 0xb8) + 0x10) = *(undefined8 *)puVar4;
  thunk_FUN_01e10808();
  return;
}


