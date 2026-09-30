/*
FUNCTION_NAME: RootMotion.FinalIK.IKSolverAim$$get_transformAxis
ENTRY_POINT: 033c33e8
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


void RootMotion_FinalIK_IKSolverAim__get_transformAxis(long param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  if ((DAT_076cd801 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727a288);
    thunk_FUN_032e1da0(PTR_DAT_072798f8);
    thunk_FUN_032e1da0(PTR_DAT_0727a290);
    thunk_FUN_032e1da0(PTR_DAT_0727a298);
    thunk_FUN_032e1da0(PTR_DAT_0727a2a0);
    thunk_FUN_032e1da0(PTR_DAT_0727a2a8);
    thunk_FUN_032e1da0(PTR_DAT_0727a2b0);
    thunk_FUN_032e1da0(PTR_DAT_0727a2b8);
    DAT_076cd801 = 1;
  }
  if (param_2 != (long *)0x0) {
    uVar1 = OVRPlugin_OVRP_1_58_0___cctor(param_2,0);
    if ((uVar1 & 1) == 0) {
      if (param_2[5] != 0) {
        local_38 = *(undefined8 *)PTR_DAT_0727a288;
        uStack_30 = 0xffffffffffffffff;
        local_28 = *(undefined4 *)(param_2[5] + 0x10);
        lVar2 = FUN_059596b4(&local_38,0);
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
          lVar2 = *(long *)(param_1 + 0x28);
          if (lVar2 != 0) {
            if ((uVar1 & 1) == 0) {
              FUN_06e0380c(lVar2,1,0);
              return;
            }
            FUN_06e0380c(lVar2,0,0);
            if ((*(long *)(param_1 + 0x20) != 0) &&
               (lVar2 = FUN_06be6b40(*(long *)(param_1 + 0x20),0), lVar2 != 0)) {
              FUN_06be9a98(lVar2,1,0);
              plVar5 = *(long **)(param_1 + 0x20);
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
      lVar2 = (**(code **)(*param_2 + 0x178))(param_2,*(undefined8 *)(*param_2 + 0x180));
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


