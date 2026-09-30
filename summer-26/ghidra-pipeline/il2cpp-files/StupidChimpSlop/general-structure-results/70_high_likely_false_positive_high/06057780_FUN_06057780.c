/*
FUNCTION_NAME: FUN_06057780
ENTRY_POINT: 06057780
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 77
LABEL: likely_false_positive_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: likely_false_positive
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;ray_interaction;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_4;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2
*/


void FUN_06057780(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar1 = Field_UnityEngine_XR_XRDisplaySubsystem_XRRenderParameter_occlusionMesh;
  if ((DAT_06a5e7d8 & 1) == 0) {
    FUN_02d4dc40(
                Field_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_m_Reader
                );
    FUN_02d4dc40(Field_UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_assigned_loaders);
    FUN_02d4dc40(
                Field_UnityEngine_XR_Interaction_Toolkit_Interactors_XRPokeInteractor_PokeCollision_interactable
                );
    FUN_02d4dc40(Field_UnityEngine_XR_XRDisplaySubsystem_XRRenderParameter_occlusionMesh);
    FUN_02d4dc40(
                Field_UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredInteractor_interactor
                );
    FUN_02d4dc40(Field_UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredTouch_model);
    FUN_02d4dc40(Field_System_Xml_Schema_XmlAtomicValue_Union_dtVal);
    DAT_06a5e7d8 = 1;
  }
  puVar7 = Field_System_Xml_Schema_XmlAtomicValue_Union_dtVal;
  puVar6 = Field_UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredTouch_model;
  puVar5 = 
  Field_UnityEngine_XR_Interaction_Toolkit_UI_XRUIInputModule_RegisteredInteractor_interactor;
  puVar4 = 
  Field_UnityEngine_XR_Interaction_Toolkit_Interactors_XRPokeInteractor_PokeCollision_interactable;
  puVar3 = Field_UnityEngine_XR_Management_XRManagementAnalytics_BuildEvent_assigned_loaders;
  puVar2 = 
  Field_UnityEngine_XR_Interaction_Toolkit_Inputs_Readers_XRInputButtonReader_BypassScope_m_Reader;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  FUN_0472d160(param_1,*(undefined8 *)puVar4);
  uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar5);
  FUN_060578c8();
  FUN_02f49a74(param_1,uVar8,*(undefined8 *)puVar2);
  uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar6);
  FUN_06057940();
  FUN_02f49a74(param_1,uVar8,*(undefined8 *)puVar2);
  uVar8 = thunk_FUN_02d8a638(*(undefined8 *)puVar7);
  FUN_060579b8();
  FUN_02f49b38(param_1,uVar8,*(undefined8 *)puVar3);
  return;
}


