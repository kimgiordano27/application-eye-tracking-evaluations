/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_session_3d_position_t_base__get
ENTRY_POINT: 0855f6b0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_11;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0855fa04) */
/* WARNING: Removing unreachable block (ram,0x0855fa98) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_session_3d_position_t_base__get
               (void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined4 unaff_w19;
  long unaff_x20;
  int iVar14;
  long lVar15;
  long unaff_x29;
  undefined1 auVar16 [16];
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  ulong in_stack_00000050;
  undefined8 in_stack_00000060;
  undefined8 *in_stack_00000068;
  ulong in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  
  FUN_04077588(PTR_DAT_09289898);
  FUN_04077588(PTR_DAT_092baeb0);
  FUN_04077588(PTR_DAT_092b8a00);
  FUN_04077588(PTR_DAT_0932e900);
  FUN_04077588(PTR_DAT_0932eae8);
  FUN_04077588(PTR_DAT_0932e920);
  FUN_04077588(PTR_DAT_0932eaf0);
  FUN_04077588(PTR_DAT_0932e928);
  *(undefined1 *)(unaff_x20 + 0xa99) = 1;
  lVar10 = *(long *)(unaff_x29 + 0x18);
  in_stack_00000080 = 0;
  in_stack_00000040 = 0;
  in_stack_00000048 = (undefined8 *)0x0;
  in_stack_00000050 = 0;
  in_stack_00000068 = (undefined8 *)0x0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  if (lVar10 != 0) {
    *(undefined4 *)(lVar10 + 0x18) = 0;
    *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
    puVar4 = PTR_DAT_0932eae8;
    puVar3 = PTR_DAT_0932e900;
    puVar2 = PTR_DAT_092b89f0;
    if (*(long *)(unaff_x29 + 0x10) != 0) {
      FUN_06e23718(&stack0x00000018,*(long *)(unaff_x29 + 0x10),*(undefined8 *)PTR_DAT_0932eaa8);
      in_stack_00000080 = in_stack_00000038;
      in_stack_00000068 = in_stack_00000020;
      in_stack_00000060 = in_stack_00000018;
      in_stack_00000078 = in_stack_00000030;
      in_stack_00000070 = in_stack_00000028;
      do {
        uVar6 = FUN_05365070(&stack0x00000060,*(undefined8 *)PTR_DAT_0932eab8);
        lVar10 = in_stack_00000078;
        if ((uVar6 & 1) == 0) {
          FUN_05365194(&stack0x00000060,*(undefined8 *)PTR_DAT_0932eab0);
          return;
        }
        if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        plVar7 = (long *)FUN_0651969c(in_stack_00000078,*(undefined8 *)PTR_DAT_0932eaf0);
        plVar8 = (long *)FUN_065196dc(lVar10,*(undefined8 *)PTR_DAT_0932e928);
        if (0 < *(int *)(lVar10 + 0x20)) {
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          iVar14 = 0;
          do {
            lVar11 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
            if (uVar6 != 0) {
              piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
              do {
                if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_0932e910) {
                  puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                  goto LAB_0855f848;
                }
                uVar6 = uVar6 - 1;
                piVar13 = piVar13 + 4;
              } while (uVar6 != 0);
            }
            puVar9 = (undefined8 *)FUN_040b1e00(plVar8,*(long *)PTR_DAT_0932e910,0);
LAB_0855f848:
            auVar16 = (*(code *)*puVar9)(plVar8,iVar14,puVar9[1]);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            uVar6 = FUN_0855f594(auVar16._8_8_ & 0xffffffff,unaff_w19);
            if ((uVar6 & 1) != 0) {
              if (auVar16._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              FUN_0844a394(auVar16._0_8_,0);
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar11 = *plVar7;
              lVar15 = *(long *)(unaff_x29 + 0x18);
              uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar6 != 0) {
                piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_09287748) {
                    puVar9 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
                    goto LAB_0855f8ec;
                  }
                  uVar6 = uVar6 - 1;
                  piVar13 = piVar13 + 4;
                } while (uVar6 != 0);
              }
              puVar9 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_09287748,0);
LAB_0855f8ec:
              uVar5 = (*(code *)*puVar9)(plVar7,iVar14,puVar9[1]);
              if (lVar15 == 0) {
LAB_0855fa74:
                    /* WARNING: Subroutine does not return */
                FUN_04077830();
              }
              lVar11 = *(long *)(lVar15 + 0x10);
              lVar12 = *(long *)PTR_DAT_09289898;
              *(int *)(lVar15 + 0x1c) = *(int *)(lVar15 + 0x1c) + 1;
              if (lVar11 == 0) goto LAB_0855fa74;
              uVar1 = *(uint *)(lVar15 + 0x18);
              if (uVar1 < *(uint *)(lVar11 + 0x18)) {
                *(uint *)(lVar15 + 0x18) = uVar1 + 1;
                *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = uVar5;
              }
              else {
                FUN_05bca5b0(lVar15,uVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
              }
              lVar11 = *(long *)puVar3;
              if (*(int *)(lVar11 + 0xe4) == 0) {
                thunk_FUN_040d65a8();
                lVar11 = *(long *)puVar3;
              }
              **(int **)(lVar11 + 0xb8) = **(int **)(lVar11 + 0xb8) + -1;
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < *(int *)(lVar10 + 0x20));
        }
        if (*(long *)(unaff_x29 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        FUN_05bcaf84(&stack0x00000018,*(long *)(unaff_x29 + 0x18),*(undefined8 *)PTR_DAT_092b8a00);
        in_stack_00000050 = in_stack_00000028;
        in_stack_00000048 = in_stack_00000020;
        in_stack_00000040 = in_stack_00000018;
        in_stack_00000018 = 0;
        in_stack_00000020 = &stack0x00000040;
        while (uVar6 = FUN_07128b70(&stack0x00000040,*(undefined8 *)puVar2), (uVar6 & 1) != 0) {
          FUN_0651ad0c(lVar10,in_stack_00000050 & 0xffffffff,*(undefined8 *)puVar4);
        }
        FUN_07128b6c(&stack0x00000040,*(undefined8 *)PTR_DAT_092b89e8);
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


