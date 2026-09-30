/*
FUNCTION_NAME: Oculus.Avatar2.OvrPluginTracking$$ovrpTracking_Initialize
ENTRY_POINT: 05b8103c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Oculus_Avatar2_OvrPluginTracking__ovrpTracking_Initialize(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x21;
  
  plVar3 = *(long **)(unaff_x20 + 0x4f0);
  if ((param_1 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
    thunk_FUN_032e1da0(PTR_DAT_072a60b0);
    thunk_FUN_032e1da0(PTR_DAT_072a60b8);
    thunk_FUN_032e1da0(PTR_DAT_072a60c0);
    thunk_FUN_032e1da0(PTR_DAT_072a60f8);
    thunk_FUN_032e1da0(PTR_DAT_072a6100);
    thunk_FUN_032e1da0(PTR_DAT_072a6108);
    thunk_FUN_032e1da0(PTR_DAT_072a60e0);
    thunk_FUN_032e1da0(PTR_DAT_072a60e8);
    thunk_FUN_032e1da0(PTR_DAT_072a60f0);
    *(undefined1 *)(unaff_x21 + 0x889) = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  if (*(int *)(*plVar3 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar1 = FUN_06bece64(uVar4,0,0);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    lVar2 = FUN_05a9e348(*(long *)(param_2 + 0x28),0);
    uVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072a60f0);
    FUN_04ae8f88(uVar4,param_2,*(undefined8 *)PTR_DAT_072a60c0,0);
    if (lVar2 != 0) {
      FUN_03b5e9f0(lVar2,uVar4,*(undefined8 *)PTR_DAT_072a60f8);
      if (*(long *)(param_2 + 0x28) != 0) {
        lVar2 = FUN_05a9e348(*(long *)(param_2 + 0x28),0);
        uVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072a60e8);
        FUN_04ae9104(uVar4,param_2,*(undefined8 *)PTR_DAT_072a60b8,0);
        if (lVar2 != 0) {
          FUN_03b5ea70(lVar2,uVar4,*(undefined8 *)PTR_DAT_072a6100);
          if (*(long *)(param_2 + 0x28) != 0) {
            lVar2 = FUN_05a9e348(*(long *)(param_2 + 0x28),0);
            uVar4 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_072a60e0);
            FUN_04ae96ec(uVar4,param_2,*(undefined8 *)PTR_DAT_072a60b0,0);
            if (lVar2 != 0) {
              FUN_03b5ebf0(lVar2,uVar4,*(undefined8 *)PTR_DAT_072a6108);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


