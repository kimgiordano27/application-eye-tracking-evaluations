/*
FUNCTION_NAME: OVRPlugin$$SetControllerHaptics
ENTRY_POINT: 07c75cf4
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__SetControllerHaptics(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *unaff_x24;
  undefined1 unaff_w25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  long unaff_x29;
  undefined4 uVar5;
  float unaff_s8;
  undefined8 in_stack_00000028;
  
  do {
    lVar2 = *unaff_x24;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x28) {
          puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 4) * 0x10 + 0x138);
          goto LAB_07c75d50;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_044822ac(unaff_x24,*unaff_x28,4);
LAB_07c75d50:
    uVar5 = (*(code *)*puVar1)(unaff_x24,puVar1[1]);
    while( true ) {
      if (unaff_x29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44(uVar5);
      }
      FUN_07c74a4c();
      if (unaff_s8 < in_stack_00000028._4_4_) {
        if (*(long *)(unaff_x19 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        FUN_07c6c6cc(*(long *)(unaff_x19 + 0x138),*unaff_x22,0);
        if (*(long *)(unaff_x19 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        FUN_07c6c6cc(*(long *)(unaff_x19 + 0x140),*unaff_x23,0);
        *(undefined1 *)(unaff_x19 + 0x168) = unaff_w25;
        unaff_x20 = unaff_x21;
        unaff_s8 = in_stack_00000028._4_4_;
      }
      uVar3 = FUN_05261068(&stack0x00000030,*unaff_x26);
      if ((uVar3 & 1) == 0) {
        FUN_05261304(&stack0x00000030,*(undefined8 *)PTR_DAT_09f50758);
        return unaff_x20;
      }
      unaff_x29 = FUN_05260f24(&stack0x00000030,*unaff_x27);
      unaff_x24 = *(long **)(unaff_x19 + 0x120);
      unaff_x21 = unaff_x29;
      if (unaff_x24 != (long *)0x0) break;
      uVar5 = 0x3f800000;
    }
  } while( true );
}


