/*
FUNCTION_NAME: Ignitives.MultiplayerEngineLite.MeleeHandler$$Update
ENTRY_POINT: 03b7afb0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_15;strong_file_logging_hits_3;frame_or_lifecycle_behavior
*/


undefined8 Ignitives_MultiplayerEngineLite_MeleeHandler__Update(undefined8 param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  void *unaff_x19;
  undefined1 *unaff_x21;
  long unaff_x22;
  int *piVar5;
  int *unaff_x24;
  long unaff_x25;
  uint uVar6;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 uVar7;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  
  do {
    puVar4 = (undefined8 *)FUN_03b7c6dc(param_1);
    uVar7 = *puVar4;
LAB_03b7aee0:
    *(undefined8 *)(unaff_x25 + unaff_x26 * 8 + -0xf0) = uVar7;
    piVar5 = unaff_x24;
LAB_03b7aee8:
    puVar3 = Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__;
    unaff_x26 = unaff_x26 + 1;
    unaff_x24 = piVar5 + 4;
    unaff_x27 = unaff_x27 + 1;
    if (unaff_x26 == 0x60) {
      *unaff_x21 = *(undefined1 *)(unaff_x29 + -0x58);
      memcpy(&stack0x00000050,unaff_x19,0x210);
      *(undefined8 *)(unaff_x29 + -0x18) = in_stack_000006b0;
      *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000006a8;
      if (*(int *)(unaff_x29 + -0x20) != 0) {
        FUN_03b7bf78();
      }
      memcpy(unaff_x19,&stack0x00000260,0x210);
      return 1;
    }
    iVar1 = *unaff_x24;
    if (iVar1 == 0) {
      bVar2 = *(byte *)(unaff_x29 + -0x56);
      piVar5 = unaff_x24;
      if (unaff_x26 == bVar2) {
        if (bVar2 < 0x1f) {
          if ((bVar2 == 0x1d) || (bVar2 == 0x1e)) goto LAB_03b7aee8;
        }
        else if ((bVar2 == 0x22) || ((bVar2 == 0x20 || (bVar2 == 0x1f)))) goto LAB_03b7aee8;
        if (0x1c < bVar2) {
          fprintf((FILE *)(Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__ +
                          0x130),"libunwind: %s - %s\n","getRegister","unsupported arm64 register");
          fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      goto LAB_03b7aee8;
    }
    uVar6 = (uint)unaff_x26;
    if ((uVar6 & 0x60) != 0x40) {
      if (unaff_x26 == *(byte *)(unaff_x29 + -0x56)) {
        FUN_03b7bf78();
        piVar5 = unaff_x24;
        goto LAB_03b7aee8;
      }
      if (unaff_x26 != 0x22) {
        if (0xffffffe0 < uVar6 - 0x40) {
          return 0xffffe672;
        }
        uVar7 = FUN_03b7bf78();
        puVar3 = Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__;
        if ((int)uVar6 < 0x1f) {
          if (uVar6 == 0x1d) {
            *in_stack_00000018 = uVar7;
            piVar5 = unaff_x24;
            goto LAB_03b7aee8;
          }
          if (uVar6 == 0x1e) {
            *in_stack_00000008 = uVar7;
            piVar5 = unaff_x24;
            goto LAB_03b7aee8;
          }
        }
        else {
          if (uVar6 == 0x1f) {
            *in_stack_00000020 = uVar7;
            piVar5 = unaff_x24;
            goto LAB_03b7aee8;
          }
          if (uVar6 == 0x22) {
            *in_stack_00000048 = uVar7;
            piVar5 = unaff_x24;
            goto LAB_03b7aee8;
          }
          if (uVar6 == 0x20) {
            *in_stack_00000010 = uVar7;
            piVar5 = unaff_x24;
            goto LAB_03b7aee8;
          }
        }
        if (0x1c < unaff_x26) {
          fprintf((FILE *)(Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__ +
                          0x130),"libunwind: %s - %s\n","setRegister","unsupported arm64 register");
          fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *unaff_x27 = uVar7;
        piVar5 = unaff_x24;
        goto LAB_03b7aee8;
      }
      uVar7 = FUN_03b7bf78();
      *in_stack_00000048 = uVar7;
      piVar5 = unaff_x24;
      goto LAB_03b7aee8;
    }
    if (iVar1 < 5) {
      uVar7 = 0;
      if (iVar1 != 1) {
        if (iVar1 != 2) goto LAB_03b7b160;
        uVar7 = *(undefined8 *)(*(long *)(piVar5 + 6) + unaff_x22);
      }
      goto LAB_03b7aee0;
    }
    if (iVar1 == 5) {
      uVar7 = *(undefined8 *)
               ((long)unaff_x19 + ((*(long *)(piVar5 + 6) << 0x20) + -0x4000000000 >> 0x1d) + 0x110)
      ;
      goto LAB_03b7aee0;
    }
    if (iVar1 != 6) {
LAB_03b7b160:
      fprintf((FILE *)(Method_System_Collections_Generic_HashSet_Enumerator<Action>_Dispose__ +
                      0x130),"libunwind: %s - %s\n","getSavedFloatRegister",
              "unsupported restore location for float register");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
    param_1 = *(undefined8 *)(piVar5 + 6);
  } while( true );
}


