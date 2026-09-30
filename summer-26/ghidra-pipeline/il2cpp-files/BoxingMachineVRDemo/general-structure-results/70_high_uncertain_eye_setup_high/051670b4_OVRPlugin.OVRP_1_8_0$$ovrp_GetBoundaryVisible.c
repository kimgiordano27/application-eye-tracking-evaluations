/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$ovrp_GetBoundaryVisible
ENTRY_POINT: 051670b4
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_8_0__ovrp_GetBoundaryVisible(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  int *piVar14;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  FUN_02d6084c(PTR_DAT_06782640);
  FUN_02d6084c(PTR_DAT_06782540);
  FUN_02d6084c(PTR_DAT_067823f0);
  FUN_02d6084c(PTR_DAT_06782520);
  *(undefined1 *)(unaff_x24 + 0xe79) = 1;
  puVar3 = PTR_DAT_06782540;
  puVar2 = PTR_DAT_06782510;
  puVar1 = PTR_DAT_067823f0;
  in_stack_00000040 = 0;
  in_stack_00000048 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000030 = 0;
  if (unaff_x19 != (long *)0x0) {
    do {
      iVar4 = (**(code **)(*unaff_x19 + 0x238))();
      if (iVar4 == 3) {
        plVar7 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (plVar7 == (long *)0x0) break;
        (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        pcVar13 = *(code **)(*unaff_x19 + 0x288);
        while ((uVar12 = (*pcVar13)(), (uVar12 & 1) != 0 &&
               (iVar4 = (**(code **)(*unaff_x19 + 0x238))(), iVar4 != 0xf))) {
          FUN_0516780c();
          pcVar13 = *(code **)(*unaff_x19 + 0x288);
        }
      }
      else if (iVar4 == 4) {
        if (unaff_x20 == (long *)0x0) break;
        lVar11 = *unaff_x20;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_05167298;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4();
LAB_05167298:
        iVar4 = (*(code *)*puVar8)();
        if (iVar4 == 9) {
          if (unaff_x22 == (long *)0x0) break;
          lVar11 = *unaff_x22;
          uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
          if (uVar12 != 0) {
            piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06782640) {
                puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 0xc) * 0x10 + 0x138);
                goto LAB_05167390;
              }
              uVar12 = uVar12 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar12 != 0);
          }
          puVar8 = (undefined8 *)FUN_02d9a5d4();
LAB_05167390:
          lVar11 = (*(code *)*puVar8)();
          if (lVar11 != 0) {
            thunk_FUN_02dc61f4(PTR_DAT_067826b8);
            goto LAB_0516773c;
          }
        }
        plVar7 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (plVar7 == (long *)0x0) break;
        uVar9 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        FUN_0509917c();
        iVar4 = (**(code **)(*unaff_x19 + 0x238))();
        if (iVar4 == 2) {
          uVar12 = (**(code **)(*unaff_x19 + 0x288))();
          if ((uVar12 & 1) != 0) {
            iVar4 = 0;
            do {
              iVar5 = (**(code **)(*unaff_x19 + 0x238))();
              if (iVar5 == 0xe) break;
              FUN_0516780c();
              iVar4 = iVar4 + 1;
              uVar12 = (**(code **)(*unaff_x19 + 0x288))();
            } while ((uVar12 & 1) != 0);
            if ((iVar4 == 1) && (*(char *)(unaff_x23 + 0x18) != '\0')) {
              FUN_050eb240(uVar9,&stack0x00000048,&stack0x00000040,0);
              uVar12 = FUN_050f0eb8(in_stack_00000048,0);
              if ((uVar12 & 1) == 0) {
                if (unaff_x21 == (long *)0x0) break;
                uVar9 = (**(code **)(*unaff_x21 + 0x238))();
              }
              else {
                if (unaff_x21 == (long *)0x0) break;
                uVar9 = (**(code **)(*unaff_x21 + 0x1c8))();
              }
              lVar11 = *unaff_x20;
              uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
              if (uVar12 != 0) {
                piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                    puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 2) * 0x10 + 0x138);
                    goto LAB_0516751c;
                  }
                  uVar12 = uVar12 - 1;
                  piVar14 = piVar14 + 4;
                } while (uVar12 != 0);
              }
              puVar8 = (undefined8 *)FUN_02d9a5d4();
