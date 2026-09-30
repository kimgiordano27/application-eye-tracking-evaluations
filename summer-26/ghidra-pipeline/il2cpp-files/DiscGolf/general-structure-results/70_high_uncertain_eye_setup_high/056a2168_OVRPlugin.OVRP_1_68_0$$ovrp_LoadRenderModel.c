/*
FUNCTION_NAME: OVRPlugin.OVRP_1_68_0$$ovrp_LoadRenderModel
ENTRY_POINT: 056a2168
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


bool OVRPlugin_OVRP_1_68_0__ovrp_LoadRenderModel(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int in_w9;
  long unaff_x19;
  long unaff_x21;
  undefined8 in_stack_00000018;
  
  if (in_w9 == 0) {
    thunk_FUN_02df485c(param_1);
  }
  uVar3 = FUN_054a874c();
  in_stack_00000018 = FUN_0540bf88();
  if (unaff_x19 != 0) {
    uVar1 = FUN_05661968();
    uVar4 = FUN_0540beb8(&stack0x00000018,0);
    if (unaff_x21 != 0) {
      if (*(int *)(*(long *)PTR_DAT_06a0f1a0 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      iVar2 = FUN_0564aff8(uVar1,uVar4,*(undefined4 *)(unaff_x21 + 0x18),uVar3,&stack0x0000000c,0);
      FUN_0540bf9c(&stack0x00000018,0);
      return iVar2 == 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


