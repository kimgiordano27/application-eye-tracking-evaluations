/*
FUNCTION_NAME: OVRPlugin$$GetControllerState4
ENTRY_POINT: 051b4b98
PROGRAM: hellodot-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetControllerState4(void)

{
  undefined *puVar1;
  float fVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  code *in_x9;
  int *piVar7;
  long unaff_x19;
  undefined8 *unaff_x20;
  long lVar8;
  long *plVar9;
  undefined8 *unaff_x26;
  long unaff_x27;
  undefined8 *puVar10;
  undefined8 uVar11;
  float fVar12;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  puVar1 = PTR_DAT_065d65c0;
  puVar10 = *(undefined8 **)(unaff_x27 + 0xa88);
  (*in_x9)(&stack0x00000008);
  in_stack_00000060 = in_stack_00000018;
  in_stack_00000058 = in_stack_00000010;
  in_stack_00000050 = in_stack_00000008;
  FUN_036c00a0(&stack0x00000008,&stack0x00000050,*unaff_x20);
  in_stack_00000038 = in_stack_00000010;
  in_stack_00000030 = in_stack_00000008;
  in_stack_00000048 = in_stack_00000020;
  in_stack_00000040 = in_stack_00000018;
  lVar8 = 0;
  fVar12 = -INFINITY;
  do {
    uVar3 = FUN_048aab44(&stack0x00000030,*unaff_x26);
    if ((uVar3 & 1) == 0) {
      FUN_048aade0(&stack0x00000030,*(undefined8 *)PTR_DAT_06608a78);
      return lVar8;
    }
    lVar4 = FUN_048aaa00(&stack0x00000030,*puVar10);
    plVar9 = *(long **)(unaff_x19 + 0x120);
    if (plVar9 == (long *)0x0) {
      uVar11 = 0x3f800000;
    }
    else {
      lVar6 = *plVar9;
      uVar3 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar3 != 0) {
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar7 + 4) * 0x10 + 0x138);
            goto LAB_051b4c84;
          }
          uVar3 = uVar3 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar3 != 0);
      }
      puVar5 = (undefined8 *)FUN_02ce0a7c(plVar9,*(long *)puVar1,4);
LAB_051b4c84:
      uVar11 = (*(code *)*puVar5)(plVar9,puVar5[1]);
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02ce7c7c(uVar11);
    }
    FUN_051b3a20(lVar4,(undefined8 *)(unaff_x19 + 0x148),(undefined8 *)(unaff_x19 + 0x150),
                 (long)&stack0x00000028 + 4);
    fVar2 = in_stack_00000028._4_4_;
    if (fVar12 < in_stack_00000028._4_4_) {
      if (*(long *)(unaff_x19 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_051ad6d0(*(long *)(unaff_x19 + 0x138),*(undefined8 *)(unaff_x19 + 0x148),0);
      if (*(long *)(unaff_x19 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02ce7c7c();
      }
      FUN_051ad6d0(*(long *)(unaff_x19 + 0x140),*(undefined8 *)(unaff_x19 + 0x150),0);
      *(undefined1 *)(unaff_x19 + 0x168) = 1;
      lVar8 = lVar4;
      fVar12 = fVar2;
    }
  } while( true );
}


