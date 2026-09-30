/*
FUNCTION_NAME: FUN_07045a7c
ENTRY_POINT: 07045a7c
PROGRAM: m3ar-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_2
*/


void FUN_07045a7c(uint *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 uVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  uint *puVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  int *piVar18;
  undefined8 uVar19;
  code *pcVar20;
  undefined8 uVar21;
  ulong uVar22;
  long *plVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  long local_120;
  long *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulong uStack_100;
  undefined4 local_e8;
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  long *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  ulong uStack_88;
  long *local_80;
  long local_78;
  
  lVar12 = tpidr_el0;
  local_78 = *(long *)(lVar12 + 0x28);
  if ((DAT_09545349 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f8d0e8);
    FUN_0403162c(PTR_DAT_08f6dab8);
    FUN_0403162c(PTR_DAT_08f8d1e0);
    FUN_0403162c(PTR_DAT_08f8d1e8);
    FUN_0403162c(PTR_DAT_08f6dac0);
    FUN_0403162c(PTR_DAT_08f65af8);
    FUN_0403162c(PTR_DAT_08f8cf80);
    FUN_0403162c(PTR_DAT_08f8d0f0);
    FUN_0403162c(PTR_DAT_08f8b8f0);
    FUN_0403162c(PTR_DAT_08f6db00);
    FUN_0403162c(PTR_DAT_08f8d1f0);
    FUN_0403162c(PTR_DAT_08f67a58);
    DAT_09545349 = 1;
  }
  lVar10 = *(long *)(param_2 + 0x20);
  if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
    lVar10 = FUN_0406aaec();
  }
  plVar13 = (long *)((long)&local_120 -
                    ((ulong)*(uint *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x30) + 0xfc) + 0xf &
                    0x1fffffff0));
  uVar1 = *param_1;
  local_d0._0_8_ = 0;
  local_d0._8_8_ = 0;
  auVar24 = ZEXT816(0);
  local_e0._0_8_ = 0;
  local_e0._8_8_ = 0;
  auVar4 = ZEXT816(0);
  local_e8 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = (long *)0x0;
  uStack_b8 = 0;
  local_c0 = (long *)0x0;
  if (3 < uVar1) {
    if (uVar1 == 4) {
      local_e0 = *(undefined1 (*) [16])(param_1 + 0x2a);
      param_1[0x2a] = 0;
      param_1[0x2b] = 0;
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      *param_1 = 0xffffffff;
      local_d0 = ZEXT816(0);
      goto LAB_07045bcc;
    }
    plVar23 = *(long **)(param_1 + 10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    if (plVar23 == (long *)0x0) {
      local_120 = lVar12;
      if (*(long *)(lVar12 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07046d18;
    }
    lVar10 = *(long *)(param_2 + 0x20);
    uVar19 = *(undefined8 *)(param_1 + 0xc);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0406aaec();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0406aaec(lVar10);
    }
    lVar15 = *plVar23;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar10) {
          puVar11 = (undefined8 *)(lVar15 + (long)*piVar18 * 0x10 + 0x138);
          goto LAB_07045ccc;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_0406ae20(plVar23,lVar10,0);
LAB_07045ccc:
    uVar19 = (*(code *)*puVar11)(plVar23,uVar19,puVar11[1]);
    *(undefined8 *)(param_1 + 0x14) = uVar19;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  puVar7 = PTR_DAT_08f8d1e8;
  puVar6 = PTR_DAT_08f6db00;
  puVar5 = PTR_DAT_08f6dac0;
  if (1 < (int)uVar1) {
    if (uVar1 == 2) {
      uStack_98 = *(undefined8 *)(param_1 + 0x20);
      local_a0 = *(long **)(param_1 + 0x1e);
      uStack_88 = *(ulong *)(param_1 + 0x24);
      local_90 = *(undefined8 *)(param_1 + 0x22);
      param_1[0x20] = 0;
      param_1[0x21] = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x22] = 0;
      param_1[0x23] = 0;
      *param_1 = 0xffffffff;
      local_120 = lVar12;
      goto LAB_0704654c;
    }
    local_120 = lVar12;
    if (uVar1 != 3) goto LAB_070460f4;
    local_d0 = *(undefined1 (*) [16])(param_1 + 0x26);
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    *param_1 = 0xffffffff;
    goto LAB_07046308;
  }
  if (uVar1 == 0) {
    uStack_98 = *(undefined8 *)(param_1 + 0x20);
    local_a0 = *(long **)(param_1 + 0x1e);
    uStack_88 = *(ulong *)(param_1 + 0x24);
    local_90 = *(undefined8 *)(param_1 + 0x22);
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    *param_1 = 0xffffffff;
    local_120 = lVar12;
    goto LAB_0704603c;
  }
  local_120 = lVar12;
  if (uVar1 != 1) goto LAB_070460f4;
  local_d0 = *(undefined1 (*) [16])(param_1 + 0x26);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *param_1 = 0xffffffff;
  do {
    uVar19 = local_d0._0_8_;
    if ((long *)local_d0._0_8_ == (long *)0x0) {
      if (local_d0[8] == '\0') goto LAB_07045e7c;
    }
    else {
      uVar8 = local_d0._10_2_;
      lVar12 = *(long *)(*(long *)PTR_DAT_08f6dab8 + 0x20);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_0406aaec();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_0406aaec(lVar12);
      }
      lVar10 = *(long *)uVar19;
      uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar12) {
            puVar11 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
            goto 
            System_Array_EmptyInternalEnumerator<KeyValuePair<object,_EventInterestReflectionUtils_DefaultEventInterests>>___ctor
            ;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_0406ae20(uVar19,lVar12,0);

      System_Array_EmptyInternalEnumerator<KeyValuePair<object,_EventInterestReflectionUtils_DefaultEventInterests>>___ctor
      :
      uVar16 = (*(code *)*puVar11)(uVar19,uVar8,puVar11[1]);
      if ((uVar16 & 1) == 0) {
LAB_07045e7c:
        param_1[0x1a] = 0;
        param_1[0x1b] = 0;
        param_1[0x1c] = 0;
        param_1[0x1d] = 0;
        param_1[0x18] = 1;
        goto LAB_07046880;
      }
    }
    plVar23 = *(long **)(param_1 + 0x14);
    if (plVar23 == (long *)0x0) {
LAB_070462a8:
      auVar4._8_8_ = local_e0._8_8_;
      auVar4._0_8_ = local_e0._0_8_;
      auVar24 = local_d0;
      if (*(long *)(local_120 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07046d18;
    }
    lVar12 = *(long *)(param_2 + 0x20);
    lVar10 = *(long *)(param_1 + 0xe);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0406aaec();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0406aaec(lVar12);
    }
    lVar15 = *plVar23;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar12) {
          lVar12 = lVar15 + (long)*piVar18 * 0x10 + 0x138;
          goto LAB_07045f34;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    lVar12 = FUN_0406ae20(plVar23,lVar12,0);
LAB_07045f34:
    lVar12 = *(long *)(lVar12 + 8);
    local_118 = plVar13;
    (**(code **)(lVar12 + 0x10))(*(undefined8 *)(lVar12 + 8),lVar12,plVar23,&local_118,plVar13);
    if (lVar10 == 0) goto LAB_070462a8;
    lVar15 = *(long *)(param_2 + 0x20);
    uVar3 = *(ushort *)(lVar15 + 0x135);
    lVar12 = lVar15;
    if ((uVar3 & 1) == 0) {
      lVar12 = FUN_0406aaec();
      lVar15 = *(long *)(param_2 + 0x20);
      uVar3 = *(ushort *)(lVar15 + 0x135);
    }
    uVar19 = **(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x38);
    lVar12 = lVar15;
    if ((uVar3 & 1) == 0) {
      lVar12 = FUN_0406aaec();
      lVar15 = *(long *)(param_2 + 0x20);
      uVar3 = *(ushort *)(lVar15 + 0x135);
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x38);
    if ((uVar3 & 1) == 0) {
      lVar15 = FUN_0406aaec();
    }
    local_80 = plVar13;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x30) + 0x28)) {
      local_80 = (long *)*plVar13;
    }
    (**(code **)(lVar12 + 0x10))(uVar19,lVar12,lVar10,&local_80,&local_118);
    uStack_b8 = uStack_110;
    local_c0 = local_118;
    uStack_a8 = uStack_100;
    local_b0 = local_108;
    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f8d1f0 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    uStack_98 = uStack_b8;
    local_a0 = local_c0;
    uStack_88 = uStack_a8;
    local_90 = local_b0;
    uVar16 = FUN_05069368(&local_a0,*(undefined8 *)puVar7);
    lVar12 = local_120;
    if ((uVar16 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x20) = uStack_98;
      *(long **)(param_1 + 0x1e) = local_a0;
      *(ulong *)(param_1 + 0x24) = uStack_88;
      *(undefined8 *)(param_1 + 0x22) = local_90;
      lVar15 = *(long *)(param_2 + 0x20);
      uVar3 = *(ushort *)(lVar15 + 0x135);
      lVar10 = lVar15;
      if ((uVar3 & 1) == 0) {
        lVar10 = FUN_0406aaec();
        lVar15 = *(long *)(param_2 + 0x20);
        uVar3 = *(ushort *)(lVar15 + 0x135);
      }
      pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x40);
      if ((uVar3 & 1) == 0) {
        lVar15 = FUN_0406aaec();
      }
      (*pcVar20)(param_1 + 2,&local_a0,param_1,*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x40));
      goto FUN_07046a10;
    }
