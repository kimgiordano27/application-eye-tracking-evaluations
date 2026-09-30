/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SpaceMapGPU$$ApplyMaterial
ENTRY_POINT: 014a528c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SpaceMapGPU__ApplyMaterial(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 in_stack_00000008;
  
  puVar1 = Method_Newtonsoft_Json_Linq_JsonPath_JPath_ParseQuotedField__;
  if ((DAT_03776cd7 & 1) == 0) {
    thunk_FUN_00d48444(System_Collections_Generic_HashSet<WingedEdge>_TypeInfo);
    thunk_FUN_00d48444(Method_WavelengthTutorial_TutorialStarted__);
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Linq_JsonPath_JPath_ParseQuotedField__);
    DAT_03776cd7 = 1;
  }
  (**(code **)(*param_1 + 0x288))
            (param_1,param_2,*(undefined8 *)puVar1,0,*(undefined8 *)(*param_1 + 0x290));
  lVar2 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  puVar1 = Method_WavelengthTutorial_TutorialStarted__;
  if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x90), lVar2 != 0)) {
    if (param_2 == 0) {
      uVar3 = 0;
    }
    else {
      FUN_0133ee3c(param_2,&stack0x00000008,
                   *(undefined8 *)System_Collections_Generic_HashSet<WingedEdge>_TypeInfo);
      uVar3 = in_stack_00000008;
    }
    FUN_013dfa68(lVar2,uVar3,*(undefined8 *)puVar1);
  }
  lVar2 = (**(code **)(*param_1 + 0x198))(param_1,*(undefined8 *)(*param_1 + 0x1a0));
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0xa0) != 0)) {
    FUN_026c868c(*(long *)(lVar2 + 0xa0),0);
  }
  return;
}


