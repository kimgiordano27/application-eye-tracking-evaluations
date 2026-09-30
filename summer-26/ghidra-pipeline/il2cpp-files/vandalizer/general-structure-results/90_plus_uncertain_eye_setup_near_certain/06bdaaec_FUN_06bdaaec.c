/*
FUNCTION_NAME: FUN_06bdaaec
ENTRY_POINT: 06bdaaec
PROGRAM: vandalizer-libil2cpp.so
SCORE: 91
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;ray_or_cast_sink_hits_4;functionality_eye_api_context_without_clear_sink_hits_6
*/


void FUN_06bdaaec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar6 = OVRRaycaster_RaycastHit_var;
  puVar5 = OVRPlugin_VirtualKeyboardModelAnimationState_var;
  puVar4 = OVRPlugin_Vector3f_var;
  puVar3 = OVRPlugin_SpaceQueryResult_var;
  puVar2 = System_Xml_XPath_XPathItem_var;
  puVar1 = PTR_DAT_0759f770;
                    /* try { // try from 06bdaafc to 06cdab33 has its CatchHandler @ 06bdaf30 */
  if ((DAT_07a4fea3 & 1) == 0) {
    FUN_031f20f4(OVRPlugin_Vector3f_var);
    FUN_031f20f4(OVRRaycaster_RaycastHit_var);
    FUN_031f20f4(OVRPlugin_VirtualKeyboardModelAnimationState_var);
    FUN_031f20f4(OVRPlugin_SpaceQueryResult_var);
                    /* try { // try from 06bdab68 to 06cdab97 has its CatchHandler @ 06bdaf3c */
    FUN_031f20f4(PTR_DAT_0759f770);
    FUN_031f20f4(System_Xml_XPath_XPathItem_var);
    DAT_07a4fea3 = 1;
  }
  uVar7 = thunk_FUN_0322f148(*(undefined8 *)puVar1);
  FUN_05e44034(uVar7,0);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  *puVar8 = uVar7;
  thunk_FUN_0329bf60(puVar8,uVar7);
  uVar7 = thunk_FUN_0322f148(*(undefined8 *)puVar3);
  FUN_043c9a50(uVar7,*(undefined8 *)puVar4);
                    /* try { // try from 06bdabc8 to 06cdac0f has its CatchHandler @ 06bdaf38 */
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
  *puVar8 = uVar7;
  thunk_FUN_0329bf60(puVar8,uVar7);
  uVar7 = thunk_FUN_0322f148(*(undefined8 *)puVar5);
  FUN_043c9a50(uVar7,*(undefined8 *)puVar6);
  **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar7;
  thunk_FUN_0329bf60(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar7);
  uVar7 = thunk_FUN_0322f148(*(undefined8 *)puVar5);
  FUN_043c9a50(uVar7,*(undefined8 *)puVar6);
  puVar8 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
  *puVar8 = uVar7;
  thunk_FUN_0329bf60(puVar8,uVar7);
  return;
}


