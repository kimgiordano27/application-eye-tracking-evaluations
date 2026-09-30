/*
FUNCTION_NAME: FUN_070579b4
ENTRY_POINT: 070579b4
PROGRAM: m3ar-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry
EVIDENCE: validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_6
*/


void FUN_070579b4(uint *param_1,long param_2)

{
  ushort uVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined2 uVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  ulong uVar17;
  uint uVar18;
  int *piVar19;
  code *pcVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  long local_1c0;
  uint *local_1b8;
  undefined8 *local_1b0;
  undefined8 uStack_1a8;
  long local_1a0;
  undefined4 local_188;
  undefined1 local_180 [16];
  undefined4 uStack_168;
  undefined3 uStack_164;
  undefined1 local_160 [16];
  undefined4 local_150;
  undefined3 uStack_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 *local_130;
  undefined8 uStack_128;
  ulong local_120;
  long *local_110;
  undefined8 uStack_108;
  undefined8 *puStack_100;
  undefined8 uStack_f8;
  ulong local_f0;
  long *local_e0;
  undefined8 uStack_d8;
  undefined8 *local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  long *local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  long local_78;
  
                    /* try { // try from 070579e0 to 071579e3 has its CatchHandler @ 070583bc */
  local_1c0 = tpidr_el0;
                    /* try { // try from 070579ec to 071579f3 has its CatchHandler @ 070583c0 */
  local_78 = *(long *)(local_1c0 + 0x28);
  local_1a0 = param_2;
  if ((DAT_09545364 & 1) == 0) {
    FUN_0403162c(PTR_DAT_08f8d138);
    FUN_0403162c(PTR_DAT_08f6dab8);
                    /* try { // try from 07057a18 to 07157a9f has its CatchHandler @ 070583c4 */
    FUN_0403162c(PTR_DAT_08f8d228);
    FUN_0403162c(PTR_DAT_08f8d230);
    FUN_0403162c(PTR_DAT_08f6dac0);
    FUN_0403162c(PTR_DAT_08f6fad0);
    FUN_0403162c(PTR_DAT_08f65af8);
    FUN_0403162c(PTR_DAT_08f8cf80);
    FUN_0403162c(PTR_DAT_08f8ca30);
    FUN_0403162c(PTR_DAT_08f8ca40);
    FUN_0403162c(PTR_DAT_08f6db00);
    FUN_0403162c(PTR_DAT_08f8d238);
    FUN_0403162c(PTR_DAT_08f67a58);
    DAT_09545364 = 1;
  }
  lVar8 = *(long *)(local_1a0 + 0x20);
  if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
    lVar8 = FUN_0406aaec();
  }
  puVar9 = (undefined8 *)
           ((long)&local_1c0 -
           ((ulong)*(uint *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x30) + 0xfc) + 0xf & 0x1fffffff0))
  ;
  uVar18 = *param_1;
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  local_a0 = (undefined8 *)0x0;
  local_150 = 0;
  uStack_14c = 0;
  local_c0 = 0;
  local_f0 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  uStack_f8 = 0;
  puStack_100 = (undefined8 *)0x0;
  uStack_d8 = 0;
  local_e0 = (long *)0x0;
  uStack_c8 = 0;
  local_d0 = (undefined8 *)0x0;
  local_160._0_8_ = 0;
  local_160._8_8_ = 0;
  auVar25 = ZEXT816(0);
  uStack_164 = 0;
  uStack_168 = 0;
  local_180._0_8_ = 0;
  local_180._8_8_ = 0;
  auVar3 = ZEXT816(0);
  local_188 = 0;
  if (3 < uVar18) {
    if (uVar18 == 4) {
      local_180 = *(undefined1 (*) [16])(param_1 + 0x32);
      param_1[0x32] = 0;
      param_1[0x33] = 0;
      param_1[0x34] = 0;
      param_1[0x35] = 0;
      *param_1 = 0xffffffff;
      local_160 = ZEXT816(0);
      goto LAB_07057b38;
    }
    plVar11 = *(long **)(param_1 + 0xc);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    if (plVar11 == (long *)0x0) {
      local_1b8 = param_1;
      if (*(long *)(local_1c0 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07058e9c;
    }
    uVar22 = *(undefined8 *)(param_1 + 0xe);
    lVar8 = *(long *)(local_1a0 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec(lVar8);
    }
    lVar14 = *plVar11;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar8) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_07057c40;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_0406ae20(plVar11,lVar8,0);
LAB_07057c40:
    uVar22 = (*(code *)*puVar10)(plVar11,uVar22,puVar10[1]);
    *(undefined8 *)(param_1 + 0x18) = uVar22;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
  }
  puVar4 = PTR_DAT_08f8d228;
  if (1 < (int)uVar18) {
    if (uVar18 == 2) {
      uStack_d8 = *(undefined8 *)(param_1 + 0x26);
      local_e0 = *(long **)(param_1 + 0x24);
      uStack_c8 = *(undefined8 *)(param_1 + 0x2a);
      local_d0 = *(undefined8 **)(param_1 + 0x28);
      local_c0 = *(ulong *)(param_1 + 0x2c);
      param_1[0x2c] = 0;
      param_1[0x2d] = 0;
      param_1[0x26] = 0;
      param_1[0x27] = 0;
      param_1[0x24] = 0;
      param_1[0x25] = 0;
      param_1[0x2a] = 0;
      param_1[0x2b] = 0;
      param_1[0x28] = 0;
      param_1[0x29] = 0;
      *param_1 = 0xffffffff;
      puVar13 = param_1;
      local_1b8 = param_1;
      goto LAB_070585a8;
    }
    local_1b8 = param_1;
    if (uVar18 != 3) goto LAB_070580e0;
    local_160 = *(undefined1 (*) [16])(param_1 + 0x2e);
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    *param_1 = 0xffffffff;
    goto LAB_07058324;
  }
  if (uVar18 == 0) {
    uStack_d8 = *(undefined8 *)(param_1 + 0x26);
    local_e0 = *(long **)(param_1 + 0x24);
    uStack_c8 = *(undefined8 *)(param_1 + 0x2a);
    local_d0 = *(undefined8 **)(param_1 + 0x28);
    local_c0 = *(ulong *)(param_1 + 0x2c);
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    *param_1 = 0xffffffff;
    local_1b8 = param_1;
    goto LAB_07057fe8;
  }
  local_1b8 = param_1;
  if (uVar18 != 1) goto LAB_070580e0;
  local_160 = *(undefined1 (*) [16])(param_1 + 0x2e);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *param_1 = 0xffffffff;
  do {
    uVar22 = local_160._0_8_;
    if ((long *)local_160._0_8_ == (long *)0x0) {
      if (local_160[8] == '\0') goto LAB_07057d94;
    }
    else {
      uVar5 = local_160._10_2_;
      lVar8 = *(long *)(*(long *)PTR_DAT_08f6dab8 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec(lVar8);
      }
      lVar14 = *(long *)uVar22;
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
            goto 
            System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ParticleSystemJobData>>>>>__Dispose
            ;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_0406ae20(uVar22,lVar8,0);

      System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_ParticleSystemJobData>>>>>__Dispose
      :
      uVar17 = (*(code *)*puVar10)(uVar22,uVar5,puVar10[1]);
      if ((uVar17 & 1) == 0) {
LAB_07057d94:
        param_1[0x1e] = 0;
        param_1[0x1f] = 0;
        param_1[0x20] = 0;
        param_1[0x21] = 0;
        param_1[0x22] = 0;
        param_1[0x23] = 0;
        param_1[0x1c] = 1;
        goto LAB_070589d8;
      }
    }
    auVar3._8_8_ = local_180._8_8_;
    auVar3._0_8_ = local_180._0_8_;
    plVar11 = *(long **)(param_1 + 0x18);
    if (plVar11 == (long *)0x0) {
      auVar25 = local_160;
      if (*(long *)(local_1c0 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07058e9c;
    }
    lVar14 = *(long *)(param_1 + 0x10);
    lVar8 = *(long *)(local_1a0 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec(lVar8);
    }
    lVar12 = *plVar11;
    uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar8) {
          lVar8 = lVar12 + (long)*piVar19 * 0x10 + 0x138;
          goto LAB_07057eb4;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    lVar8 = FUN_0406ae20(plVar11,lVar8,0);
LAB_07057eb4:
    lVar8 = *(long *)(lVar8 + 8);
    local_90 = puVar9;
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar11,&local_90,puVar9);
    auVar3._8_8_ = local_180._8_8_;
    auVar3._0_8_ = local_180._0_8_;
    if (lVar14 == 0) {
      auVar25 = local_160;
      if (*(long *)(local_1c0 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07058e9c;
    }
    uVar22 = *(undefined8 *)(param_1 + 0xe);
    lVar12 = *(long *)(local_1a0 + 0x20);
    uVar1 = *(ushort *)(lVar12 + 0x135);
    lVar8 = lVar12;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_0406aaec();
      lVar12 = *(long *)(local_1a0 + 0x20);
      uVar1 = *(ushort *)(lVar12 + 0x135);
    }
    uVar23 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x38);
    lVar8 = lVar12;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_0406aaec();
      lVar12 = *(long *)(local_1a0 + 0x20);
      uVar1 = *(ushort *)(lVar12 + 0x135);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x38);
    if ((uVar1 & 1) == 0) {
      lVar12 = FUN_0406aaec();
    }
    local_90 = puVar9;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x30) + 0x28)) {
      local_90 = (undefined8 *)*puVar9;
    }
    local_88 = &local_148;
    local_148 = uVar22;
    (**(code **)(lVar8 + 0x10))(uVar23,lVar8,lVar14,&local_90,&local_140);
    uStack_108 = uStack_138;
    local_110 = local_140;
    uStack_f8 = uStack_128;
    puStack_100 = local_130;
    local_f0 = local_120;
    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f8d238 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    uStack_d8 = uStack_108;
    local_e0 = local_110;
    uStack_c8 = uStack_f8;
    local_d0 = puStack_100;
    local_c0 = local_f0;
    uVar17 = FUN_05069620(&local_e0,*(undefined8 *)PTR_DAT_08f8d230);
    if ((uVar17 & 1) == 0) {
      *param_1 = 0;
      *(ulong *)(param_1 + 0x2c) = local_c0;
      *(undefined8 *)(param_1 + 0x26) = uStack_d8;
      *(long **)(param_1 + 0x24) = local_e0;
      *(undefined8 *)(param_1 + 0x2a) = uStack_c8;
      *(undefined8 **)(param_1 + 0x28) = local_d0;
      lVar14 = *(long *)(local_1a0 + 0x20);
      uVar1 = *(ushort *)(lVar14 + 0x135);
      lVar8 = lVar14;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_0406aaec();
        lVar14 = *(long *)(local_1a0 + 0x20);
        uVar1 = *(ushort *)(lVar14 + 0x135);
      }
      pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
        lVar14 = FUN_0406aaec();
      }
      (*pcVar20)(param_1 + 2,&local_e0,param_1,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x40));
      goto 
      System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_AsyncGPUReadbackRequest>>>>___cctor
      ;
    }
