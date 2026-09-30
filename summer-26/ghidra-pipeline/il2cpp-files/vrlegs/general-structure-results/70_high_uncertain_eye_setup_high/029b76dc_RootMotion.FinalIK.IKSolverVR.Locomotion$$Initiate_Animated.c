/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverVR.Locomotion$$Initiate_Animated
ENTRY_POINT: 029b76dc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029b7b44) */

void RootMotion_FinalIK_IKSolverVR_Locomotion__Initiate_Animated(undefined4 param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long lVar4;
  long *in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined4 in_stack_00000060;
  char in_stack_00000068;
  undefined4 uStack000000000000006c;
  
  uStack000000000000006c = param_1;
  uVar3 = FUN_0276793c(&stack0x0000006c,0);
  if (5 < *(uint *)(in_stack_00000020 + 0x18)) {
    *(undefined8 *)(in_stack_00000020 + 0x48) = uVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    uVar3 = thunk_FUN_01a6ca08();
    if (6 < *(uint *)(in_stack_00000020 + 0x18)) {
      *(undefined8 *)(in_stack_00000020 + 0x50) = uVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar1 = FUN_02eca19c(in_stack_00000018,0);
      in_stack_00000028 = thunk_FUN_01a6ca08();
      in_stack_00000030 = 0xffffffffffffffff;
      in_stack_00000038 = uVar1;
      uVar3 = FUN_027a62b8(&stack0x00000028,0);
      if (7 < *(uint *)(in_stack_00000020 + 0x18)) {
        *(undefined8 *)(in_stack_00000020 + 0x58) = uVar3;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        uVar3 = thunk_FUN_01a6ca08();
        if (8 < *(uint *)(in_stack_00000020 + 0x18)) {
          *(undefined8 *)(in_stack_00000020 + 0x60) = uVar3;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          uVar3 = (**(code **)(*in_stack_00000018 + 0x188))
                            (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 400));
          if (9 < *(uint *)(in_stack_00000020 + 0x18)) {
            *(undefined8 *)(in_stack_00000020 + 0x68) = uVar3;
            GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
            uVar3 = thunk_FUN_01a6ca08();
            if (10 < *(uint *)(in_stack_00000020 + 0x18)) {
              *(undefined8 *)(in_stack_00000020 + 0x70) = uVar3;
              GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
              uVar3 = (**(code **)(*in_stack_00000018 + 0x168))
                                (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x170));
              if (0xb < *(uint *)(in_stack_00000020 + 0x18)) {
                *(undefined8 *)(in_stack_00000020 + 0x78) = uVar3;
                GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                FUN_025be564(in_stack_00000020,0);
                FUN_02996df4();
                uVar1 = FUN_02eca19c(in_stack_00000018,0);
                *(undefined4 *)(unaff_x19 + 4) = uVar1;
                FUN_02996e0c();
                while( true ) {
                  if (*(int *)((long)unaff_x19 + 0x1c) != 2) {
                    in_stack_00000060 = 0;
                    lVar4 = unaff_x19[0xc];
                    in_stack_00000068 = '\0';
                    FUN_027e0bd8(lVar4,&stack0x00000068,0);
                    if ((*(int *)((long)unaff_x19 + 0x1c) != 0) &&
                       (*(int *)((long)unaff_x19 + 0x1c) != 3)) {
                      (**(code **)(*unaff_x19 + 0x188))();
                    }
                    if (in_stack_00000068 != '\0') {
                      OVRManager_<>c__<InitOVRManager>b__424_0(lVar4,0);
                    }
                    return;
                  }
                  if (unaff_x19[0xb] == 0) break;
                  uVar2 = FUN_02ec33f0(unaff_x19[0xb],5000,0,0);
                  if ((uVar2 & 1) != 0) {
                    if (unaff_x19[0xb] == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_01ab6c3c();
                    }
                    FUN_02ec184c();
                    FUN_0299686c();
                  }
                }
                    /* WARNING: Subroutine does not return */
                FUN_01ab6c3c();
              }
            }
          }
        }
      }
    }
  }
  in_stack_00000060 = 1;
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


