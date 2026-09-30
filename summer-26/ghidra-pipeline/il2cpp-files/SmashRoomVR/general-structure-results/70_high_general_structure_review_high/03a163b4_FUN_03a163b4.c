/*
FUNCTION_NAME: FUN_03a163b4
ENTRY_POINT: 03a163b4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;telemetry_or_network_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x03a16118) */
/* WARNING: Removing unreachable block (ram,0x03a16130) */
/* WARNING: Removing unreachable block (ram,0x03a15c84) */
/* WARNING: Removing unreachable block (ram,0x03a15f28) */
/* WARNING: Removing unreachable block (ram,0x03a15e40) */
/* WARNING: Removing unreachable block (ram,0x03a15c78) */
/* WARNING: Removing unreachable block (ram,0x03a16040) */
/* WARNING: Removing unreachable block (ram,0x03a15f24) */
/* WARNING: Removing unreachable block (ram,0x03a15bf0) */
/* WARNING: Removing unreachable block (ram,0x03a16138) */
/* WARNING: Removing unreachable block (ram,0x03a16784) */
/* WARNING: Removing unreachable block (ram,0x03a16788) */
/* WARNING: Removing unreachable block (ram,0x03a16924) */
/* WARNING: Removing unreachable block (ram,0x03a15cf0) */
/* WARNING: Removing unreachable block (ram,0x03a15ce4) */
/* WARNING: Removing unreachable block (ram,0x03a15de8) */
/* WARNING: Removing unreachable block (ram,0x03a15e64) */
/* WARNING: Removing unreachable block (ram,0x03a1605c) */
/* WARNING: Removing unreachable block (ram,0x03a15cf4) */
/* WARNING: Removing unreachable block (ram,0x03a15df0) */
/* WARNING: Removing unreachable block (ram,0x03a16068) */
/* WARNING: Removing unreachable block (ram,0x03a15d0c) */
/* WARNING: Removing unreachable block (ram,0x03a15e60) */
/* WARNING: Removing unreachable block (ram,0x03a16170) */
/* WARNING: Removing unreachable block (ram,0x03a15d24) */
/* WARNING: Removing unreachable block (ram,0x03a16174) */
/* WARNING: Removing unreachable block (ram,0x03a15d28) */
/* WARNING: Removing unreachable block (ram,0x03a16284) */
/* WARNING: Removing unreachable block (ram,0x03a16260) */
/* WARNING: Removing unreachable block (ram,0x03a162b8) */
/* WARNING: Heritage AFTER dead removal. Example location: s0x00000024 : 0x03a16250 */
/* WARNING: Removing unreachable block (ram,0x03a16338) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_03a163b4(float param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  void *unaff_x19;
  long *unaff_x21;
  int iVar15;
  undefined8 uVar16;
  ulong unaff_x23;
  uint unaff_w24;
  int iVar17;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float fVar18;
  float fVar19;
  float fVar20;
  double dVar21;
  float unaff_s8;
  float fVar22;
  float fVar23;
  float fVar24;
  float unaff_s10;
  float fVar25;
  float unaff_s11;
  float fVar26;
  float fVar27;
  ulong unaff_d12;
  float unaff_s13;
  float unaff_s14;
  float fVar28;
  float fVar29;
  long in_stack_00000010;
  undefined4 uStack0000000000000018;
  float fStack000000000000001c;
  undefined8 in_stack_00000020;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  uint in_stack_00000050;
  float fStack0000000000000058;
  float fStack000000000000005c;
  float fStack0000000000000170;
  float fStack0000000000000174;
  float fStack0000000000000178;
  float fStack000000000000017c;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  float fStack00000000000001b0;
  float fStack00000000000001b8;
  float fStack00000000000001c0;
  float fStack00000000000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  long in_stack_00000248;
  
  fVar25 = unaff_s14;
  fVar26 = unaff_s13;
  fVar24 = unaff_s10;
code_r0x03a163b4:
  do {
    if (ABS(param_1 - unaff_s8) < fStack000000000000001c) {
      unaff_d12 = FUN_039ba41c(unaff_d12,fStack000000000000002c,uStack0000000000000018,0);
    }
    do {
      do {
        do {
          if ((unaff_w24 & 0xfffffffe) == 2) {
            fVar18 = unaff_s11;
            if ((unaff_x23 & 1) == 0) {
              fVar18 = fVar25;
            }
            if (fStack0000000000000030 < fVar18) {
              fVar22 = (float)unaff_d12;
              if (fVar22 < -fVar18) {
                fVar27 = -2.1474836e+09;
                if (-fVar22 / fVar18 != INFINITY) {
                  fVar27 = (float)(int)(-fVar22 / fVar18);
                }
                unaff_d12 = (ulong)(uint)(fVar22 + fVar18 * fVar27);
              }
              fVar22 = (float)unaff_d12;
              if (0.0 < fVar22) {
                fVar27 = -2.1474836e+09;
                if (fVar22 / fVar18 != INFINITY) {
                  fVar27 = (float)((int)(fVar22 / fVar18) + 1);
                }
                unaff_d12 = (ulong)(uint)(fVar22 - fVar18 * fVar27);
              }
            }
          }
          do {
            lVar13 = *unaff_x21;
            if (lVar13 == 0) {
LAB_03a168ec:
                    /* WARNING: Subroutine does not return */
              FUN_01b48178();
            }
            iVar15 = 0;
            while( true ) {
              puVar7 = PTR_DAT_03db0aa0;
              if (*(uint *)(lVar13 + 0x18) <= unaff_x26) goto LAB_03a168f0;
              lVar9 = *(long *)(lVar13 + unaff_x26 * 8 + 0x20);
              if (lVar9 == 0) goto LAB_03a168ec;
              if (*(int *)(lVar9 + 0x18) <= iVar15) break;
              FUN_02c61bac(&stack0x00000170,lVar9,iVar15,*unaff_x28);
              lVar13 = *unaff_x21;
              fVar18 = fStack0000000000000170;
              fVar22 = (float)unaff_d12 + fStack0000000000000174;
              if ((unaff_x23 & 1) == 0) {
                fVar18 = (float)unaff_d12 + fStack0000000000000170;
                fVar22 = fStack0000000000000174;
              }
              if (lVar13 == 0) goto LAB_03a168ec;
              if (*(uint *)(lVar13 + 0x18) <= unaff_x26) goto LAB_03a168f0;
              lVar13 = *(long *)(lVar13 + unaff_x26 * 8 + 0x20);
              if (lVar13 == 0) goto LAB_03a168ec;
              uVar11 = *unaff_x29;
              unaff_x27[2] = unaff_x27[2];
              unaff_x27[1] = unaff_x27[1];
              *unaff_x27 = *unaff_x27;
              fStack0000000000000170 = fVar18;
              fStack0000000000000174 = fVar22;
              FUN_02c61c0c(lVar13,iVar15,&stack0x00000170,uVar11);
              lVar13 = *unaff_x21;
              iVar15 = iVar15 + 1;
              if (lVar13 == 0) goto LAB_03a168ec;
            }
            unaff_x23 = 1;
            unaff_x26 = 1;
            if ((in_stack_00000050 & 1) == 0) {
              if (*(uint *)(lVar13 + 0x18) < 2) {
LAB_03a168f0:
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              if (*(long *)(lVar13 + 0x28) != 0) {
                FUN_02c62a64(&stack0x00000170,*(long *)(lVar13 + 0x28),
                             *(undefined8 *)PTR_DAT_03db0aa0);
                uVar4 = in_stack_00000198;
                uVar11 = in_stack_00000190;
                puVar6 = PTR_DAT_03db0a78;
                puVar5 = PTR_DAT_03db0a70;
                in_stack_000001d8 = CONCAT44(fStack000000000000017c,fStack0000000000000178);
                in_stack_000001d0 = CONCAT44(fStack0000000000000174,fStack0000000000000170);
                in_stack_000001e8 = in_stack_00000188;
                in_stack_000001e0 = in_stack_00000180;
                while( true ) {
                  uVar10 = FUN_02757d4c(&stack0x000001d0,*(undefined8 *)puVar6);
                  if ((uVar10 & 1) == 0) {
                    FUN_02757d48(&stack0x000001d0,*(undefined8 *)puVar5);
                    if (*(long *)(in_stack_00000010 + 0x28) == in_stack_00000248) {
                      return;
                    }
                    /* WARNING: Subroutine does not return */
                    __stack_chk_fail();
                  }
                  if (fStack000000000000003c <= in_stack_000001e0._4_4_) {
                    fVar22 = (float)((ulong)uVar11 >> 0x20);
                    fVar27 = (float)((ulong)uVar4 >> 0x20);
                    fVar25 = in_stack_000001e8._4_4_;
                    fVar18 = in_stack_000001e0._4_4_;
                  }
                  else {
                    fVar18 = fStack000000000000003c - in_stack_000001e0._4_4_;
                    fVar25 = in_stack_000001e8._4_4_ - fVar18;
                    fVar27 = fVar25 / (fVar18 + fVar25);
                    fVar22 = fVar18 / (fVar18 + fVar25) + 0.0;
                    fVar18 = fStack000000000000003c;
                  }
                  if (fVar26 + fStack000000000000003c < fVar25 + fVar18) {
                    fVar19 = (fVar25 + fVar18) - (fVar26 + fStack000000000000003c);
                    fVar25 = fVar25 - fVar19;
                    fVar27 = (fVar27 * fVar25) / (fVar19 + fVar25);
                    fVar22 = (fVar22 + fVar27) - fVar27;
                  }
                  uVar16 = *(undefined8 *)((long)unaff_x19 + 0x88);
                  if (*(int *)(*(long *)
                                Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                              + 0xe0) == 0) {
                    thunk_FUN_01ac7298();
                  }
                  uVar10 = FUN_03922f24(uVar16,0,0);
                  lVar13 = *unaff_x21;
                  fVar19 = fVar22 + ((1.0 - (fVar27 + fVar22)) - fVar22);
                  if ((uVar10 & 1) == 0) {
                    fVar19 = fVar22;
                  }
                  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01b48178();
                  }
                  if (*(int *)(lVar13 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_01b48180();
                  }
                  if (*(long *)(lVar13 + 0x20) == 0) break;
                  FUN_02c62a64(&stack0x00000170,*(long *)(lVar13 + 0x20),*(undefined8 *)puVar7);
                  in_stack_000001a8 = CONCAT44(fStack000000000000017c,fStack0000000000000178);
                  in_stack_000001a0 = CONCAT44(fStack0000000000000174,fStack0000000000000170);
                  _fStack00000000000001b8 = in_stack_00000188;
                  _fStack00000000000001b0 = in_stack_00000180;
                  _fStack00000000000001c8 = in_stack_00000198;
                  _fStack00000000000001c0 = in_stack_00000190;
                  while (uVar10 = FUN_02757d4c(&stack0x000001a0,*(undefined8 *)puVar6),
                        (uVar10 & 1) != 0) {
                    if (fStack000000000000005c <= fStack00000000000001b0) {
                      fVar23 = fStack00000000000001c0;
                      fVar28 = fStack00000000000001c8;
                      fVar29 = fStack00000000000001b8;
                      fVar22 = fStack00000000000001b0;
                    }
                    else {
                      fVar22 = fStack000000000000005c - fStack00000000000001b0;
                      fVar29 = fStack00000000000001b8 - fVar22;
                      fVar23 = fVar22 / (fVar22 + fVar29) + 0.0;
                      fVar28 = (fVar29 * fStack00000000000001c8) / (fVar22 + fVar29);
                      fVar22 = fStack000000000000005c;
                    }
                    if (fVar24 + fStack000000000000005c < fVar29 + fVar22) {
                      fVar20 = (fVar29 + fVar22) - (fVar24 + fStack000000000000005c);
                      fVar29 = fVar29 - fVar20;
                      fVar28 = (fVar28 * fVar29) / (fVar20 + fVar29);
                    }
                    memcpy(&stack0x00000060,unaff_x19,0x110);
                    FUN_03a169cc(fVar22,fVar18,fVar29,fVar25,fVar23,fVar19,fVar28,fVar27);
                  }
                  FUN_02757d48(&stack0x000001a0,*(undefined8 *)puVar5);
                }
                    /* WARNING: Subroutine does not return */
                FUN_01b48178();
              }
              goto LAB_03a168ec;
            }
            unaff_w24 = *(uint *)((long)unaff_x19 + 0x5c);
            iVar15 = *(int *)((long)unaff_x19 + 0x4c);
            fVar22 = *(float *)((long)unaff_x19 + 0x50);
            iVar1 = *(int *)((long)unaff_x19 + 0x54);
            fVar24 = 0.0;
            in_stack_00000050 = 0;
            fVar18 = 0.0;
            switch(unaff_w24) {
            case 0:
              lVar13 = *unaff_x21;
              if (lVar13 == 0) goto LAB_03a168ec;
              if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_03a168f0;
              lVar13 = *(long *)(lVar13 + 0x28);
              if (lVar13 == 0) goto LAB_03a168ec;
              lVar9 = *(long *)(lVar13 + 0x10);
              lVar14 = *(long *)PTR_DAT_03db0a90;
              *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
              uVar4 = _UNK_00b55ee8;
              uVar11 = _DAT_00b55ee0;
              if (lVar9 == 0) goto LAB_03a168ec;
              uVar8 = *(uint *)(lVar13 + 0x18);
              if (uVar8 < *(uint *)(lVar9 + 0x18)) {
                lVar9 = lVar9 + (long)(int)uVar8 * 0x20;
                *(uint *)(lVar13 + 0x18) = uVar8 + 1;
                *(float *)(lVar9 + 0x28) = fVar25;
                *(float *)(lVar9 + 0x2c) = unaff_s11;
                *(undefined8 *)(lVar9 + 0x38) = uVar4;
                *(undefined8 *)(lVar9 + 0x30) = uVar11;
                *(float *)(lVar9 + 0x20) = fStack0000000000000034;
                *(float *)(lVar9 + 0x24) = fStack0000000000000038;
                fVar18 = unaff_s11;
              }
              else {
                fStack0000000000000170 = fStack0000000000000034;
                in_stack_00000188 = _UNK_00b55ee8;
                in_stack_00000180 = _DAT_00b55ee0;
                fStack0000000000000174 = fStack0000000000000038;
                fStack0000000000000178 = fVar25;
                fStack000000000000017c = unaff_s11;
                FUN_02c61f00(lVar13,&stack0x00000170,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                fVar18 = unaff_s11;
              }
              break;
            case 1:
              iVar12 = -0x80000000;
              if (fVar26 / unaff_s11 != INFINITY) {
                iVar12 = (int)(fVar26 / unaff_s11);
              }
              fVar18 = fVar24;
              if (-1 < iVar12) {
                lVar13 = *unaff_x21;
                if (lVar13 == 0) goto LAB_03a168ec;
                if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_03a168f0;
                lVar13 = *(long *)(lVar13 + 0x28);
                if (lVar13 == 0) goto LAB_03a168ec;
                lVar9 = *(long *)(lVar13 + 0x10);
                lVar14 = *(long *)PTR_DAT_03db0a90;
                *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                uVar4 = _UNK_00b55ee8;
                uVar11 = _DAT_00b55ee0;
                if (lVar9 == 0) goto LAB_03a168ec;
                uVar8 = *(uint *)(lVar13 + 0x18);
                if (uVar8 < *(uint *)(lVar9 + 0x18)) {
                  lVar9 = lVar9 + (long)(int)uVar8 * 0x20;
                  *(uint *)(lVar13 + 0x18) = uVar8 + 1;
                  *(float *)(lVar9 + 0x28) = fStack0000000000000058;
                  *(float *)(lVar9 + 0x2c) = unaff_s11;
                  *(undefined8 *)(lVar9 + 0x38) = uVar4;
                  *(undefined8 *)(lVar9 + 0x30) = uVar11;
                  *(float *)(lVar9 + 0x20) = fStack0000000000000034;
                  *(float *)(lVar9 + 0x24) = fStack0000000000000038;
                }
                else {
                  fStack0000000000000170 = fStack0000000000000034;
                  fStack0000000000000178 = fStack0000000000000058;
                  in_stack_00000188 = _UNK_00b55ee8;
                  in_stack_00000180 = _DAT_00b55ee0;
                  fStack0000000000000174 = fStack0000000000000038;
                  fStack000000000000017c = unaff_s11;
                  FUN_02c61f00(lVar13,&stack0x00000170,
                               *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                }
                fVar18 = unaff_s11;
                if (1 < iVar12) {
                  lVar13 = *unaff_x21;
                  if (lVar13 == 0) goto LAB_03a168ec;
                  if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_03a168f0;
                  lVar13 = *(long *)(lVar13 + 0x28);
                  if (lVar13 == 0) goto LAB_03a168ec;
                  lVar9 = *(long *)(lVar13 + 0x10);
                  lVar14 = *(long *)PTR_DAT_03db0a90;
                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  uVar4 = _UNK_00b55ee8;
                  uVar11 = _DAT_00b55ee0;
                  if (lVar9 == 0) goto LAB_03a168ec;
                  uVar8 = *(uint *)(lVar13 + 0x18);
                  if (uVar8 < *(uint *)(lVar9 + 0x18)) {
                    lVar9 = lVar9 + (long)(int)uVar8 * 0x20;
                    *(uint *)(lVar13 + 0x18) = uVar8 + 1;
                    *(float *)(lVar9 + 0x20) = fStack0000000000000034;
                    *(float *)(lVar9 + 0x24) = in_stack_00000020._4_4_;
                    *(float *)(lVar9 + 0x28) = fStack0000000000000058;
                    *(float *)(lVar9 + 0x2c) = unaff_s11;
                    *(undefined8 *)(lVar9 + 0x38) = uVar4;
                    *(undefined8 *)(lVar9 + 0x30) = uVar11;
                  }
                  else {
                    fStack0000000000000178 = fStack0000000000000058;
                    in_stack_00000188 = _UNK_00b55ee8;
                    in_stack_00000180 = _DAT_00b55ee0;
                    fStack0000000000000170 = fStack0000000000000034;
                    fStack0000000000000174 = in_stack_00000020._4_4_;
                    fStack000000000000017c = unaff_s11;
                    FUN_02c61f00(lVar13,&stack0x00000170,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  fVar18 = fStack0000000000000040;
                  if (2 < iVar12) {
                    iVar17 = 0;
                    do {
                      iVar17 = iVar17 + 1;
                      lVar13 = *unaff_x21;
                      fVar25 = (unaff_s11 +
                               (fStack0000000000000040 - unaff_s11 * (float)iVar12) /
                               (float)(iVar12 + -1)) * (float)iVar17;
                      if (lVar13 == 0) goto LAB_03a168ec;
                      if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_03a168f0;
                      lVar13 = *(long *)(lVar13 + 0x28);
                      if (lVar13 == 0) goto LAB_03a168ec;
                      lVar9 = *(long *)(lVar13 + 0x10);
                      lVar14 = *(long *)PTR_DAT_03db0a90;
                      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                      uVar4 = _UNK_00b55ee8;
                      uVar11 = _DAT_00b55ee0;
                      if (lVar9 == 0) goto LAB_03a168ec;
                      uVar8 = *(uint *)(lVar13 + 0x18);
                      if (uVar8 < *(uint *)(lVar9 + 0x18)) {
                        lVar9 = lVar9 + (long)(int)uVar8 * 0x20;
                        *(uint *)(lVar13 + 0x18) = uVar8 + 1;
                        *(float *)(lVar9 + 0x20) = fStack0000000000000034;
                        *(float *)(lVar9 + 0x24) = fVar25;
                        *(float *)(lVar9 + 0x28) = fStack0000000000000058;
                        *(float *)(lVar9 + 0x2c) = unaff_s11;
                        *(undefined8 *)(lVar9 + 0x38) = uVar4;
                        *(undefined8 *)(lVar9 + 0x30) = uVar11;
                      }
                      else {
                        fStack0000000000000178 = fStack0000000000000058;
                        in_stack_00000188 = _UNK_00b55ee8;
                        in_stack_00000180 = _DAT_00b55ee0;
                        fStack0000000000000170 = fStack0000000000000034;
                        fStack0000000000000174 = fVar25;
                        fStack000000000000017c = unaff_s11;
                        FUN_02c61f00(lVar13,&stack0x00000170,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                      }
                      fVar18 = fStack0000000000000040;
                    } while (iVar17 < iVar12 + -2);
                  }
                }
              }
              break;
            case 2:
              fVar18 = (fVar26 + unaff_s11 * 0.5) / unaff_s11;
              iVar12 = -0x80000000;
              if (fVar18 != INFINITY) {
                iVar12 = (int)fVar18;
              }
              if (*(int *)(*(long *)
                            Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                          + 0xe0) == 0) {
                thunk_FUN_01ac7298();
              }
              uVar8 = FUN_03041568(iVar12,1,0);
              iVar12 = 1;
              if ((uVar8 & 1) != 0) {
                iVar12 = 2;
              }
              if (iVar15 != 0) {
                iVar12 = 1;
              }
              fVar26 = fVar26 / (float)(int)uVar8;
              fVar18 = fVar24;
              if (0 < (int)(uVar8 + iVar12)) {
                iVar17 = 0;
                fVar18 = 0.0;
                do {
                  lVar13 = *unaff_x21;
                  if (lVar13 == 0) goto LAB_03a168ec;
                  if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_03a168f0;
                  lVar13 = *(long *)(lVar13 + 0x28);
                  if (lVar13 == 0) goto LAB_03a168ec;
                  lVar9 = *(long *)(lVar13 + 0x10);
                  lVar14 = *(long *)PTR_DAT_03db0a90;
                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  uVar4 = _UNK_00b55ee8;
                  uVar11 = _DAT_00b55ee0;
                  if (lVar9 == 0) goto LAB_03a168ec;
                  uVar2 = *(uint *)(lVar13 + 0x18);
                  if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                    lVar9 = lVar9 + (long)(int)uVar2 * 0x20;
                    *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                    *(float *)(lVar9 + 0x20) = fStack0000000000000034;
                    *(float *)(lVar9 + 0x24) = fVar26 * (float)iVar17;
                    *(float *)(lVar9 + 0x28) = fVar25;
                    *(float *)(lVar9 + 0x2c) = fVar26;
                    *(undefined8 *)(lVar9 + 0x38) = uVar4;
                    *(undefined8 *)(lVar9 + 0x30) = uVar11;
                  }
                  else {
                    in_stack_00000188 = _UNK_00b55ee8;
                    in_stack_00000180 = _DAT_00b55ee0;
                    fStack0000000000000170 = fStack0000000000000034;
                    fStack0000000000000174 = fVar26 * (float)iVar17;
                    fStack0000000000000178 = fVar25;
                    fStack000000000000017c = fVar26;
                    FUN_02c61f00(lVar13,&stack0x00000170,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  iVar17 = iVar17 + 1;
                  fVar18 = fVar18 + fVar26;
                } while (uVar8 + iVar12 != iVar17);
              }
              break;
            case 3:
              fVar25 = (fStack0000000000000028 + fVar26) / unaff_s11;
              uVar8 = 0x80000000;
              if (fVar25 != INFINITY) {
                uVar8 = (int)fVar25;
              }
              iVar12 = 1;
              if (iVar15 != 0 || (uVar8 & 1) != 0) {
                iVar12 = 2;
              }
              fVar18 = fVar24;
              if (0 < (int)(uVar8 + iVar12)) {
                iVar17 = 0;
                fVar18 = 0.0;
                do {
                  lVar13 = *unaff_x21;
                  if (lVar13 == 0) goto LAB_03a168ec;
                  if (*(uint *)(lVar13 + 0x18) < 2) goto LAB_03a168f0;
                  lVar13 = *(long *)(lVar13 + 0x28);
                  if (lVar13 == 0) goto LAB_03a168ec;
                  lVar9 = *(long *)(lVar13 + 0x10);
                  lVar14 = *(long *)PTR_DAT_03db0a90;
                  *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
                  uVar4 = _UNK_00b55ee8;
                  uVar11 = _DAT_00b55ee0;
                  if (lVar9 == 0) goto LAB_03a168ec;
                  uVar2 = *(uint *)(lVar13 + 0x18);
                  if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                    lVar9 = lVar9 + (long)(int)uVar2 * 0x20;
                    *(uint *)(lVar13 + 0x18) = uVar2 + 1;
                    *(float *)(lVar9 + 0x20) = fStack0000000000000034;
                    *(float *)(lVar9 + 0x24) = unaff_s11 * (float)iVar17;
                    *(float *)(lVar9 + 0x28) = fStack0000000000000058;
                    *(float *)(lVar9 + 0x2c) = unaff_s11;
                    *(undefined8 *)(lVar9 + 0x38) = uVar4;
                    *(undefined8 *)(lVar9 + 0x30) = uVar11;
                  }
                  else {
                    fStack0000000000000178 = fStack0000000000000058;
                    in_stack_00000188 = _UNK_00b55ee8;
                    in_stack_00000180 = _DAT_00b55ee0;
                    fStack0000000000000170 = fStack0000000000000034;
                    fStack0000000000000174 = unaff_s11 * (float)iVar17;
                    fStack000000000000017c = unaff_s11;
                    FUN_02c61f00(lVar13,&stack0x00000170,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70))
                    ;
                  }
                  iVar17 = iVar17 + 1;
                  fVar18 = fVar18 + unaff_s11;
                } while (uVar8 + iVar12 != iVar17);
              }
            }
            fVar25 = fStack0000000000000058;
            fVar26 = fStack0000000000000040;
            fVar24 = fStack0000000000000044;
            if (iVar15 == 0) {
              unaff_d12 = (ulong)(uint)((fStack0000000000000040 - fVar18) * 0.5);
              goto FUN_03a162d0;
            }
            unaff_d12 = 0;
          } while (unaff_w24 == 1);
          if (iVar1 == 0) {
            unaff_d12 = (ulong)(uint)fVar22;
            bVar3 = false;
          }
          else if (iVar1 == 1) {
            unaff_d12 = (ulong)(uint)((fVar22 * in_stack_00000020._4_4_) / 100.0);
            bVar3 = true;
          }
          else {
            bVar3 = false;
            unaff_d12 = 0;
          }
          if ((iVar15 == 4) || (iVar15 == 2)) {
            unaff_d12 = (ulong)(uint)((fStack0000000000000040 - fVar18) - (float)unaff_d12);
          }
        } while (!bVar3);
FUN_03a162d0:
        uVar11 = *(undefined8 *)((long)unaff_x19 + 0x80);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar10 = FUN_03922f24(uVar11,0,0);
      } while ((uVar10 & 1) == 0);
      uVar11 = *(undefined8 *)((long)unaff_x19 + 0x88);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar10 = FUN_03922f24(uVar11,0,0);
    } while ((uVar10 & 1) == 0);
    unaff_s8 = unaff_s11 * fStack000000000000002c;
    dVar21 = modf((double)unaff_s8,(double *)&stack0x00000170);
    if (unaff_s8 < 0.0) {
      if (dVar21 == -0.5) {
        fVar18 = -1.0;
LAB_03a16380:
        param_1 = (float)(double)CONCAT44(fStack0000000000000174,fStack0000000000000170);
        if (((long)(double)CONCAT44(fStack0000000000000174,fStack0000000000000170) & 1U) != 0) {
          param_1 = param_1 + fVar18;
        }
      }
      else {
        param_1 = (float)(int)(unaff_s8 + -0.5);
      }
      goto code_r0x03a163b4;
    }
    if (dVar21 == 0.5) {
      fVar18 = 1.0;
      goto LAB_03a16380;
    }
    param_1 = (float)(int)(unaff_s8 + 0.5);
  } while( true );
}


