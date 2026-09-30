/*
FUNCTION_NAME: OVRPlugin.OVRP_1_97_0$$.cctor
ENTRY_POINT: 033fa45c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033fa764) */

void OVRPlugin_OVRP_1_97_0___cctor(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar11;
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
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_9482);
    FUN_01d7d918(StringLiteral_9483);
    FUN_01d7d918(StringLiteral_9484);
    FUN_01d7d918(StringLiteral_9485);
    FUN_01d7d918(StringLiteral_9486);
    FUN_01d7d918(StringLiteral_9487);
    *(undefined1 *)(unaff_x21 + 0xbe9) = 1;
  }
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000050 = (long *)0x0;
  in_stack_00000030 = 0;
  in_stack_00000038 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  if (unaff_x20 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(unaff_x20 + 0x40);
    if (lVar11 != 0) {
      FUN_0319996c(&stack0x00000008,lVar11,*(undefined8 *)StringLiteral_9487);
      puVar3 = StringLiteral_9486;
      puVar2 = StringLiteral_9484;
      puVar1 = StringLiteral_9482;
      in_stack_00000048 = in_stack_00000010;
      in_stack_00000040 = in_stack_00000008;
      in_stack_00000050 = in_stack_00000018;
      while (uVar5 = FUN_02c52b88(&stack0x00000040,*(undefined8 *)puVar2),
            plVar4 = in_stack_00000050, (uVar5 & 1) != 0) {
        in_stack_00000038 = 0;
        if (*(long *)(unaff_x20 + 0x38) != 0) {
          FUN_02b258e8(*(long *)(unaff_x20 + 0x38),in_stack_00000050,&stack0x00000038,
                       *(undefined8 *)puVar1);
        }
        in_stack_00000030 = 0;
        if ((unaff_x19 != 0) && (*(long *)(unaff_x19 + 0x38) != 0)) {
          FUN_02b258e8(*(long *)(unaff_x19 + 0x38),plVar4,&stack0x00000030,*(undefined8 *)puVar1);
        }
        lVar9 = in_stack_00000038;
        lVar7 = in_stack_00000030;
        if (in_stack_00000038 != in_stack_00000030) {
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          lVar8 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_033fa5c4;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_01dde8fc(plVar4,*(long *)puVar3,0);
LAB_033fa5c4:
          (*(code *)*puVar6)(plVar4,lVar9,lVar7,1,puVar6[1]);
        }
      }
      FUN_02c52b84(&stack0x00000040,*(undefined8 *)StringLiteral_9483);
    }
  }
  if (((unaff_x19 != 0) && (lVar7 = *(long *)(unaff_x19 + 0x40), lVar7 != 0)) && (lVar7 != lVar11))
  {
    FUN_0319996c(&stack0x00000008,lVar7,*(undefined8 *)StringLiteral_9487);
    puVar3 = StringLiteral_9486;
    puVar2 = StringLiteral_9484;
    puVar1 = StringLiteral_9482;
    in_stack_00000048 = in_stack_00000010;
    in_stack_00000040 = in_stack_00000008;
    in_stack_00000050 = in_stack_00000018;
    while (uVar5 = FUN_02c52b88(&stack0x00000040,*(undefined8 *)puVar2), plVar4 = in_stack_00000050,
          (uVar5 & 1) != 0) {
      in_stack_00000028 = 0;
      if (((unaff_x20 == 0) || (*(long *)(unaff_x20 + 0x38) == 0)) ||
         (uVar5 = FUN_02b258e8(*(long *)(unaff_x20 + 0x38),in_stack_00000050,&stack0x00000028,
                               *(undefined8 *)puVar1), (uVar5 & 1) == 0)) {
        in_stack_00000020 = 0;
        if (*(long *)(unaff_x19 + 0x38) != 0) {
          FUN_02b258e8(*(long *)(unaff_x19 + 0x38),plVar4,&stack0x00000020,*(undefined8 *)puVar1);
        }
        lVar7 = in_stack_00000028;
        lVar11 = in_stack_00000020;
        if (in_stack_00000028 != in_stack_00000020) {
          if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          lVar9 = *plVar4;
          uVar5 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar5 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)puVar3) {
                puVar6 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_033fa708;
              }
              uVar5 = uVar5 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar5 != 0);
          }
          puVar6 = (undefined8 *)FUN_01dde8fc(plVar4,*(long *)puVar3,0);
LAB_033fa708:
          (*(code *)*puVar6)(plVar4,lVar7,lVar11,1,puVar6[1]);
        }
      }
    }
    FUN_02c52b84(&stack0x00000040,*(undefined8 *)StringLiteral_9483);
  }
  return;
}