LAB_0704603c:
    plVar23 = local_a0;
    auVar24._8_8_ = local_90;
    auVar24._0_8_ = uStack_98;
    if (local_a0 != (long *)0x0) {
      uVar16 = uStack_88 & 0xffff;
      lVar12 = *(long *)(*(long *)PTR_DAT_08f8d1e0 + 0x20);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_0406aaec();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_0406aaec(lVar12);
      }
      lVar10 = *plVar23;
      uVar22 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar22 != 0) {
        piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar12) {
            puVar11 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_070460d8;
          }
          uVar22 = uVar22 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar22 != 0);
      }
      puVar11 = (undefined8 *)FUN_0406ae20(plVar23,lVar12,0);
LAB_070460d8:
      auVar24 = (*(code *)*puVar11)(plVar23,uVar16,puVar11[1]);
    }
    *(undefined1 (*) [16])(param_1 + 0x10) = auVar24;
    if ((auVar24._0_8_ & 0xff) != 0) goto LAB_07046618;
LAB_070460f4:
    auVar4._8_8_ = local_e0._8_8_;
    auVar4._0_8_ = local_e0._0_8_;
    plVar23 = *(long **)(param_1 + 0x14);
    if (plVar23 == (long *)0x0) {
      auVar24 = local_d0;
      if (*(long *)(local_120 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07046d18;
    }
    lVar12 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0406aaec();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0406aaec(lVar12);
    }
    lVar10 = *plVar23;
    uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar12) {
          puVar11 = (undefined8 *)(lVar10 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_0704617c;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_0406ae20(plVar23,lVar12,1);
LAB_0704617c:
    auVar24 = (*(code *)*puVar11)(plVar23,puVar11[1]);
    if ((*(ushort *)(*(long *)(*(long *)puVar6 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    local_d0 = auVar24;
    uVar16 = FUN_0425a2e4(local_d0,*(undefined8 *)puVar5);
    lVar12 = local_120;
  } while ((uVar16 & 1) != 0);
  *param_1 = 1;
  *(undefined1 (*) [16])(param_1 + 0x26) = local_d0;
  lVar15 = *(long *)(param_2 + 0x20);
  uVar3 = *(ushort *)(lVar15 + 0x135);
  lVar10 = lVar15;
  if ((uVar3 & 1) == 0) {
    lVar10 = FUN_0406aaec();
    lVar15 = *(long *)(param_2 + 0x20);
    uVar3 = *(ushort *)(lVar15 + 0x135);
  }
  pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x58);
  if ((uVar3 & 1) == 0) {
    lVar15 = FUN_0406aaec();
  }
  (*pcVar20)(param_1 + 2,local_d0,param_1,*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x58));
FUN_07046a10:
  auVar24 = local_d0;
  auVar4 = local_e0;
  if (*(long *)(lVar12 + 0x28) == local_78) {
    return;
  }
LAB_07046d18:
  local_e0 = auVar4;
  local_d0 = auVar24;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_07046618:
  auVar4._8_8_ = local_e0._8_8_;
  auVar4._0_8_ = local_e0._0_8_;
  plVar23 = *(long **)(param_1 + 0x14);
  if (plVar23 != (long *)0x0) {
    lVar12 = *(long *)(param_2 + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0406aaec();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0406aaec(lVar12);
    }
    lVar10 = *plVar23;
    uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar12) {
          puVar11 = (undefined8 *)(lVar10 + (long)(*piVar18 + 1) * 0x10 + 0x138);
          goto LAB_070466a0;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_0406ae20(plVar23,lVar12,1);
LAB_070466a0:
    auVar24 = (*(code *)*puVar11)(plVar23,puVar11[1]);
    if ((*(ushort *)(*(long *)(*(long *)puVar6 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    local_d0 = auVar24;
    uVar16 = FUN_0425a2e4(local_d0,*(undefined8 *)puVar5);
    lVar12 = local_120;
    if ((uVar16 & 1) == 0) {
      *param_1 = 3;
      *(undefined1 (*) [16])(param_1 + 0x26) = local_d0;
      lVar15 = *(long *)(param_2 + 0x20);
      uVar3 = *(ushort *)(lVar15 + 0x135);
      lVar10 = lVar15;
      if ((uVar3 & 1) == 0) {
        lVar10 = FUN_0406aaec();
        lVar15 = *(long *)(param_2 + 0x20);
        uVar3 = *(ushort *)(lVar15 + 0x135);
      }
      pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x58);
      if ((uVar3 & 1) == 0) {
        lVar15 = FUN_0406aaec();
      }
      (*pcVar20)(param_1 + 2,local_d0,param_1,*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x58));
      goto FUN_07046a10;
    }
LAB_07046308:
    uVar19 = local_d0._0_8_;
    if ((long *)local_d0._0_8_ == (long *)0x0) {
      if (local_d0[8] == '\0') goto LAB_07046880;
    }
    else {
      uVar8 = local_d0._10_2_;
      lVar12 = *(long *)(*(long *)PTR_DAT_08f6dab8 + 0x20);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_0406aaec();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_0406aaec(lVar12);
      }
      lVar10 = *(long *)uVar19;
      uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar12) {
            puVar11 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_070463a8;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_0406ae20(uVar19,lVar12,0);
LAB_070463a8:
      uVar16 = (*(code *)*puVar11)(uVar19,uVar8,puVar11[1]);
      if ((uVar16 & 1) == 0) goto LAB_07046880;
    }
    plVar23 = *(long **)(param_1 + 0x14);
    if (plVar23 == (long *)0x0) {
LAB_070467d0:
      auVar4._8_8_ = local_e0._8_8_;
      auVar4._0_8_ = local_e0._0_8_;
      auVar24 = local_d0;
      if (*(long *)(local_120 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07046d18;
    }
    lVar12 = *(long *)(param_2 + 0x20);
    lVar10 = *(long *)(param_1 + 0xe);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0406aaec();
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_0406aaec(lVar12);
    }
    lVar15 = *plVar23;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar12) {
          lVar12 = lVar15 + (long)*piVar18 * 0x10 + 0x138;
          goto LAB_07046444;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    lVar12 = FUN_0406ae20(plVar23,lVar12,0);
LAB_07046444:
    lVar12 = *(long *)(lVar12 + 8);
    local_118 = plVar13;
    (**(code **)(lVar12 + 0x10))(*(undefined8 *)(lVar12 + 8),lVar12,plVar23,&local_118,plVar13);
    if (lVar10 == 0) goto LAB_070467d0;
    lVar15 = *(long *)(param_2 + 0x20);
    uVar3 = *(ushort *)(lVar15 + 0x135);
    lVar12 = lVar15;
    if ((uVar3 & 1) == 0) {
      lVar12 = FUN_0406aaec();
      lVar15 = *(long *)(param_2 + 0x20);
      uVar3 = *(ushort *)(lVar15 + 0x135);
    }
    uVar19 = **(undefined8 **)(*(long *)(lVar12 + 0xc0) + 0x38);
    lVar12 = lVar15;
    if ((uVar3 & 1) == 0) {
      lVar12 = FUN_0406aaec();
      lVar15 = *(long *)(param_2 + 0x20);
      uVar3 = *(ushort *)(lVar15 + 0x135);
    }
    lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x38);
    if ((uVar3 & 1) == 0) {
      lVar15 = FUN_0406aaec();
    }
    local_80 = plVar13;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar15 + 0xc0) + 0x30) + 0x28)) {
      local_80 = (long *)*plVar13;
    }
    (**(code **)(lVar12 + 0x10))(uVar19,lVar12,lVar10,&local_80,&local_118);
    uStack_b8 = uStack_110;
    local_c0 = local_118;
    uStack_a8 = uStack_100;
    local_b0 = local_108;
    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f8d1f0 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    uStack_98 = uStack_b8;
    local_a0 = local_c0;
    uStack_88 = uStack_a8;
    local_90 = local_b0;
    uVar16 = FUN_05069368(&local_a0,*(undefined8 *)puVar7);
    lVar12 = local_120;
    if ((uVar16 & 1) == 0) {
      *param_1 = 2;
      *(undefined8 *)(param_1 + 0x20) = uStack_98;
      *(long **)(param_1 + 0x1e) = local_a0;
      *(ulong *)(param_1 + 0x24) = uStack_88;
      *(undefined8 *)(param_1 + 0x22) = local_90;
      lVar15 = *(long *)(param_2 + 0x20);
      uVar3 = *(ushort *)(lVar15 + 0x135);
      lVar10 = lVar15;
      if ((uVar3 & 1) == 0) {
        lVar10 = FUN_0406aaec();
        lVar15 = *(long *)(param_2 + 0x20);
        uVar3 = *(ushort *)(lVar15 + 0x135);
      }
      pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x40);
      if ((uVar3 & 1) == 0) {
        lVar15 = FUN_0406aaec();
      }
      (*pcVar20)(param_1 + 2,&local_a0,param_1,*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x40));
      goto FUN_07046a10;
    }