LAB_07057fe8:
    plVar11 = local_e0;
    if (local_e0 == (long *)0x0) {
      uVar15 = uStack_d8._1_4_;
      puVar10 = local_d0;
      uVar22 = uStack_c8;
      uVar18 = uStack_d8._4_4_;
      cVar2 = (char)uStack_d8;
    }
    else {
      uVar17 = local_c0 & 0xffff;
      lVar8 = *(long *)(*(long *)puVar4 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec(lVar8);
      }
      lVar14 = *plVar11;
      uVar21 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar21 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_07058088;
          }
          uVar21 = uVar21 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar21 != 0);
      }
      puVar10 = (undefined8 *)FUN_0406ae20(plVar11,lVar8,0);
LAB_07058088:
      (*(code *)*puVar10)(&local_90,plVar11,uVar17,puVar10[1]);
      uVar15 = local_90._1_4_;
      puVar10 = local_88;
      uVar22 = uStack_80;
      uVar18 = local_90._4_4_;
      cVar2 = (char)local_90;
    }
    local_140._0_3_ = (undefined3)uVar15;
    local_140._0_7_ = CONCAT43(uVar18,(undefined3)local_140);
    *(char *)(param_1 + 0x12) = cVar2;
    *(undefined8 *)(param_1 + 0x16) = uVar22;
    *(undefined8 **)(param_1 + 0x14) = puVar10;
    local_150._3_1_ = (undefined1)uVar18;
    local_150 = CONCAT13(local_150._3_1_,(undefined3)local_140);
    uStack_14c = (undefined3)(uVar18 >> 8);
    *(undefined4 *)((long)param_1 + 0x49) = local_150;
    param_1[0x13] = uVar18;
    if (cVar2 != '\0') goto LAB_07058730;
