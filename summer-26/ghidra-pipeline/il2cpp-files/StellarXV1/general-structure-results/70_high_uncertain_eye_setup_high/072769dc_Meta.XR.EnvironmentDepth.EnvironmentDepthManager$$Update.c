/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$Update
ENTRY_POINT: 072769dc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__Update(void)

{
  ushort uVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  short sVar6;
  undefined8 uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  ulong in_x9;
  ulong uVar20;
  undefined4 *puVar21;
  ulong in_x10;
  ushort *puVar22;
  uint in_w11;
  int in_w12;
  undefined1 *puVar23;
  short sVar24;
  undefined2 *puVar25;
  long lVar26;
  short sVar27;
  int iVar28;
  long lVar29;
  short sVar30;
  int iVar31;
  long lVar32;
  long lVar33;
  short sVar34;
  short sVar35;
  long unaff_x19;
  long unaff_x20;
  long lVar36;
  ulong unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  uint uVar37;
  long unaff_x25;
  undefined8 *puVar38;
  undefined2 *unaff_x27;
  long *plVar39;
  uint unaff_w28;
  long *unaff_x29;
  uint in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  uint uStack0000000000000020;
  undefined4 *in_stack_00000028;
  long in_stack_00000030;
  ulong in_stack_00000038;
  
  uVar20 = _uStack0000000000000020;
  do {
    sVar24 = 0;
    sVar27 = 0;
    sVar30 = 0;
    sVar34 = 0;
    sVar35 = 0;
    sVar6 = 0;
    while( true ) {
      uVar18 = (uint)in_x9;
      if (((((uVar18 == 0) || (*(short *)(in_stack_00000018 + 0x20) = sVar6, uVar18 == 1)) ||
           (*(short *)(in_stack_00000018 + 0x22) = sVar35, uVar18 < 3)) ||
          ((*(short *)(in_stack_00000018 + 0x24) = sVar34, uVar18 == 3 ||
           (*(short *)(in_stack_00000018 + 0x26) = sVar30, uVar18 < 5)))) ||
         (*(short *)(in_stack_00000018 + 0x28) = sVar27, uVar18 == 5)) goto LAB_07277320;
      *(short *)(in_stack_00000018 + 0x2a) = sVar24;
      while( true ) {
        uVar16 = 0;
        iVar31 = 999999999;
        uVar18 = 0xffffffff;
        do {
          if ((uint)in_x9 <= unaff_w28) goto LAB_07277320;
          sVar6 = unaff_x27[uVar16];
          uVar37 = (uint)uVar16;
          if (iVar31 <= sVar6) {
            uVar37 = uVar18;
          }
          uVar16 = uVar16 + 1;
          if (sVar6 <= iVar31) {
            iVar31 = (int)sVar6;
          }
          uVar18 = uVar37;
        } while (unaff_x22 != uVar16);
        if ((uint)unaff_x23 <= uVar37) goto LAB_07277320;
        lVar29 = (long)(int)uVar37;
        lVar17 = *(long *)(unaff_x19 + 0x78);
        in_stack_00000028[lVar29] = in_stack_00000028[lVar29] + 1;
        if (lVar17 == 0) goto LAB_07277350;
        if (*(uint *)(lVar17 + 0x18) <= uStack0000000000000020) goto LAB_07277320;
        *(short *)(lVar17 + (long)(int)uStack0000000000000020 * 2 + 0x20) = (short)uVar37;
        if ((int)in_w11 <= in_w12) {
          if (*(uint *)(unaff_x24 + 0x18) <= uVar37) goto LAB_07277320;
          lVar17 = *(long *)(unaff_x19 + 0xa0);
          if (lVar17 == 0) goto LAB_07277350;
          lVar29 = *(long *)(unaff_x24 + lVar29 * 8 + 0x20);
          uVar18 = in_w11;
          if (in_w11 <= *(uint *)(lVar17 + 0x18)) {
            uVar18 = *(uint *)(lVar17 + 0x18);
          }
          do {
            if (uVar18 == in_w11) goto LAB_07277320;
            if (lVar29 == 0) goto LAB_07277350;
            sVar6 = *(short *)(lVar17 + (long)(int)in_w11 * 2 + 0x20);
            if (*(uint *)(lVar29 + 0x18) <= (uint)(int)sVar6) goto LAB_07277320;
            in_w11 = in_w11 + 1;
            *(int *)(lVar29 + 0x20 + (long)(int)sVar6 * 4) =
                 *(int *)(lVar29 + 0x20 + (long)(int)sVar6 * 4) + 1;
          } while ((int)in_w11 <= in_w12);
        }
        iVar31 = *(int *)(unaff_x19 + 0xb0);
        in_w11 = in_w12 + 1;
        uStack0000000000000020 = uStack0000000000000020 + 1;
        if (iVar31 <= (int)in_w11) {
          while( true ) {
            uVar16 = 0;
            do {
              if ((*(uint *)(unaff_x20 + 0x18) <= uVar16) || (*(uint *)(unaff_x24 + 0x18) <= uVar16)
                 ) goto LAB_07277320;
              FUN_072773a0(unaff_x29[uVar16],*(undefined8 *)(in_stack_00000030 + uVar16 * 8),
                           in_stack_00000038,0x14);
              uVar16 = uVar16 + 1;
            } while (unaff_x22 != uVar16);
            in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + 1;
            iVar31 = (int)in_stack_00000038;
            if (in_stack_00000010._4_4_ == 4) {
              if (0x4652 < (int)uStack0000000000000020) goto LAB_07277354;
              lVar17 = FUN_04077674(*(undefined8 *)PTR_DAT_09286040,6);
              puVar4 = PTR_DAT_092be0b0;
              puVar3 = PTR_DAT_092869a0;
              if (lVar17 == 0) goto LAB_07277350;
              uVar16 = *(ulong *)(lVar17 + 0x18);
              uVar20 = 0;
              goto LAB_07276d9c;
            }
            unaff_x23 = *(ulong *)(in_stack_00000008 + 0x18);
            uVar14 = unaff_x23 & 0xffffffff;
            uVar16 = unaff_x22;
            puVar21 = in_stack_00000028;
            do {
              if (uVar14 == 0) goto LAB_07277320;
              uVar16 = uVar16 - 1;
              uVar14 = uVar14 - 1;
              *puVar21 = 0;
              uVar19 = 0;
              puVar21 = puVar21 + 1;
            } while (uVar16 != 0);
            do {
              if (0 < iVar31) {
                if (*(uint *)(unaff_x24 + 0x18) <= uVar19) goto LAB_07277320;
                lVar17 = *(long *)(unaff_x24 + uVar19 * 8 + 0x20);
                if (lVar17 == 0) goto LAB_07277350;
                uVar14 = (ulong)*(uint *)(lVar17 + 0x18);
                puVar21 = (undefined4 *)(lVar17 + 0x20);
                uVar16 = in_stack_00000038;
                do {
                  if (uVar14 == 0) goto LAB_07277320;
                  uVar16 = uVar16 - 1;
                  uVar14 = uVar14 - 1;
                  *puVar21 = 0;
                  puVar21 = puVar21 + 1;
                } while (uVar16 != 0);
              }
              uVar19 = uVar19 + 1;
            } while (uVar19 != unaff_x22);
            iVar31 = *(int *)(unaff_x19 + 0xb0);
            if (0 < iVar31) break;
            uStack0000000000000020 = 0;
          }
          if (in_stack_00000018 == 0) goto LAB_07277350;
          in_x9 = *(ulong *)(in_stack_00000018 + 0x18);
          in_w11 = 0;
          uStack0000000000000020 = 0;
          in_x10 = in_x9 & 0xffffffff;
        }
        uVar16 = unaff_x22;
        puVar25 = unaff_x27;
        uVar14 = in_x10;
        in_w12 = in_w11 + 0x31;
        if (iVar31 <= (int)(in_w11 + 0x31)) {
          in_w12 = iVar31 + -1;
        }
        do {
          if (uVar14 == 0) goto LAB_07277320;
          uVar16 = uVar16 - 1;
          *puVar25 = 0;
          puVar25 = puVar25 + 1;
          uVar14 = uVar14 - 1;
        } while (uVar16 != 0);
        if ((uVar20 & 0x100000000) != 0) break;
        if ((int)in_w11 <= in_w12) {
          lVar17 = *(long *)(unaff_x19 + 0xa0);
          if (lVar17 == 0) goto LAB_07277350;
          uVar18 = in_w11;
          uVar37 = in_w11;
          if (in_w11 <= *(uint *)(lVar17 + 0x18)) {
            uVar37 = *(uint *)(lVar17 + 0x18);
          }
          do {
            if (uVar18 == uVar37) goto LAB_07277320;
            lVar29 = 0;
            sVar6 = *(short *)(lVar17 + (long)(int)uVar18 * 2 + 0x20);
            do {
              if (((uint)in_x10 == (uint)lVar29) || (*(uint *)(unaff_x20 + 0x18) <= (uint)lVar29))
              goto LAB_07277320;
              lVar32 = *(long *)(unaff_x25 + lVar29 * 8);
              if (lVar32 == 0) goto LAB_07277350;
              if (*(uint *)(lVar32 + 0x18) <= (uint)(int)sVar6) goto LAB_07277320;
              unaff_x27[lVar29] = *(short *)(lVar32 + (long)sVar6 * 2 + 0x20) + unaff_x27[lVar29];
              lVar29 = lVar29 + 1;
            } while ((uint)unaff_x22 != (uint)lVar29);
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 <= in_w12);
        }
      }
      if (in_w12 < (int)in_w11) break;
      lVar17 = *(long *)(unaff_x19 + 0xa0);
      if (lVar17 == 0) goto LAB_07277350;
      sVar6 = 0;
      sVar35 = 0;
      sVar34 = 0;
      sVar30 = 0;
      sVar27 = 0;
      sVar24 = 0;
      uVar18 = in_w11;
      uVar37 = in_w11;
      if (in_w11 <= *(uint *)(lVar17 + 0x18)) {
        uVar37 = *(uint *)(lVar17 + 0x18);
      }
      do {
        if ((uVar37 == uVar18) || (uVar13 = *(uint *)(unaff_x20 + 0x18), uVar13 == 0))
        goto LAB_07277320;
        lVar29 = *unaff_x29;
        if (lVar29 == 0) goto LAB_07277350;
        sVar2 = *(short *)(lVar17 + (long)(int)uVar18 * 2 + 0x20);
        lVar32 = (long)sVar2;
        if ((*(uint *)(lVar29 + 0x18) <= (uint)(int)sVar2) || (uVar13 == 1)) goto LAB_07277320;
        lVar33 = *(long *)(unaff_x20 + 0x28);
        if (lVar33 == 0) goto LAB_07277350;
        if ((*(uint *)(lVar33 + 0x18) <= (uint)(int)sVar2) || (uVar13 < 3)) goto LAB_07277320;
        lVar26 = *(long *)(unaff_x20 + 0x30);
        if (lVar26 == 0) goto LAB_07277350;
        uVar10 = (uint)sVar2;
        if ((*(uint *)(lVar26 + 0x18) <= uVar10) || (uVar13 == 3)) goto LAB_07277320;
        lVar15 = *(long *)(unaff_x20 + 0x38);
        if (lVar15 == 0) goto LAB_07277350;
        if ((*(uint *)(lVar15 + 0x18) <= uVar10) || (uVar13 < 5)) goto LAB_07277320;
        lVar36 = *(long *)(unaff_x20 + 0x40);
        if (lVar36 == 0) goto LAB_07277350;
        if ((*(uint *)(lVar36 + 0x18) <= uVar10) || (uVar13 == 5)) goto LAB_07277320;
        lVar11 = *(long *)(unaff_x20 + 0x48);
        if (lVar11 == 0) goto LAB_07277350;
        if (*(uint *)(lVar11 + 0x18) <= uVar10) goto LAB_07277320;
        uVar18 = uVar18 + 1;
        sVar6 = *(short *)(lVar29 + lVar32 * 2 + 0x20) + sVar6;
        sVar35 = *(short *)(lVar33 + lVar32 * 2 + 0x20) + sVar35;
        sVar34 = *(short *)(lVar26 + lVar32 * 2 + 0x20) + sVar34;
        sVar30 = *(short *)(lVar15 + lVar32 * 2 + 0x20) + sVar30;
        sVar27 = *(short *)(lVar36 + lVar32 * 2 + 0x20) + sVar27;
        sVar24 = *(short *)(lVar11 + lVar32 * 2 + 0x20) + sVar24;
      } while ((int)uVar18 <= in_w12);
    }
  } while( true );
  while( true ) {
    *(short *)(lVar17 + 0x20 + uVar20 * 2) = (short)uVar20;
    uVar20 = uVar20 + 1;
    if (unaff_x22 == uVar20) break;
LAB_07276d9c:
    if ((uVar16 & 0xffffffff) == uVar20) goto LAB_07277320;
  }
  if (0 < (int)uStack0000000000000020) {
    lVar29 = *(long *)(unaff_x19 + 0x78);
    if (lVar29 == 0) goto LAB_07277350;
    uVar18 = *(uint *)(lVar29 + 0x18);
    uVar20 = 0;
    do {
      if ((uVar20 == uVar18) || (iVar12 = (int)uVar16, iVar12 == 0)) goto LAB_07277320;
      sVar6 = *(short *)(lVar29 + uVar20 * 2 + 0x20);
      if (sVar6 == *(short *)(lVar17 + 0x20)) {
        iVar28 = 0;
      }
      else {
        iVar5 = 1;
        sVar35 = *(short *)(lVar17 + 0x20);
        do {
          iVar28 = iVar5;
          if (iVar12 == iVar28) goto LAB_07277320;
          lVar32 = lVar17 + (long)iVar28 * 2;
          sVar34 = *(short *)(lVar32 + 0x20);
          *(short *)(lVar32 + 0x20) = sVar35;
          iVar5 = iVar28 + 1;
          sVar35 = sVar34;
        } while (sVar6 != sVar34);
      }
      lVar32 = *(long *)(unaff_x19 + 0x80);
      *(short *)(lVar17 + 0x20) = sVar6;
      if (lVar32 == 0) goto LAB_07277350;
      if (*(uint *)(lVar32 + 0x18) <= uVar20) goto LAB_07277320;
      lVar33 = uVar20 * 2;
      uVar20 = uVar20 + 1;
      *(short *)(lVar32 + lVar33 + 0x20) = (short)iVar28;
    } while (uVar20 != uStack0000000000000020);
  }
  lVar17 = FUN_04077674(*(undefined8 *)puVar4,6);
  uVar20 = 0;
  puVar38 = (undefined8 *)(lVar17 + 0x20);
  do {
    uVar7 = FUN_04077674(*(undefined8 *)puVar3,0x102);
    if (lVar17 == 0) goto LAB_07277350;
    if (*(uint *)(lVar17 + 0x18) <= uVar20) goto LAB_07277320;
    *puVar38 = uVar7;
    thunk_FUN_040ec700(puVar38,uVar7);
    uVar20 = uVar20 + 1;
    puVar38 = puVar38 + 1;
  } while (uVar20 != 6);
  uVar20 = 0;
  do {
    lVar29 = unaff_x20 + uVar20 * 8;
    if (iVar31 < 1) {
      uVar9 = 0;
      uVar8 = 0x20;
    }
    else {
      if (*(uint *)(unaff_x20 + 0x18) <= uVar20) goto LAB_07277320;
      lVar32 = *(long *)(lVar29 + 0x20);
      if (lVar32 == 0) goto LAB_07277350;
      uVar9 = 0;
      uVar8 = 0x20;
      puVar22 = (ushort *)(lVar32 + 0x20);
      lVar33 = (long)iVar31;
      do {
        if (*(uint *)(lVar32 + 0x18) <= in_stack_00000000) goto LAB_07277320;
        uVar1 = *puVar22;
        if (uVar9 <= uVar1) {
          uVar9 = uVar1;
        }
        if (uVar1 <= uVar8) {
          uVar8 = uVar1;
        }
        lVar33 = lVar33 + -1;
        puVar22 = puVar22 + 1;
      } while (lVar33 != 0);
      if ((0x14 < uVar9) || (uVar8 == 0)) goto LAB_07277354;
    }
    if ((*(uint *)(lVar17 + 0x18) <= uVar20) || (*(uint *)(unaff_x20 + 0x18) <= uVar20))
    goto LAB_07277320;
    FUN_072779c0(*(undefined8 *)(lVar17 + uVar20 * 8 + 0x20),*(undefined8 *)(lVar29 + 0x20),uVar8,
                 uVar9,in_stack_00000038 & 0xffffffff);
    uVar20 = uVar20 + 1;
  } while (uVar20 != unaff_x22);
  lVar29 = FUN_04077674(*(undefined8 *)PTR_DAT_09287a50,0x10);
  if (lVar29 != 0) {
    uVar18 = *(uint *)(lVar29 + 0x18);
    lVar32 = 0;
    uVar20 = 0;
    do {
      if (uVar20 == uVar18) goto LAB_07277320;
      lVar33 = *(long *)(unaff_x19 + 0x58);
      puVar23 = (undefined1 *)(lVar29 + uVar20 + 0x20);
      *puVar23 = 0;
      if (lVar33 == 0) goto LAB_07277350;
      uVar37 = *(uint *)(lVar33 + 0x18);
      lVar26 = 0;
      do {
        if ((ulong)uVar37 <= (ulong)(lVar32 + lVar26)) goto LAB_07277320;
        if (*(char *)(lVar33 + lVar32 + 0x20 + lVar26) != '\0') {
          *puVar23 = 1;
        }
        lVar26 = lVar26 + 1;
      } while (lVar26 != 0x10);
      uVar20 = uVar20 + 1;
      lVar32 = lVar32 + 0x10;
    } while (uVar20 != 0x10);
    uVar20 = 0;
    do {
      if (*(uint *)(lVar29 + 0x18) <= uVar20) goto LAB_07277320;
      FUN_07276410();
      uVar20 = uVar20 + 1;
    } while (uVar20 != 0x10);
    lVar32 = 0;
    uVar20 = 0;
    do {
      if (*(uint *)(lVar29 + 0x18) <= uVar20) goto LAB_07277320;
      if (*(char *)(lVar29 + uVar20 + 0x20) != '\0') {
        lVar33 = 0;
        do {
          if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_07277350;
          if ((ulong)*(uint *)(*(long *)(unaff_x19 + 0x58) + 0x18) <= (ulong)(lVar32 + lVar33))
          goto LAB_07277320;
          FUN_07276410();
          lVar33 = lVar33 + 1;
        } while (lVar33 != 0x10);
      }
      uVar20 = uVar20 + 1;
      lVar32 = lVar32 + 0x10;
    } while (uVar20 != 0x10);
    FUN_07276410();
    FUN_07276410();
    if (0 < (int)uStack0000000000000020) {
      uVar20 = 0;
      do {
        lVar29 = *(long *)(unaff_x19 + 0x80);
        if (lVar29 == 0) goto LAB_07277350;
        uVar18 = 0xffffffff;
        while( true ) {
          if (*(uint *)(lVar29 + 0x18) <= uVar20) goto LAB_07277320;
          uVar18 = uVar18 + 1;
          if (*(ushort *)(lVar29 + uVar20 * 2 + 0x20) <= uVar18) break;
          FUN_07276410();
          lVar29 = *(long *)(unaff_x19 + 0x80);
          if (lVar29 == 0) goto LAB_07277350;
        }
        FUN_07276410();
        uVar20 = uVar20 + 1;
      } while (uVar20 != uStack0000000000000020);
    }
    uVar18 = 0;
    do {
      if (*(uint *)(unaff_x20 + 0x18) <= uVar18) {
LAB_07277320:
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
      plVar39 = (long *)(unaff_x20 + (ulong)uVar18 * 8 + 0x20);
      lVar29 = *plVar39;
      if (lVar29 == 0) break;
      if (*(int *)(lVar29 + 0x18) == 0) goto LAB_07277320;
      uVar37 = (uint)*(ushort *)(lVar29 + 0x20);
      FUN_07276410();
      if (0 < iVar31) {
        uVar20 = 0;
        do {
          uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
          uVar13 = (uint)uVar7;
          while( true ) {
            if (uVar13 <= uVar18) goto LAB_07277320;
            lVar29 = *plVar39;
            if (lVar29 == 0) goto LAB_07277350;
            if (*(uint *)(lVar29 + 0x18) <= uVar20) goto LAB_07277320;
            if ((int)(uint)*(ushort *)(lVar29 + uVar20 * 2 + 0x20) <= (int)uVar37) break;
            FUN_07276410();
            uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
            uVar37 = uVar37 + 1;
            uVar13 = (uint)uVar7;
          }
          uVar13 = (uint)uVar7;
          while( true ) {
            if (uVar13 <= uVar18) goto LAB_07277320;
            lVar29 = *plVar39;
            if (lVar29 == 0) goto LAB_07277350;
            if (*(uint *)(lVar29 + 0x18) <= uVar20) goto LAB_07277320;
            if ((int)uVar37 <= (int)(uint)*(ushort *)(lVar29 + uVar20 * 2 + 0x20)) break;
            uVar37 = uVar37 - 1;
            FUN_07276410();
            uVar13 = *(uint *)(unaff_x20 + 0x18);
          }
          FUN_07276410();
          uVar20 = uVar20 + 1;
        } while (uVar20 != in_stack_00000038);
      }
      uVar18 = uVar18 + 1;
      if (uVar18 == (uint)unaff_x22) {
        iVar31 = *(int *)(unaff_x19 + 0xb0);
        if (iVar31 < 1) {
          uVar18 = 0;
        }
        else {
          uVar37 = 0;
          uVar18 = 0;
          do {
            iVar12 = uVar37 + 0x31;
            if (iVar31 <= (int)(uVar37 + 0x31)) {
              iVar12 = iVar31 + -1;
            }
            if ((int)uVar37 <= iVar12) {
              do {
                lVar29 = *(long *)(unaff_x19 + 0x78);
                if (lVar29 == 0) goto LAB_07277350;
                if (*(uint *)(lVar29 + 0x18) <= uVar18) goto LAB_07277320;
                uVar9 = *(ushort *)(lVar29 + (long)(int)uVar18 * 2 + 0x20);
                if (*(uint *)(unaff_x20 + 0x18) <= (uint)uVar9) goto LAB_07277320;
                lVar29 = *(long *)(unaff_x19 + 0xa0);
                if (lVar29 == 0) goto LAB_07277350;
                if (*(uint *)(lVar29 + 0x18) <= uVar37) goto LAB_07277320;
                lVar32 = *(long *)(unaff_x20 + (ulong)uVar9 * 8 + 0x20);
                if (lVar32 == 0) goto LAB_07277350;
                uVar13 = (uint)*(short *)(lVar29 + (long)(int)uVar37 * 2 + 0x20);
                if ((*(uint *)(lVar32 + 0x18) <= uVar13) ||
                   (*(uint *)(lVar17 + 0x18) <= (uint)uVar9)) goto LAB_07277320;
                lVar29 = *(long *)(lVar17 + (ulong)uVar9 * 8 + 0x20);
                if (lVar29 == 0) goto LAB_07277350;
                if (*(uint *)(lVar29 + 0x18) <= uVar13) goto LAB_07277320;
                FUN_07276410();
                uVar37 = uVar37 + 1;
              } while ((int)uVar37 <= iVar12);
              iVar31 = *(int *)(unaff_x19 + 0xb0);
            }
            uVar37 = iVar12 + 1;
            uVar18 = uVar18 + 1;
          } while ((int)uVar37 < iVar31);
        }
        if (uVar18 == uStack0000000000000020) {
          return;
        }
LAB_07277354:
                    /* WARNING: Subroutine does not return */
        FUN_07277358();
      }
    } while( true );
  }
LAB_07277350:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


