/*
FUNCTION_NAME: System.Xml.Schema.XmlSchemaValidator$$SendValidationEvent
ENTRY_POINT: 053dc668
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_3;validity_or_gating_hits_6;ray_or_cast_sink_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void System_Xml_Schema_XmlSchemaValidator__SendValidationEvent(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  
                    /* catch() { ... } // from try @ 053dc570 with catch @ 053dc668 */
  uVar1 = FUN_053db9e4();
                    /* catch() { ... } // from try @ 053dc3d0 with catch @ 053dc66c */
  lVar3 = *unaff_x20;
                    /* catch() { ... } // from try @ 053dc55c with catch @ 053dc670 */
                    /* catch() { ... } // from try @ 053dc374 with catch @ 053dc674 */
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cac4();
  }
                    /* catch() { ... } // from try @ 053dc45c with catch @ 053dc678 */
                    /* catch() { ... } // from try @ 053dc560 with catch @ 053dc67c */
  if (*(char *)(lVar3 + 0x3a) == '\0') {
                    /* catch() { ... } // from try @ 053dc6a8 with catch @ 053dc6b8 */
    lVar3 = FUN_053dc3cc();
  }
  else {
                    /* catch() { ... } // from try @ 053dc3e8 with catch @ 053dc680 */
    lVar3 = *(long *)(lVar3 + 0x18);
    if (lVar3 == 0) {
      uVar1 = thunk_FUN_02ba3594(PTR_DAT_06313048);
      uVar1 = FUN_02b3c908(uVar1,1);
      uVar2 = FUN_053d6158();
      FUN_0275e13c(uVar1);
      FUN_0275a400(uVar1,uVar2);
      FUN_0275a434(uVar1,0,uVar2);
      uVar2 = thunk_FUN_02ba3594(OVRPlugin_UnityOpenXR_TypeInfo);
      uVar1 = FUN_0540ce80(uVar2,uVar1,0);
      thunk_FUN_02ba3594(UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo);
      uVar2 = thunk_FUN_02b79644();
      FUN_053f0c5c(uVar2,uVar1,0);
      uVar1 = FUN_0540c738(uVar2,0);
      uVar2 = thunk_FUN_02ba3594(OVRPlugin_Vector3f_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02b3c988(uVar1,uVar2);
    }
    FUN_053dc168(lVar3);
  }
                    /* try { // try from 053dc69c to 054dc69f has its CatchHandler @ 053dc6a4 */
  FUN_053d69b4(uVar1,lVar3);
                    /* catch() { ... } // from try @ 053dc69c with catch @ 053dc6a4 */
                    /* try { // try from 053dc6a8 to 054dc6af has its CatchHandler @ 053dc6b8 */
                    /* try { // try from 053dc6b0 to 054dc6bb has its CatchHandler @ 053dc0f8 */
  return;
}


