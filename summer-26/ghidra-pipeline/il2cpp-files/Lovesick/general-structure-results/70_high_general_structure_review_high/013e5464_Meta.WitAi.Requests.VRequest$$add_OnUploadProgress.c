/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest$$add_OnUploadProgress
ENTRY_POINT: 013e5464
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_1;ray_or_cast_sink_hits_2;telemetry_or_network_hits_6
*/


void Meta_WitAi_Requests_VRequest__add_OnUploadProgress(void)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 unaff_x22;
  undefined8 in_stack_00000018;
  
  *(undefined8 *)(unaff_x19 + 0x60) = unaff_x22;
  if (3 < *(int *)(unaff_x19 + 0x10)) {
    in_stack_00000018 = FUN_020407b0();
                    /* try { // try from 013e5490 to 014e549f has its CatchHandler @ 013e5588 */
    uVar1 = FUN_01770034(&stack0x00000018,*(undefined8 *)StringLiteral_12992,0);
                    /* try { // try from 013e54a0 to 014e554b has its CatchHandler @ 013e4e9c */
    uVar1 = FUN_015f5b28(*(undefined8 *)UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo,
                         uVar1,0);
    if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
      thunk_FUN_00d32864(*(long *)StringLiteral_302);
    }
    FUN_02660dac(uVar1,0);
  }
  return;
}


