/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverVR.Locomotion$$AddDeltaRotation_Procedural
ENTRY_POINT: 029b79f4
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

void RootMotion_FinalIK_IKSolverVR_Locomotion__AddDeltaRotation_Procedural(void)

{
  ulong uVar1;
  undefined8 uVar2;
  code *in_x9;
  long *unaff_x19;
  long lVar3;
  long *in_stack_00000018;
  long in_stack_00000020;
  char in_stack_00000068;
  
  uVar2 = (*in_x9)();
  if (5 < *(uint *)(in_stack_00000020 + 0x18)) {
                    /* catch() { ... } // from try @ 029b79e4 with catch @ 029b7a10 */
    *(undefined8 *)(in_stack_00000020 + 0x48) = uVar2;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
                    /* try { // try from 029b7a20 to 02ab7a27 has its CatchHandler @ 029b7a3c */
    uVar2 = thunk_FUN_01a6ca08();
                    /* try { // try from 029b7a28 to 02ab7a33 has its CatchHandler @ 029b74a8 */
    if (6 < *(uint *)(in_stack_00000020 + 0x18)) {
                    /* try { // try from 029b7a34 to 02ab7a3b has its CatchHandler @ 029b7a3c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 029b79b8 with catch @ 029b7a3c
                       catch(type#2 @ 00000000) { ... } // from try @ 029b7a20 with catch @ 029b7a3c
                       catch(type#2 @ 00000000) { ... } // from try @ 029b7a34 with catch @ 029b7a3c
                        */
      *(undefined8 *)(in_stack_00000020 + 0x50) = uVar2;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
      uVar2 = (**(code **)(*in_stack_00000018 + 0x168))
                        (in_stack_00000018,*(undefined8 *)(*in_stack_00000018 + 0x170));
      if (7 < *(uint *)(in_stack_00000020 + 0x18)) {
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
            if ((*(int *)((long)unaff_x19 + 0x1c) != 0) && (*(int *)((long)unaff_x19 + 0x1c) != 3))
            {
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
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c44();
}


