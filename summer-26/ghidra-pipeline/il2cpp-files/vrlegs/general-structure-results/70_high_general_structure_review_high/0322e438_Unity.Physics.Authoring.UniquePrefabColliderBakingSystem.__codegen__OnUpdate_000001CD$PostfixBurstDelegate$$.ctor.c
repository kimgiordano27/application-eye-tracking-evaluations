/*
FUNCTION_NAME: Unity.Physics.Authoring.UniquePrefabColliderBakingSystem.__codegen__OnUpdate_000001CD$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 0322e438
PROGRAM: vrlegs-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_4;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Unity_Physics_Authoring_UniquePrefabColliderBakingSystem___codegen__OnUpdate_000001CD_PostfixBurstDelegate___ctor
          (void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *puVar5;
  undefined8 *unaff_x24;
  long in_stack_00000018;
  
  FUN_01ab69ac(RootMotion_FinalIK_Grounding_Leg___TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x6a4) = 1;
  uVar3 = thunk_FUN_01a89e68(*unaff_x24);
  FUN_0328daa0(uVar3,0);
  in_stack_00000018 = FUN_031fffac(uVar3,0);
  in_stack_00000018 = FUN_0320509c(&stack0x00000018);
  if (in_stack_00000018 != 0) {
    *(undefined8 *)(in_stack_00000018 + 0x80) = unaff_x22;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar2 = in_stack_00000018;
    FUN_03291548();
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar2 + 0x20,0);
      lVar2 = in_stack_00000018;
      FUN_03291548();
      uVar4 = FUN_03291a94(0,0,0);
      if (lVar2 != 0) {
        puVar5 = (undefined8 *)(lVar2 + 0x40);
        *puVar5 = uVar4;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar5,uVar4);
        lVar2 = in_stack_00000018;
        FUN_03291548();
        uVar4 = FUN_03291a94(0,0,0);
        if (lVar2 != 0) {
          puVar5 = (undefined8 *)(lVar2 + 0x50);
          *puVar5 = uVar4;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar5,uVar4);
          puVar1 = PTR_DAT_03cd8408;
          if (in_stack_00000018 != 0) {
            *(undefined8 *)(in_stack_00000018 + 0x58) = unaff_x20;
            *(undefined8 *)(in_stack_00000018 + 0x60) = unaff_x19;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(in_stack_00000018 + 0x58),0);
            if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
              thunk_FUN_01a58e78();
            }
            uVar4 = _DAT_00d35fc0;
            if (in_stack_00000018 != 0) {
              *(undefined8 *)(in_stack_00000018 + 0x18) = _UNK_00d35fc8;
              *(undefined8 *)(in_stack_00000018 + 0x10) = uVar4;
              FUN_031fee4c(in_stack_00000018,1,0);
              return uVar3;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


