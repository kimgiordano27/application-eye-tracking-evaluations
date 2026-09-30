/*
FUNCTION_NAME: Unity.Physics.Authoring.StaticOptimizeBakingSystem.__codegen__OnDestroy_000001C9$PostfixBurstDelegate$$.ctor
ENTRY_POINT: 0322d498
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_10;ray_or_cast_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Unity_Physics_Authoring_StaticOptimizeBakingSystem___codegen__OnDestroy_000001C9_PostfixBurstDelegate___ctor
               (undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  undefined8 *puVar4;
  long lStack0000000000000018;
  
  lStack0000000000000018 = param_1;
  lStack0000000000000018 = FUN_0320509c(&stack0x00000018);
  if (lStack0000000000000018 != 0) {
    *(undefined8 *)(lStack0000000000000018 + 0x80) = unaff_x22;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    lVar2 = lStack0000000000000018;
    FUN_03291548();
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(lVar2 + 0x20,0);
      lVar2 = lStack0000000000000018;
      FUN_03291548();
      uVar3 = FUN_03291a94(0,0,0);
      if (lVar2 != 0) {
        puVar4 = (undefined8 *)(lVar2 + 0x40);
        *puVar4 = uVar3;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,uVar3);
        lVar2 = lStack0000000000000018;
        FUN_03291548();
        uVar3 = FUN_03291a94(0,0,0);
        if (lVar2 != 0) {
          puVar4 = (undefined8 *)(lVar2 + 0x50);
          *puVar4 = uVar3;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar4,uVar3);
          if (lStack0000000000000018 != 0) {
            *(undefined8 *)(lStack0000000000000018 + 0x58) = unaff_x21;
            *(undefined8 *)(lStack0000000000000018 + 0x60) = unaff_x20;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists
                      ((undefined8 *)(lStack0000000000000018 + 0x58),0);
            if (lStack0000000000000018 != 0) {
              FUN_031fdcac(lStack0000000000000018,1,0);
              if (lStack0000000000000018 != 0) {
                FUN_031feea4(lStack0000000000000018,1,0);
                puVar1 = PTR_DAT_03cd8408;
                if ((lStack0000000000000018 != 0) && (*(long *)(lStack0000000000000018 + 0x78) != 0)
                   ) {
                  FUN_03200e70(*(long *)(lStack0000000000000018 + 0x78),1,0);
                  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
                    thunk_FUN_01a58e78();
                  }
                  uVar3 = _DAT_00d36c60;
                  if (lStack0000000000000018 != 0) {
                    *(undefined8 *)(lStack0000000000000018 + 0x18) = _UNK_00d36c68;
                    *(undefined8 *)(lStack0000000000000018 + 0x10) = uVar3;
                    FUN_031fee4c(lStack0000000000000018,1,0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


