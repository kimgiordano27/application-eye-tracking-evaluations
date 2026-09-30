/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_session_3d_position_t_speaker_position_set
ENTRY_POINT: 0855f984
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_10;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0855fa04) */

void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_session_3d_position_t_speaker_position_set
               (void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int in_w8;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined4 unaff_w19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *unaff_x22;
  long *unaff_x23;
  int unaff_w24;
  long lVar8;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined1 auVar9 [16];
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 *in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 in_stack_00000040;
  undefined8 *in_stack_00000048;
  ulong in_stack_00000050;
  long in_stack_00000078;
  
  do {
    unaff_w24 = unaff_w24 + 1;
    if (in_w8 <= unaff_w24) {
      do {
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
        while (uVar4 = FUN_07128b70(&stack0x00000040,*unaff_x28), (uVar4 & 1) != 0) {
          FUN_0651ad0c(unaff_x21,in_stack_00000050 & 0xffffffff,*unaff_x20);
        }
        FUN_07128b6c(&stack0x00000040,*(undefined8 *)PTR_DAT_092b89e8);
        uVar4 = FUN_05365070(&stack0x00000060,*(undefined8 *)PTR_DAT_0932eab8);
        unaff_x21 = in_stack_00000078;
        if ((uVar4 & 1) == 0) {
          FUN_05365194(in_stack_00000010,*(undefined8 *)PTR_DAT_0932eab0);
          if (in_stack_00000008 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_04077828(in_stack_00000008);
          }
          return;
        }
        if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        unaff_x22 = (long *)FUN_0651969c(in_stack_00000078,*(undefined8 *)PTR_DAT_0932eaf0);
        unaff_x23 = (long *)FUN_065196dc(unaff_x21,*(undefined8 *)PTR_DAT_0932e928);
      } while (*(int *)(unaff_x21 + 0x20) < 1);
      if (unaff_x23 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      unaff_w24 = 0;
    }
    lVar5 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_0932e910) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0855f848;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar3 = (undefined8 *)FUN_040b1e00(unaff_x23,*(long *)PTR_DAT_0932e910,0);
LAB_0855f848:
    auVar9 = (*(code *)*puVar3)(unaff_x23,unaff_w24,puVar3[1]);
    if (*(int *)(*unaff_x27 + 0xe4) == 0) {
      thunk_FUN_040d65a8();
    }
    uVar4 = FUN_0855f594(auVar9._8_8_ & 0xffffffff,unaff_w19);
    if ((uVar4 & 1) != 0) {
      if (auVar9._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      FUN_0844a394(auVar9._0_8_,0);
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar5 = *unaff_x22;
      lVar8 = *(long *)(unaff_x29 + 0x18);
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar4 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_09287748) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_0855f8ec;
          }
          uVar4 = uVar4 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar4 != 0);
      }
      puVar3 = (undefined8 *)FUN_040b1e00(unaff_x22,*(long *)PTR_DAT_09287748,0);
LAB_0855f8ec:
      uVar2 = (*(code *)*puVar3)(unaff_x22,unaff_w24,puVar3[1]);
      if (lVar8 == 0) {
LAB_0855fa74:
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      lVar5 = *(long *)(lVar8 + 0x10);
      lVar6 = *(long *)PTR_DAT_09289898;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (lVar5 == 0) goto LAB_0855fa74;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar5 + 0x18)) {
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar5 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
      }
      else {
        FUN_05bca5b0(lVar8,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
      lVar5 = *unaff_x27;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_040d65a8();
        lVar5 = *unaff_x27;
      }
      **(int **)(lVar5 + 0xb8) = **(int **)(lVar5 + 0xb8) + -1;
    }
    in_w8 = *(int *)(unaff_x21 + 0x20);
  } while( true );
}


