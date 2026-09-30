/*
FUNCTION_NAME: WebSocketSharp.CloseEventArgs$$get_PayloadData
ENTRY_POINT: 0a40c348
PROGRAM: Hyper-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;data_collection;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_17;strong_file_logging_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void WebSocketSharp_CloseEventArgs__get_PayloadData
               (long param_1,undefined1 param_2 [16],float param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *in_x10;
  int *piVar12;
  long unaff_x19;
  long lVar13;
  int iVar14;
  undefined8 uVar15;
  long *unaff_x28;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 in_stack_00000008;
  ulong in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined8 in_stack_00000020;
  ulong in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000048;
  
  uVar16 = (**(code **)(param_1 + (long)(*in_x10 + 9) * 0x10 + 0x138))();
  if (*(int *)(*(long *)PTR_DAT_0ac407d8 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  fVar17 = (float)FUN_0a31170c(uVar16,&stack0x00000048,0);
  if (*(char *)(unaff_x19 + 0x2c) == '\0') {
    if (DAT_0b31f48a == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0e740);
      DAT_0b31f48a = '\x01';
    }
    fVar21 = **(float **)(*(long *)PTR_DAT_0ac0e740 + 0xb8);
    fVar22 = (*(float **)(*(long *)PTR_DAT_0ac0e740 + 0xb8))[1];
    *(float *)(unaff_x19 + 0x24) = fVar17;
    *(float *)(unaff_x19 + 0x28) = param_3;
    *(undefined1 *)(unaff_x19 + 0x2c) = 1;
  }
  else {
    fVar22 = *(float *)(unaff_x19 + 0x28);
    fVar21 = fVar17 - *(float *)(unaff_x19 + 0x24);
    if (DAT_0b31f764 == '\0') {
      FUN_04947ee4(PTR_DAT_0ac0df00);
      DAT_0b31f764 = '\x01';
    }
    puVar2 = PTR_DAT_0ac43908;
    fVar22 = param_3 - fVar22;
    fVar20 = ABS(fVar21);
    if (ABS(fVar21) <= 0.0) {
      fVar20 = 0.0;
    }
    fVar19 = **(float **)(*(long *)PTR_DAT_0ac0df00 + 0xb8) * 8.0;
    fVar18 = fVar20 * DAT_01df4f4c;
    if (fVar20 * DAT_01df4f4c <= fVar19) {
      fVar18 = fVar19;
    }
    if (ABS(0.0 - fVar21) < fVar18) {
      fVar20 = ABS(fVar22);
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      fVar18 = fVar20 * DAT_01df4f4c;
      if (fVar20 * DAT_01df4f4c <= fVar19) {
        fVar18 = fVar19;
      }
      if (ABS(0.0 - fVar22) < fVar18) goto LAB_0a40c5a4;
    }
    *(float *)(unaff_x19 + 0x24) = fVar17;
    *(float *)(unaff_x19 + 0x28) = param_3;
    lVar13 = *(long *)(unaff_x19 + 0x50);
    lVar9 = *(long *)puVar2;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      thunk_FUN_049a583c(lVar9);
      lVar9 = *(long *)puVar2;
    }
    uVar3 = in_stack_00000048;
    puVar2 = PTR_DAT_0acf11b0;
    lVar5 = *(long *)PTR_DAT_0acf11b0;
    uVar16 = *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 8);
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_049a583c();
      lVar5 = *(long *)puVar2;
    }
    puVar10 = *(undefined8 **)(lVar5 + 0xb8);
    lVar9 = puVar10[4];
    if (lVar9 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_049a583c();
        puVar10 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar15 = *puVar10;
      lVar9 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0acf11e8);
      FUN_064283a8(lVar9,uVar15,*(undefined8 *)PTR_DAT_0acf11f8,0);
      plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x20);
      *plVar6 = lVar9;
      thunk_FUN_049ee3d8(plVar6,lVar9);
    }
    in_stack_00000028 = in_stack_00000028 & 0xffffffff00000000;
    in_stack_00000020 = 0;
    FUN_07ab994c(&stack0x00000020,*(uint *)(unaff_x19 + 0x14) & 0xf,in_stack_00000048,
                 *(undefined8 *)PTR_DAT_0acf1210);
    if (lVar13 == 0) goto LAB_0a40cb30;
    FUN_05b2d794(fVar17,param_3,0,fVar21,fVar22,0,lVar13,uVar16,uVar3,lVar9,in_stack_00000020,
                 in_stack_00000028 & 0xffffffff,0,*(undefined8 *)PTR_DAT_0acf11d8);
  }
LAB_0a40c5a4:
  plVar6 = (long *)FUN_0a40b728();
  if (plVar6 != (long *)0x0) {
    lVar9 = *plVar6;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *unaff_x28) {
          puVar10 = (undefined8 *)(lVar9 + (long)(*piVar12 + 10) * 0x10 + 0x138);
          goto LAB_0a40c604;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar10 = (undefined8 *)FUN_04980e68(plVar6,*unaff_x28,10);
LAB_0a40c604:
    iVar4 = (*(code *)*puVar10)(plVar6,puVar10[1]);
    puVar2 = PTR_DAT_0acf11b0;
    if (0 < iVar4) {
      iVar14 = 0;
      plVar6 = (long *)PTR_DAT_0ac43908;
      do {
        plVar7 = (long *)FUN_0a40b728();
        if (plVar7 == (long *)0x0) goto LAB_0a40cb30;
        lVar9 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x28) {
              puVar10 = (undefined8 *)(lVar9 + (long)(*piVar12 + 7) * 0x10 + 0x138);
              goto LAB_0a40c690;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x28,7);
LAB_0a40c690:
        uVar11 = (*(code *)*puVar10)(plVar7,iVar14,puVar10[1]);
        if ((uVar11 & 1) != 0) {
          if (*(int *)(unaff_x19 + 0x18) == iVar14) {
            plVar7 = (long *)FUN_0a40b728();
            if (plVar7 == (long *)0x0) goto LAB_0a40cb30;
            lVar9 = *plVar7;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *unaff_x28) {
                  puVar10 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
                  goto LAB_0a40c710;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar10 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x28,0xc);
LAB_0a40c710:
            fVar20 = (float)(*(code *)*puVar10)(plVar7,puVar10[1]);
            if (*(float *)(unaff_x19 + 0x1c) <= fVar20) goto LAB_0a40c730;
            iVar8 = *(int *)(unaff_x19 + 0x20);
          }
          else {
LAB_0a40c730:
            iVar8 = 0;
            *(int *)(unaff_x19 + 0x18) = iVar14;
            *(undefined4 *)(unaff_x19 + 0x20) = 0;
          }
          *(int *)(unaff_x19 + 0x20) = iVar8 + 1;
          plVar7 = (long *)FUN_0a40b728();
          if (plVar7 == (long *)0x0) goto LAB_0a40cb30;
          lVar9 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *unaff_x28) {
                puVar10 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
                goto LAB_0a40c7a4;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar10 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x28,0xc);
LAB_0a40c7a4:
          fVar20 = (float)(*(code *)*puVar10)(plVar7,puVar10[1]);
          plVar7 = (long *)FUN_0a40b728();
          if (plVar7 == (long *)0x0) goto LAB_0a40cb30;
          lVar9 = *plVar7;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *unaff_x28) {
                puVar10 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0xd) * 0x10 + 0x138);
                goto LAB_0a40c814;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar10 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x28,0xd);
LAB_0a40c814:
          fVar18 = (float)(*(code *)*puVar10)(plVar7,puVar10[1]);
          lVar9 = *plVar6;
          lVar13 = *(long *)(unaff_x19 + 0x50);
          *(float *)(unaff_x19 + 0x1c) = fVar20 + fVar18;
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_049a583c(lVar9);
            lVar9 = *plVar6;
          }
          uVar3 = in_stack_00000048;
          lVar5 = *(long *)puVar2;
          uVar16 = *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 8);
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_049a583c();
            lVar5 = *(long *)puVar2;
          }
          puVar10 = *(undefined8 **)(lVar5 + 0xb8);
          lVar9 = puVar10[5];
          if (lVar9 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_049a583c();
              puVar10 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
            }
            uVar15 = *puVar10;
            lVar9 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0acf11f0);
            FUN_06428644(lVar9,uVar15,*(undefined8 *)PTR_DAT_0acf1200,0);
            plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x28);
            *plVar6 = lVar9;
            thunk_FUN_049ee3d8(plVar6,lVar9);
            plVar6 = (long *)PTR_DAT_0ac43908;
          }
          in_stack_00000008 = 0;
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_07b0a6c0(&stack0x00000008,iVar14,iVar8 + 1,*(uint *)(unaff_x19 + 0x14) & 0xf,
                       in_stack_00000048,*(undefined8 *)PTR_DAT_0acf1218);
          if (lVar13 == 0) goto LAB_0a40cb30;
          in_stack_00000028 = in_stack_00000010;
          in_stack_00000020 = in_stack_00000008;
          in_stack_00000030 = in_stack_00000018;
          FUN_05b30278(fVar17,param_3,0,fVar21,fVar22,0,lVar13,uVar16,uVar3,lVar9,&stack0x00000020,1
                       ,*(undefined8 *)PTR_DAT_0acf11e0);
        }
        plVar7 = (long *)FUN_0a40b728();
        if (plVar7 == (long *)0x0) goto LAB_0a40cb30;
        lVar9 = *plVar7;
        uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
        if (uVar11 != 0) {
          piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
            if (*(long *)(piVar12 + -2) == *unaff_x28) {
              puVar10 = (undefined8 *)(lVar9 + (long)(*piVar12 + 8) * 0x10 + 0x138);
              goto LAB_0a40c9b4;
            }
            uVar11 = uVar11 - 1;
            piVar12 = piVar12 + 4;
          } while (uVar11 != 0);
        }
        puVar10 = (undefined8 *)FUN_04980e68(plVar7,*unaff_x28,8);
LAB_0a40c9b4:
        uVar11 = (*(code *)*puVar10)(plVar7,iVar14,puVar10[1]);
        if ((uVar11 & 1) != 0) {
          lVar9 = *plVar6;
          uVar16 = *(undefined4 *)(unaff_x19 + 0x20);
          lVar13 = *(long *)(unaff_x19 + 0x50);
          if (*(int *)(lVar9 + 0xe4) == 0) {
            thunk_FUN_049a583c(lVar9);
            lVar9 = *plVar6;
          }
          uVar3 = in_stack_00000048;
          lVar5 = *(long *)puVar2;
          uVar1 = *(undefined4 *)(*(long *)(lVar9 + 0xb8) + 8);
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_049a583c();
            lVar5 = *(long *)puVar2;
          }
          puVar10 = *(undefined8 **)(lVar5 + 0xb8);
          lVar9 = puVar10[6];
          if (lVar9 == 0) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_049a583c();
              puVar10 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
            }
            uVar15 = *puVar10;
            lVar9 = thunk_FUN_04983f60(*(undefined8 *)PTR_DAT_0acf11f0);
            FUN_06428644(lVar9,uVar15,*(undefined8 *)PTR_DAT_0acf1208,0);
            plVar6 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x30);
            *plVar6 = lVar9;
            thunk_FUN_049ee3d8(plVar6,lVar9);
            plVar6 = (long *)PTR_DAT_0ac43908;
          }
          in_stack_00000008 = 0;
          in_stack_00000010 = 0;
          in_stack_00000018 = 0;
          FUN_07b0a6c0(&stack0x00000008,iVar14,uVar16,*(uint *)(unaff_x19 + 0x14) & 0xf,
                       in_stack_00000048,*(undefined8 *)PTR_DAT_0acf1218);
          if (lVar13 == 0) goto LAB_0a40cb30;
          in_stack_00000028 = in_stack_00000010;
          in_stack_00000020 = in_stack_00000008;
          in_stack_00000030 = in_stack_00000018;
          FUN_05b30278(fVar17,param_3,0,fVar21,fVar22,0,lVar13,uVar1,uVar3,lVar9,&stack0x00000020,0,
                       *(undefined8 *)PTR_DAT_0acf11e0);
        }
        iVar14 = iVar14 + 1;
      } while (iVar14 != iVar4);
    }
    return;
  }
LAB_0a40cb30:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


