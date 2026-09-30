/*
FUNCTION_NAME: Unity.Physics.Authoring.UniquePrefabColliderBakingSystem.__codegen__OnUpdate_000001CD$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0322e4d8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_4;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unity_Physics_Authoring_UniquePrefabColliderBakingSystem___codegen__OnUpdate_000001CD_PostfixBurstDelegate__Invoke
               (void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  long in_stack_00000018;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0;
  FUN_03291548();
  uVar2 = FUN_03291a94(uStack0000000000000000,uStack0000000000000008,0);
  if (in_stack_00000018 != 0) {
    *(undefined8 *)(in_stack_00000018 + 0x40) = uVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(in_stack_00000018 + 0x40),uVar2);
    uStack0000000000000000 = 0;
    uStack0000000000000008 = 0;
    FUN_03291548();
    uVar2 = FUN_03291a94(uStack0000000000000000,uStack0000000000000008,0);
    if (in_stack_00000018 != 0) {
      *(undefined8 *)(in_stack_00000018 + 0x50) = uVar2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                ((undefined8 *)(in_stack_00000018 + 0x50),uVar2);
      puVar1 = PTR_DAT_03cd8408;
      if (in_stack_00000018 != 0) {
        *(undefined8 *)(in_stack_00000018 + 0x58) = unaff_x20;
        *(undefined8 *)(in_stack_00000018 + 0x60) = unaff_x19;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                  ((undefined8 *)(in_stack_00000018 + 0x58),0);
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
        }
        uVar2 = _DAT_00d35fc0;
        if (in_stack_00000018 != 0) {
          *(undefined8 *)(in_stack_00000018 + 0x18) = _UNK_00d35fc8;
          *(undefined8 *)(in_stack_00000018 + 0x10) = uVar2;
          FUN_031fee4c(in_stack_00000018,1,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


