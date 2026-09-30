/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverVR.Locomotion$$Relax
ENTRY_POINT: 029b79a4
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029b7b44) */

void RootMotion_FinalIK_IKSolverVR_Locomotion__Relax(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x19;
  long *plStack0000000000000010;
  long *in_stack_00000018;
  long in_stack_00000020;
  char in_stack_00000068;
  
  plStack0000000000000010 = (long *)(in_stack_00000020 + 0x38);
  *plStack0000000000000010 = unaff_x19[6];
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar2 = thunk_FUN_01a6ca08();
  if (4 < *(uint *)(plStack0000000000000010 + -4)) {
    *(undefined8 *)(in_stack_00000020 + 0x40) = uVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    if (in_stack_00000018 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar3 = (**(code **)(*in_stack_00000018 + 0x188))
                      (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 400));
    if (5 < *(uint *)(in_stack_00000020 + 0x18)) {
      plStack0000000000000010 = (long *)(in_stack_00000020 + 0x48);
      *plStack0000000000000010 = lVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      lVar3 = thunk_FUN_01a6ca08();
      if (6 < *(uint *)(plStack0000000000000010 + -6)) {
        plStack0000000000000010 = (long *)(in_stack_00000020 + 0x50);
        *plStack0000000000000010 = lVar3;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        uVar2 = (**(code **)(*in_stack_00000018 + 0x168))
                          (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x170));
        if (7 < *(uint *)(plStack0000000000000010 + -7)) {
          *(undefined8 *)(in_stack_00000020 + 0x58) = uVar2;
          GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
          FUN_025be564(in_stack_00000020,0);
          FUN_02996df4();
          FUN_02996e0c();
          while( true ) {
            if (*(int *)((long)unaff_x19 + 0x1c) != 2) {
              lVar3 = unaff_x19[0xc];
              in_stack_00000068 = '\0';
              FUN_027e0bd8(lVar3,&stack0x00000068,0);
              if ((*(int *)((long)unaff_x19 + 0x1c) != 0) && (*(int *)((long)unaff_x19 + 0x1c) != 3)
                 ) {
                (**(code **)(*unaff_x19 + 0x188))();
              }
              if (in_stack_00000068 != '\0') {
                OVRManager_<>c__<InitOVRManager>b__424_0(lVar3,0);
              }
              return;
            }
            if (unaff_x19[0xb] == 0) break;
            uVar1 = FUN_02ec33f0(unaff_x19[0xb],5000,0,0);
            if ((uVar1 & 1) != 0) {
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
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


