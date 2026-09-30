/*
FUNCTION_NAME: Logic.GameEvents.GoldenShell.View.ProgressBarAudioPlayer$$SetActiveSound
ENTRY_POINT: 04121448
PROGRAM: m3ar-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection
EVIDENCE: weak_xr_or_state_hits_5;validity_or_gating_hits_15;ui_or_gameplay_sink_hits_2;strong_file_logging_hits_3
*/


undefined8
Logic_GameEvents_GoldenShell_View_ProgressBarAudioPlayer__SetActiveSound(undefined8 param_1)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  void *unaff_x19;
  undefined1 *unaff_x21;
  long unaff_x22;
  int *unaff_x24;
  long unaff_x25;
  uint uVar5;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  long unaff_x29;
  undefined8 uVar6;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined8 uStack0000000000000028;
  undefined8 *in_stack_00000048;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  
  uStack0000000000000028 = param_1;
  do {
    puVar3 = PTR___sF_0901f460;
    iVar1 = *unaff_x24;
    if (iVar1 == 0) {
      bVar2 = *(byte *)(unaff_x29 + -0x56);
      if (unaff_x26 == bVar2) {
        if (bVar2 < 0x1f) {
          if ((bVar2 != 0x1d) && (bVar2 != 0x1e)) goto LAB_04121604;
        }
        else if ((bVar2 != 0x22) && ((bVar2 != 0x20 && (bVar2 != 0x1f)))) {
LAB_04121604:
          if (0x1c < bVar2) {
            fprintf((FILE *)(PTR___sF_0901f460 + 0x130),"libunwind: %s - %s\n","getRegister",
                    "unsupported arm64 register");
            fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
      }
    }
    else {
      uVar5 = (uint)unaff_x26;
      if ((uVar5 & 0x60) == 0x40) {
        if (iVar1 < 5) {
          uVar6 = 0;
          if (iVar1 != 1) {
            if (iVar1 != 2) {
LAB_04121710:
              fprintf((FILE *)(PTR___sF_0901f460 + 0x130),"libunwind: %s - %s\n",
                      "getSavedFloatRegister","unsupported restore location for float register");
              fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar6 = *(undefined8 *)(*(long *)(unaff_x24 + 2) + unaff_x22);
          }
        }
        else if (iVar1 == 5) {
          uVar6 = *(undefined8 *)
                   ((long)unaff_x19 +
                   ((*(long *)(unaff_x24 + 2) << 0x20) + -0x4000000000 >> 0x1d) + 0x110);
        }
        else {
          if (iVar1 != 6) goto LAB_04121710;
          puVar4 = (undefined8 *)FUN_04122c8c(*(undefined8 *)(unaff_x24 + 2));
          uVar6 = *puVar4;
        }
        *(undefined8 *)(unaff_x25 + unaff_x26 * 8 + -0xf0) = uVar6;
      }
      else if (unaff_x26 == *(byte *)(unaff_x29 + -0x56)) {
        FUN_04122528();
      }
      else if (unaff_x26 == 0x22) {
        uVar6 = FUN_04122528();
        *in_stack_00000048 = uVar6;
      }
      else {
        if (0xffffffe0 < uVar5 - 0x40) {
          return 0xffffe672;
        }
        uVar6 = FUN_04122528();
        puVar3 = PTR___sF_0901f460;
        if ((int)uVar5 < 0x1f) {
          if (uVar5 == 0x1d) {
            *in_stack_00000018 = uVar6;
          }
          else if (uVar5 == 0x1e) {
            *in_stack_00000008 = uVar6;
          }
          else {
LAB_04121658:
            if (0x1c < unaff_x26) {
              fprintf((FILE *)(PTR___sF_0901f460 + 0x130),"libunwind: %s - %s\n","setRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *unaff_x27 = uVar6;
          }
        }
        else if (uVar5 == 0x1f) {
          *in_stack_00000020 = uVar6;
        }
        else if (uVar5 == 0x22) {
          *in_stack_00000048 = uVar6;
        }
        else {
          if (uVar5 != 0x20) goto LAB_04121658;
          *in_stack_00000010 = uVar6;
        }
      }
    }
    unaff_x26 = unaff_x26 + 1;
    unaff_x24 = unaff_x24 + 4;
    unaff_x27 = unaff_x27 + 1;
    if (unaff_x26 == 0x60) {
      *unaff_x21 = *(undefined1 *)(unaff_x29 + -0x58);
      memcpy(&stack0x00000050,unaff_x19,0x210);
      *(undefined8 *)(unaff_x29 + -0x18) = in_stack_000006b0;
      *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000006a8;
      if (*(int *)(unaff_x29 + -0x20) != 0) {
        FUN_04122528();
      }
      memcpy(unaff_x19,&stack0x00000260,0x210);
      return 1;
    }
  } while( true );
}


