/*
FUNCTION_NAME: OVA.StellarX.Modules.Nodilus.Domain.EventSystem.Nodes.RadiateLightGlow$$GetStartIntensity
ENTRY_POINT: 0416887c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;frame_behavior
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_15;strong_file_logging_hits_3;frame_or_lifecycle_behavior
*/


undefined8
OVA_StellarX_Modules_Nodilus_Domain_EventSystem_Nodes_RadiateLightGlow__GetStartIntensity(void)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  void *unaff_x19;
  undefined1 *unaff_x21;
  long unaff_x22;
  long unaff_x24;
  int *piVar5;
  long unaff_x25;
  uint uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long unaff_x29;
  undefined8 uVar9;
  undefined8 *in_stack_00000008;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  long lStack0000000000000028;
  long lStack0000000000000038;
  long lStack0000000000000040;
  undefined8 *puStack0000000000000048;
  undefined8 in_stack_000006a8;
  undefined8 in_stack_000006b0;
  
  puStack0000000000000048 = (undefined8 *)(unaff_x25 + 0x108);
  lStack0000000000000040 = (long)unaff_x19 + 0xe8;
  lStack0000000000000038 = (long)unaff_x19 + 0x100;
  uVar7 = 0;
  lStack0000000000000028 = (long)unaff_x19 + 0xf0;
  piVar5 = (int *)(unaff_x24 + 0x18);
  puVar8 = (undefined8 *)&stack0x00000260;
  do {
    puVar3 = PTR___sF_09357fb8;
    iVar1 = *piVar5;
    if (iVar1 == 0) {
      bVar2 = *(byte *)(unaff_x29 + -0x56);
      if (uVar7 == bVar2) {
        if (bVar2 < 0x1f) {
          if ((bVar2 != 0x1d) && (bVar2 != 0x1e)) goto LAB_04168a64;
        }
        else if ((bVar2 != 0x22) && ((bVar2 != 0x20 && (bVar2 != 0x1f)))) {
LAB_04168a64:
          if (0x1c < bVar2) {
            fprintf((FILE *)(PTR___sF_09357fb8 + 0x130),"libunwind: %s - %s\n","getRegister",
                    "unsupported arm64 register");
            fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
      }
    }
    else {
      uVar6 = (uint)uVar7;
      if ((uVar6 & 0x60) == 0x40) {
        if (iVar1 < 5) {
          uVar9 = 0;
          if (iVar1 != 1) {
            if (iVar1 != 2) {
LAB_04168b70:
              fprintf((FILE *)(PTR___sF_09357fb8 + 0x130),"libunwind: %s - %s\n",
                      "getSavedFloatRegister","unsupported restore location for float register");
              fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            uVar9 = *(undefined8 *)(*(long *)(piVar5 + 2) + unaff_x22);
          }
        }
        else if (iVar1 == 5) {
          uVar9 = *(undefined8 *)
                   ((long)unaff_x19 +
                   ((*(long *)(piVar5 + 2) << 0x20) + -0x4000000000 >> 0x1d) + 0x110);
        }
        else {
          if (iVar1 != 6) goto LAB_04168b70;
          puVar4 = (undefined8 *)FUN_0416a0ec(*(undefined8 *)(piVar5 + 2));
          uVar9 = *puVar4;
        }
        *(undefined8 *)(unaff_x25 + uVar7 * 8 + -0xf0) = uVar9;
      }
      else if (uVar7 == *(byte *)(unaff_x29 + -0x56)) {
        FUN_04169988();
      }
      else if (uVar7 == 0x22) {
        uVar9 = FUN_04169988();
        *puStack0000000000000048 = uVar9;
      }
      else {
        if (0xffffffe0 < uVar6 - 0x40) {
          return 0xffffe672;
        }
        uVar9 = FUN_04169988();
        puVar3 = PTR___sF_09357fb8;
        if ((int)uVar6 < 0x1f) {
          if (uVar6 == 0x1d) {
            *in_stack_00000018 = uVar9;
          }
          else if (uVar6 == 0x1e) {
            *in_stack_00000008 = uVar9;
          }
          else {
LAB_04168ab8:
            if (0x1c < uVar7) {
              fprintf((FILE *)(PTR___sF_09357fb8 + 0x130),"libunwind: %s - %s\n","setRegister",
                      "unsupported arm64 register");
              fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *puVar8 = uVar9;
          }
        }
        else if (uVar6 == 0x1f) {
          *in_stack_00000020 = uVar9;
        }
        else if (uVar6 == 0x22) {
          *puStack0000000000000048 = uVar9;
        }
        else {
          if (uVar6 != 0x20) goto LAB_04168ab8;
          *in_stack_00000010 = uVar9;
        }
      }
    }
    uVar7 = uVar7 + 1;
    piVar5 = piVar5 + 4;
    puVar8 = puVar8 + 1;
    if (uVar7 == 0x60) {
      *unaff_x21 = *(undefined1 *)(unaff_x29 + -0x58);
      memcpy(&stack0x00000050,unaff_x19,0x210);
      *(undefined8 *)(unaff_x29 + -0x18) = in_stack_000006b0;
      *(undefined8 *)(unaff_x29 + -0x20) = in_stack_000006a8;
      if (*(int *)(unaff_x29 + -0x20) != 0) {
        FUN_04169988();
      }
      memcpy(unaff_x19,&stack0x00000260,0x210);
      return 1;
    }
  } while( true );
}


