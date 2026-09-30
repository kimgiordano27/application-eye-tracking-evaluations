/*
FUNCTION_NAME: Unity.Services.Vivox.VivoxCoreInstancePINVOKE$$vx_req_sessiongroup_set_session_3d_position_t_speaker_position_get
ENTRY_POINT: 0855fa08
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


void Unity_Services_Vivox_VivoxCoreInstancePINVOKE__vx_req_sessiongroup_set_session_3d_position_t_speaker_position_get
               (undefined8 param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  undefined4 unaff_w19;
  undefined8 *unaff_x20;
  long lVar10;
  int iVar11;
  long lVar12;
  long *unaff_x27;
  undefined8 *unaff_x28;
  long unaff_x29;
  undefined1 auVar13 [16];
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  undefined8 *in_stack_00000020;
  ulong in_stack_00000028;
  long in_stack_00000040;
  undefined8 *in_stack_00000048;
  ulong in_stack_00000050;
  long in_stack_00000078;
  
  if (param_2 == 1) {
    plVar7 = (long *)__cxa_begin_catch(param_1);
    lVar10 = *plVar7;
    in_stack_00000018 = lVar10;
    __cxa_end_catch();
    puVar6 = in_stack_00000020;
    while( true ) {
      FUN_07128b6c(puVar6,*(undefined8 *)PTR_DAT_092b89e8);
      if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077828(lVar10);
      }
      uVar4 = FUN_05365070(&stack0x00000060,*(undefined8 *)PTR_DAT_0932eab8);
      lVar2 = in_stack_00000078;
      lVar10 = in_stack_00000008;
      if ((uVar4 & 1) == 0) break;
      if (in_stack_00000078 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04077830();
      }
      plVar7 = (long *)FUN_0651969c(in_stack_00000078,*(undefined8 *)PTR_DAT_0932eaf0);
      plVar5 = (long *)FUN_065196dc(lVar2,*(undefined8 *)PTR_DAT_0932e928);
      if (0 < *(int *)(lVar2 + 0x20)) {
        if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_04077830();
        }
        iVar11 = 0;
        do {
          lVar10 = *plVar5;
          uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
          if (uVar4 != 0) {
            piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_0932e910) {
                puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_0855f848;
              }
              uVar4 = uVar4 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_040b1e00(plVar5,*(long *)PTR_DAT_0932e910,0);
LAB_0855f848:
          auVar13 = (*(code *)*puVar6)(plVar5,iVar11,puVar6[1]);
          if (*(int *)(*unaff_x27 + 0xe4) == 0) {
            thunk_FUN_040d65a8();
          }
          uVar4 = FUN_0855f594(auVar13._8_8_ & 0xffffffff,unaff_w19);
          if ((uVar4 & 1) != 0) {
            if (auVar13._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            FUN_0844a394(auVar13._0_8_,0);
            if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar10 = *plVar7;
            lVar12 = *(long *)(unaff_x29 + 0x18);
            uVar4 = (ulong)*(ushort *)(lVar10 + 0x12e);
            if (uVar4 != 0) {
              piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              do {
                if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_09287748) {
                  puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
                  goto LAB_0855f8ec;
                }
                uVar4 = uVar4 - 1;
                piVar9 = piVar9 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)FUN_040b1e00(plVar7,*(long *)PTR_DAT_09287748,0);
LAB_0855f8ec:
            uVar3 = (*(code *)*puVar6)(plVar7,iVar11,puVar6[1]);
            if (lVar12 == 0) {
LAB_0855fa74:
                    /* WARNING: Subroutine does not return */
              FUN_04077830();
            }
            lVar10 = *(long *)(lVar12 + 0x10);
            lVar8 = *(long *)PTR_DAT_09289898;
            *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
            if (lVar10 == 0) goto LAB_0855fa74;
            uVar1 = *(uint *)(lVar12 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(lVar12 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar10 + (long)(int)uVar1 * 4 + 0x20) = uVar3;
            }
            else {
              FUN_05bca5b0(lVar12,uVar3,
                           *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
            }
            lVar10 = *unaff_x27;
            if (*(int *)(lVar10 + 0xe4) == 0) {
              thunk_FUN_040d65a8();
              lVar10 = *unaff_x27;
            }
            **(int **)(lVar10 + 0xb8) = **(int **)(lVar10 + 0xb8) + -1;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(lVar2 + 0x20));
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
      while (uVar4 = FUN_07128b70(&stack0x00000040,*unaff_x28), (uVar4 & 1) != 0) {
        FUN_0651ad0c(lVar2,in_stack_00000050 & 0xffffffff,*unaff_x20);
      }
      lVar10 = 0;
      puVar6 = &stack0x00000040;
    }
  }
  else {
    FUN_03b3088c(&stack0x00000018);
    if (param_2 != 1) {
      FUN_0403c9b0(&stack0x00000008);
                    /* WARNING: Subroutine does not return */
      FUN_041676cc(param_1);
    }
    plVar7 = (long *)__cxa_begin_catch(param_1);
    lVar10 = *plVar7;
    in_stack_00000008 = lVar10;
    __cxa_end_catch();
  }
  FUN_05365194(in_stack_00000010,*(undefined8 *)PTR_DAT_0932eab0);
  if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077828(lVar10);
  }
  return;
}


