/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$OnDisable
ENTRY_POINT: 07276764
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


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__OnDisable
               (undefined8 param_1,undefined8 param_2,ulong param_3)

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
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined2 uVar13;
  ushort uVar14;
  int iVar15;
  ushort uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int in_w8;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong in_x9;
  int in_w10;
  long lVar26;
  undefined4 *puVar27;
  ushort *puVar28;
  uint uVar29;
  uint uVar30;
  uint in_w12;
  undefined1 *puVar31;
  short sVar32;
  undefined2 *puVar33;
  short sVar34;
  int iVar35;
  long lVar36;
  ulong uVar37;
  long lVar38;
  short sVar39;
  int iVar40;
  short sVar41;
  uint in_w16;
  short sVar42;
  ulong uVar43;
  long unaff_x19;
  long unaff_x20;
  long lVar44;
  uint uVar45;
  ulong unaff_x22;
  undefined8 *puVar46;
  undefined8 *unaff_x24;
  uint uVar47;
  undefined8 *unaff_x25;
  ulong uVar48;
  undefined8 *unaff_x27;
  long *plVar49;
  long unaff_x28;
  long *unaff_x29;
  long lVar50;
  ulong in_stack_00000020;
  
  while( true ) {
    uVar29 = in_w16 - 1;
    uVar48 = in_x9;
    while( true ) {
      in_x9 = uVar48 - 1;
      uVar45 = (uint)unaff_x22;
      if ((((in_x9 != 0) && (uVar48 != unaff_x22)) && ((int)in_w12 < (int)uVar29)) &&
         ((uVar45 - (int)uVar48 & 0x80000001) == 1)) {
        lVar36 = *(long *)(unaff_x19 + 0xb8);
        if (lVar36 == 0) goto LAB_07277350;
        if (*(uint *)(lVar36 + 0x18) <= uVar29) goto LAB_07277320;
        lVar10 = (long)(int)uVar29;
        uVar29 = uVar29 - 1;
        in_w10 = in_w10 - *(int *)(lVar36 + lVar10 * 4 + 0x20);
      }
      iVar15 = (int)param_3;
      if (0 < iVar15) {
        lVar36 = unaff_x20 + in_x9 * 8;
        uVar30 = *(uint *)(unaff_x20 + 0x18);
        uVar43 = 0;
        do {
          if (((long)uVar43 < (long)(int)in_w12) || ((long)(int)uVar29 < (long)uVar43)) {
            if (uVar30 <= in_x9) goto LAB_07277320;
            lVar10 = *(long *)(lVar36 + 0x20);
            if (lVar10 == 0) goto LAB_07277350;
            if (*(uint *)(lVar10 + 0x18) <= uVar43) goto LAB_07277320;
            uVar13 = 0xf;
          }
          else {
            if (uVar30 <= in_x9) goto LAB_07277320;
            lVar10 = *(long *)(lVar36 + 0x20);
            if (lVar10 == 0) goto LAB_07277350;
            if (*(uint *)(lVar10 + 0x18) <= uVar43) goto LAB_07277320;
            uVar13 = 0;
          }
          lVar12 = uVar43 * 2;
          uVar43 = uVar43 + 1;
          *(undefined2 *)(lVar10 + lVar12 + 0x20) = uVar13;
        } while (param_3 != uVar43);
      }
      in_w12 = uVar29 + 1;
      in_w8 = in_w8 - in_w10;
      if ((long)uVar48 < 2) {
        lVar36 = FUN_04077674(*unaff_x24,6);
        uVar48 = 0;
        puVar46 = (undefined8 *)(lVar36 + 0x20);
        goto LAB_0727686c;
      }
      iVar15 = 0;
      if ((int)in_x9 != 0) {
        iVar15 = in_w8 / (int)in_x9;
      }
      if (0 < iVar15 && (int)uVar29 < (int)(uint)unaff_x28) break;
      in_w10 = 0;
      uVar48 = in_x9;
    }
    lVar36 = *(long *)(unaff_x19 + 0xb8);
    if (lVar36 == 0) break;
    lVar10 = (long)(int)uVar29;
    in_w10 = 0;
    in_w16 = in_w12;
    do {
      if (*(uint *)(lVar36 + 0x18) <= in_w16) goto LAB_07277320;
      in_w16 = in_w16 + 1;
      in_w10 = *(int *)(lVar36 + 0x24 + lVar10 * 4) + in_w10;
    } while ((in_w10 < iVar15) && (lVar10 = lVar10 + 1, lVar10 < unaff_x28));
  }
  goto LAB_07277350;
  while( true ) {
    if (*(uint *)(lVar36 + 0x18) <= uVar48) goto LAB_07277320;
    *puVar46 = uVar11;
    thunk_FUN_040ec700(puVar46,uVar11);
    uVar48 = uVar48 + 1;
    puVar46 = puVar46 + 1;
    if (uVar48 == 6) break;
LAB_0727686c:
    uVar11 = FUN_04077674(*unaff_x27,0x102);
    if (lVar36 == 0) goto LAB_07277350;
  }
  lVar10 = FUN_04077674(*unaff_x27,6);
  lVar12 = FUN_04077674(*unaff_x25,6);
  if (lVar10 != 0) {
    iVar21 = 0;
    puVar1 = (undefined4 *)(lVar10 + 0x20);
    puVar2 = (undefined2 *)(lVar12 + 0x20);
    do {
      uVar43 = *(ulong *)(lVar10 + 0x18);
      uVar23 = uVar43 & 0xffffffff;
      uVar48 = unaff_x22;
      puVar27 = puVar1;
      do {
        if (uVar23 == 0) goto LAB_07277320;
        uVar48 = uVar48 - 1;
        uVar23 = uVar23 - 1;
        *puVar27 = 0;
        uVar25 = 0;
        puVar27 = puVar27 + 1;
      } while (uVar48 != 0);
      do {
        if (0 < iVar15) {
          if (*(uint *)(lVar36 + 0x18) <= uVar25) goto LAB_07277320;
          lVar26 = *(long *)(lVar36 + uVar25 * 8 + 0x20);
          if (lVar26 == 0) goto LAB_07277350;
          uVar23 = (ulong)*(uint *)(lVar26 + 0x18);
          puVar27 = (undefined4 *)(lVar26 + 0x20);
          uVar48 = param_3;
          do {
            if (uVar23 == 0) goto LAB_07277320;
            uVar48 = uVar48 - 1;
            uVar23 = uVar23 - 1;
            *puVar27 = 0;
            puVar27 = puVar27 + 1;
          } while (uVar48 != 0);
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 != unaff_x22);
      iVar40 = *(int *)(unaff_x19 + 0xb0);
      if (iVar40 < 1) {
        uVar29 = 0;
      }
      else {
        if (lVar12 == 0) goto LAB_07277350;
        uVar48 = *(ulong *)(lVar12 + 0x18);
        uVar30 = 0;
        uVar29 = 0;
        uVar23 = uVar48 & 0xffffffff;
        do {
          uVar25 = unaff_x22;
          puVar33 = puVar2;
          uVar37 = uVar23;
          iVar35 = uVar30 + 0x31;
          if (iVar40 <= (int)(uVar30 + 0x31)) {
            iVar35 = iVar40 + -1;
          }
          do {
            if (uVar37 == 0) goto LAB_07277320;
            uVar25 = uVar25 - 1;
            *puVar33 = 0;
            puVar33 = puVar33 + 1;
            uVar37 = uVar37 - 1;
          } while (uVar25 != 0);
          uVar47 = (uint)uVar48;
          if ((in_stack_00000020 & 0x100000000) == 0) {
            if ((int)uVar30 <= iVar35) {
              lVar26 = *(long *)(unaff_x19 + 0xa0);
              if (lVar26 == 0) goto LAB_07277350;
              uVar22 = uVar30;
              uVar3 = uVar30;
              if (uVar30 <= *(uint *)(lVar26 + 0x18)) {
                uVar3 = *(uint *)(lVar26 + 0x18);
              }
              do {
                if (uVar22 == uVar3) goto LAB_07277320;
                lVar38 = 0;
                sVar9 = *(short *)(lVar26 + (long)(int)uVar22 * 2 + 0x20);
                do {
                  if ((uVar47 == (uint)lVar38) || (*(uint *)(unaff_x20 + 0x18) <= (uint)lVar38))
                  goto LAB_07277320;
                  lVar18 = *(long *)(unaff_x20 + 0x20 + lVar38 * 8);
                  if (lVar18 == 0) goto LAB_07277350;
                  if (*(uint *)(lVar18 + 0x18) <= (uint)(int)sVar9) goto LAB_07277320;
                  puVar2[lVar38] = *(short *)(lVar18 + (long)sVar9 * 2 + 0x20) + puVar2[lVar38];
                  lVar38 = lVar38 + 1;
                } while (uVar45 != (uint)lVar38);
                uVar22 = uVar22 + 1;
              } while ((int)uVar22 <= iVar35);
            }
          }
          else {
            if (iVar35 < (int)uVar30) {
              sVar32 = 0;
              sVar34 = 0;
              sVar39 = 0;
              sVar41 = 0;
              sVar42 = 0;
              sVar9 = 0;
            }
            else {
              lVar26 = *(long *)(unaff_x19 + 0xa0);
              if (lVar26 == 0) goto LAB_07277350;
              sVar9 = 0;
              sVar42 = 0;
              sVar41 = 0;
              sVar39 = 0;
              sVar34 = 0;
              sVar32 = 0;
              uVar22 = uVar30;
              uVar3 = uVar30;
              if (uVar30 <= *(uint *)(lVar26 + 0x18)) {
                uVar3 = *(uint *)(lVar26 + 0x18);
              }
              do {
                if ((uVar3 == uVar22) || (uVar4 = *(uint *)(unaff_x20 + 0x18), uVar4 == 0))
                goto LAB_07277320;
                lVar38 = *unaff_x29;
                if (lVar38 == 0) goto LAB_07277350;
                sVar6 = *(short *)(lVar26 + (long)(int)uVar22 * 2 + 0x20);
                lVar18 = (long)sVar6;
                if ((*(uint *)(lVar38 + 0x18) <= (uint)(int)sVar6) || (uVar4 == 1))
                goto LAB_07277320;
                lVar20 = *(long *)(unaff_x20 + 0x28);
                if (lVar20 == 0) goto LAB_07277350;
                if ((*(uint *)(lVar20 + 0x18) <= (uint)(int)sVar6) || (uVar4 < 3))
                goto LAB_07277320;
                lVar50 = *(long *)(unaff_x20 + 0x30);
                if (lVar50 == 0) goto LAB_07277350;
                uVar17 = (uint)sVar6;
                if ((*(uint *)(lVar50 + 0x18) <= uVar17) || (uVar4 == 3)) goto LAB_07277320;
                lVar24 = *(long *)(unaff_x20 + 0x38);
                if (lVar24 == 0) goto LAB_07277350;
                if ((*(uint *)(lVar24 + 0x18) <= uVar17) || (uVar4 < 5)) goto LAB_07277320;
                lVar44 = *(long *)(unaff_x20 + 0x40);
                if (lVar44 == 0) goto LAB_07277350;
                if ((*(uint *)(lVar44 + 0x18) <= uVar17) || (uVar4 == 5)) goto LAB_07277320;
                lVar19 = *(long *)(unaff_x20 + 0x48);
                if (lVar19 == 0) goto LAB_07277350;
                if (*(uint *)(lVar19 + 0x18) <= uVar17) goto LAB_07277320;
                uVar22 = uVar22 + 1;
                sVar9 = *(short *)(lVar38 + lVar18 * 2 + 0x20) + sVar9;
                sVar42 = *(short *)(lVar20 + lVar18 * 2 + 0x20) + sVar42;
                sVar41 = *(short *)(lVar50 + lVar18 * 2 + 0x20) + sVar41;
                sVar39 = *(short *)(lVar24 + lVar18 * 2 + 0x20) + sVar39;
                sVar34 = *(short *)(lVar44 + lVar18 * 2 + 0x20) + sVar34;
                sVar32 = *(short *)(lVar19 + lVar18 * 2 + 0x20) + sVar32;
              } while ((int)uVar22 <= iVar35);
            }
            if ((((uVar47 == 0) || (*(short *)(lVar12 + 0x20) = sVar9, uVar47 == 1)) ||
                (*(short *)(lVar12 + 0x22) = sVar42, uVar47 < 3)) ||
               (((*(short *)(lVar12 + 0x24) = sVar41, uVar47 == 3 ||
                 (*(short *)(lVar12 + 0x26) = sVar39, uVar47 < 5)) ||
                (*(short *)(lVar12 + 0x28) = sVar34, uVar47 == 5)))) goto LAB_07277320;
            *(short *)(lVar12 + 0x2a) = sVar32;
          }
          uVar25 = 0;
          iVar40 = 999999999;
          uVar22 = 0xffffffff;
          do {
            if (uVar47 <= uVar45 - 1) goto LAB_07277320;
            sVar9 = puVar2[uVar25];
            uVar3 = (uint)uVar25;
            if (iVar40 <= sVar9) {
              uVar3 = uVar22;
            }
            uVar25 = uVar25 + 1;
            if (sVar9 <= iVar40) {
              iVar40 = (int)sVar9;
            }
            uVar22 = uVar3;
          } while (unaff_x22 != uVar25);
          if ((uint)uVar43 <= uVar3) goto LAB_07277320;
          lVar38 = (long)(int)uVar3;
          lVar26 = *(long *)(unaff_x19 + 0x78);
          puVar1[lVar38] = puVar1[lVar38] + 1;
          if (lVar26 == 0) goto LAB_07277350;
          if (*(uint *)(lVar26 + 0x18) <= uVar29) goto LAB_07277320;
          *(short *)(lVar26 + (long)(int)uVar29 * 2 + 0x20) = (short)uVar3;
          if ((int)uVar30 <= iVar35) {
            if (*(uint *)(lVar36 + 0x18) <= uVar3) goto LAB_07277320;
            lVar26 = *(long *)(unaff_x19 + 0xa0);
            if (lVar26 == 0) goto LAB_07277350;
            lVar38 = *(long *)(lVar36 + lVar38 * 8 + 0x20);
            uVar47 = uVar30;
            if (uVar30 <= *(uint *)(lVar26 + 0x18)) {
              uVar47 = *(uint *)(lVar26 + 0x18);
            }
            do {
              if (uVar47 == uVar30) goto LAB_07277320;
              if (lVar38 == 0) goto LAB_07277350;
              sVar9 = *(short *)(lVar26 + (long)(int)uVar30 * 2 + 0x20);
              if (*(uint *)(lVar38 + 0x18) <= (uint)(int)sVar9) goto LAB_07277320;
              uVar30 = uVar30 + 1;
              *(int *)(lVar38 + 0x20 + (long)(int)sVar9 * 4) =
                   *(int *)(lVar38 + 0x20 + (long)(int)sVar9 * 4) + 1;
            } while ((int)uVar30 <= iVar35);
          }
          iVar40 = *(int *)(unaff_x19 + 0xb0);
          uVar30 = iVar35 + 1;
          uVar29 = uVar29 + 1;
        } while ((int)uVar30 < iVar40);
      }
      uVar48 = 0;
      do {
        if ((*(uint *)(unaff_x20 + 0x18) <= uVar48) || (*(uint *)(lVar36 + 0x18) <= uVar48))
        goto LAB_07277320;
        FUN_072773a0(unaff_x29[uVar48],*(undefined8 *)(lVar36 + 0x20 + uVar48 * 8),param_3,0x14);
        uVar48 = uVar48 + 1;
      } while (unaff_x22 != uVar48);
      iVar21 = iVar21 + 1;
    } while (iVar21 != 4);
    if (0x4652 < (int)uVar29) {
LAB_07277354:
                    /* WARNING: Subroutine does not return */
      FUN_07277358();
    }
    lVar36 = FUN_04077674(*(undefined8 *)PTR_DAT_09286040,6);
    puVar8 = PTR_DAT_092be0b0;
    puVar7 = PTR_DAT_092869a0;
    if (lVar36 != 0) {
      uVar43 = *(ulong *)(lVar36 + 0x18);
      uVar48 = 0;
      do {
        if ((uVar43 & 0xffffffff) == uVar48) goto LAB_07277320;
        *(short *)(lVar36 + 0x20 + uVar48 * 2) = (short)uVar48;
        uVar48 = uVar48 + 1;
      } while (unaff_x22 != uVar48);
      if (0 < (int)uVar29) {
        lVar10 = *(long *)(unaff_x19 + 0x78);
        if (lVar10 == 0) goto LAB_07277350;
        uVar30 = *(uint *)(lVar10 + 0x18);
        uVar48 = 0;
        do {
          if ((uVar48 == uVar30) || (iVar21 = (int)uVar43, iVar21 == 0)) goto LAB_07277320;
          sVar9 = *(short *)(lVar10 + uVar48 * 2 + 0x20);
          if (sVar9 == *(short *)(lVar36 + 0x20)) {
            iVar35 = 0;
          }
          else {
            iVar40 = 1;
            sVar42 = *(short *)(lVar36 + 0x20);
            do {
              iVar35 = iVar40;
              if (iVar21 == iVar35) goto LAB_07277320;
              lVar12 = lVar36 + (long)iVar35 * 2;
              sVar41 = *(short *)(lVar12 + 0x20);
              *(short *)(lVar12 + 0x20) = sVar42;
              iVar40 = iVar35 + 1;
              sVar42 = sVar41;
            } while (sVar9 != sVar41);
          }
          lVar12 = *(long *)(unaff_x19 + 0x80);
          *(short *)(lVar36 + 0x20) = sVar9;
          if (lVar12 == 0) goto LAB_07277350;
          if (*(uint *)(lVar12 + 0x18) <= uVar48) goto LAB_07277320;
          lVar26 = uVar48 * 2;
          uVar48 = uVar48 + 1;
          *(short *)(lVar12 + lVar26 + 0x20) = (short)iVar35;
        } while (uVar48 != uVar29);
      }
      lVar36 = FUN_04077674(*(undefined8 *)puVar8,6);
      uVar48 = 0;
      puVar46 = (undefined8 *)(lVar36 + 0x20);
      do {
        uVar11 = FUN_04077674(*(undefined8 *)puVar7,0x102);
        if (lVar36 == 0) goto LAB_07277350;
        if (*(uint *)(lVar36 + 0x18) <= uVar48) goto LAB_07277320;
        *puVar46 = uVar11;
        thunk_FUN_040ec700(puVar46,uVar11);
        uVar48 = uVar48 + 1;
        puVar46 = puVar46 + 1;
      } while (uVar48 != 6);
      uVar48 = 0;
      do {
        lVar10 = unaff_x20 + uVar48 * 8;
        if (iVar15 < 1) {
          uVar16 = 0;
          uVar14 = 0x20;
        }
        else {
          if (*(uint *)(unaff_x20 + 0x18) <= uVar48) goto LAB_07277320;
          lVar12 = *(long *)(lVar10 + 0x20);
          if (lVar12 == 0) goto LAB_07277350;
          uVar16 = 0;
          uVar14 = 0x20;
          puVar28 = (ushort *)(lVar12 + 0x20);
          lVar26 = (long)iVar15;
          do {
            if (*(uint *)(lVar12 + 0x18) <= (uint)unaff_x28) goto LAB_07277320;
            uVar5 = *puVar28;
            if (uVar16 <= uVar5) {
              uVar16 = uVar5;
            }
            if (uVar5 <= uVar14) {
              uVar14 = uVar5;
            }
            lVar26 = lVar26 + -1;
            puVar28 = puVar28 + 1;
          } while (lVar26 != 0);
          if ((0x14 < uVar16) || (uVar14 == 0)) goto LAB_07277354;
        }
        if ((*(uint *)(lVar36 + 0x18) <= uVar48) || (*(uint *)(unaff_x20 + 0x18) <= uVar48))
        goto LAB_07277320;
        FUN_072779c0(*(undefined8 *)(lVar36 + uVar48 * 8 + 0x20),*(undefined8 *)(lVar10 + 0x20),
                     uVar14,uVar16,param_3 & 0xffffffff);
        uVar48 = uVar48 + 1;
      } while (uVar48 != unaff_x22);
      lVar10 = FUN_04077674(*(undefined8 *)PTR_DAT_09287a50,0x10);
      if (lVar10 != 0) {
        uVar30 = *(uint *)(lVar10 + 0x18);
        lVar12 = 0;
        uVar48 = 0;
        do {
          if (uVar48 == uVar30) goto LAB_07277320;
          lVar26 = *(long *)(unaff_x19 + 0x58);
          puVar31 = (undefined1 *)(lVar10 + uVar48 + 0x20);
          *puVar31 = 0;
          if (lVar26 == 0) goto LAB_07277350;
          uVar47 = *(uint *)(lVar26 + 0x18);
          lVar38 = 0;
          do {
            if ((ulong)uVar47 <= (ulong)(lVar12 + lVar38)) goto LAB_07277320;
            if (*(char *)(lVar26 + lVar12 + 0x20 + lVar38) != '\0') {
              *puVar31 = 1;
            }
            lVar38 = lVar38 + 1;
          } while (lVar38 != 0x10);
          uVar48 = uVar48 + 1;
          lVar12 = lVar12 + 0x10;
        } while (uVar48 != 0x10);
        uVar48 = 0;
        do {
          if (*(uint *)(lVar10 + 0x18) <= uVar48) goto LAB_07277320;
          FUN_07276410();
          uVar48 = uVar48 + 1;
        } while (uVar48 != 0x10);
        lVar12 = 0;
        uVar48 = 0;
        do {
          if (*(uint *)(lVar10 + 0x18) <= uVar48) goto LAB_07277320;
          if (*(char *)(lVar10 + uVar48 + 0x20) != '\0') {
            lVar26 = 0;
            do {
              if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_07277350;
              if ((ulong)*(uint *)(*(long *)(unaff_x19 + 0x58) + 0x18) <= (ulong)(lVar12 + lVar26))
              goto LAB_07277320;
              FUN_07276410();
              lVar26 = lVar26 + 1;
            } while (lVar26 != 0x10);
          }
          uVar48 = uVar48 + 1;
          lVar12 = lVar12 + 0x10;
        } while (uVar48 != 0x10);
        FUN_07276410();
        FUN_07276410();
        if (0 < (int)uVar29) {
          uVar48 = 0;
          do {
            lVar10 = *(long *)(unaff_x19 + 0x80);
            if (lVar10 == 0) goto LAB_07277350;
            uVar30 = 0xffffffff;
            while( true ) {
              if (*(uint *)(lVar10 + 0x18) <= uVar48) goto LAB_07277320;
              uVar30 = uVar30 + 1;
              if (*(ushort *)(lVar10 + uVar48 * 2 + 0x20) <= uVar30) break;
              FUN_07276410();
              lVar10 = *(long *)(unaff_x19 + 0x80);
              if (lVar10 == 0) goto LAB_07277350;
            }
            FUN_07276410();
            uVar48 = uVar48 + 1;
          } while (uVar48 != uVar29);
        }
        uVar30 = 0;
        do {
          if (*(uint *)(unaff_x20 + 0x18) <= uVar30) {
LAB_07277320:
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar49 = (long *)(unaff_x20 + (ulong)uVar30 * 8 + 0x20);
          lVar10 = *plVar49;
          if (lVar10 == 0) goto LAB_07277350;
          if (*(int *)(lVar10 + 0x18) == 0) goto LAB_07277320;
          uVar47 = (uint)*(ushort *)(lVar10 + 0x20);
          FUN_07276410();
          if (0 < iVar15) {
            uVar48 = 0;
            do {
              uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
              uVar22 = (uint)uVar11;
              while( true ) {
                if (uVar22 <= uVar30) goto LAB_07277320;
                lVar10 = *plVar49;
                if (lVar10 == 0) goto LAB_07277350;
                if (*(uint *)(lVar10 + 0x18) <= uVar48) goto LAB_07277320;
                if ((int)(uint)*(ushort *)(lVar10 + uVar48 * 2 + 0x20) <= (int)uVar47) break;
                FUN_07276410();
                uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
                uVar47 = uVar47 + 1;
                uVar22 = (uint)uVar11;
              }
              uVar22 = (uint)uVar11;
              while( true ) {
                if (uVar22 <= uVar30) goto LAB_07277320;
                lVar10 = *plVar49;
                if (lVar10 == 0) goto LAB_07277350;
                if (*(uint *)(lVar10 + 0x18) <= uVar48) goto LAB_07277320;
                if ((int)uVar47 <= (int)(uint)*(ushort *)(lVar10 + uVar48 * 2 + 0x20)) break;
                uVar47 = uVar47 - 1;
                FUN_07276410();
                uVar22 = *(uint *)(unaff_x20 + 0x18);
              }
              FUN_07276410();
              uVar48 = uVar48 + 1;
            } while (uVar48 != param_3);
          }
          uVar30 = uVar30 + 1;
        } while (uVar30 != uVar45);
        iVar15 = *(int *)(unaff_x19 + 0xb0);
        if (iVar15 < 1) {
          uVar45 = 0;
        }
        else {
          uVar30 = 0;
          uVar45 = 0;
          do {
            iVar21 = uVar30 + 0x31;
            if (iVar15 <= (int)(uVar30 + 0x31)) {
              iVar21 = iVar15 + -1;
            }
            if ((int)uVar30 <= iVar21) {
              do {
                lVar10 = *(long *)(unaff_x19 + 0x78);
                if (lVar10 == 0) goto LAB_07277350;
                if (*(uint *)(lVar10 + 0x18) <= uVar45) goto LAB_07277320;
                uVar16 = *(ushort *)(lVar10 + (long)(int)uVar45 * 2 + 0x20);
                if (*(uint *)(unaff_x20 + 0x18) <= (uint)uVar16) goto LAB_07277320;
                lVar10 = *(long *)(unaff_x19 + 0xa0);
                if (lVar10 == 0) goto LAB_07277350;
                if (*(uint *)(lVar10 + 0x18) <= uVar30) goto LAB_07277320;
                lVar12 = *(long *)(unaff_x20 + (ulong)uVar16 * 8 + 0x20);
                if (lVar12 == 0) goto LAB_07277350;
                uVar47 = (uint)*(short *)(lVar10 + (long)(int)uVar30 * 2 + 0x20);
                if ((*(uint *)(lVar12 + 0x18) <= uVar47) ||
                   (*(uint *)(lVar36 + 0x18) <= (uint)uVar16)) goto LAB_07277320;
                lVar10 = *(long *)(lVar36 + (ulong)uVar16 * 8 + 0x20);
                if (lVar10 == 0) goto LAB_07277350;
                if (*(uint *)(lVar10 + 0x18) <= uVar47) goto LAB_07277320;
                FUN_07276410();
                uVar30 = uVar30 + 1;
              } while ((int)uVar30 <= iVar21);
              iVar15 = *(int *)(unaff_x19 + 0xb0);
            }
            uVar30 = iVar21 + 1;
            uVar45 = uVar45 + 1;
          } while ((int)uVar30 < iVar15);
        }
        if (uVar45 == uVar29) {
          return;
        }
        goto LAB_07277354;
      }
    }
  }
LAB_07277350:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


