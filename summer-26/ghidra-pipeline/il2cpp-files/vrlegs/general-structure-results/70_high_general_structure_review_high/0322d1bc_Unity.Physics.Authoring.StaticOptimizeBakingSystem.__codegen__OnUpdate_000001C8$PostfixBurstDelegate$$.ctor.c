/*
FUNCTION_NAME: Unity.Physics.Authoring.StaticOptimizeBakingSystem.__codegen__OnUpdate_000001C8$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 0322d1bc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_2;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unity_Physics_Authoring_StaticOptimizeBakingSystem___codegen__OnUpdate_000001C8_PostfixBurstDelegate___ctor
               (void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long in_stack_00000018;
  
  puVar2 = PTR_DAT_03cd8408;
                    /* try { // try from 0322d1c0 to 0332d1c3 has its CatchHandler @ 0322d3a4 */
  if (in_stack_00000018 != 0) {
    *(undefined8 *)(in_stack_00000018 + 0x58) = unaff_x20;
    *(undefined8 *)(in_stack_00000018 + 0x60) = unaff_x19;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(in_stack_00000018 + 0x58),0);
    if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    uVar1 = _DAT_00d36850;
    if (in_stack_00000018 != 0) {
                    /* try { // try from 0322d204 to 0332d22f has its CatchHandler @ 0322d3a8 */
      *(undefined8 *)(in_stack_00000018 + 0x18) = _UNK_00d36858;
      *(undefined8 *)(in_stack_00000018 + 0x10) = uVar1;
      FUN_031fee4c(in_stack_00000018,1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


