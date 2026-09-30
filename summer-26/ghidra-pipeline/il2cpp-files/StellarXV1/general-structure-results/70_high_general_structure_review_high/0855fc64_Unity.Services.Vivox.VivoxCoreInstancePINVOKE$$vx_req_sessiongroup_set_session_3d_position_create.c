/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_session_3d_position_create
ENTRY_POINT: 0855fc64
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_session_3d_position_create
               (void)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long unaff_x19;
  long unaff_x20;
  int iVar11;
  long *unaff_x22;
  long lVar12;
  long unaff_x29;
  undefined1 auVar13 [12];
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
  
  thunk_FUN_040b4b34(*(undefined8 *)(unaff_x29 + 0x48));
  lVar8 = *unaff_x22;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_040d65a8(lVar8);
    lVar8 = *unaff_x22;
  }
  uStack000000000000005c = **(undefined4 **)(lVar8 + 0xb8);
  thunk_FUN_040b4b34(*(undefined8 *)(unaff_x29 + 0x48),&stack0x0000005c);
  if (unaff_x19 != 0) {
    FUN_074f7884();
    FUN_074f6548();
    puVar1 = PTR_DAT_09287040;
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
          uVar2 = FUN_05365070(&stack0x00000060,*(undefined8 *)PTR_DAT_0932eab8);
          lVar8 = in_stack_00000078;
          if ((uVar2 & 1) == 0) {
            FUN_05365194(&stack0x00000060,*(undefined8 *)PTR_DAT_0932eab0);
            if (*(int *)(*(long *)PTR_DAT_09285d70 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
            }
            FUN_0897e2a8();
            return;
          }
          if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_0651969c(in_stack_00000078,*(undefined8 *)PTR_DAT_0932eaf0);
          plVar3 = (long *)FUN_065196dc(lVar8,*(undefined8 *)PTR_DAT_0932e928);
        } while (*(int *)(lVar8 + 0x20) < 1);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        iVar11 = 0;
        do {
          lVar9 = *plVar3;
          uVar2 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar2 != 0) {
            piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_0932e910) {
                puVar4 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_0855fdcc;
              }
              uVar2 = uVar2 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar2 != 0);
          }
          puVar4 = (undefined8 *)FUN_040b1e00(plVar3,*(long *)PTR_DAT_0932e910,0);
LAB_0855fdcc:
          auVar13 = (*(code *)*puVar4)(plVar3,iVar11,puVar4[1]);
          lVar9 = auVar13._0_8_;
          plVar5 = (long *)FUN_04077674(*(undefined8 *)puVar1,5);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          lVar12 = *(long *)(lVar9 + 0x58);
          if ((lVar12 != 0) &&
             (lVar6 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar7 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar7,0);
          }
          if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar5[4] = lVar12;
          thunk_FUN_040ec700(plVar5 + 4,lVar12);
          uStack000000000000005c = auVar13._8_4_;
          lVar12 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x29 + 0x48),&stack0x0000005c);
          if ((lVar12 != 0) &&
             (lVar6 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar7 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar7,0);
          }
          if ((*(uint *)(plVar5 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar5[5] = lVar12;
          thunk_FUN_040ec700(plVar5 + 5,lVar12);
          if (*(long *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_089ae0dc(&stack0x00000010,*(long *)(lVar9 + 0x18),0);
          uStack000000000000000c = uStack0000000000000010;
          lVar12 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x29 + 0x48),(long)&stack0x00000008 + 4);
          if ((lVar12 != 0) &&
             (lVar6 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar7 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar7,0);
          }
          if (*(uint *)(plVar5 + 3) < 3) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar5[6] = lVar12;
          thunk_FUN_040ec700(plVar5 + 6,lVar12);
          if (*(long *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_089ae0dc(&stack0x00000010,*(long *)(lVar9 + 0x18),0);
          uStack0000000000000008 = uStack0000000000000014;
          lVar12 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000008);
          if ((lVar12 != 0) &&
             (lVar6 = thunk_FUN_040b4e00(lVar12,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
            uVar7 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar7,0);
          }
          if ((*(uint *)(plVar5 + 3) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar5[7] = lVar12;
          thunk_FUN_040ec700(plVar5 + 7,lVar12);
          if (*(long *)(lVar9 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077830();
          }
          FUN_089ae0dc(&stack0x00000010,*(long *)(lVar9 + 0x18),0);
          uStack0000000000000010 = uStack000000000000001c;
          lVar9 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x29 + 0x48),&stack0x00000010);
          if ((lVar9 != 0) &&
             (lVar12 = thunk_FUN_040b4e00(lVar9,*(undefined8 *)(*plVar5 + 0x40)), lVar12 == 0)) {
            uVar7 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
            FUN_040776f4(uVar7,0);
          }
          if (*(uint *)(plVar5 + 3) < 5) {
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar5[8] = lVar9;
          thunk_FUN_040ec700(plVar5 + 8,lVar9);
          FUN_074f7940();
          FUN_074f6548();
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(lVar8 + 0x20));
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


