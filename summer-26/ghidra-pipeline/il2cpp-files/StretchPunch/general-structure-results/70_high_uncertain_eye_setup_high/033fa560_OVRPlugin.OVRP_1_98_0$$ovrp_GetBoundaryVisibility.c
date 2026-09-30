/*
FUNCTION_NAME: OVRPlugin.OVRP_1_98_0$$ovrp_GetBoundaryVisibility
ENTRY_POINT: 033fa560
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033fa764) */

void OVRPlugin_OVRP_1_98_0__ovrp_GetBoundaryVisibility(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long *in_stack_00000018;
  long in_stack_00000020;
  long in_stack_00000028;
  long in_stack_00000030;
  long in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  long *in_stack_00000050;
  
  do {
    lVar6 = in_stack_00000038;
    if (in_stack_00000038 != unaff_x23) {
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01d7db70();
      }
      lVar7 = *unaff_x22;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *unaff_x26) {
            puVar5 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_033fa5c4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar5 = (undefined8 *)FUN_01dde8fc(unaff_x22,*unaff_x26,0);
LAB_033fa5c4:
      (*(code *)*puVar5)(unaff_x22,lVar6,unaff_x23,1,puVar5[1]);
    }
    uVar9 = FUN_02c52b88(&stack0x00000040,*unaff_x25);
    unaff_x22 = in_stack_00000050;
    if ((uVar9 & 1) == 0) {
      FUN_02c52b84(&stack0x00000040,*(undefined8 *)StringLiteral_9483);
      if (((unaff_x19 != 0) && (lVar6 = *(long *)(unaff_x19 + 0x40), lVar6 != 0)) &&
         (lVar6 != unaff_x21)) {
        FUN_0319996c(&stack0x00000008,lVar6,*(undefined8 *)StringLiteral_9487);
        puVar3 = StringLiteral_9486;
        puVar2 = StringLiteral_9484;
        puVar1 = StringLiteral_9482;
        in_stack_00000048 = in_stack_00000010;
        in_stack_00000040 = in_stack_00000008;
        in_stack_00000050 = in_stack_00000018;
        while (uVar9 = FUN_02c52b88(&stack0x00000040,*(undefined8 *)puVar2),
              plVar4 = in_stack_00000050, (uVar9 & 1) != 0) {
          in_stack_00000028 = 0;
          if (((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x38) == 0)) ||
             (uVar9 = FUN_02b258e8(*(long *)(unaff_x20 + 0x38),in_stack_00000050,&stack0x00000028,
                                   *(undefined8 *)puVar1), (uVar9 & 1) == 0)) {
            in_stack_00000020 = 0;
            if (*(long *)(unaff_x19 + 0x38) != 0) {
              FUN_02b258e8(*(long *)(unaff_x19 + 0x38),plVar4,&stack0x00000020,*(undefined8 *)puVar1
                          );
            }
            lVar7 = in_stack_00000028;
            lVar6 = in_stack_00000020;
            if (in_stack_00000028 != in_stack_00000020) {
              if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_01d7db70();
              }
              lVar8 = *plVar4;
              uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
              if (uVar9 != 0) {
                piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                    puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                    goto LAB_033fa708;
                  }
                  uVar9 = uVar9 - 1;
                  piVar10 = piVar10 + 4;
                } while (uVar9 != 0);
              }
              puVar5 = (undefined8 *)FUN_01dde8fc(plVar4,*(long *)puVar3,0);
LAB_033fa708:
              (*(code *)*puVar5)(plVar4,lVar7,lVar6,1,puVar5[1]);
            }
          }
        }
        FUN_02c52b84(&stack0x00000040,*(undefined8 *)StringLiteral_9483);
      }
      return;
    }
    in_stack_00000038 = 0;
    if (*(long *)(unaff_x20 + 0x38) != 0) {
      FUN_02b258e8(*(long *)(unaff_x20 + 0x38),in_stack_00000050,&stack0x00000038,*unaff_x27);
    }
    in_stack_00000030 = 0;
    if ((unaff_x19 == 0) || (*(long *)(unaff_x19 + 0x38) == 0)) {
      unaff_x23 = 0;
    }
    else {
      FUN_02b258e8(*(long *)(unaff_x19 + 0x38),unaff_x22,&stack0x00000030,*unaff_x27);
      unaff_x23 = in_stack_00000030;
    }
  } while( true );
}


