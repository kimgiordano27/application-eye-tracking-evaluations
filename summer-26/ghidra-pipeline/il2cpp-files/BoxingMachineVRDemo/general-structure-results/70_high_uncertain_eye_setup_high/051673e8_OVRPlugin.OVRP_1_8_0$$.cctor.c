/*
FUNCTION_NAME: OVRPlugin.OVRP_1_8_0$$.cctor
ENTRY_POINT: 051673e8
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


void OVRPlugin_OVRP_1_8_0___cctor(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  int *piVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 unaff_x24;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  
  do {
    if (param_1 == 2) {
      uVar4 = (**(code **)(*unaff_x19 + 0x288))();
      if ((uVar4 & 1) != 0) {
        iVar1 = 0;
        do {
          iVar2 = (**(code **)(*unaff_x19 + 0x238))();
          if (iVar2 == 0xe) break;
          FUN_0516780c();
          iVar1 = iVar1 + 1;
          uVar4 = (**(code **)(*unaff_x19 + 0x288))();
        } while ((uVar4 & 1) != 0);
        if ((iVar1 == 1) && (*(char *)(unaff_x23 + 0x18) != '\0')) {
          FUN_050eb240(unaff_x24,&stack0x00000048,&stack0x00000040,0);
          uVar4 = FUN_050f0eb8(in_stack_00000048,0);
          if ((uVar4 & 1) == 0) {
            if (unaff_x21 == (long *)0x0) {
LAB_05167720:
                    /* WARNING: Subroutine does not return */
              FUN_02d60ae8();
            }
            uVar5 = (**(code **)(*unaff_x21 + 0x238))();
          }
          else {
            if (unaff_x21 == (long *)0x0) goto LAB_05167720;
            uVar5 = (**(code **)(*unaff_x21 + 0x1c8))();
          }
          lVar9 = *unaff_x20;
          uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar4 != 0) {
            piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar11 + -2) == *unaff_x28) {
                puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 2) * 0x10 + 0x138);
                goto LAB_0516751c;
              }
              uVar4 = uVar4 - 1;
              piVar11 = piVar11 + 4;
            } while (uVar4 != 0);
          }
          puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_0516751c:
          lVar9 = (*(code *)*puVar6)();
          if (lVar9 == 0) goto LAB_05167720;
          FUN_03aaceb0(&stack0x00000008,lVar9,*(undefined8 *)PTR_DAT_06782520);
          in_stack_00000030 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
          in_stack_00000028 = in_stack_00000010;
          in_stack_00000020 = in_stack_00000008;
          do {
            do {
              do {
                uVar4 = FUN_04a7a4a0(&stack0x00000020,*unaff_x27);
                if ((uVar4 & 1) == 0) goto LAB_05167658;
                plVar7 = (long *)thunk_FUN_02d9d438(in_stack_00000030,*unaff_x29);
              } while (plVar7 == (long *)0x0);
              lVar9 = *plVar7;
              uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
              if (uVar4 != 0) {
                piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar11 + -2) == *unaff_x28) {
                    puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
                    goto LAB_051675c4;
                  }
                  uVar4 = uVar4 - 1;
                  piVar11 = piVar11 + 4;
                } while (uVar4 != 0);
              }
              puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*unaff_x28,1);
LAB_051675c4:
              uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
              uVar4 = thunk_FUN_04e8bd3c(uVar8,in_stack_00000040,0);
            } while ((uVar4 & 1) == 0);
            lVar9 = *plVar7;
            uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar4 != 0) {
              piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar11 + -2) == *unaff_x28) {
                  puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 8) * 0x10 + 0x138);
                  goto LAB_05167630;
                }
                uVar4 = uVar4 - 1;
                piVar11 = piVar11 + 4;
              } while (uVar4 != 0);
            }
            puVar6 = (undefined8 *)FUN_02d9a5d4(plVar7,*unaff_x28,8);
LAB_05167630:
            uVar8 = (*(code *)*puVar6)(plVar7,puVar6[1]);
            uVar4 = thunk_FUN_04e8bd3c(uVar8,uVar5,0);
          } while ((uVar4 & 1) == 0);
          FUN_0516a2e4(uVar4,plVar7);
