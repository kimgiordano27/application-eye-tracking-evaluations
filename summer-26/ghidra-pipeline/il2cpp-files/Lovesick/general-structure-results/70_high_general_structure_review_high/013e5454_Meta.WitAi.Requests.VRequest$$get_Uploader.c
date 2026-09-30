/*
FUNCTION_NAME: Meta.WitAi.Requests.VRequest$$get_Uploader
ENTRY_POINT: 013e5454
PROGRAM: Lovesick-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_6
*/


void Meta_WitAi_Requests_VRequest__get_Uploader(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 unaff_x22;
  undefined8 in_stack_00000018;
  
  if (param_1 != 0) {
    FUN_02684a90(param_1,0,0);
    *(undefined8 *)(unaff_x19 + 0x60) = unaff_x22;
    if (3 < *(int *)(unaff_x19 + 0x10)) {
      in_stack_00000018 = FUN_020407b0();
      uVar1 = FUN_01770034(&stack0x00000018,*(undefined8 *)StringLiteral_12992,0);
      uVar1 = FUN_015f5b28(*(undefined8 *)UnityEngine_EventSystems_OVRPhysicsRaycaster_<>c_TypeInfo,
                           uVar1,0);
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864(*(long *)StringLiteral_302);
      }
      FUN_02660dac(uVar1,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