LAB_070580e0:
    auVar3._8_8_ = local_180._8_8_;
    auVar3._0_8_ = local_180._0_8_;
    plVar11 = *(long **)(param_1 + 0x18);
    if (plVar11 == (long *)0x0) {
      auVar25 = local_160;
      if (*(long *)(local_1c0 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07058e9c;
    }
    lVar8 = *(long *)(local_1a0 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec(lVar8);
    }
    lVar14 = *plVar11;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar8) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_0705816c;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_0406ae20(plVar11,lVar8,1);
LAB_0705816c:
    auVar25 = (*(code *)*puVar10)(plVar11,puVar10[1]);
    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f6db00 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    local_160 = auVar25;
    uVar17 = FUN_0425a2e4(local_160,*(undefined8 *)PTR_DAT_08f6dac0);
  } while ((uVar17 & 1) != 0);
  *param_1 = 1;
  *(undefined1 (*) [16])(param_1 + 0x2e) = local_160;
  lVar14 = *(long *)(local_1a0 + 0x20);
  uVar1 = *(ushort *)(lVar14 + 0x135);
  lVar8 = lVar14;
  if ((uVar1 & 1) == 0) {
    lVar8 = FUN_0406aaec();
    lVar14 = *(long *)(local_1a0 + 0x20);
    uVar1 = *(ushort *)(lVar14 + 0x135);
  }
  pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x58);
  if ((uVar1 & 1) == 0) {
    lVar14 = FUN_0406aaec();
  }
  (*pcVar20)(param_1 + 2,local_160,param_1,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x58));

  System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_AsyncGPUReadbackRequest>>>>___cctor
  :
  auVar25 = local_160;
  auVar3 = local_180;
  if (*(long *)(local_1c0 + 0x28) == local_78) {
    return;
  }
