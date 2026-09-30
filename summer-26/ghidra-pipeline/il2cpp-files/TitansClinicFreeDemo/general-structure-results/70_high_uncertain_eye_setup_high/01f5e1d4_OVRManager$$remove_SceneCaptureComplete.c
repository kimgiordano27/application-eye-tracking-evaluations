/*
FUNCTION_NAME: OVRManager$$remove_SceneCaptureComplete
ENTRY_POINT: 01f5e1d4
PROGRAM: TitansClinicFreeDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_21;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRManager__remove_SceneCaptureComplete
                (undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4,int *param_5)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined1 uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 *puVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  double dStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined8 uStack_28;
  undefined4 uStack_1c;
  long lStack_18;
  double dStack_10;
  long lStack_8;
  
  lVar2 = tpidr_el0;
  lStack_8 = *(long *)(lVar2 + 0x28);
  uStack_1c = param_4;
  lStack_18 = param_3;
  if ((DAT_0293dca8 & 1) == 0) {
    thunk_FUN_01279b34(PTR_DAT_027ba9b8);
    thunk_FUN_01279b34(PTR_DAT_027b4b30);
    thunk_FUN_01279b34(PTR_DAT_027be4d0);
    thunk_FUN_01279b34(PTR_DAT_027b1af0);
    thunk_FUN_01279b34(PTR_DAT_027b9de8);
    thunk_FUN_01279b34(PTR_DAT_027be7f0);
    thunk_FUN_01279b34(PTR_DAT_027c0a78);
    thunk_FUN_01279b34(PTR_DAT_027c0ab8);
    thunk_FUN_01279b34(PTR_DAT_027c0aa8);
    DAT_0293dca8 = 1;
  }
  uStack_28 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if ((int)param_2 == 0) {
    iVar19 = 3;
    puVar18 = (undefined8 *)PTR_DAT_027c0a78;
LAB_01f5e6f4:
    uVar14 = *puVar18;
    param_5[0x10] = iVar19;
  }
  else {
    uStack_40 = 0;
    uStack_38 = 0x10000000000;
    uStack_30 = 0;
    puStack_68 = &uStack_a0;
    uStack_60 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    iStack_4c = -1;
    iStack_54 = -1;
    uStack_50 = 0xffffffff;
    uStack_5c = 0xffffffff;
    uStack_58 = 0xffffffff;
    dStack_48 = -1.0;
    if (((param_3 == 0) || (lVar13 = FUN_01f1a868(param_3,0), lStack_18 == 0)) ||
       (uVar14 = FUN_01f1afd0(lStack_18,0), lVar13 == 0)) goto LAB_01f5e9b4;
    uVar8 = FUN_01e68140(lVar13,uVar14,4,0);
    lVar13 = lStack_18;
    puVar5 = PTR_DAT_027be7f0;
    uStack_40 = CONCAT71(uStack_40._1_7_,uVar8) & 0xffffffffffffff01;
    if (lStack_18 == 0) goto LAB_01f5e9b4;
    plVar17 = (long *)(param_5 + 0xc);
    *plVar17 = *(long *)(lStack_18 + 0x78);
    param_5[8] = 0;
    if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    puVar3 = PTR_DAT_027ba9b8;
    FUN_01f5eb94(&uStack_90,param_1,param_2,lVar13);
    FUN_01f59330(&uStack_90);
    uVar6 = uStack_1c;
    bVar7 = false;
    uVar12 = 0;
    do {
      do {
        uVar22 = param_4;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar15 = FUN_01f59c20(uVar12,&uStack_90,&uStack_38,&puStack_68,param_5,&lStack_18,uVar22);
        if ((uVar15 & 1) == 0) goto LAB_01f5e82c;
        param_4 = uVar6;
      } while ((uint)uStack_38 == 0x12);
      uVar10 = (uint)uStack_38;
      if (uStack_38._4_4_ != 0x100) {
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar15 = FUN_01f5dc08(param_5,&puStack_68,&uStack_38);
        if ((uVar15 & 1) == 0) goto LAB_01f5e868;
        uStack_38 = CONCAT44(0x100,(uint)uStack_38);
        uVar10 = (uint)uStack_38;
      }
      if (uVar10 == 0x13) {
        if ((uVar12 & 0xfffffffe) != 0xc) goto LAB_01f5e868;
        if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        uVar12 = FUN_01f5ec58(&puStack_68,&uStack_90,uVar22,param_5);
        goto LAB_01f5e830;
      }
      if ((uStack_40 & 1) == 0) {
        lVar13 = *(long *)puVar3;
        uVar21 = uVar12;
      }
      else {
        uVar1 = 3;
        if (uVar12 != 0x12) {
          uVar1 = uVar12;
        }
        uVar21 = 5;
        if (uVar1 != 0x13) {
          uVar21 = uVar1;
        }
        if ((uVar10 & 0xfffffffd) != 0xc && uVar10 != 0xd) {
          uVar21 = uVar12;
        }
        if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        bVar9 = FUN_01f5f230(&uStack_90);
        lVar13 = *(long *)puVar3;
        if (*(int *)(lVar13 + 0xe0) == 0) {
          thunk_FUN_01220628(lVar13);
          lVar13 = *(long *)puVar3;
        }
        lVar20 = **(long **)(lVar13 + 0xb8);
        if (lVar20 == 0) goto LAB_01f5e9b4;
        if (*(uint *)(lVar20 + 0x18) <= uVar21) goto LAB_01f5e9b8;
        lVar20 = *(long *)(lVar20 + (long)(int)uVar21 * 8 + 0x20);
        if (lVar20 == 0) goto LAB_01f5e9b4;
        if (*(uint *)(lVar20 + 0x18) <= (uint)uStack_38) goto LAB_01f5e9b8;
        if (((*(int *)(lVar20 + (long)(int)(uint)uStack_38 * 4 + 0x20) != 0x14 & (bVar9 ^ 0xff)) ==
             0) && ((uint)uStack_38 - 4 < 10)) {
                    /* WARNING: Could not recover jumptable at 0x01f5e4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar15 = (*(code *)(&UNK_01f5e500 + (ulong)(byte)(&DAT_007c649a)[(uint)uStack_38 - 4] * 4)
                   )();
          return uVar15;
        }
      }
      if (*(int *)(lVar13 + 0xe0) == 0) {
        thunk_FUN_01220628(lVar13);
        lVar13 = *(long *)puVar3;
      }
      lVar13 = **(long **)(lVar13 + 0xb8);
      if (lVar13 == 0) goto LAB_01f5e9b4;
      if (*(uint *)(lVar13 + 0x18) <= uVar21) {
LAB_01f5e9b8:
                    /* WARNING: Subroutine does not return */
        FUN_01230ca8();
      }
      lVar13 = *(long *)(lVar13 + (long)(int)uVar21 * 8 + 0x20);
      if (lVar13 == 0) goto LAB_01f5e9b4;
      if (*(uint *)(lVar13 + 0x18) <= (uint)uStack_38) goto LAB_01f5e9b8;
      uVar12 = *(uint *)(lVar13 + (long)(int)(uint)uStack_38 * 4 + 0x20);
      if (uVar12 == 0x14) goto LAB_01f5e868;
      if (0x14 < (int)uVar12) {
        if (lStack_18 == 0) goto LAB_01f5e9b4;
        uVar10 = FUN_01f1b33c(lStack_18,0);
        lVar13 = lStack_18;
        puVar4 = PTR_DAT_027be4d0;
        if ((uVar10 >> 3 & 1) == 0) {
          uVar14 = extraout_x1;
          if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
            thunk_FUN_01220628();
            uVar14 = extraout_x1_00;
          }
          uVar15 = FUN_01f5aedc(uVar12,uVar14,param_5,&uStack_1c,&puStack_68,lVar13);
joined_r0x01f5e660:
          if ((uVar15 & 1) == 0) goto LAB_01f5e82c;
        }
        else {
          uVar14 = extraout_x1;
          if (*(int *)(*(long *)PTR_DAT_027be4d0 + 0xe0) == 0) {
            thunk_FUN_01220628();
            uVar14 = extraout_x1_01;
          }
          if (DAT_0293daf8 == '\0') {
            thunk_FUN_01279b34(puVar4);
            DAT_0293daf8 = '\x01';
            uVar14 = extraout_x1_02;
          }
          lVar13 = *(long *)puVar4;
          if (*(int *)(lVar13 + 0xe0) == 0) {
            thunk_FUN_01220628();
            lVar13 = *(long *)puVar4;
            uVar14 = extraout_x1_03;
          }
          lVar20 = lStack_18;
          if (**(char **)(lVar13 + 0xb8) == '\0') {
            if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
              thunk_FUN_01220628();
              uVar14 = extraout_x1_04;
            }
            uVar15 = FUN_01f5dd00(uVar12,uVar14,param_5,&uStack_1c,&puStack_68,lVar20);
            goto joined_r0x01f5e660;
          }
        }
        uVar12 = 0;
        bVar7 = true;
      }
      lVar13 = lStack_18;
    } while ((6 < (uint)uStack_38) || ((1 << (ulong)((uint)uStack_38 & 0x1f) & 0x43U) == 0));
    if (!bVar7) goto LAB_01f5e868;
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_01220628();
    }
    FUN_01f5d558(lVar13,&puStack_68);
    uVar6 = uStack_1c;
    if (iStack_4c == -1) {
LAB_01f5e748:
      if ((*param_5 == -1) && (param_5[1] == -1)) {
        bVar7 = param_5[2] == -1;
      }
      else {
        bVar7 = false;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar15 = FUN_01f5f2b0(param_5,plVar17,uVar6);
      if ((uVar15 & 1) == 0) {
LAB_01f5e82c:
        uVar12 = 0;
        goto LAB_01f5e830;
      }
      plVar16 = (long *)*plVar17;
      if (plVar16 == (long *)0x0) goto LAB_01f5e9b4;
      uVar15 = (**(code **)(*plVar16 + 0x2a8))
                         (plVar16,*param_5,param_5[1],param_5[2],param_5[3],param_5[4],param_5[5],0,
                          param_5[8],&uStack_28,*(undefined8 *)(*plVar16 + 0x2b0));
      dVar24 = dStack_48;
      if ((uVar15 & 1) == 0) {
        iVar19 = 7;
        puVar18 = (undefined8 *)PTR_DAT_027c0aa8;
        goto LAB_01f5e6f4;
      }
      if (0.0 < dStack_48) {
        if (*(int *)(*(long *)PTR_DAT_027b1af0 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        dVar24 = dVar24 * DAT_00745958;
        dVar23 = modf(dVar24,&dStack_10);
        if (0.0 <= dVar24) {
          if (dVar23 == 0.5) {
            dVar24 = 1.0;
            goto LAB_01f5e8dc;
          }
          dVar23 = (double)(long)(dVar24 + 0.5);
        }
        else if (dVar23 == -0.5) {
          dVar24 = -1.0;
LAB_01f5e8dc:
          dVar23 = dStack_10;
          if (((long)dStack_10 & 1U) != 0) {
            dVar23 = dStack_10 + dVar24;
          }
        }
        else {
          dVar23 = (double)(long)(dVar24 + -0.5);
        }
        if (*(int *)(*(long *)PTR_DAT_027b4b30 + 0xe0) == 0) {
          thunk_FUN_01220628();
        }
        lVar13 = -0x8000000000000000;
        if (dVar23 != INFINITY) {
          lVar13 = (long)dVar23;
        }
        uStack_28 = FUN_01e727dc(&uStack_28,lVar13,0);
      }
      iVar19 = iStack_54;
      if (iStack_54 != -1) {
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) {
LAB_01f5e9b4:
                    /* WARNING: Subroutine does not return */
          FUN_01230ca0();
        }
        iVar11 = (**(code **)(*plVar17 + 0x1f8))
                           (plVar17,uStack_28,*(undefined8 *)(*plVar17 + 0x200));
        if (iVar19 != iVar11) {
          iVar19 = 4;
          puVar18 = (undefined8 *)PTR_DAT_027c0ab8;
          goto LAB_01f5e6f4;
        }
      }
      *(undefined8 *)(param_5 + 0xe) = uStack_28;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_01220628();
      }
      uVar12 = FUN_01f5f534(&uStack_90,param_5,uVar6,bVar7);
      goto LAB_01f5e830;
    }
    uVar12 = param_5[3];
    if (iStack_4c == 0) {
      if (uVar12 < 0xd) {
        uVar10 = 0;
        if (uVar12 != 0xc) {
          uVar10 = uVar12;
        }
LAB_01f5e744:
        param_5[3] = uVar10;
        goto LAB_01f5e748;
      }
    }
    else if (uVar12 < 0x18) {
      if ((int)uVar12 < 0xc) {
        uVar10 = uVar12 + 0xc;
        goto LAB_01f5e744;
      }
      goto LAB_01f5e748;
    }
LAB_01f5e868:
    if ((DAT_0293dcc4 & 1) == 0) {
      thunk_FUN_01279b34(PTR_DAT_027c0a78);
      DAT_0293dcc4 = 1;
    }
    puVar5 = PTR_DAT_027c0a78;
    param_5[0x10] = 4;
    uVar14 = *(undefined8 *)puVar5;
  }
  uVar12 = 0;
  *(undefined8 *)(param_5 + 0x12) = uVar14;
  param_5[0x14] = 0;
  param_5[0x15] = 0;
LAB_01f5e830:
  if (*(long *)(lVar2 + 0x28) == lStack_8) {
    return (ulong)(uVar12 & 1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


