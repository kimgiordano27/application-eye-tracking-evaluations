/*
FUNCTION_NAME: FUN_0341e83c
ENTRY_POINT: 0341e83c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_0341e83c(long param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_DAT_072794f0;
  if ((DAT_076cdebc & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0727a140);
                    /* try { // try from 0341e874 to 0351e87b has its CatchHandler @ 0341ee3c */
    thunk_FUN_032e1da0(PTR_DAT_072794f0);
                    /* try { // try from 0341e87c to 0351e93f has its CatchHandler @ 0341e71c */
    thunk_FUN_032e1da0(PTR_DAT_0727a150);
    thunk_FUN_032e1da0(PTR_DAT_0727a7c0);
    thunk_FUN_032e1da0(PTR_DAT_0727a7c8);
    DAT_076cdebc = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  uVar2 = FUN_06be9890(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_1 + 0x50) == 0) goto LAB_0341e9d0;
    FUN_06be9a98(*(long *)(param_1 + 0x50),0,0);
  }
  if (param_2 != 0) {
    uVar2 = OVRPlugin_OVRP_1_58_0___cctor(param_2,0);
    if ((uVar2 & 1) == 0) {
      lVar4 = FUN_05dc47ec(0);
      uVar5 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0727a140);
                    /* try { // try from 0341e98c to 0351e993 has its CatchHandler @ 0341ee34 */
                    /* try { // try from 0341e994 to 0351e9fb has its CatchHandler @ 0341e71c */
      FUN_04bf4290(uVar5,param_1,*(undefined8 *)PTR_DAT_0727a7c0,0);
      if (lVar4 != 0) {
        FUN_0498244c(lVar4,uVar5,*(undefined8 *)PTR_DAT_0727a150);
        return;
      }
    }
    else if (*(long *)(param_1 + 0x48) != 0) {
      FUN_06be9a98(*(long *)(param_1 + 0x48),1,0);
      plVar3 = *(long **)(param_1 + 0x40);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x2a8))
                  (0x3f800000,DAT_0139fd8c,DAT_0139fee0,0x3f800000,plVar3,
                   *(undefined8 *)(*plVar3 + 0x2b0));
        plVar3 = *(long **)(param_1 + 0x40);
                    /* try { // try from 0341e940 to 0351e953 has its CatchHandler @ 0341ee38 */
        if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0341e968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x558))
                    (plVar3,*(undefined8 *)PTR_DAT_0727a7c8,*(undefined8 *)(*plVar3 + 0x560));
          return;
        }
      }
    }
  }
LAB_0341e9d0:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