LAB_07058e9c:
  local_180 = auVar3;
  local_160 = auVar25;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_07058730:
  auVar3._8_8_ = local_180._8_8_;
  auVar3._0_8_ = local_180._0_8_;
  plVar11 = *(long **)(param_1 + 0x18);
  if (plVar11 != (long *)0x0) {
    lVar8 = *(long *)(local_1a0 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec(lVar8);
    }
    lVar14 = *plVar11;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar8) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar19 + 1) * 0x10 + 0x138);
          goto LAB_070587bc;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_0406ae20(plVar11,lVar8,1);
LAB_070587bc:
    auVar25 = (*(code *)*puVar10)(plVar11,puVar10[1]);
    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f6db00 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    local_160 = auVar25;
    uVar17 = FUN_0425a2e4(local_160,*(undefined8 *)PTR_DAT_08f6dac0);
    if ((uVar17 & 1) == 0) {
      *param_1 = 3;
      *(undefined1 (*) [16])(param_1 + 0x2e) = local_160;
      lVar14 = *(long *)(local_1a0 + 0x20);
      uVar1 = *(ushort *)(lVar14 + 0x135);
      lVar8 = lVar14;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_0406aaec();
        lVar14 = *(long *)(local_1a0 + 0x20);
        uVar1 = *(ushort *)(lVar14 + 0x135);
      }
      pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x58);
      if ((uVar1 & 1) == 0) {
        lVar14 = FUN_0406aaec();
      }
      (*pcVar20)(param_1 + 2,local_160,param_1,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x58));
      goto 
      System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_AsyncGPUReadbackRequest>>>>___cctor
      ;
    }
