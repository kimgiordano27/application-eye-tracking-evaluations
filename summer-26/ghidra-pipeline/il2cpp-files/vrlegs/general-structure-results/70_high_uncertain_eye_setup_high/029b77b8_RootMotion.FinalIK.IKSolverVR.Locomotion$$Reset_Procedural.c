/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverVR.Locomotion$$Reset_Procedural
ENTRY_POINT: 029b77b8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x029b7b44) */

void RootMotion_FinalIK_IKSolverVR_Locomotion__Reset_Procedural(undefined8 *param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x19;
  long lVar4;
  undefined8 *puStack0000000000000010;
  long *in_stack_00000018;
  long in_stack_00000020;
  char in_stack_00000068;
  
  puStack0000000000000010 = param_1;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  uVar3 = (**(code **)(*in_stack_00000018 + 0x188))
                    (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 400));
                    /* try { // try from 029b77d8 to 02ab77df has its CatchHandler @ 029b79cc */
  if (9 < *(uint *)(puStack0000000000000010 + -9)) {
                    /* try { // try from 029b77e8 to 02ab77f3 has its CatchHandler @ 029b7960 */
    puStack0000000000000010 = (undefined8 *)(in_stack_00000020 + 0x68);
    *puStack0000000000000010 = uVar3;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    /* try { // try from 029b77f4 to 02ab797b has its CatchHandler @ 029b74a8 */
    uVar3 = thunk_FUN_01a6ca08();
    if (10 < *(uint *)(puStack0000000000000010 + -10)) {
      puStack0000000000000010 = (undefined8 *)(in_stack_00000020 + 0x70);
      *puStack0000000000000010 = uVar3;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar3 = (**(code **)(*in_stack_00000018 + 0x168))
                        (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x170));
      if (0xb < *(uint *)(puStack0000000000000010 + -0xb)) {
        *(undefined8 *)(in_stack_00000020 + 0x78) = uVar3;
        GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
        FUN_025be564(in_stack_00000020,0);
        FUN_02996df4();
        uVar1 = FUN_02eca19c(in_stack_00000018,0);
        *(undefined4 *)(unaff_x19 + 4) = uVar1;
        FUN_02996e0c();
        while( true ) {
          if (*(int *)((long)unaff_x19 + 0x1c) != 2) {
            lVar4 = unaff_x19[0xc];
            in_stack_00000068 = '\0';
            FUN_027e0bd8(lVar4,&stack0x00000068,0);
            if ((*(int *)((long)unaff_x19 + 0x1c) != 0) && (*(int *)((long)unaff_x19 + 0x1c) != 3))
            {
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
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