LAB_0516751c:
              lVar11 = (*(code *)*puVar8)();
              if (lVar11 == 0) break;
              FUN_03aaceb0(&stack0x00000008,lVar11,*(undefined8 *)PTR_DAT_06782520);
              in_stack_00000030 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
              in_stack_00000028 = in_stack_00000010;
              in_stack_00000020 = in_stack_00000008;
              do {
                do {
                  do {
                    uVar12 = FUN_04a7a4a0(&stack0x00000020,*(undefined8 *)puVar2);
                    if ((uVar12 & 1) == 0) goto LAB_05167658;
                    plVar7 = (long *)thunk_FUN_02d9d438(in_stack_00000030,*(undefined8 *)puVar3);
                  } while (plVar7 == (long *)0x0);
                  lVar11 = *plVar7;
                  uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar12 != 0) {
                    piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                        puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                        goto LAB_051675c4;
                      }
                      uVar12 = uVar12 - 1;
                      piVar14 = piVar14 + 4;
                    } while (uVar12 != 0);
                  }
                  puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar1,1);
LAB_051675c4:
                  uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                  uVar12 = thunk_FUN_04e8bd3c(uVar10,in_stack_00000040,0);
                } while ((uVar12 & 1) == 0);
                lVar11 = *plVar7;
                uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
                if (uVar12 != 0) {
                  piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                  do {
                    if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
                      puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 8) * 0x10 + 0x138);
                      goto LAB_05167630;
                    }
                    uVar12 = uVar12 - 1;
                    piVar14 = piVar14 + 4;
                  } while (uVar12 != 0);
                }
                puVar8 = (undefined8 *)FUN_02d9a5d4(plVar7,*(long *)puVar1,8);
LAB_05167630:
                uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
                uVar12 = thunk_FUN_04e8bd3c(uVar10,uVar9,0);
              } while ((uVar12 & 1) == 0);
              FUN_0516a2e4(uVar12,plVar7);
LAB_05167658:
              FUN_04a7a49c(&stack0x00000020,*(undefined8 *)PTR_DAT_06782508);
            }
          }
        }
        else {
          FUN_0516780c();
        }
      }
      else {
        if (iVar4 != 5) {
          if (iVar4 - 0xdU < 2) {
            return;
          }
          FUN_028f4e40();
          uVar6 = (**(code **)(*unaff_x19 + 0x238))();
          in_stack_00000008 = thunk_FUN_02dc61f4(PTR_DAT_0677db48);
          in_stack_00000010 = 0xffffffffffffffff;
          uStack0000000000000018 = uVar6;
          uVar9 = FUN_0503c914(&stack0x00000008,0);
          uVar10 = thunk_FUN_02dc61f4(PTR_DAT_067826c8);
          FUN_04e83184(uVar10,uVar9,0);
LAB_0516773c:
          uVar9 = FUN_050924a8();
          uVar10 = thunk_FUN_02dc61f4(PTR_DAT_067826c0);
                    /* WARNING: Subroutine does not return */
          FUN_02d609b4(uVar9,uVar10);
        }
        plVar7 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (unaff_x22 == (long *)0x0) break;
        if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)(PTR_DAT_0675e258 + 0x90))) {
                    /* WARNING: Subroutine does not return */
          FUN_02d60e88(plVar7,*(long *)(PTR_DAT_0675e258 + 0x90));
        }
        lVar11 = *unaff_x22;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_06782640) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_05167304;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4();
LAB_05167304:
        (*(code *)*puVar8)();
        if (unaff_x20 == (long *)0x0) break;
        lVar11 = *unaff_x20;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar14 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar14 + -2) == *(long *)puVar1) {
              puVar8 = (undefined8 *)(lVar11 + (long)(*piVar14 + 7) * 0x10 + 0x138);
              goto LAB_0516736c;
            }
            uVar12 = uVar12 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_02d9a5d4();
LAB_0516736c:
        (*(code *)*puVar8)();
      }
      uVar12 = (**(code **)(*unaff_x19 + 0x288))();
      if ((uVar12 & 1) == 0) {
        return;
      }
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d60ae8();
}