LAB_07058324:
    uVar22 = local_160._0_8_;
    if ((long *)local_160._0_8_ == (long *)0x0) {
      if (local_160[8] == '\0') goto LAB_070589d8;
    }
    else {
      uVar5 = local_160._10_2_;
      lVar8 = *(long *)(*(long *)PTR_DAT_08f6dab8 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec(lVar8);
      }
      lVar14 = *(long *)uVar22;
      uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_070583d4;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar10 = (undefined8 *)FUN_0406ae20(uVar22,lVar8,0);
LAB_070583d4:
      uVar17 = (*(code *)*puVar10)(uVar22,uVar5,puVar10[1]);
      if ((uVar17 & 1) == 0) goto LAB_070589d8;
    }
    auVar3._8_8_ = local_180._8_8_;
    auVar3._0_8_ = local_180._0_8_;
    plVar11 = *(long **)(param_1 + 0x18);
    if (plVar11 == (long *)0x0) {
      auVar25 = local_160;
      if (*(long *)(local_1c0 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07058e9c;
    }
    lVar14 = *(long *)(param_1 + 0x10);
    lVar8 = *(long *)(local_1a0 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x18);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec(lVar8);
    }
    lVar12 = *plVar11;
    uVar17 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar8) {
          lVar8 = lVar12 + (long)*piVar19 * 0x10 + 0x138;
          goto LAB_07058474;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    lVar8 = FUN_0406ae20(plVar11,lVar8,0);
LAB_07058474:
    lVar8 = *(long *)(lVar8 + 8);
    local_90 = puVar9;
    (**(code **)(lVar8 + 0x10))(*(undefined8 *)(lVar8 + 8),lVar8,plVar11,&local_90,puVar9);
    auVar3._8_8_ = local_180._8_8_;
    auVar3._0_8_ = local_180._0_8_;
    if (lVar14 == 0) {
      auVar25 = local_160;
      if (*(long *)(local_1c0 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07058e9c;
    }
    uVar22 = *(undefined8 *)(param_1 + 0xe);
    lVar12 = *(long *)(local_1a0 + 0x20);
    uVar1 = *(ushort *)(lVar12 + 0x135);
    lVar8 = lVar12;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_0406aaec();
      lVar12 = *(long *)(local_1a0 + 0x20);
      uVar1 = *(ushort *)(lVar12 + 0x135);
    }
    uVar23 = **(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x38);
    lVar8 = lVar12;
    if ((uVar1 & 1) == 0) {
      lVar8 = FUN_0406aaec();
      lVar12 = *(long *)(local_1a0 + 0x20);
      uVar1 = *(ushort *)(lVar12 + 0x135);
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x38);
    if ((uVar1 & 1) == 0) {
      lVar12 = FUN_0406aaec();
    }
    local_90 = puVar9;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x30) + 0x28)) {
      local_90 = (undefined8 *)*puVar9;
    }
    local_88 = &local_148;
    local_148 = uVar22;
    (**(code **)(lVar8 + 0x10))(uVar23,lVar8,lVar14,&local_90,&local_140);
    uStack_108 = uStack_138;
    local_110 = local_140;
    uStack_f8 = uStack_128;
    puStack_100 = local_130;
    local_f0 = local_120;
    if ((*(ushort *)(*(long *)(*(long *)PTR_DAT_08f8d238 + 0x20) + 0x135) & 1) == 0) {
      FUN_0406aaec();
    }
    uStack_d8 = uStack_108;
    local_e0 = local_110;
    uStack_c8 = uStack_f8;
    local_d0 = puStack_100;
    local_c0 = local_f0;
    uVar17 = FUN_05069620(&local_e0,*(undefined8 *)PTR_DAT_08f8d230);
    puVar13 = param_1;
    if ((uVar17 & 1) == 0) {
      *param_1 = 2;
      *(ulong *)(param_1 + 0x2c) = local_c0;
      *(undefined8 *)(param_1 + 0x26) = uStack_d8;
      *(long **)(param_1 + 0x24) = local_e0;
      *(undefined8 *)(param_1 + 0x2a) = uStack_c8;
      *(undefined8 **)(param_1 + 0x28) = local_d0;
      lVar14 = *(long *)(local_1a0 + 0x20);
      uVar1 = *(ushort *)(lVar14 + 0x135);
      lVar8 = lVar14;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_0406aaec();
        lVar14 = *(long *)(local_1a0 + 0x20);
        uVar1 = *(ushort *)(lVar14 + 0x135);
      }
      pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x40);
      if ((uVar1 & 1) == 0) {
        lVar14 = FUN_0406aaec();
      }
      (*pcVar20)(param_1 + 2,&local_e0,param_1,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x40));
      goto 
      System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_AsyncGPUReadbackRequest>>>>___cctor
      ;
    }
LAB_070585a8:
    plVar11 = local_e0;
    if (local_e0 == (long *)0x0) {
      uVar15 = uStack_d8._1_4_;
      puVar10 = local_d0;
      uVar22 = uStack_c8;
      uVar16 = uStack_d8._4_4_;
      cVar2 = (char)uStack_d8;
    }
    else {
      uVar17 = local_c0 & 0xffff;
      lVar8 = *(long *)(*(long *)puVar4 + 0x20);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec();
      }
      lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
        lVar8 = FUN_0406aaec(lVar8);
      }
      lVar14 = *plVar11;
      uVar21 = (ulong)*(ushort *)(lVar14 + 0x12e);
      if (uVar21 != 0) {
        piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == lVar8) {
            puVar10 = (undefined8 *)(lVar14 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_0705864c;
          }
          uVar21 = uVar21 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar21 != 0);
      }
      puVar10 = (undefined8 *)FUN_0406ae20(plVar11,lVar8,0);
