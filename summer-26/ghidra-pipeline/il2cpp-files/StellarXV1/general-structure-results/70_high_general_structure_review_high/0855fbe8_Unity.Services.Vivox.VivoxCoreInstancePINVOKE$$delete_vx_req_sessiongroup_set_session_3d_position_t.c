/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$delete_vx_req_sessiongroup_set_session_3d_position_t
ENTRY_POINT: 0855fbe8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__delete_vx_req_sessiongroup_set_session_3d_position_t
               (void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  int *piVar15;
  undefined8 *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int iVar16;
  long *unaff_x22;
  long lVar17;
  undefined1 auVar18 [12];
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined4 uStack000000000000005c;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  undefined8 in_stack_00000070;
  long in_stack_00000078;
  undefined8 in_stack_00000080;
  
  FUN_04077588(PTR_DAT_0932eaf0);
  FUN_04077588(PTR_DAT_0932e928);
  FUN_04077588(PTR_DAT_09285ee8);
  FUN_04077588(PTR_DAT_0932eaf8);
  FUN_04077588(PTR_DAT_0932eb00);
  *(undefined1 *)(unaff_x21 + 0xa9a) = 1;
  in_stack_00000080 = 0;
  in_stack_00000068 = 0;
  in_stack_00000060 = 0;
  in_stack_00000078 = 0;
  in_stack_00000070 = 0;
  lVar5 = thunk_FUN_040b4efc(*unaff_x19);
  FUN_074f484c(lVar5,0);
  uVar4 = FUN_089c69dc(0);
  puVar1 = PTR_DAT_09285980;
  in_stack_00000048 = CONCAT44(in_stack_00000048._4_4_,uVar4);
  uVar6 = thunk_FUN_040b4b34(*(undefined8 *)(PTR_DAT_09285980 + 0x48),&stack0x00000048);
  lVar13 = *unaff_x22;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    thunk_FUN_040d65a8(lVar13);
    lVar13 = *unaff_x22;
  }
  uStack000000000000005c = **(undefined4 **)(lVar13 + 0xb8);
  uVar7 = thunk_FUN_040b4b34(*(undefined8 *)(puVar1 + 0x48),&stack0x0000005c);
  if (lVar5 != 0) {
    FUN_074f7884(lVar5,*(undefined8 *)PTR_DAT_0932eb00,uVar6,uVar7,0);
    FUN_074f6548(lVar5,0);
    puVar3 = PTR_DAT_0932eaf8;
    puVar2 = PTR_DAT_09287040;
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      FUN_06e23718(&stack0x00000010,*(long *)(unaff_x20 + 0x10),*(undefined8 *)PTR_DAT_0932eaa8);
      in_stack_00000068 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      in_stack_00000060 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
      in_stack_00000080 = in_stack_00000030;
      in_stack_00000050 = &stack0x00000060;
      in_stack_00000078 = in_stack_00000028;
      in_stack_00000070 = in_stack_00000020;
      in_stack_00000048 = 0;
      do {
        do {
          uVar8 = FUN_05365070(&stack0x00000060,*(undefined8 *)PTR_DAT_0932eab8);
          lVar13 = in_stack_00000078;
          if ((uVar8 & 1) == 0) {
            FUN_05365194(&stack0x00000060,*(undefined8 *)PTR_DAT_0932eab0);
            if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            FUN_0897e2a8(lVar5,0);
            return;
          }
          if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_0651969c(in_stack_00000078,*(undefined8 *)PTR_DAT_0932eaf0);
          plVar9 = (long *)FUN_065196dc(lVar13,*(undefined8 *)PTR_DAT_0932e928);
        } while (*(int *)(lVar13 + 0x20) < 1);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        iVar16 = 0;
        do {
          lVar14 = *plVar9;
          uVar8 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar8 != 0) {
            piVar15 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0932e910) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar15 * 0x10 + 0x138);
                goto LAB_0855fdcc;
              }
              uVar8 = uVar8 - 1;
              piVar15 = piVar15 + 4;
            } while (uVar8 != 0);
          }
          puVar10 = (undefined8 *)FUN_040b1e00(plVar9,*(long *)PTR_DAT_0932e910,0);
LAB_0855fdcc:
          auVar18 = (*(code *)*puVar10)(plVar9,iVar16,puVar10[1]);
          lVar14 = auVar18._0_8_;
          plVar11 = (long *)FUN_04077674(*(undefined8 *)puVar2,5);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar17 = *(long *)(lVar14 + 0x58);
          if ((lVar17 != 0) &&
             (lVar12 = thunk_FUN_040b4e00(lVar17,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0)) {
            uVar6 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar6,0);
          }
          if ((int)plVar11[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar11[4] = lVar17;
          thunk_FUN_040ec700(plVar11 + 4,lVar17);
          uStack000000000000005c = auVar18._8_4_;
          lVar17 = thunk_FUN_040b4b34(*(undefined8 *)(puVar1 + 0x48),&stack0x0000005c);
          if ((lVar17 != 0) &&
             (lVar12 = thunk_FUN_040b4e00(lVar17,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0)) {
            uVar6 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar6,0);
          }
          if ((*(uint *)(plVar11 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar11[5] = lVar17;
          thunk_FUN_040ec700(plVar11 + 5,lVar17);
          if (*(long *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_089ae0dc(&stack0x00000010,*(long *)(lVar14 + 0x18),0);
          uStack000000000000000c = uStack0000000000000010;
          lVar17 = thunk_FUN_040b4b34(*(undefined8 *)(puVar1 + 0x48),(long)&stack0x00000008 + 4);
          if ((lVar17 != 0) &&
             (lVar12 = thunk_FUN_040b4e00(lVar17,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0)) {
            uVar6 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar6,0);
          }
          if (*(uint *)(plVar11 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar11[6] = lVar17;
          thunk_FUN_040ec700(plVar11 + 6,lVar17);
          if (*(long *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_089ae0dc(&stack0x00000010,*(long *)(lVar14 + 0x18),0);
          uStack0000000000000008 = uStack0000000000000014;
          lVar17 = thunk_FUN_040b4b34(*(undefined8 *)(puVar1 + 0x48),&stack0x00000008);
          if ((lVar17 != 0) &&
             (lVar12 = thunk_FUN_040b4e00(lVar17,*(undefined8 *)(*plVar11 + 0x40)), lVar12 == 0)) {
            uVar6 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar6,0);
          }
          if ((*(uint *)(plVar11 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar11[7] = lVar17;
          thunk_FUN_040ec700(plVar11 + 7,lVar17);
          if (*(long *)(lVar14 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_089ae0dc(&stack0x00000010,*(long *)(lVar14 + 0x18),0);
          uStack0000000000000010 = uStack000000000000001c;
          lVar14 = thunk_FUN_040b4b34(*(undefined8 *)(puVar1 + 0x48),&stack0x00000010);
          if ((lVar14 != 0) &&
             (lVar17 = thunk_FUN_040b4e00(lVar14,*(undefined8 *)(*plVar11 + 0x40)), lVar17 == 0)) {
            uVar6 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar6,0);
          }
          if (*(uint *)(plVar11 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar11[8] = lVar14;
          thunk_FUN_040ec700(plVar11 + 8,lVar14);
          FUN_074f7940(lVar5,*(undefined8 *)puVar3,plVar11,0);
          FUN_074f6548(lVar5,0);
          iVar16 = iVar16 + 1;
        } while (iVar16 < *(int *)(lVar13 + 0x20));
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