LAB_0704654c:
    plVar23 = local_a0;
    auVar25._8_8_ = local_90;
    auVar25._0_8_ = uStack_98;
    if (local_a0 != (long *)0x0) {
      uVar16 = uStack_88 & 0xffff;
      lVar12 = *(long *)(*(long *)PTR_DAT_08f8d1e0 + 0x20);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_0406aaec();
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
        lVar12 = FUN_0406aaec(lVar12);
      }
      lVar10 = *plVar23;
      uVar22 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar22 != 0) {
        piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == lVar12) {
            puVar11 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
            goto LAB_070465e8;
          }
          uVar22 = uVar22 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar22 != 0);
      }
      puVar11 = (undefined8 *)FUN_0406ae20(plVar23,lVar12,0);
LAB_070465e8:
      auVar25 = (*(code *)*puVar11)(plVar23,uVar16,puVar11[1]);
    }
    if ((((auVar25._0_8_ & 0xff) != 0) && (*(long *)(param_1 + 0x12) < auVar25._8_8_)) &&
       ((char)param_1[0x10] != '\0')) {
      *(undefined1 (*) [16])(param_1 + 0x10) = auVar25;
    }
    goto LAB_07046618;
  }
  auVar24 = local_d0;
  if (*(long *)(local_120 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  goto LAB_07046d18;
LAB_07046880:
  lVar12 = local_120;
  plVar13 = *(long **)(param_1 + 0x14);
  if (plVar13 != (long *)0x0) {
    lVar10 = *plVar13;
    uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08f8cf80) {
          puVar11 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
          goto 
          System_Array_EmptyInternalEnumerator<KeyValuePair<object,_StyleComplexSelector_PseudoStateData>>___cctor
          ;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)PTR_DAT_08f8cf80,0);

    System_Array_EmptyInternalEnumerator<KeyValuePair<object,_StyleComplexSelector_PseudoStateData>>___cctor
    :
    auVar24 = (*(code *)*puVar11)(plVar13,puVar11[1]);
    puVar5 = PTR_DAT_08f67a58;
    plVar13 = auVar24._0_8_;
    if (*(int *)(*(long *)PTR_DAT_08f67a58 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    local_e0 = auVar24;
    if (DAT_09539e0c == '\0') {
      FUN_0403162c(PTR_DAT_08f67a58);
      DAT_09539e0c = '\x01';
    }
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if (DAT_09539e0d == '\0') {
      FUN_0403162c(PTR_DAT_08f67c08);
      DAT_09539e0d = '\x01';
    }
    if (plVar13 != (long *)0x0) {
      lVar10 = *plVar13;
      uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08f67c08) {
            puVar11 = (undefined8 *)(lVar10 + (long)*piVar18 * 0x10 + 0x138);
            goto 
            System_Array_EmptyInternalEnumerator<KeyValuePair<object,_TTSServiceLogging_TTSServiceRequestLog>>__Dispose
            ;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_0406ae20(plVar13,*(long *)PTR_DAT_08f67c08,0);

      System_Array_EmptyInternalEnumerator<KeyValuePair<object,_TTSServiceLogging_TTSServiceRequestLog>>__Dispose
      :
      iVar9 = (*(code *)*puVar11)(plVar13,auVar24._8_8_ & 0xffffffff,puVar11[1]);
      if (iVar9 == 0) {
        *param_1 = 4;
        *(undefined1 (*) [16])(param_1 + 0x2a) = local_e0;
        lVar15 = *(long *)(param_2 + 0x20);
        uVar3 = *(ushort *)(lVar15 + 0x135);
        lVar10 = lVar15;
        if ((uVar3 & 1) == 0) {
          lVar10 = FUN_0406aaec();
          lVar15 = *(long *)(param_2 + 0x20);
          uVar3 = *(ushort *)(lVar15 + 0x135);
        }
        pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar10 + 0xc0) + 0x60);
        if ((uVar3 & 1) == 0) {
          lVar15 = FUN_0406aaec();
        }
        (*pcVar20)(param_1 + 2,local_e0,param_1,*(undefined8 *)(*(long *)(lVar15 + 0xc0) + 0x60));
        goto FUN_07046a10;
      }
    }
LAB_07045bcc:
    if (DAT_09539e0e == '\0') {
      FUN_0403162c(PTR_DAT_08f67c08);
      DAT_09539e0e = '\x01';
    }
    uVar19 = local_e0._0_8_;
    if ((long *)local_e0._0_8_ != (long *)0x0) {
      lVar10 = *(long *)local_e0._0_8_;
      uVar22 = local_e0._8_8_ & 0xffff;
      uVar16 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar16 != 0) {
        piVar18 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_08f67c08) {
            puVar11 = (undefined8 *)(lVar10 + (long)(*piVar18 + 2) * 0x10 + 0x138);
            goto LAB_07045db4;
          }
          uVar16 = uVar16 - 1;
          piVar18 = piVar18 + 4;
        } while (uVar16 != 0);
      }
      puVar11 = (undefined8 *)FUN_0406ae20(local_e0._0_8_,*(long *)PTR_DAT_08f67c08,2);