LAB_0705864c:
      (*(code *)*puVar10)(&local_90,plVar11,uVar17,puVar10[1]);
      uVar15 = local_90._1_4_;
      puVar10 = local_88;
      uVar22 = uStack_80;
      uVar16 = local_90._4_4_;
      cVar2 = (char)local_90;
    }
    local_140._0_3_ = (undefined3)uVar15;
    local_140._0_7_ = CONCAT43(uVar16,(undefined3)local_140);
    uStack_168._3_1_ = (undefined1)uVar16;
    uStack_168 = CONCAT13(uStack_168._3_1_,(undefined3)local_140);
    uStack_164 = (undefined3)((uint)uVar16 >> 8);
    param_1 = puVar13;
    local_1b0 = puVar10;
    uStack_1a8 = uVar22;
    if (cVar2 != '\0') {
      uVar18 = puVar13[0x12];
      uVar23 = *(undefined8 *)(puVar13 + 0x14);
      uVar24 = *(undefined8 *)(puVar13 + 0x16);
      local_150._0_3_ = (undefined3)*(undefined4 *)((long)puVar13 + 0x49);
      local_150._3_1_ = (undefined1)puVar13[0x13];
      uStack_14c = (undefined3)(puVar13[0x13] >> 8);
      if (*(int *)(*(long *)PTR_DAT_08f6fad0 + 0xe4) == 0) {
        thunk_FUN_0408f364();
      }
      bVar6 = FUN_07544208(uVar23,uVar24,puVar10,uVar22,0);
      param_1 = local_1b8;
      if (((char)uVar18 != '\0' & bVar6) != 0) {
        *(char *)(local_1b8 + 0x12) = cVar2;
        *(undefined4 *)((long)puVar13 + 0x49) = uStack_168;
        puVar13[0x13] = CONCAT31(uStack_164,uStack_168._3_1_);
        *(undefined8 *)(local_1b8 + 0x16) = uStack_1a8;
        *(undefined8 **)(local_1b8 + 0x14) = local_1b0;
      }
    }
    goto LAB_07058730;
  }
  auVar25 = local_160;
  if (*(long *)(local_1c0 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
    FUN_0403188c();
  }
  goto LAB_07058e9c;
LAB_070589d8:
  plVar11 = *(long **)(param_1 + 0x18);
  if (plVar11 != (long *)0x0) {
    lVar8 = *plVar11;
    uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08f8cf80) {
          puVar9 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_07058bc0;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)PTR_DAT_08f8cf80,0);
LAB_07058bc0:
    auVar25 = (*(code *)*puVar9)(plVar11,puVar9[1]);
    puVar4 = PTR_DAT_08f67a58;
    plVar11 = auVar25._0_8_;
    if (*(int *)(*(long *)PTR_DAT_08f67a58 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    local_180 = auVar25;
    if (DAT_09539e0c == '\0') {
      FUN_0403162c(PTR_DAT_08f67a58);
      DAT_09539e0c = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    if (DAT_09539e0d == '\0') {
      FUN_0403162c(PTR_DAT_08f67c08);
      DAT_09539e0d = '\x01';
    }
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08f67c08) {
            puVar9 = (undefined8 *)(lVar8 + (long)*piVar19 * 0x10 + 0x138);
            goto LAB_07058c98;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar9 = (undefined8 *)FUN_0406ae20(plVar11,*(long *)PTR_DAT_08f67c08,0);
LAB_07058c98:
      iVar7 = (*(code *)*puVar9)(plVar11,auVar25._8_8_ & 0xffffffff,puVar9[1]);
      if (iVar7 == 0) {
        *param_1 = 4;
        *(undefined1 (*) [16])(param_1 + 0x32) = local_180;
        lVar14 = *(long *)(local_1a0 + 0x20);
        uVar1 = *(ushort *)(lVar14 + 0x135);
        lVar8 = lVar14;
        if ((uVar1 & 1) == 0) {
          lVar8 = FUN_0406aaec();
          lVar14 = *(long *)(local_1a0 + 0x20);
          uVar1 = *(ushort *)(lVar14 + 0x135);
        }
        pcVar20 = (code *)**(undefined8 **)(*(long *)(lVar8 + 0xc0) + 0x60);
        if ((uVar1 & 1) == 0) {
          lVar14 = FUN_0406aaec();
        }
        (*pcVar20)(param_1 + 2,local_180,param_1,*(undefined8 *)(*(long *)(lVar14 + 0xc0) + 0x60));
        goto 
        System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_AsyncGPUReadbackRequest>>>>___cctor
        ;
      }
    }
LAB_07057b38:
    if (DAT_09539e0e == '\0') {
      FUN_0403162c(PTR_DAT_08f67c08);
      DAT_09539e0e = '\x01';
    }
    uVar22 = local_180._0_8_;
    if ((long *)local_180._0_8_ != (long *)0x0) {
      lVar8 = *(long *)local_180._0_8_;
      uVar21 = local_180._8_8_ & 0xffff;
      uVar17 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar17 != 0) {
        piVar19 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar19 + -2) == *(long *)PTR_DAT_08f67c08) {
            puVar9 = (undefined8 *)(lVar8 + (long)(*piVar19 + 2) * 0x10 + 0x138);
            goto LAB_07057d18;
          }
          uVar17 = uVar17 - 1;
          piVar19 = piVar19 + 4;
        } while (uVar17 != 0);
      }
      puVar9 = (undefined8 *)FUN_0406ae20(local_180._0_8_,*(long *)PTR_DAT_08f67c08,2);
