/*
FUNCTION_NAME: Unity.Physics.Authoring.StaticOptimizeBakingSystem.__codegen__OnCreate_000001C7$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 0322cee0
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Unity_Physics_Authoring_StaticOptimizeBakingSystem___codegen__OnCreate_000001C7_PostfixBurstDelegate___ctor
          (void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 in_w8;
  undefined8 unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 *puVar5;
  undefined8 *unaff_x24;
  long in_stack_00000018;
  
  *(undefined1 *)(unaff_x21 + 0x699) = in_w8;
  uVar3 = thunk_FUN_01a89e68(*unaff_x24);
  FUN_0328bf70(uVar3,0);
  in_stack_00000018 = FUN_031fffac(uVar3,0);
  in_stack_00000018 = FUN_0320509c(&stack0x00000018);
  if (in_stack_00000018 != 0) {
    *(undefined8 *)(in_stack_00000018 + 0x80) = unaff_x22;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar2 = in_stack_00000018;
    FUN_03291548();
    if (lVar2 != 0) {
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0322ceac with catch @ 0322cf60
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 0322cebc with catch @ 0322cf64
                        */
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar2 + 0x20,0);
      lVar2 = in_stack_00000018;
                    /* try { // try from 0322cf7c to 0332cf7f has its CatchHandler @ 0322cfa8 */
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
            uVar4 = _DAT_00d35710;
            if (in_stack_00000018 != 0) {
              *(undefined8 *)(in_stack_00000018 + 0x18) = _UNK_00d35718;
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


