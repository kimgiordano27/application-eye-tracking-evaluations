/*
FUNCTION_NAME: OVRPlugin.OVRP_1_104_0$$ovrp_GetFaceVisemesState
ENTRY_POINT: 056a7d8c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_104_0__ovrp_GetFaceVisemesState(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long in_x9;
  long lVar3;
  undefined4 unaff_w20;
  long in_stack_00000098;
  
  if (in_x9 != 0) {
    lVar3 = *(long *)(in_x9 + 0x30);
    if ((lVar3 == 0) ||
       (uVar1 = (**(code **)(lVar3 + 0x18))
                          (*(undefined8 *)(lVar3 + 0x40),unaff_w20,param_1 + 0x18,param_1 + 0x10,
                           *(undefined8 *)(in_x9 + 0x38),*(undefined8 *)(lVar3 + 0x28)),
       (uVar1 & 1) == 0)) {
      uVar2 = 0;
    }
    else {
      if ((in_stack_00000098 == 0) || (*(long *)(in_stack_00000098 + 0x18) == 0)) goto LAB_056a7df8;
      FUN_056a6df8();
      uVar2 = 1;
    }
    return uVar2;
  }
LAB_056a7df8:
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


