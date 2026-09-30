/*
FUNCTION_NAME: OVRPlugin.OVRP_1_5_0$$ovrp_GetSystemRegion
ENTRY_POINT: 0696f908
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_5_0__ovrp_GetSystemRegion(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 *puVar5;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while( true ) {
    lVar3 = FUN_0694d460(param_1,param_2);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_0696faa4();
    in_stack_00000038._4_4_ = in_stack_00000038._4_4_ + 1;
    uVar1 = FUN_061c1964(&stack0x00000020,*unaff_x22);
    param_1 = in_stack_00000030;
    if ((uVar1 & 1) == 0) {
      FUN_061c1960(&stack0x00000020,*(undefined8 *)PTR_DAT_084b5ea0);
      plVar4 = *(long **)(unaff_x19 + 0x20);
      if (plVar4 != (long *)0x0) {
        puVar5 = (undefined8 *)(unaff_x19 + 0x28);
        (**(code **)(*plVar4 + 0x5e8))(plVar4,*puVar5,*(undefined8 *)(*plVar4 + 0x5f0));
        *puVar5 = *unaff_x21;
        thunk_FUN_03afed3c(puVar5);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    uVar2 = FUN_0674e2a4((long)&stack0x00000038 + 4,0);
    FUN_065c0764(*unaff_x23,uVar2,0);
    FUN_0696fa20();
    FUN_0696faa4();
    FUN_0696fa20();
    if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_0694d3e8(param_1,0);
    FUN_0696faa4();
    lVar3 = FUN_0694d3e8(param_1,0);
    if (lVar3 == 0) break;
    FUN_0696faa4();
    FUN_0696fa20();
    FUN_0694d460(param_1,0);
    FUN_0696faa4();
    param_2 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


