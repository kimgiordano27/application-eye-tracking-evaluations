/*
FUNCTION_NAME: Unity.Physics.Authoring.StaticOptimizeBakingSystem.__codegen__OnUpdate_000001C8$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 0322d25c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;ui_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
Unity_Physics_Authoring_StaticOptimizeBakingSystem___codegen__OnUpdate_000001C8_PostfixBurstDelegate__Invoke
          (ulong param_1,undefined8 param_2)

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
  
  if ((param_1 & 1) == 0) {
    FUN_01ab69ac(UnityEngine_Vector3___TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cd8408);
    FUN_01ab69ac(PTR_DAT_03cc2890);
    FUN_01ab69ac(RootMotion_FinalIK_IKSolverVR_VirtualBone___TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x69b) = 1;
  }
  uVar3 = thunk_FUN_01a89e68(*unaff_x24);
  FUN_0328bf70(uVar3,0);
  in_stack_00000018 = FUN_031fffac(uVar3,0);
  in_stack_00000018 = FUN_0320509c(&stack0x00000018,param_2,0x7e,0);
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
            uVar4 = _DAT_00d35fb0;
            if (in_stack_00000018 != 0) {
              *(undefined8 *)(in_stack_00000018 + 0x18) = _UNK_00d35fb8;
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


