/*
FUNCTION_NAME: Oculus.Interaction.Collisions$$ClosestPointToCollider
ENTRY_POINT: 07aae7f0
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;data_collection
EVIDENCE: validity_or_gating_hits_5;ray_or_cast_sink_hits_4;strong_file_logging_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07aae81c) */

byte Oculus_Interaction_Collisions__ClosestPointToCollider(void)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  ulong uVar4;
  int *piVar5;
  byte bVar6;
  int unaff_w20;
  long lVar7;
  long *unaff_x25;
  long *unaff_x26;
  ulong unaff_x27;
  long *in_stack_00000008;
  
  plVar3 = (long *)__cxa_begin_catch();
  lVar7 = *plVar3;
  __cxa_end_catch();
  iVar1 = 0;
  if ((unaff_x27 & 1) == 0) goto code_r0x07aae73c;
  do {
    if (lVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e3c(lVar7);
    }
    if (iVar1 == 9) goto LAB_07aae7b8;
    if (iVar1 != 0) {
      bVar6 = 0;
LAB_07aae838:
      FUN_07aad3a8();
LAB_07aae840:
      return iVar1 != 6 | bVar6;
    }
    do {
      if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
      lVar7 = *in_stack_00000008;
      uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == *unaff_x26) {
            puVar2 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_07aae7a8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      puVar2 = (undefined8 *)FUN_044822ac(in_stack_00000008,*unaff_x26,0);
LAB_07aae7a8:
      (*(code *)*puVar2)(in_stack_00000008,puVar2[1]);
      in_stack_00000008 = (long *)0x0;
LAB_07aae7b8:
      uVar4 = FUN_0446db74();
      if ((uVar4 & 1) == 0) {
        bVar6 = 0;
LAB_07aae834:
        iVar1 = 6;
        goto LAB_07aae838;
      }
      iVar1 = thunk_FUN_0447baf4(0);
      if (0x1d < iVar1 - unaff_w20) {
LAB_07aae80c:
        bVar6 = 1;
        goto LAB_07aae834;
      }
      Oculus_Interaction_ConditionalHideAttribute__get_ConditionalFieldPath();
      if (in_stack_00000008 == (long *)0x0) {
        bVar6 = 1;
        iVar1 = 6;
        goto LAB_07aae840;
      }
      FUN_07aad3a8();
      if (in_stack_00000008 == (long *)0x0) goto LAB_07aae80c;
      lVar7 = *unaff_x25;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
        lVar7 = *unaff_x25;
      }
    } while (*(char *)(*(long *)(lVar7 + 0xb8) + 5) == '\0');
    FUN_04447b58(1);
    if (in_stack_00000008 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    lVar7 = *in_stack_00000008;
    uVar4 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_07aae724;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar2 = (undefined8 *)FUN_044822ac(in_stack_00000008,*unaff_x26,0);
LAB_07aae724:
    (*(code *)*puVar2)(in_stack_00000008,puVar2[1]);
    lVar7 = 0;
    in_stack_00000008 = (long *)0x0;
    iVar1 = 9;
code_r0x07aae73c:
    FUN_04447b58(0);
  } while( true );
}