LAB_07045db4:
      (*(code *)*puVar11)(uVar19,uVar22,puVar11[1]);
    }
  }
  plVar13 = *(long **)(param_1 + 0x16);
  if (plVar13 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_08f65af8 + 0x130);
    if ((*(byte *)(*plVar13 + 0x130) < bVar2) ||
       (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)PTR_DAT_08f65af8))
    {
      local_120 = lVar12;
      auVar24 = local_d0;
      auVar4 = local_e0;
      if (*(long *)(lVar12 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_04031750(plVar13,param_2);
      }
      goto LAB_07046d18;
    }
    lVar10 = FUN_07408528(plVar13,0);
    if (lVar10 == 0) {
      auVar24 = local_d0;
      auVar4 = local_e0;
      if (*(long *)(lVar12 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07046d18;
    }
    FUN_074085e8(lVar10,0);
  }
  if (param_1[0x18] == 1) {
    puVar14 = param_1 + 0x1a;
    puVar17 = param_1 + 0x1c;
  }
  else {
    puVar14 = param_1 + 0x10;
    puVar17 = param_1 + 0x12;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
  }
  plVar13 = *(long **)(param_1 + 2);
  uVar21 = *(undefined8 *)puVar14;
  uVar19 = *(undefined8 *)puVar17;
  *param_1 = 0xfffffffe;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  if (plVar13 == (long *)0x0) {
    *(undefined8 *)(param_1 + 6) = uVar21;
    *(undefined8 *)(param_1 + 8) = uVar19;
  }
  else {
    lVar10 = *(long *)(*(long *)PTR_DAT_08f8d0e8 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0406aaec();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_0406aaec(lVar10);
    }
    lVar15 = *plVar13;
    uVar16 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar16 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar10) {
          puVar11 = (undefined8 *)(lVar15 + (long)(*piVar18 + 2) * 0x10 + 0x138);
          goto LAB_070469fc;
        }
        uVar16 = uVar16 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar16 != 0);
    }
    puVar11 = (undefined8 *)FUN_0406ae20(plVar13,lVar10,2);
LAB_070469fc:
    (*(code *)*puVar11)(plVar13,uVar21,uVar19,puVar11[1]);
  }
  goto FUN_07046a10;
}


