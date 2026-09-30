/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverAim$$OnInitiate
ENTRY_POINT: 033c3448
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void RootMotion_FinalIK_IKSolverAim__OnInitiate(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 in_stack_00000018;
  
  thunk_FUN_032e1da0(*(undefined8 *)(param_1 + 0x2a8));
  thunk_FUN_032e1da0(PTR_DAT_0727a2b0);
  thunk_FUN_032e1da0(PTR_DAT_0727a2b8);
  *(undefined1 *)(unaff_x21 + 0x801) = 1;
  if (unaff_x20 != (long *)0x0) {
    uVar1 = OVRPlugin_OVRP_1_58_0___cctor();
    if ((uVar1 & 1) == 0) {
      if (unaff_x20[5] != 0) {
        in_stack_00000008 = *(undefined8 *)PTR_DAT_0727a288;
        in_stack_00000010 = 0xffffffffffffffff;
        in_stack_00000018 = *(undefined4 *)(unaff_x20[5] + 0x10);
        lVar2 = FUN_059596b4(&stack0x00000008,0);
        if (lVar2 != 0) {
          uVar3 = FUN_057af1b4(lVar2,0);
          uVar4 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0727a2b8,uVar3,0);
          if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
            thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
          }
          FUN_06bb23f0(uVar4,0);
          FUN_06be4110(*(undefined8 *)PTR_DAT_0727a2a8,uVar3,0);
          FUN_06be42c8(0);
          uVar1 = thunk_FUN_057aa644(uVar3,*(undefined8 *)PTR_DAT_0727a298,0);
          lVar2 = *(long *)(unaff_x19 + 0x28);
          if (lVar2 != 0) {
            if ((uVar1 & 1) == 0) {
              FUN_06e0380c(lVar2,1,0);
              return;
            }
            FUN_06e0380c(lVar2,0,0);
            if ((*(long *)(unaff_x19 + 0x20) != 0) &&
               (lVar2 = FUN_06be6b40(*(long *)(unaff_x19 + 0x20),0), lVar2 != 0)) {
              FUN_06be9a98(lVar2,1,0);
              plVar5 = *(long **)(unaff_x19 + 0x20);
              if (plVar5 != (long *)0x0) {
                (**(code **)(*plVar5 + 0x558))
                          (plVar5,*(undefined8 *)PTR_DAT_0727a2a0,*(undefined8 *)(*plVar5 + 0x560));
                return;
              }
            }
          }
        }
      }
    }
    else {
      lVar2 = (**(code **)(*unaff_x20 + 0x178))();
      if (lVar2 != 0) {
        uVar3 = FUN_057a19ac(*(undefined8 *)PTR_DAT_0727a2b0,*(undefined8 *)(lVar2 + 0x18),0);
        if (*(int *)(*(long *)PTR_DAT_072798f8 + 0xe0) == 0) {
          thunk_FUN_032cd7c0(*(long *)PTR_DAT_072798f8);
        }
        FUN_06bb2a00(uVar3,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


