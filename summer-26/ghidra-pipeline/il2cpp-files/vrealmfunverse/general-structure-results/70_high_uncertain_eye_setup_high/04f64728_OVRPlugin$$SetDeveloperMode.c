/*
FUNCTION_NAME: OVRPlugin$$SetDeveloperMode
ENTRY_POINT: 04f64728
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__SetDeveloperMode(undefined1 *param_1,undefined8 param_2)

{
  float fVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  long *plVar7;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined1 unaff_w28;
  undefined4 uVar8;
  float unaff_s8;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000098;
  
  do {
    uVar2 = FUN_047e3f3c(param_1,param_2);
    if ((uVar2 & 1) == 0) {
      FUN_047e41f8(in_stack_00000010,*unaff_x23);
      if (in_stack_00000008 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cabc(in_stack_00000008);
      }
      return unaff_x20;
    }
    lVar3 = FUN_047e3de4(&stack0x00000040,*unaff_x25);
    plVar7 = *(long **)(unaff_x19 + 0x120);
    if (plVar7 == (long *)0x0) {
      uVar8 = 0x3f800000;
    }
    else {
      lVar5 = *plVar7;
      uVar2 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar2 != 0) {
        piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x26) {
            puVar4 = (undefined8 *)(lVar5 + (long)(*piVar6 + 4) * 0x10 + 0x138);
            goto LAB_04f647ac;
          }
          uVar2 = uVar2 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar2 != 0);
      }
      puVar4 = (undefined8 *)FUN_02b7654c(plVar7,*unaff_x26,4);
LAB_04f647ac:
      uVar8 = (*(code *)*puVar4)(plVar7,puVar4[1]);
    }
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02b3cac4(uVar8);
    }
    FUN_04f63490(lVar3,unaff_x19 + 0x148,unaff_x19 + 0x150,(long)&stack0x00000098 + 4);
    fVar1 = in_stack_00000098._4_4_;
    if (unaff_s8 < in_stack_00000098._4_4_) {
      if (*(long *)(unaff_x19 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04f5b230(*(long *)(unaff_x19 + 0x138),*(undefined8 *)(unaff_x19 + 0x148),0);
      if (*(long *)(unaff_x19 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02b3cac4();
      }
      FUN_04f5b230(*(long *)(unaff_x19 + 0x140),*(undefined8 *)(unaff_x19 + 0x150),0);
      *(undefined1 *)(unaff_x19 + 0x168) = unaff_w28;
      unaff_x20 = lVar3;
      unaff_s8 = fVar1;
    }
    param_2 = *unaff_x24;
    param_1 = &stack0x00000040;
  } while( true );
}


