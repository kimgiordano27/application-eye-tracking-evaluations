/*
FUNCTION_NAME: OVRPlugin.OVRP_1_1_0$$ovrp_SetUserEyeHeight
ENTRY_POINT: 02813d54
PROGRAM: vrlegs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_1_0__ovrp_SetUserEyeHeight(long param_1,undefined4 param_2)

{
  long lVar1;
  long unaff_x21;
  long *plVar2;
  int *piVar3;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  if ((*(byte *)(unaff_x21 + 0x361) & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfdcb8);
    FUN_01ab69ac(PTR_DAT_03cfdcc0);
    FUN_01ab69ac(PTR_DAT_03cfdcc8);
    *(undefined1 *)(unaff_x21 + 0x361) = 1;
  }
  piVar3 = (int *)(param_1 + 0x18);
  if (*piVar3 != 0) {
    plVar2 = (long *)(param_1 + 0x10);
    if (*plVar2 == 0) {
      lVar1 = thunk_FUN_01a89e68(*(undefined8 *)PTR_DAT_03cfdcc8);
      Animancer_AnimancerState__OnSetIsPlaying(lVar1,*(undefined8 *)PTR_DAT_03cfdcc0);
      *plVar2 = lVar1;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists(plVar2,lVar1);
      in_stack_00000030 = *(undefined8 *)(param_1 + 0x28);
      in_stack_00000028 = *(undefined8 *)(param_1 + 0x20);
      in_stack_00000020 = *(undefined8 *)piVar3;
      if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
    }
    else {
      in_stack_00000030 = *(undefined8 *)(param_1 + 0x28);
      in_stack_00000028 = *(undefined8 *)(param_1 + 0x20);
      in_stack_00000020 = *(undefined8 *)piVar3;
    }
    FUN_01b5f01c();
  }
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  FUN_0280283c(&stack0x00000020,param_2,0);
  *(undefined8 *)(param_1 + 0x28) = in_stack_00000030;
  *(undefined8 *)(param_1 + 0x20) = in_stack_00000028;
  *(undefined8 *)piVar3 = in_stack_00000020;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(param_1 + 0x20,0);
  return;
}


