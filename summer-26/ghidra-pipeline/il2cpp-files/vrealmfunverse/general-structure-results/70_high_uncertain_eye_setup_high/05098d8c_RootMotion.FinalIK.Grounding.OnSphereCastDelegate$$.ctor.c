/*
FUNCTION_NAME: RootMotion.FinalIK.Grounding.OnSphereCastDelegate$$.ctor
ENTRY_POINT: 05098d8c
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined4
RootMotion_FinalIK_Grounding_OnSphereCastDelegate___ctor
          (long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  char *in_stack_00000020;
  undefined8 in_stack_00000028;
  char *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined1 uStack000000000000004c;
  
  if (param_1 == 0) {
    in_stack_00000020 = "OVRPlugin";
    in_stack_00000028 = 9;
    in_stack_00000030 = "ovrp_SendUnifiedEvent";
    in_stack_00000038 = 0x15;
    in_stack_00000040 = DAT_01031000;
    uStack0000000000000048 = 0x54;
                    /* try { // try from 05098de8 to 05198e3b has its CatchHandler @ 05098de8
                       catch() { ... } // from try @ 05098de8 with catch @ 05098de8
                       catch() { ... } // from try @ 05098e48 with catch @ 05098de8
                       catch() { ... } // from try @ 05098e84 with catch @ 05098de8
                       catch() { ... } // from try @ 05098eac with catch @ 05098de8 */
    uStack000000000000004c = 0;
    DAT_066cd588 = (code *)thunk_FUN_02b798e4(&stack0x00000020);
  }
  uVar2 = thunk_FUN_02b79b90(param_3);
  uVar3 = thunk_FUN_02b79b90(param_4);
  uVar4 = thunk_FUN_02b79b90(param_5);
  uVar5 = thunk_FUN_02b79b90(param_6);
  uVar6 = thunk_FUN_02b79b90(param_7);
  uVar7 = thunk_FUN_02b79b90(param_8);
  uVar8 = thunk_FUN_02b79b90(param_9);
  uVar9 = thunk_FUN_02b79b90();
  uVar10 = thunk_FUN_02b79b90();
  uVar11 = thunk_FUN_02b79b90();
  uVar1 = (*DAT_066cd588)(param_2,uVar2,uVar3,uVar4,uVar5,uVar6,uVar7,uVar8);
  thunk_FUN_02b79b84(uVar2);
  thunk_FUN_02b79b84(uVar3);
  thunk_FUN_02b79b84(uVar4);
  thunk_FUN_02b79b84(uVar5);
  thunk_FUN_02b79b84(uVar6);
  thunk_FUN_02b79b84(uVar7);
  thunk_FUN_02b79b84(uVar8);
  thunk_FUN_02b79b84(uVar9);
  thunk_FUN_02b79b84(uVar10);
  thunk_FUN_02b79b84(uVar11);
  return uVar1;
}