LAB_07057d18:
      (*(code *)*puVar9)(uVar22,uVar21,puVar9[1]);
    }
  }
  plVar11 = *(long **)(param_1 + 0x1a);
  if (plVar11 != (long *)0x0) {
    bVar6 = *(byte *)(*(long *)PTR_DAT_08f65af8 + 0x130);
    if ((*(byte *)(*plVar11 + 0x130) < bVar6) ||
       (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar6 * 8 + -8) != *(long *)PTR_DAT_08f65af8))
    {
      local_1b8 = param_1;
      auVar25 = local_160;
      auVar3 = local_180;
      if (*(long *)(local_1c0 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_04031750(plVar11,local_1a0);
      }
      goto LAB_07058e9c;
    }
    lVar8 = FUN_07408528(plVar11,0);
    if (lVar8 == 0) {
      auVar25 = local_160;
      auVar3 = local_180;
      if (*(long *)(local_1c0 + 0x28) == local_78) {
                    /* WARNING: Subroutine does not return */
        FUN_0403188c();
      }
      goto LAB_07058e9c;
    }
    FUN_074085e8(lVar8,0);
  }
  puVar13 = param_1 + 0x1e;
  if (param_1[0x1c] != 1) {
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    puVar13[0] = 0;
    puVar13[1] = 0;
    puVar13 = param_1 + 0x12;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  uStack_a8 = *(undefined8 *)(puVar13 + 2);
  local_b0 = *(long **)puVar13;
  local_a0 = *(undefined8 **)(puVar13 + 4);
  plVar11 = *(long **)(param_1 + 2);
  *param_1 = 0xfffffffe;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  if (plVar11 == (long *)0x0) {
    *(undefined8 *)(param_1 + 8) = uStack_a8;
    *(long **)(param_1 + 6) = local_b0;
    *(undefined8 **)(param_1 + 10) = local_a0;
  }
  else {
    lVar8 = *(long *)(*(long *)PTR_DAT_08f8d138 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec();
    }
    lVar8 = *(long *)(*(long *)(lVar8 + 0xc0) + 8);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_0406aaec(lVar8);
    }
    lVar14 = *plVar11;
    uVar17 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar17 != 0) {
      piVar19 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar19 + -2) == lVar8) {
          puVar9 = (undefined8 *)(lVar14 + (long)(*piVar19 + 2) * 0x10 + 0x138);
          goto LAB_07058b5c;
        }
        uVar17 = uVar17 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar17 != 0);
    }
    puVar9 = (undefined8 *)FUN_0406ae20(plVar11,lVar8,2);
LAB_07058b5c:
    uStack_138 = uStack_a8;
    local_140 = local_b0;
    local_130 = local_a0;
    (*(code *)*puVar9)(plVar11,&local_140,puVar9[1]);
  }
  goto 
  System_Array_EmptyInternalEnumerator<ValueTuple<bool,_ValueTuple<bool,_ValueTuple<bool,_AsyncGPUReadbackRequest>>>>___cctor
  ;
}


