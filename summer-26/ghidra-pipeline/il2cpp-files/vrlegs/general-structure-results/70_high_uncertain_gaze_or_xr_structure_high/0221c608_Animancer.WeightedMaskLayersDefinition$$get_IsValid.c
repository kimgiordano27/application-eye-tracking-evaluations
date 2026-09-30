/*
FUNCTION_NAME: Animancer.WeightedMaskLayersDefinition$$get_IsValid
ENTRY_POINT: 0221c608
PROGRAM: vrlegs-libil2cpp.so
SCORE: 75
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_gaze_retrieval_or_extraction
*/


/* WARNING: Removing unreachable block (ram,0x0221c788) */
/* WARNING: Removing unreachable block (ram,0x0221c704) */
/* WARNING: Removing unreachable block (ram,0x0221c77c) */
/* WARNING: Removing unreachable block (ram,0x0221c798) */
/* WARNING: Removing unreachable block (ram,0x0221c750) */

void Animancer_WeightedMaskLayersDefinition__get_IsValid(void)

{
  char cVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x21;
  long *in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long *in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000048;
  
  cVar1 = *(char *)(unaff_x19 + 0xb0);
  thunk_FUN_01a4b338();
  if (cVar1 == '\0') {
    if (*(long *)(unaff_x19 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    Animancer_FadeGroup__get_TargetWeight
              (*(long *)(unaff_x19 + 0x100),&stack0x00000008,
               *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x130));
    puVar2 = PTR_DAT_03cbed08;
    in_stack_00000028 = in_stack_00000010;
    in_stack_00000020 = in_stack_00000008;
    in_stack_00000030 = in_stack_00000018;
    while (uVar4 = FUN_021b51c8(&stack0x00000020,
                                *(undefined8 *)
                                 (*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x150)),
          (uVar4 & 1) != 0) {
      FUN_01b7a454(&stack0x00000020,&stack0x00000008,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x21 + 0x20) + 0xc0) + 0x140));
      plVar3 = in_stack_00000008;
      if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar6 = *in_stack_00000008;
      uVar4 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0221c6cc;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(in_stack_00000008,*(long *)puVar2,0);
LAB_0221c6cc:
      (*(code *)*puVar5)(plVar3,puVar5[1]);
    }
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
  }
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


