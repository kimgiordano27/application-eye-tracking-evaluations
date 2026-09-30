/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaSet$$InternalValidationCallback
ENTRY_POINT: 053da104
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Xml_Schema_XmlSchemaSet__InternalValidationCallback(code *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x21;
  undefined8 uVar4;
  
  (*param_1)();
  uVar1 = FUN_053e0d34();
  if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  *(undefined8 *)(unaff_x21 + 0x10) = uVar1;
  lVar2 = thunk_FUN_02ba3594(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  lVar2 = thunk_FUN_02ba3594(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
  lVar3 = **(long **)(lVar2 + 0xb8);
  lVar2 = thunk_FUN_02ba3594(OVRPassthroughLayer_<>c__DisplayClass9_0_TypeInfo);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
  uVar4 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x48);
  uVar1 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_8_0_TypeInfo);
  FUN_0452f2dc(lVar3,uVar4,uVar1);
  FUN_0275f180(&stack0x00000008);
  thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
  uVar1 = thunk_FUN_02b79644();
  FUN_053f0c5c();
  uVar1 = FUN_0540c738(uVar1,0);
  uVar4 = thunk_FUN_02ba3594(OVRPlugin_OVRP_1_90_0_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_02b3c988(uVar1,uVar4);
}