LAB_05167658:
          FUN_04a7a49c(&stack0x00000020,*(undefined8 *)PTR_DAT_06782508);
        }
      }
    }
    else {
      FUN_0516780c();
    }
    while( true ) {
      while( true ) {
        uVar4 = (**(code **)(*unaff_x19 + 0x288))();
        if ((uVar4 & 1) == 0) {
          return;
        }
        iVar1 = (**(code **)(*unaff_x19 + 0x238))();
        if (iVar1 != 3) break;
        plVar7 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (plVar7 == (long *)0x0) goto LAB_05167720;
        (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
        pcVar10 = *(code **)(*unaff_x19 + 0x288);
        while ((uVar4 = (*pcVar10)(), (uVar4 & 1) != 0 &&
               (iVar1 = (**(code **)(*unaff_x19 + 0x238))(), iVar1 != 0xf))) {
          FUN_0516780c();
          pcVar10 = *(code **)(*unaff_x19 + 0x288);
        }
      }
      if (iVar1 == 4) break;
      if (iVar1 != 5) {
        if (iVar1 - 0xdU < 2) {
          return;
        }
        FUN_028f4e40();
        uVar3 = (**(code **)(*unaff_x19 + 0x238))();
        in_stack_00000008 = thunk_FUN_02dc61f4(PTR_DAT_0677db48);
        in_stack_00000010 = 0xffffffffffffffff;
        uStack0000000000000018 = uVar3;
        uVar5 = FUN_0503c914(&stack0x00000008,0);
        uVar8 = thunk_FUN_02dc61f4(PTR_DAT_067826c8);
        FUN_04e83184(uVar8,uVar5,0);
        goto LAB_0516773c;
      }
      plVar7 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (unaff_x22 == (long *)0x0) goto LAB_05167720;
      if ((plVar7 != (long *)0x0) && (*plVar7 != *(long *)(PTR_DAT_0675e258 + 0x90))) {
                    /* WARNING: Subroutine does not return */
        FUN_02d60e88(plVar7,*(long *)(PTR_DAT_0675e258 + 0x90));
      }
      lVar9 = *unaff_x22;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06782640) {
            puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_05167304;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_05167304:
      (*(code *)*puVar6)();
      if (unaff_x20 == (long *)0x0) goto LAB_05167720;
      lVar9 = *unaff_x20;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *unaff_x28) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 7) * 0x10 + 0x138);
            goto LAB_0516736c;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_0516736c:
      (*(code *)*puVar6)();
    }
    if (unaff_x20 == (long *)0x0) goto LAB_05167720;
    lVar9 = *unaff_x20;
    uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar4 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *unaff_x28) {
          puVar6 = (undefined8 *)(lVar9 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_05167298;
        }
        uVar4 = uVar4 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_05167298:
    iVar1 = (*(code *)*puVar6)();
    if (iVar1 == 9) {
      if (unaff_x22 == (long *)0x0) goto LAB_05167720;
      lVar9 = *unaff_x22;
      uVar4 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar4 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_06782640) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 0xc) * 0x10 + 0x138);
            goto LAB_05167390;
          }
          uVar4 = uVar4 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar4 != 0);
      }
      puVar6 = (undefined8 *)FUN_02d9a5d4();
LAB_05167390:
      lVar9 = (*(code *)*puVar6)();
      if (lVar9 != 0) {
        thunk_FUN_02dc61f4(PTR_DAT_067826b8);
LAB_0516773c:
        uVar5 = FUN_050924a8();
        uVar8 = thunk_FUN_02dc61f4(PTR_DAT_067826c0);
                    /* WARNING: Subroutine does not return */
        FUN_02d609b4(uVar5,uVar8);
      }
    }
    plVar7 = (long *)(**(code **)(*unaff_x19 + 0x248))();
    if (plVar7 == (long *)0x0) goto LAB_05167720;
    unaff_x24 = (**(code **)(*plVar7 + 0x168))(plVar7,*(undefined8 *)(*plVar7 + 0x170));
    FUN_0509917c();
    param_1 = (**(code **)(*unaff_x19 + 0x238))();
  } while( true );
}


