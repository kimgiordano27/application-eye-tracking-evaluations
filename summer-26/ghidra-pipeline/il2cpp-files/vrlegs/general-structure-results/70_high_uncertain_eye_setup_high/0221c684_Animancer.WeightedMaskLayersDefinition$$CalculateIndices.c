/*
FUNCTION_NAME: Animancer.WeightedMaskLayersDefinition$$CalculateIndices
ENTRY_POINT: 0221c684
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0221c788) */
/* WARNING: Removing unreachable block (ram,0x0221c704) */
/* WARNING: Removing unreachable block (ram,0x0221c77c) */
/* WARNING: Removing unreachable block (ram,0x0221c798) */
/* WARNING: Removing unreachable block (ram,0x0221c750) */

void Animancer_WeightedMaskLayersDefinition__CalculateIndices(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  int *piVar3;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  long *in_stack_00000008;
  undefined8 in_stack_00000048;
  
  do {
    uVar2 = (ulong)*(ushort *)(param_1 + 0x12e);
    if (uVar2 != 0) {
      piVar3 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar3 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(param_1 + (long)*piVar3 * 0x10 + 0x138);
          goto LAB_0221c648;
        }
        uVar2 = uVar2 - 1;
        piVar3 = piVar3 + 4;
      } while (uVar2 != 0);
    }
    puVar1 = (undefined8 *)FUN_01a472ec(unaff_x22,*unaff_x23,0);
LAB_0221c648:
    (*(code *)*puVar1)(unaff_x22,puVar1[1]);
    uVar2 = FUN_021b51c8(&stack0x00000020,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x150));
    if ((uVar2 & 1) == 0) {
      FUN_021b51c4(&stack0x00000020,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x158));
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
      if (in_stack_00000048._4_1_ != '\0') {
        OVRManager_<>c__<InitOVRManager>b__424_0();
      }
      if (unaff_x19 != 0) {
        FUN_029e814c();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_01b7a454(&stack0x00000020,&stack0x00000008,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x140));
    if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    param_1 = *in_stack_00000008;
    unaff_x22 = in_stack_00000008;
  } while( true );
}


