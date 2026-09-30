/*
FUNCTION_NAME: Animancer.WeightedMaskLayers.Fade$$ApplyFade
ENTRY_POINT: 0221cb4c
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


/* WARNING: Removing unreachable block (ram,0x0221cc28) */

void Animancer_WeightedMaskLayers_Fade__ApplyFade(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint in_w8;
  long in_x9;
  long unaff_x19;
  long unaff_x21;
  long *plVar3;
  int unaff_w23;
  undefined8 in_stack_00000008;
  
  while( true ) {
    if (in_x9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    if (*(uint *)(in_x9 + 0x18) <= in_w8) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c44();
    }
    puVar1 = (undefined8 *)(in_x9 + (ulong)in_w8 * 8 + 0x20);
    plVar3 = (long *)*puVar1;
    *puVar1 = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists(puVar1,0);
    if (unaff_x21 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    uVar2 = FUN_02726974();
    if ((uVar2 & 1) != 0) {
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      (**(code **)(*plVar3 + 0x158))(plVar3,*(undefined8 *)(*plVar3 + 0x160));
      FUN_02738750();
    }
    if (*(int *)(unaff_x19 + 0x18) < 1) break;
    unaff_w23 = unaff_w23 + -1;
    if (unaff_w23 < 1) {
      if (*(uint *)(unaff_x19 + 0x1c) < 0xffffc567) {
        *(uint *)(unaff_x19 + 0x1c) = *(uint *)(unaff_x19 + 0x1c) + 15000;
      }
      break;
    }
    in_x9 = *(long *)(unaff_x19 + 0x10);
    in_w8 = *(int *)(unaff_x19 + 0x18) - 1;
    *(uint *)(unaff_x19 + 0x18) = in_w8;
  }
  if (in_stack_00000008._4_1_ != '\0') {
    OVRManager_<>c__<InitOVRManager>b__424_0();
  }
  return;
}


