/*
FUNCTION_NAME: UnityEngine.UI.ScrollRect$$set_horizontalNormalizedPosition
ENTRY_POINT: 03a15fa4
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior;structure_combo
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;negative_framework_namespace_without_eye_use_flow
*/


/* WARNING: Removing unreachable block (ram,0x03a16784) */
/* WARNING: Removing unreachable block (ram,0x03a16788) */
/* WARNING: Removing unreachable block (ram,0x03a15bf0) */
/* WARNING: Removing unreachable block (ram,0x03a15c78) */
/* WARNING: Removing unreachable block (ram,0x03a16924) */
/* WARNING: Removing unreachable block (ram,0x03a15f28) */
/* WARNING: Removing unreachable block (ram,0x03a15f24) */
/* WARNING: Removing unreachable block (ram,0x03a15cf4) */
/* WARNING: Removing unreachable block (ram,0x03a15e64) */
/* WARNING: Removing unreachable block (ram,0x03a15ce4) */
/* WARNING: Removing unreachable block (ram,0x03a15de8) */
/* WARNING: Removing unreachable block (ram,0x03a15c84) */
/* WARNING: Removing unreachable block (ram,0x03a15d28) */
/* WARNING: Removing unreachable block (ram,0x03a15cf0) */
/* WARNING: Removing unreachable block (ram,0x03a15e40) */
/* WARNING: Removing unreachable block (ram,0x03a15e60) */
/* WARNING: Removing unreachable block (ram,0x03a15df0) */
/* WARNING: Removing unreachable block (ram,0x03a15d0c) */
/* WARNING: Removing unreachable block (ram,0x03a15d24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UnityEngine_UI_ScrollRect__set_horizontalNormalizedPosition(long param_1,long param_2)

{
  uint uVar1;
  float *pfVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int in_w9;
  long lVar14;
  void *unaff_x19;
  long *unaff_x21;
  undefined8 uVar15;
  ulong unaff_x23;
  uint unaff_w24;
  int unaff_w25;
  int iVar16;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float unaff_s8;
  float fVar22;
  float fVar23;
  float unaff_s11;
  float fVar24;
  float fVar25;
  float fVar26;
  long in_stack_00000010;
  undefined4 uStack0000000000000018;
  float fStack000000000000001c;
  float fStack0000000000000020;
  float fStack0000000000000024;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  int iStack0000000000000048;
  float fStack000000000000004c;
  uint uStack0000000000000050;
  float fStack0000000000000054;
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
  
code_r0x03a15fa4:
  uVar4 = _UNK_00b55ee8;
  uVar10 = _DAT_00b55ee0;
  *(int *)(param_2 + 0x18) = in_w9;
  *(float *)(param_1 + 0x28) = unaff_s8;
  *(float *)(param_1 + 0x2c) = unaff_s11;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar10;
  *(float *)(param_1 + 0x20) = fStack0000000000000034;
  *(float *)(param_1 + 0x24) = fStack0000000000000038;
LAB_03a1603c:
  fVar22 = fStack0000000000000058;
  fVar18 = fStack0000000000000044;
  fVar17 = fStack0000000000000040;
  iVar16 = (int)unaff_x26;
  fVar23 = unaff_s11;
  if (iVar16 != 1) {
    fVar23 = unaff_s8;
  }
  if (unaff_w25 < 2) {
switchD_03a15be4_default:
    fVar22 = fStack0000000000000058;
    fVar18 = fStack0000000000000044;
    fVar17 = fStack0000000000000040;
    if (fStack0000000000000054 == 0.0) {
      fVar24 = fStack0000000000000040;
      if ((unaff_x23 & 1) == 0) {
        fVar24 = fStack0000000000000044;
      }
      fVar24 = (fVar24 - fVar23) * 0.5;
FUN_03a162d0:
      uVar10 = *(undefined8 *)((long)unaff_x19 + 0x80);
      if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                  0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar9 = FUN_03922f24(uVar10,0,0);
      if ((uVar9 & 1) != 0) {
        uVar10 = *(undefined8 *)((long)unaff_x19 + 0x88);
        if (*(int *)(*(long *)Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__
                    + 0xe0) == 0) {
          thunk_FUN_01ac7298();
        }
        uVar9 = FUN_03922f24(uVar10,0,0);
        if ((uVar9 & 1) != 0) {
          fVar23 = unaff_s11;
          if ((unaff_x23 & 1) == 0) {
            fVar23 = fVar22;
          }
          fVar23 = fVar23 * fStack000000000000002c;
          dVar20 = modf((double)fVar23,(double *)&stack0x00000170);
          if (0.0 <= fVar23) {
            if (dVar20 == 0.5) {
              fVar21 = 1.0;
              goto LAB_03a16380;
            }
            fVar25 = (float)(int)(fVar23 + 0.5);
          }
          else if (dVar20 == -0.5) {
            fVar21 = -1.0;
LAB_03a16380:
            fVar25 = (float)(double)CONCAT44(fStack0000000000000174,fStack0000000000000170);
            if (((long)(double)CONCAT44(fStack0000000000000174,fStack0000000000000170) & 1U) != 0) {
              fVar25 = fVar25 + fVar21;
            }
          }
          else {
            fVar25 = (float)(int)(fVar23 + -0.5);
          }
          if (ABS(fVar25 - fVar23) < fStack000000000000001c) {
            fVar24 = (float)FUN_039ba41c(fVar24,fStack000000000000002c,uStack0000000000000018,0);
          }
        }
      }
LAB_03a163dc:
      if ((unaff_w24 & 0xfffffffe) == 2) {
        fVar23 = unaff_s11;
        if ((unaff_x23 & 1) == 0) {
          fVar23 = fVar22;
        }
        if (fStack0000000000000030 < fVar23) {
          if (fVar24 < -fVar23) {
            fVar21 = -2.1474836e+09;
            if (-fVar24 / fVar23 != INFINITY) {
              fVar21 = (float)(int)(-fVar24 / fVar23);
            }
            fVar24 = fVar24 + fVar23 * fVar21;
          }
          if (0.0 < fVar24) {
            fVar21 = -2.1474836e+09;
            if (fVar24 / fVar23 != INFINITY) {
              fVar21 = (float)((int)(fVar24 / fVar23) + 1);
            }
            fVar24 = fVar24 - fVar23 * fVar21;
          }
        }
      }
    }
    else {
      fVar24 = 0.0;
      if (unaff_w24 != 1) {
        if (iStack0000000000000048 == 0) {
          bVar3 = false;
          fVar24 = fStack000000000000004c;
        }
        else if (iStack0000000000000048 == 1) {
          pfVar2 = (float *)((long)&stack0x00000020 + 4);
          if ((unaff_x23 & 1) == 0) {
            pfVar2 = &stack0x00000020;
          }
          bVar3 = true;
          fVar24 = (fStack000000000000004c * *pfVar2) / 100.0;
        }
        else {
          bVar3 = false;
          fVar24 = 0.0;
        }
        if ((fStack0000000000000054 == 5.60519e-45) || (fStack0000000000000054 == 2.8026e-45)) {
          fVar21 = fStack0000000000000040;
          if ((unaff_x23 & 1) == 0) {
            fVar21 = fStack0000000000000044;
          }
          fVar24 = (fVar21 - fVar23) - fVar24;
        }
        if (bVar3) goto FUN_03a162d0;
        goto LAB_03a163dc;
      }
    }
    lVar12 = *unaff_x21;
    if (lVar12 == 0) goto LAB_03a168ec;
    iVar16 = 0;
    while( true ) {
      unaff_s8 = fStack0000000000000058;
      fVar23 = fStack000000000000003c;
      fVar21 = fStack0000000000000034;
      puVar7 = PTR_DAT_03db0aa0;
      if (*(uint *)(lVar12 + 0x18) <= unaff_x26) goto LAB_03a168f0;
      lVar13 = *(long *)(lVar12 + unaff_x26 * 8 + 0x20);
      if (lVar13 == 0) goto LAB_03a168ec;
      if (*(int *)(lVar13 + 0x18) <= iVar16) break;
      FUN_02c61bac(&stack0x00000170,lVar13,iVar16,*unaff_x28);
      lVar12 = *unaff_x21;
      fVar23 = fStack0000000000000170;
      fVar21 = fVar24 + fStack0000000000000174;
      if ((unaff_x23 & 1) == 0) {
        fVar23 = fVar24 + fStack0000000000000170;
        fVar21 = fStack0000000000000174;
      }
      if (lVar12 == 0) goto LAB_03a168ec;
      if (*(uint *)(lVar12 + 0x18) <= unaff_x26) goto LAB_03a168f0;
      lVar12 = *(long *)(lVar12 + unaff_x26 * 8 + 0x20);
      if (lVar12 == 0) goto LAB_03a168ec;
      uVar10 = *unaff_x29;
      unaff_x27[2] = unaff_x27[2];
      unaff_x27[1] = unaff_x27[1];
      *unaff_x27 = *unaff_x27;
      fStack0000000000000170 = fVar23;
      fStack0000000000000174 = fVar21;
      FUN_02c61c0c(lVar12,iVar16,&stack0x00000170,uVar10);
      lVar12 = *unaff_x21;
      iVar16 = iVar16 + 1;
      if (lVar12 == 0) goto LAB_03a168ec;
    }
    unaff_x23 = 1;
    unaff_x26 = 1;
    if ((uStack0000000000000050 & 1) == 0) {
      if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_03a168f0;
      if (*(long *)(lVar12 + 0x28) != 0) {
        FUN_02c62a64(&stack0x00000170,*(long *)(lVar12 + 0x28),*(undefined8 *)PTR_DAT_03db0aa0);
        uVar4 = in_stack_00000198;
        uVar10 = in_stack_00000190;
        puVar6 = PTR_DAT_03db0a78;
        puVar5 = PTR_DAT_03db0a70;
        in_stack_000001d8 = CONCAT44(fStack000000000000017c,fStack0000000000000178);
        in_stack_000001d0 = CONCAT44(fStack0000000000000174,fStack0000000000000170);
        fStack0000000000000058 = fVar18 + fStack000000000000005c;
        in_stack_000001e8 = in_stack_00000188;
        in_stack_000001e0 = in_stack_00000180;
        fVar17 = fVar17 + fVar23;
        fStack0000000000000054 = fVar17;
        while( true ) {
          uVar9 = FUN_02757d4c(&stack0x000001d0,*(undefined8 *)puVar6);
          if ((uVar9 & 1) == 0) {
            FUN_02757d48(&stack0x000001d0,*(undefined8 *)puVar5);
            if (*(long *)(in_stack_00000010 + 0x28) != in_stack_00000248) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
          if (fStack000000000000003c <= in_stack_000001e0._4_4_) {
            fVar22 = (float)((ulong)uVar10 >> 0x20);
            fVar24 = (float)((ulong)uVar4 >> 0x20);
            fVar23 = in_stack_000001e8._4_4_;
            fVar18 = in_stack_000001e0._4_4_;
          }
          else {
            fVar18 = fStack000000000000003c - in_stack_000001e0._4_4_;
            fVar23 = in_stack_000001e8._4_4_ - fVar18;
            fVar24 = fVar23 / (fVar18 + fVar23);
            fVar22 = fVar18 / (fVar18 + fVar23) + 0.0;
            fVar18 = fStack000000000000003c;
          }
          if (fVar17 < fVar23 + fVar18) {
            fVar17 = (fVar23 + fVar18) - fVar17;
            fVar23 = fVar23 - fVar17;
            fVar24 = (fVar24 * fVar23) / (fVar17 + fVar23);
            fVar22 = (fVar22 + fVar24) - fVar24;
          }
          uVar15 = *(undefined8 *)((long)unaff_x19 + 0x88);
          if (*(int *)(*(long *)
                        Method_OVRPermissionsRequester_<>c_<BuildPermissionCallbacks>b__14_1__ +
                      0xe0) == 0) {
            thunk_FUN_01ac7298();
          }
          uVar9 = FUN_03922f24(uVar15,0,0);
          lVar12 = *unaff_x21;
          fVar21 = fVar22 + ((1.0 - (fVar24 + fVar22)) - fVar22);
          if ((uVar9 & 1) == 0) {
            fVar21 = fVar22;
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48178();
          }
          if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01b48180();
          }
          if (*(long *)(lVar12 + 0x20) == 0) break;
          FUN_02c62a64(&stack0x00000170,*(long *)(lVar12 + 0x20),*(undefined8 *)puVar7);
          in_stack_000001a8 = CONCAT44(fStack000000000000017c,fStack0000000000000178);
          in_stack_000001a0 = CONCAT44(fStack0000000000000174,fStack0000000000000170);
          _fStack00000000000001b8 = in_stack_00000188;
          _fStack00000000000001b0 = in_stack_00000180;
          _fStack00000000000001c8 = in_stack_00000198;
          _fStack00000000000001c0 = in_stack_00000190;
          while (uVar9 = FUN_02757d4c(&stack0x000001a0,*(undefined8 *)puVar6),
                fVar17 = fStack0000000000000054, (uVar9 & 1) != 0) {
            if (fStack000000000000005c <= fStack00000000000001b0) {
              fVar22 = fStack00000000000001c0;
              fVar25 = fStack00000000000001c8;
              fVar26 = fStack00000000000001b8;
              fVar17 = fStack00000000000001b0;
            }
            else {
              fVar17 = fStack000000000000005c - fStack00000000000001b0;
              fVar26 = fStack00000000000001b8 - fVar17;
              fVar22 = fVar17 / (fVar17 + fVar26) + 0.0;
              fVar25 = (fVar26 * fStack00000000000001c8) / (fVar17 + fVar26);
              fVar17 = fStack000000000000005c;
            }
            if (fStack0000000000000058 < fVar26 + fVar17) {
              fVar19 = (fVar26 + fVar17) - fStack0000000000000058;
              fVar26 = fVar26 - fVar19;
              fVar25 = (fVar25 * fVar26) / (fVar19 + fVar26);
            }
            memcpy(&stack0x00000060,unaff_x19,0x110);
            FUN_03a169cc(fVar17,fVar18,fVar26,fVar23,fVar22,fVar21,fVar25,fVar24);
          }
          FUN_02757d48(&stack0x000001a0,*(undefined8 *)puVar5);
        }
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      goto LAB_03a168ec;
    }
    unaff_w24 = *(uint *)((long)unaff_x19 + 0x5c);
    iVar16 = *(int *)((long)unaff_x19 + 0x4c);
    fStack000000000000004c = *(float *)((long)unaff_x19 + 0x50);
    iStack0000000000000048 = *(int *)((long)unaff_x19 + 0x54);
    fVar18 = 0.0;
    uStack0000000000000050 = 0;
    fVar23 = 0.0;
    fStack0000000000000054 = (float)iVar16;
    switch(unaff_w24) {
    case 0:
      lVar12 = *unaff_x21;
      if (lVar12 == 0) goto LAB_03a168ec;
      if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_03a168f0;
      lVar12 = *(long *)(lVar12 + 0x28);
      if (lVar12 == 0) goto LAB_03a168ec;
      lVar13 = *(long *)(lVar12 + 0x10);
      lVar14 = *(long *)PTR_DAT_03db0a90;
      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
      uVar4 = _UNK_00b55ee8;
      uVar10 = _DAT_00b55ee0;
      if (lVar13 == 0) goto LAB_03a168ec;
      uVar8 = *(uint *)(lVar12 + 0x18);
      if (uVar8 < *(uint *)(lVar13 + 0x18)) {
        lVar13 = lVar13 + (long)(int)uVar8 * 0x20;
        *(uint *)(lVar12 + 0x18) = uVar8 + 1;
        *(float *)(lVar13 + 0x28) = fVar22;
        *(float *)(lVar13 + 0x2c) = unaff_s11;
        *(undefined8 *)(lVar13 + 0x38) = uVar4;
        *(undefined8 *)(lVar13 + 0x30) = uVar10;
        *(float *)(lVar13 + 0x20) = fStack0000000000000034;
        *(float *)(lVar13 + 0x24) = fStack0000000000000038;
        fVar23 = unaff_s11;
      }
      else {
        fStack0000000000000170 = fStack0000000000000034;
        in_stack_00000188 = _UNK_00b55ee8;
        in_stack_00000180 = _DAT_00b55ee0;
        fStack0000000000000174 = fStack0000000000000038;
        fStack0000000000000178 = fVar22;
        fStack000000000000017c = unaff_s11;
        FUN_02c61f00(lVar12,&stack0x00000170,
                     *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
        fVar23 = unaff_s11;
      }
      goto switchD_03a15be4_default;
    case 1:
      goto code_r0x03a15f2c;
    case 2:
      fVar23 = (fVar17 + unaff_s11 * 0.5) / unaff_s11;
      iVar11 = -0x80000000;
      if (fVar23 != INFINITY) {
        iVar11 = (int)fVar23;
      }
      if (*(int *)(*(long *)Method_UnityEngine_UIElements_RectIntField_<>c_<DescribeFields>b__0_1__
                  + 0xe0) == 0) {
        thunk_FUN_01ac7298();
      }
      uVar8 = FUN_03041568(iVar11,1,0);
      fVar24 = fStack0000000000000034;
      iVar11 = 1;
      if ((uVar8 & 1) != 0) {
        iVar11 = 2;
      }
      if (iVar16 != 0) {
        iVar11 = 1;
      }
      fVar17 = fVar17 / (float)(int)uVar8;
      fVar23 = fVar18;
      if (0 < (int)(uVar8 + iVar11)) {
        iVar16 = 0;
        fVar23 = 0.0;
        do {
          lVar12 = *unaff_x21;
          if (lVar12 == 0) goto LAB_03a168ec;
          if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_03a168f0;
          lVar12 = *(long *)(lVar12 + 0x28);
          if (lVar12 == 0) goto LAB_03a168ec;
          lVar13 = *(long *)(lVar12 + 0x10);
          lVar14 = *(long *)PTR_DAT_03db0a90;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          uVar4 = _UNK_00b55ee8;
          uVar10 = _DAT_00b55ee0;
          if (lVar13 == 0) goto LAB_03a168ec;
          uVar1 = *(uint *)(lVar12 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + (long)(int)uVar1 * 0x20;
            *(uint *)(lVar12 + 0x18) = uVar1 + 1;
            *(float *)(lVar13 + 0x20) = fVar24;
            *(float *)(lVar13 + 0x24) = fVar17 * (float)iVar16;
            *(float *)(lVar13 + 0x28) = fVar22;
            *(float *)(lVar13 + 0x2c) = fVar17;
            *(undefined8 *)(lVar13 + 0x38) = uVar4;
            *(undefined8 *)(lVar13 + 0x30) = uVar10;
          }
          else {
            in_stack_00000188 = _UNK_00b55ee8;
            in_stack_00000180 = _DAT_00b55ee0;
            fStack0000000000000170 = fVar24;
            fStack0000000000000174 = fVar17 * (float)iVar16;
            fStack0000000000000178 = fVar22;
            fStack000000000000017c = fVar17;
            FUN_02c61f00(lVar12,&stack0x00000170,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          iVar16 = iVar16 + 1;
          fVar23 = fVar23 + fVar17;
        } while (uVar8 + iVar11 != iVar16);
      }
      goto switchD_03a15be4_default;
    case 3:
      fVar23 = (fStack0000000000000028 + fVar17) / unaff_s11;
      uVar8 = 0x80000000;
      if (fVar23 != INFINITY) {
        uVar8 = (int)fVar23;
      }
      iVar11 = 1;
      if (iVar16 != 0 || (uVar8 & 1) != 0) {
        iVar11 = 2;
      }
      fVar23 = fVar18;
      if (0 < (int)(uVar8 + iVar11)) {
        iVar16 = 0;
        fVar23 = 0.0;
        do {
          lVar12 = *unaff_x21;
          if (lVar12 == 0) goto LAB_03a168ec;
          if (*(uint *)(lVar12 + 0x18) < 2) goto LAB_03a168f0;
          lVar12 = *(long *)(lVar12 + 0x28);
          if (lVar12 == 0) goto LAB_03a168ec;
          lVar13 = *(long *)(lVar12 + 0x10);
          lVar14 = *(long *)PTR_DAT_03db0a90;
          *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
          uVar4 = _UNK_00b55ee8;
          uVar10 = _DAT_00b55ee0;
          if (lVar13 == 0) goto LAB_03a168ec;
          uVar1 = *(uint *)(lVar12 + 0x18);
          if (uVar1 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + (long)(int)uVar1 * 0x20;
            *(uint *)(lVar12 + 0x18) = uVar1 + 1;
            *(float *)(lVar13 + 0x20) = fVar21;
            *(float *)(lVar13 + 0x24) = unaff_s11 * (float)iVar16;
            *(float *)(lVar13 + 0x28) = fStack0000000000000058;
            *(float *)(lVar13 + 0x2c) = unaff_s11;
            *(undefined8 *)(lVar13 + 0x38) = uVar4;
            *(undefined8 *)(lVar13 + 0x30) = uVar10;
          }
          else {
            fStack0000000000000178 = fStack0000000000000058;
            in_stack_00000188 = _UNK_00b55ee8;
            in_stack_00000180 = _DAT_00b55ee0;
            fStack0000000000000170 = fVar21;
            fStack0000000000000174 = unaff_s11 * (float)iVar16;
            fStack000000000000017c = unaff_s11;
            FUN_02c61f00(lVar12,&stack0x00000170,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          iVar16 = iVar16 + 1;
          fVar23 = fVar23 + unaff_s11;
        } while (uVar8 + iVar11 != iVar16);
      }
    default:
      goto switchD_03a15be4_default;
    }
  }
  lVar12 = *unaff_x21;
  fVar24 = fStack0000000000000024;
  fVar21 = fStack0000000000000034;
  if (iVar16 != 1) {
    fVar24 = fStack0000000000000038;
    fVar21 = fStack0000000000000020;
  }
  if (lVar12 != 0) {
    if (unaff_x26 < *(uint *)(lVar12 + 0x18)) {
      lVar12 = *(long *)(lVar12 + unaff_x26 * 8 + 0x20);
      if (lVar12 != 0) {
        lVar13 = *(long *)(lVar12 + 0x10);
        lVar14 = *(long *)PTR_DAT_03db0a90;
        *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
        uVar4 = _UNK_00b55ee8;
        uVar10 = _DAT_00b55ee0;
        if (lVar13 != 0) {
          uVar8 = *(uint *)(lVar12 + 0x18);
          if (uVar8 < *(uint *)(lVar13 + 0x18)) {
            lVar13 = lVar13 + (long)(int)uVar8 * 0x20;
            *(uint *)(lVar12 + 0x18) = uVar8 + 1;
            *(float *)(lVar13 + 0x20) = fVar21;
            *(float *)(lVar13 + 0x24) = fVar24;
            *(float *)(lVar13 + 0x28) = fStack0000000000000058;
            *(float *)(lVar13 + 0x2c) = unaff_s11;
            *(undefined8 *)(lVar13 + 0x38) = uVar4;
            *(undefined8 *)(lVar13 + 0x30) = uVar10;
          }
          else {
            fStack0000000000000178 = fStack0000000000000058;
            in_stack_00000188 = _UNK_00b55ee8;
            in_stack_00000180 = _DAT_00b55ee0;
            fStack0000000000000170 = fVar21;
            fStack0000000000000174 = fVar24;
            fStack000000000000017c = unaff_s11;
            FUN_02c61f00(lVar12,&stack0x00000170,
                         *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
          }
          fVar23 = fVar17;
          if (iVar16 != 1) {
            fVar23 = fVar18;
          }
          if (2 < unaff_w25) {
            fVar25 = unaff_s11;
            if (iVar16 != 1) {
              fVar17 = fVar18;
              fVar25 = fVar22;
            }
            fVar17 = (fVar17 - fVar25 * (float)unaff_w25) / (float)(unaff_w25 + -1);
            iVar11 = 0;
            do {
              iVar11 = iVar11 + 1;
              lVar12 = *unaff_x21;
              fVar18 = (unaff_s11 + fVar17) * (float)iVar11;
              if (iVar16 != 1) {
                fVar18 = fVar24;
                fVar21 = (fVar22 + fVar17) * (float)iVar11;
              }
              fVar24 = fVar18;
              if (lVar12 == 0) goto LAB_03a168ec;
              if (*(uint *)(lVar12 + 0x18) <= unaff_x26) goto LAB_03a168f0;
              lVar12 = *(long *)(lVar12 + unaff_x26 * 8 + 0x20);
              if (lVar12 == 0) goto LAB_03a168ec;
              lVar13 = *(long *)(lVar12 + 0x10);
              lVar14 = *(long *)PTR_DAT_03db0a90;
              *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
              uVar4 = _UNK_00b55ee8;
              uVar10 = _DAT_00b55ee0;
              if (lVar13 == 0) goto LAB_03a168ec;
              uVar8 = *(uint *)(lVar12 + 0x18);
              if (uVar8 < *(uint *)(lVar13 + 0x18)) {
                lVar13 = lVar13 + (long)(int)uVar8 * 0x20;
                *(uint *)(lVar12 + 0x18) = uVar8 + 1;
                *(float *)(lVar13 + 0x20) = fVar21;
                *(float *)(lVar13 + 0x24) = fVar24;
                *(float *)(lVar13 + 0x28) = fVar22;
                *(float *)(lVar13 + 0x2c) = unaff_s11;
                *(undefined8 *)(lVar13 + 0x38) = uVar4;
                *(undefined8 *)(lVar13 + 0x30) = uVar10;
              }
              else {
                fStack0000000000000178 = fVar22;
                in_stack_00000188 = _UNK_00b55ee8;
                in_stack_00000180 = _DAT_00b55ee0;
                fStack0000000000000170 = fVar21;
                fStack0000000000000174 = fVar24;
                fStack000000000000017c = unaff_s11;
                FUN_02c61f00(lVar12,&stack0x00000170,
                             *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
              }
            } while (iVar11 < unaff_w25 + -2);
          }
          goto switchD_03a15be4_default;
        }
      }
      goto LAB_03a168ec;
    }
    goto LAB_03a168f0;
  }
  goto LAB_03a168ec;
code_r0x03a15f2c:
  unaff_w25 = -0x80000000;
  if (fVar17 / unaff_s11 != INFINITY) {
    unaff_w25 = (int)(fVar17 / unaff_s11);
  }
  fVar23 = fVar18;
  if (-1 < unaff_w25) goto code_r0x03a15f48;
  goto switchD_03a15be4_default;
code_r0x03a15f9c:
  in_w9 = uVar8 + 1;
  param_1 = param_1 + (long)(int)uVar8 * 0x20;
  goto code_r0x03a15fa4;
code_r0x03a15f48:
  lVar12 = *unaff_x21;
  if (lVar12 != 0) {
    if (*(uint *)(lVar12 + 0x18) < 2) {
LAB_03a168f0:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    param_2 = *(long *)(lVar12 + 0x28);
    if (param_2 != 0) {
      param_1 = *(long *)(param_2 + 0x10);
      lVar12 = *(long *)PTR_DAT_03db0a90;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (param_1 != 0) {
        uVar8 = *(uint *)(param_2 + 0x18);
        if (uVar8 < *(uint *)(param_1 + 0x18)) goto code_r0x03a15f9c;
        fStack0000000000000170 = fStack0000000000000034;
        fStack0000000000000178 = fStack0000000000000058;
        in_stack_00000188 = _UNK_00b55ee8;
        in_stack_00000180 = _DAT_00b55ee0;
        fStack0000000000000174 = fStack0000000000000038;
        fStack000000000000017c = unaff_s11;
        FUN_02c61f00(param_2,&stack0x00000170,
                     *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
        goto LAB_03a1603c;
      }
    }
  }
LAB_03a168ec:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


