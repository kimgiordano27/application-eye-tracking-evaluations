/*
FUNCTION_NAME: Animancer.WeightedMaskLayers$$FadeWeights
ENTRY_POINT: 0221c7dc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0221c87c) */
/* WARNING: Removing unreachable block (ram,0x0221c77c) */
/* WARNING: Removing unreachable block (ram,0x0221c844) */

void Animancer_WeightedMaskLayers__FadeWeights(undefined8 param_1)

{
  long *plVar1;
  long unaff_x19;
  long unaff_x21;
  long lVar2;
  int iVar3;
  int unaff_w23;
  undefined8 in_stack_00000048;
  
  if (unaff_w23 == 1) {
    plVar1 = (long *)__cxa_begin_catch(param_1);
    lVar2 = *plVar1;
    __cxa_end_catch();
    FUN_021b51c4(&stack0x00000020,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x158));
    if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar2);
    }
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_029e814c();
    if (*(long *)(unaff_x19 + 0x118) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_027de940(*(long *)(unaff_x19 + 0x118),0);
    lVar2 = 0;
    iVar3 = 6;
  }
  else {
    FUN_021b51c4(&stack0x00000020,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x158));
    if (unaff_w23 != 1) {
      if (in_stack_00000048._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b3fef0(param_1);
    }
    plVar1 = (long *)__cxa_begin_catch(param_1);
    lVar2 = *plVar1;
    __cxa_end_catch();
    iVar3 = 0;
  }
  if (in_stack_00000048._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01a28d1c(lVar2);
  }
  if ((iVar3 == 6) || (iVar3 == 0)) {
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_029e814c();
  }
  return;
}


