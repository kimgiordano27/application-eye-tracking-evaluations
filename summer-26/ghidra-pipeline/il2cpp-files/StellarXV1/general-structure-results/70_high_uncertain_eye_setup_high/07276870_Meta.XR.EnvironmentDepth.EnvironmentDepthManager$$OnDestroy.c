/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$OnDestroy
ENTRY_POINT: 07276870
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__OnDestroy(undefined8 param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  short sVar6;
  undefined *puVar7;
  undefined *puVar8;
  short sVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ushort uVar14;
  ushort uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined4 *puVar26;
  ushort *puVar27;
  uint uVar28;
  int iVar29;
  undefined1 *puVar30;
  short sVar31;
  undefined2 *puVar32;
  long lVar33;
  short sVar34;
  int iVar35;
  ulong uVar36;
  long lVar37;
  short sVar38;
  int iVar39;
  short sVar40;
  short sVar41;
  long unaff_x19;
  long unaff_x20;
  long lVar42;
  uint uVar43;
  ulong unaff_x22;
  uint uVar44;
  undefined8 *unaff_x23;
  long unaff_x24;
  uint uVar45;
  undefined8 *unaff_x25;
  undefined8 *puVar46;
  ulong unaff_x26;
  undefined8 *unaff_x27;
  long *plVar47;
  uint unaff_w28;
  long *unaff_x29;
  long lVar48;
  ulong in_stack_00000020;
  ulong in_stack_00000038;
  
  while (uVar10 = FUN_04077674(param_1,0x102), unaff_x24 != 0) {
    if (*(uint *)(unaff_x24 + 0x18) <= unaff_x26) goto LAB_07277320;
    *unaff_x23 = uVar10;
    thunk_FUN_040ec700(unaff_x23,uVar10);
    unaff_x26 = unaff_x26 + 1;
    if (unaff_x26 == 6) {
      lVar11 = FUN_04077674(*unaff_x27,6);
      lVar12 = FUN_04077674(*unaff_x25,6);
      if (lVar11 != 0) {
        iVar19 = 0;
        puVar1 = (undefined4 *)(lVar11 + 0x20);
        uVar43 = (uint)unaff_x22;
        puVar2 = (undefined2 *)(lVar12 + 0x20);
        goto LAB_072768f8;
      }
      break;
    }
    param_1 = *unaff_x27;
    unaff_x23 = unaff_x23 + 1;
  }
  goto LAB_07277350;
LAB_072768f8:
  do {
    uVar13 = *(ulong *)(lVar11 + 0x18);
    uVar21 = uVar13 & 0xffffffff;
    uVar24 = unaff_x22;
    puVar26 = puVar1;
    do {
      if (uVar21 == 0) goto LAB_07277320;
      uVar24 = uVar24 - 1;
      uVar21 = uVar21 - 1;
      *puVar26 = 0;
      uVar23 = 0;
      puVar26 = puVar26 + 1;
    } while (uVar24 != 0);
    do {
      iVar29 = (int)in_stack_00000038;
      if (0 < iVar29) {
        if (*(uint *)(unaff_x24 + 0x18) <= uVar23) goto LAB_07277320;
        lVar25 = *(long *)(unaff_x24 + uVar23 * 8 + 0x20);
        if (lVar25 == 0) goto LAB_07277350;
        uVar21 = (ulong)*(uint *)(lVar25 + 0x18);
        puVar26 = (undefined4 *)(lVar25 + 0x20);
        uVar24 = in_stack_00000038;
        do {
          if (uVar21 == 0) goto LAB_07277320;
          uVar24 = uVar24 - 1;
          uVar21 = uVar21 - 1;
          *puVar26 = 0;
          puVar26 = puVar26 + 1;
        } while (uVar24 != 0);
      }
      uVar23 = uVar23 + 1;
    } while (uVar23 != unaff_x22);
    iVar39 = *(int *)(unaff_x19 + 0xb0);
    if (iVar39 < 1) {
      uVar44 = 0;
    }
    else {
      if (lVar12 == 0) goto LAB_07277350;
      uVar24 = *(ulong *)(lVar12 + 0x18);
      uVar28 = 0;
      uVar44 = 0;
      uVar21 = uVar24 & 0xffffffff;
      do {
        uVar23 = unaff_x22;
        puVar32 = puVar2;
        uVar36 = uVar21;
        iVar35 = uVar28 + 0x31;
        if (iVar39 <= (int)(uVar28 + 0x31)) {
          iVar35 = iVar39 + -1;
        }
        do {
          if (uVar36 == 0) goto LAB_07277320;
          uVar23 = uVar23 - 1;
          *puVar32 = 0;
          puVar32 = puVar32 + 1;
          uVar36 = uVar36 - 1;
        } while (uVar23 != 0);
        uVar45 = (uint)uVar24;
        if ((in_stack_00000020 & 0x100000000) == 0) {
          if ((int)uVar28 <= iVar35) {
            lVar25 = *(long *)(unaff_x19 + 0xa0);
            if (lVar25 == 0) goto LAB_07277350;
            uVar20 = uVar28;
            uVar3 = uVar28;
            if (uVar28 <= *(uint *)(lVar25 + 0x18)) {
              uVar3 = *(uint *)(lVar25 + 0x18);
            }
            do {
              if (uVar20 == uVar3) goto LAB_07277320;
              lVar37 = 0;
              sVar9 = *(short *)(lVar25 + (long)(int)uVar20 * 2 + 0x20);
              do {
                if ((uVar45 == (uint)lVar37) || (*(uint *)(unaff_x20 + 0x18) <= (uint)lVar37))
                goto LAB_07277320;
                lVar33 = *(long *)(unaff_x20 + 0x20 + lVar37 * 8);
                if (lVar33 == 0) goto LAB_07277350;
                if (*(uint *)(lVar33 + 0x18) <= (uint)(int)sVar9) goto LAB_07277320;
                puVar2[lVar37] = *(short *)(lVar33 + (long)sVar9 * 2 + 0x20) + puVar2[lVar37];
                lVar37 = lVar37 + 1;
              } while (uVar43 != (uint)lVar37);
              uVar20 = uVar20 + 1;
            } while ((int)uVar20 <= iVar35);
          }
        }
        else {
          if (iVar35 < (int)uVar28) {
            sVar31 = 0;
            sVar34 = 0;
            sVar38 = 0;
            sVar40 = 0;
            sVar41 = 0;
            sVar9 = 0;
          }
          else {
            lVar25 = *(long *)(unaff_x19 + 0xa0);
            if (lVar25 == 0) goto LAB_07277350;
            sVar9 = 0;
            sVar41 = 0;
            sVar40 = 0;
            sVar38 = 0;
            sVar34 = 0;
            sVar31 = 0;
            uVar20 = uVar28;
            uVar3 = uVar28;
            if (uVar28 <= *(uint *)(lVar25 + 0x18)) {
              uVar3 = *(uint *)(lVar25 + 0x18);
            }
            do {
              if ((uVar3 == uVar20) || (uVar4 = *(uint *)(unaff_x20 + 0x18), uVar4 == 0))
              goto LAB_07277320;
              lVar37 = *unaff_x29;
              if (lVar37 == 0) goto LAB_07277350;
              sVar6 = *(short *)(lVar25 + (long)(int)uVar20 * 2 + 0x20);
              lVar33 = (long)sVar6;
              if ((*(uint *)(lVar37 + 0x18) <= (uint)(int)sVar6) || (uVar4 == 1)) goto LAB_07277320;
              lVar18 = *(long *)(unaff_x20 + 0x28);
              if (lVar18 == 0) goto LAB_07277350;
              if ((*(uint *)(lVar18 + 0x18) <= (uint)(int)sVar6) || (uVar4 < 3)) goto LAB_07277320;
              lVar48 = *(long *)(unaff_x20 + 0x30);
              if (lVar48 == 0) goto LAB_07277350;
              uVar16 = (uint)sVar6;
              if ((*(uint *)(lVar48 + 0x18) <= uVar16) || (uVar4 == 3)) goto LAB_07277320;
              lVar22 = *(long *)(unaff_x20 + 0x38);
              if (lVar22 == 0) goto LAB_07277350;
              if ((*(uint *)(lVar22 + 0x18) <= uVar16) || (uVar4 < 5)) goto LAB_07277320;
              lVar42 = *(long *)(unaff_x20 + 0x40);
              if (lVar42 == 0) goto LAB_07277350;
              if ((*(uint *)(lVar42 + 0x18) <= uVar16) || (uVar4 == 5)) goto LAB_07277320;
              lVar17 = *(long *)(unaff_x20 + 0x48);
              if (lVar17 == 0) goto LAB_07277350;
              if (*(uint *)(lVar17 + 0x18) <= uVar16) goto LAB_07277320;
              uVar20 = uVar20 + 1;
              sVar9 = *(short *)(lVar37 + lVar33 * 2 + 0x20) + sVar9;
              sVar41 = *(short *)(lVar18 + lVar33 * 2 + 0x20) + sVar41;
              sVar40 = *(short *)(lVar48 + lVar33 * 2 + 0x20) + sVar40;
              sVar38 = *(short *)(lVar22 + lVar33 * 2 + 0x20) + sVar38;
              sVar34 = *(short *)(lVar42 + lVar33 * 2 + 0x20) + sVar34;
              sVar31 = *(short *)(lVar17 + lVar33 * 2 + 0x20) + sVar31;
            } while ((int)uVar20 <= iVar35);
          }
          if (((((uVar45 == 0) || (*(short *)(lVar12 + 0x20) = sVar9, uVar45 == 1)) ||
               (*(short *)(lVar12 + 0x22) = sVar41, uVar45 < 3)) ||
              ((*(short *)(lVar12 + 0x24) = sVar40, uVar45 == 3 ||
               (*(short *)(lVar12 + 0x26) = sVar38, uVar45 < 5)))) ||
             (*(short *)(lVar12 + 0x28) = sVar34, uVar45 == 5)) goto LAB_07277320;
          *(short *)(lVar12 + 0x2a) = sVar31;
        }
        uVar23 = 0;
        iVar39 = 999999999;
        uVar20 = 0xffffffff;
        do {
          if (uVar45 <= uVar43 - 1) goto LAB_07277320;
          sVar9 = puVar2[uVar23];
          uVar3 = (uint)uVar23;
          if (iVar39 <= sVar9) {
            uVar3 = uVar20;
          }
          uVar23 = uVar23 + 1;
          if (sVar9 <= iVar39) {
            iVar39 = (int)sVar9;
          }
          uVar20 = uVar3;
        } while (unaff_x22 != uVar23);
        if ((uint)uVar13 <= uVar3) goto LAB_07277320;
        lVar37 = (long)(int)uVar3;
        lVar25 = *(long *)(unaff_x19 + 0x78);
        puVar1[lVar37] = puVar1[lVar37] + 1;
        if (lVar25 == 0) goto LAB_07277350;
        if (*(uint *)(lVar25 + 0x18) <= uVar44) goto LAB_07277320;
        *(short *)(lVar25 + (long)(int)uVar44 * 2 + 0x20) = (short)uVar3;
        if ((int)uVar28 <= iVar35) {
          if (*(uint *)(unaff_x24 + 0x18) <= uVar3) goto LAB_07277320;
          lVar25 = *(long *)(unaff_x19 + 0xa0);
          if (lVar25 == 0) goto LAB_07277350;
          lVar37 = *(long *)(unaff_x24 + lVar37 * 8 + 0x20);
          uVar45 = uVar28;
          if (uVar28 <= *(uint *)(lVar25 + 0x18)) {
            uVar45 = *(uint *)(lVar25 + 0x18);
          }
          do {
            if (uVar45 == uVar28) goto LAB_07277320;
            if (lVar37 == 0) goto LAB_07277350;
            sVar9 = *(short *)(lVar25 + (long)(int)uVar28 * 2 + 0x20);
            if (*(uint *)(lVar37 + 0x18) <= (uint)(int)sVar9) goto LAB_07277320;
            uVar28 = uVar28 + 1;
            *(int *)(lVar37 + 0x20 + (long)(int)sVar9 * 4) =
                 *(int *)(lVar37 + 0x20 + (long)(int)sVar9 * 4) + 1;
          } while ((int)uVar28 <= iVar35);
        }
        iVar39 = *(int *)(unaff_x19 + 0xb0);
        uVar28 = iVar35 + 1;
        uVar44 = uVar44 + 1;
      } while ((int)uVar28 < iVar39);
    }
    uVar24 = 0;
    do {
      if ((*(uint *)(unaff_x20 + 0x18) <= uVar24) || (*(uint *)(unaff_x24 + 0x18) <= uVar24))
      goto LAB_07277320;
      FUN_072773a0(unaff_x29[uVar24],*(undefined8 *)(unaff_x24 + 0x20 + uVar24 * 8),
                   in_stack_00000038,0x14);
      uVar24 = uVar24 + 1;
    } while (unaff_x22 != uVar24);
    iVar19 = iVar19 + 1;
  } while (iVar19 != 4);
  if (0x4652 < (int)uVar44) {
LAB_07277354:
                    /* WARNING: Subroutine does not return */
    FUN_07277358();
  }
  lVar11 = FUN_04077674(*(undefined8 *)PTR_DAT_09286040,6);
  puVar8 = PTR_DAT_092be0b0;
  puVar7 = PTR_DAT_092869a0;
  if (lVar11 != 0) {
    uVar13 = *(ulong *)(lVar11 + 0x18);
    uVar24 = 0;
    do {
      if ((uVar13 & 0xffffffff) == uVar24) goto LAB_07277320;
      *(short *)(lVar11 + 0x20 + uVar24 * 2) = (short)uVar24;
      uVar24 = uVar24 + 1;
    } while (unaff_x22 != uVar24);
    if (0 < (int)uVar44) {
      lVar12 = *(long *)(unaff_x19 + 0x78);
      if (lVar12 == 0) goto LAB_07277350;
      uVar28 = *(uint *)(lVar12 + 0x18);
      uVar24 = 0;
      do {
        if ((uVar24 == uVar28) || (iVar19 = (int)uVar13, iVar19 == 0)) goto LAB_07277320;
        sVar9 = *(short *)(lVar12 + uVar24 * 2 + 0x20);
        if (sVar9 == *(short *)(lVar11 + 0x20)) {
          iVar35 = 0;
        }
        else {
          iVar39 = 1;
          sVar41 = *(short *)(lVar11 + 0x20);
          do {
            iVar35 = iVar39;
            if (iVar19 == iVar35) goto LAB_07277320;
            lVar25 = lVar11 + (long)iVar35 * 2;
            sVar40 = *(short *)(lVar25 + 0x20);
            *(short *)(lVar25 + 0x20) = sVar41;
            iVar39 = iVar35 + 1;
            sVar41 = sVar40;
          } while (sVar9 != sVar40);
        }
        lVar25 = *(long *)(unaff_x19 + 0x80);
        *(short *)(lVar11 + 0x20) = sVar9;
        if (lVar25 == 0) goto LAB_07277350;
        if (*(uint *)(lVar25 + 0x18) <= uVar24) goto LAB_07277320;
        lVar37 = uVar24 * 2;
        uVar24 = uVar24 + 1;
        *(short *)(lVar25 + lVar37 + 0x20) = (short)iVar35;
      } while (uVar24 != uVar44);
    }
    lVar11 = FUN_04077674(*(undefined8 *)puVar8,6);
    uVar24 = 0;
    puVar46 = (undefined8 *)(lVar11 + 0x20);
    do {
      uVar10 = FUN_04077674(*(undefined8 *)puVar7,0x102);
      if (lVar11 == 0) goto LAB_07277350;
      if (*(uint *)(lVar11 + 0x18) <= uVar24) goto LAB_07277320;
      *puVar46 = uVar10;
      thunk_FUN_040ec700(puVar46,uVar10);
      uVar24 = uVar24 + 1;
      puVar46 = puVar46 + 1;
    } while (uVar24 != 6);
    uVar24 = 0;
    do {
      lVar12 = unaff_x20 + uVar24 * 8;
      if (iVar29 < 1) {
        uVar15 = 0;
        uVar14 = 0x20;
      }
      else {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar24) goto LAB_07277320;
        lVar25 = *(long *)(lVar12 + 0x20);
        if (lVar25 == 0) goto LAB_07277350;
        uVar15 = 0;
        uVar14 = 0x20;
        puVar27 = (ushort *)(lVar25 + 0x20);
        lVar37 = (long)iVar29;
        do {
          if (*(uint *)(lVar25 + 0x18) <= unaff_w28) goto LAB_07277320;
          uVar5 = *puVar27;
          if (uVar15 <= uVar5) {
            uVar15 = uVar5;
          }
          if (uVar5 <= uVar14) {
            uVar14 = uVar5;
          }
          lVar37 = lVar37 + -1;
          puVar27 = puVar27 + 1;
        } while (lVar37 != 0);
        if ((0x14 < uVar15) || (uVar14 == 0)) goto LAB_07277354;
      }
      if ((*(uint *)(lVar11 + 0x18) <= uVar24) || (*(uint *)(unaff_x20 + 0x18) <= uVar24))
      goto LAB_07277320;
      FUN_072779c0(*(undefined8 *)(lVar11 + uVar24 * 8 + 0x20),*(undefined8 *)(lVar12 + 0x20),uVar14
                   ,uVar15,in_stack_00000038 & 0xffffffff);
      uVar24 = uVar24 + 1;
    } while (uVar24 != unaff_x22);
    lVar12 = FUN_04077674(*(undefined8 *)PTR_DAT_09287a50,0x10);
    if (lVar12 != 0) {
      uVar28 = *(uint *)(lVar12 + 0x18);
      lVar25 = 0;
      uVar24 = 0;
      do {
        if (uVar24 == uVar28) goto LAB_07277320;
        lVar37 = *(long *)(unaff_x19 + 0x58);
        puVar30 = (undefined1 *)(lVar12 + uVar24 + 0x20);
        *puVar30 = 0;
        if (lVar37 == 0) goto LAB_07277350;
        uVar45 = *(uint *)(lVar37 + 0x18);
        lVar33 = 0;
        do {
          if ((ulong)uVar45 <= (ulong)(lVar25 + lVar33)) goto LAB_07277320;
          if (*(char *)(lVar37 + lVar25 + 0x20 + lVar33) != '\0') {
            *puVar30 = 1;
          }
          lVar33 = lVar33 + 1;
        } while (lVar33 != 0x10);
        uVar24 = uVar24 + 1;
        lVar25 = lVar25 + 0x10;
      } while (uVar24 != 0x10);
      uVar24 = 0;
      do {
        if (*(uint *)(lVar12 + 0x18) <= uVar24) goto LAB_07277320;
        FUN_07276410();
        uVar24 = uVar24 + 1;
      } while (uVar24 != 0x10);
      lVar25 = 0;
      uVar24 = 0;
      do {
        if (*(uint *)(lVar12 + 0x18) <= uVar24) goto LAB_07277320;
        if (*(char *)(lVar12 + uVar24 + 0x20) != '\0') {
          lVar37 = 0;
          do {
            if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_07277350;
            if ((ulong)*(uint *)(*(long *)(unaff_x19 + 0x58) + 0x18) <= (ulong)(lVar25 + lVar37))
            goto LAB_07277320;
            FUN_07276410();
            lVar37 = lVar37 + 1;
          } while (lVar37 != 0x10);
        }
        uVar24 = uVar24 + 1;
        lVar25 = lVar25 + 0x10;
      } while (uVar24 != 0x10);
      FUN_07276410();
      FUN_07276410();
      if (0 < (int)uVar44) {
        uVar24 = 0;
        do {
          lVar12 = *(long *)(unaff_x19 + 0x80);
          if (lVar12 == 0) goto LAB_07277350;
          uVar28 = 0xffffffff;
          while( true ) {
            if (*(uint *)(lVar12 + 0x18) <= uVar24) goto LAB_07277320;
            uVar28 = uVar28 + 1;
            if (*(ushort *)(lVar12 + uVar24 * 2 + 0x20) <= uVar28) break;
            FUN_07276410();
            lVar12 = *(long *)(unaff_x19 + 0x80);
            if (lVar12 == 0) goto LAB_07277350;
          }
          FUN_07276410();
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar44);
      }
      uVar28 = 0;
      do {
        if (*(uint *)(unaff_x20 + 0x18) <= uVar28) {
LAB_07277320:
                    /* WARNING: Subroutine does not return */
          FUN_04077838();
        }
        plVar47 = (long *)(unaff_x20 + (ulong)uVar28 * 8 + 0x20);
        lVar12 = *plVar47;
        if (lVar12 == 0) goto LAB_07277350;
        if (*(int *)(lVar12 + 0x18) == 0) goto LAB_07277320;
        uVar45 = (uint)*(ushort *)(lVar12 + 0x20);
        FUN_07276410();
        if (0 < iVar29) {
          uVar24 = 0;
          do {
            uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
            uVar20 = (uint)uVar10;
            while( true ) {
              if (uVar20 <= uVar28) goto LAB_07277320;
              lVar12 = *plVar47;
              if (lVar12 == 0) goto LAB_07277350;
              if (*(uint *)(lVar12 + 0x18) <= uVar24) goto LAB_07277320;
              if ((int)(uint)*(ushort *)(lVar12 + uVar24 * 2 + 0x20) <= (int)uVar45) break;
              FUN_07276410();
              uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
              uVar45 = uVar45 + 1;
              uVar20 = (uint)uVar10;
            }
            uVar20 = (uint)uVar10;
            while( true ) {
              if (uVar20 <= uVar28) goto LAB_07277320;
              lVar12 = *plVar47;
              if (lVar12 == 0) goto LAB_07277350;
              if (*(uint *)(lVar12 + 0x18) <= uVar24) goto LAB_07277320;
              if ((int)uVar45 <= (int)(uint)*(ushort *)(lVar12 + uVar24 * 2 + 0x20)) break;
              uVar45 = uVar45 - 1;
              FUN_07276410();
              uVar20 = *(uint *)(unaff_x20 + 0x18);
            }
            FUN_07276410();
            uVar24 = uVar24 + 1;
          } while (uVar24 != in_stack_00000038);
        }
        uVar28 = uVar28 + 1;
      } while (uVar28 != uVar43);
      iVar19 = *(int *)(unaff_x19 + 0xb0);
      if (iVar19 < 1) {
        uVar43 = 0;
      }
      else {
        uVar28 = 0;
        uVar43 = 0;
        do {
          iVar29 = uVar28 + 0x31;
          if (iVar19 <= (int)(uVar28 + 0x31)) {
            iVar29 = iVar19 + -1;
          }
          if ((int)uVar28 <= iVar29) {
            do {
              lVar12 = *(long *)(unaff_x19 + 0x78);
              if (lVar12 == 0) goto LAB_07277350;
              if (*(uint *)(lVar12 + 0x18) <= uVar43) goto LAB_07277320;
              uVar15 = *(ushort *)(lVar12 + (long)(int)uVar43 * 2 + 0x20);
              if (*(uint *)(unaff_x20 + 0x18) <= (uint)uVar15) goto LAB_07277320;
              lVar12 = *(long *)(unaff_x19 + 0xa0);
              if (lVar12 == 0) goto LAB_07277350;
              if (*(uint *)(lVar12 + 0x18) <= uVar28) goto LAB_07277320;
              lVar25 = *(long *)(unaff_x20 + (ulong)uVar15 * 8 + 0x20);
              if (lVar25 == 0) goto LAB_07277350;
              uVar45 = (uint)*(short *)(lVar12 + (long)(int)uVar28 * 2 + 0x20);
              if ((*(uint *)(lVar25 + 0x18) <= uVar45) || (*(uint *)(lVar11 + 0x18) <= (uint)uVar15)
                 ) goto LAB_07277320;
              lVar12 = *(long *)(lVar11 + (ulong)uVar15 * 8 + 0x20);
              if (lVar12 == 0) goto LAB_07277350;
              if (*(uint *)(lVar12 + 0x18) <= uVar45) goto LAB_07277320;
              FUN_07276410();
              uVar28 = uVar28 + 1;
            } while ((int)uVar28 <= iVar29);
            iVar19 = *(int *)(unaff_x19 + 0xb0);
          }
          uVar28 = iVar29 + 1;
          uVar43 = uVar43 + 1;
        } while ((int)uVar28 < iVar19);
      }
      if (uVar43 == uVar44) {
        return;
      }
      goto LAB_07277354;
    }
  }
LAB_07277350:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


