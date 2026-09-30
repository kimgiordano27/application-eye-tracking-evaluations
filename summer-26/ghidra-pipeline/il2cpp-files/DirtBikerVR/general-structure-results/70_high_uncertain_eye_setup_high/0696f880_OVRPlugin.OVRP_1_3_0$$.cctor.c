/*
FUNCTION_NAME: OVRPlugin.OVRP_1_3_0$$.cctor
ENTRY_POINT: 0696f880
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


void OVRPlugin_OVRP_1_3_0___cctor(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x19;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  
  while( true ) {
    FUN_0696faa4();
    FUN_0696fa20();
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_0694d3e8(unaff_x20,0);
    FUN_0696faa4();
    lVar3 = FUN_0694d3e8(unaff_x20,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_0696faa4();
    FUN_0696fa20();
    FUN_0694d460(unaff_x20,0);
    FUN_0696faa4();
    lVar3 = FUN_0694d460(unaff_x20,0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    FUN_0696faa4();
    in_stack_00000038._4_4_ = in_stack_00000038._4_4_ + 1;
    uVar1 = FUN_061c1964(&stack0x00000020,*unaff_x22);
    unaff_x20 = in_stack_00000030;
    if ((uVar1 & 1) == 0) break;
    uVar2 = FUN_0674e2a4((long)&stack0x00000038 + 4,0);
    FUN_065c0764(*unaff_x23,uVar2,0);
    FUN_0696fa20();
  }
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


