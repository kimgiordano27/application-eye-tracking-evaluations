/*
FUNCTION_NAME: OVRPlugin$$set_useIPDInPositionTracking
ENTRY_POINT: 06006950
PROGRAM: vandalizer-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__set_useIPDInPositionTracking(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  long *plVar6;
  undefined1 unaff_w25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined4 uVar7;
  float unaff_s8;
  undefined8 in_stack_00000028;
  
  do {
    lVar1 = FUN_05afd044(&stack0x00000030,*unaff_x27);
    plVar6 = *(long **)(unaff_x19 + 0x120);
    if (plVar6 == (long *)0x0) {
      uVar7 = 0x3f800000;
    }
    else {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x28) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_060069cc;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_0322c1e8(plVar6,*unaff_x28,4);
LAB_060069cc:
      uVar7 = (*(code *)*puVar2)(plVar6,puVar2[1]);
    }
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_031f2390(uVar7);
    }
    FUN_060056c8();
    if (unaff_s8 < in_stack_00000028._4_4_) {
      if (*(long *)(unaff_x19 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      FUN_05ffd42c(*(long *)(unaff_x19 + 0x138),*unaff_x22,0);
      if (*(long *)(unaff_x19 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_031f2390();
      }
      FUN_05ffd42c(*(long *)(unaff_x19 + 0x140),*unaff_x23,0);
      *(undefined1 *)(unaff_x19 + 0x168) = unaff_w25;
      unaff_x20 = lVar1;
      unaff_s8 = in_stack_00000028._4_4_;
    }
    uVar4 = FUN_05afd188(&stack0x00000030,*unaff_x26);
    if ((uVar4 & 1) == 0) {
      FUN_05afd424(&stack0x00000030,*(undefined8 *)PTR_DAT_075f7208);
      return unaff_x20;
    }
  } while( true );
}


