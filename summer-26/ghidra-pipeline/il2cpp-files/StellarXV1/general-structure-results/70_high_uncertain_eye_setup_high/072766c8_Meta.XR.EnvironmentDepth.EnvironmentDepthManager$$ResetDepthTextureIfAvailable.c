/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$ResetDepthTextureIfAvailable
ENTRY_POINT: 072766c8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_21;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__ResetDepthTextureIfAvailable
               (undefined8 param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  short sVar7;
  undefined *puVar8;
  undefined *puVar9;
  short sVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined2 uVar14;
  ulong uVar15;
  ushort uVar16;
  int iVar17;
  ushort uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int in_w8;
  int iVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  int in_w9;
  uint in_w10;
  long lVar27;
  undefined4 *puVar28;
  ushort *puVar29;
  uint in_w11;
  uint uVar30;
  undefined1 *puVar31;
  short sVar32;
  uint uVar33;
  undefined2 *puVar34;
  short sVar35;
  int iVar36;
  long lVar37;
  ulong uVar38;
  long lVar39;
  short sVar40;
  int iVar41;
  short sVar42;
  short sVar43;
  ulong uVar44;
  long unaff_x19;
  long unaff_x20;
  uint uVar45;
  long lVar46;
  ulong uVar47;
  undefined8 *puVar48;
  undefined8 *unaff_x24;
  uint uVar49;
  undefined8 *unaff_x25;
  ulong uVar50;
  undefined8 *unaff_x27;
  long *plVar51;
  long *unaff_x29;
  long lVar52;
  uint uStack0000000000000024;
  
  uVar45 = in_w9 + 1;
  uVar47 = (ulong)in_w10;
  uVar30 = 0;
  uVar50 = uVar47;
  do {
    iVar17 = 0;
    iVar23 = (int)uVar50;
    if (iVar23 != 0) {
      iVar17 = in_w8 / iVar23;
    }
    uVar49 = uVar30 - 1;
    if (iVar17 < 1 || (int)uVar45 <= (int)uVar49) {
      iVar41 = 0;
    }
    else {
      lVar37 = *(long *)(unaff_x19 + 0xb8);
      if (lVar37 == 0) goto LAB_07277350;
      lVar11 = (long)(int)uVar49;
      iVar41 = 0;
      uVar24 = uVar30;
      do {
        uVar49 = uVar24;
        if (*(uint *)(lVar37 + 0x18) <= uVar49) goto LAB_07277320;
        iVar41 = *(int *)(lVar37 + 0x24 + lVar11 * 4) + iVar41;
      } while ((iVar41 < iVar17) && (lVar11 = lVar11 + 1, uVar24 = uVar49 + 1, lVar11 < (int)uVar45)
              );
    }
    uVar15 = uVar50 - 1;
    if ((((uVar15 != 0) && (uVar50 != uVar47)) && ((int)uVar30 < (int)uVar49)) &&
       ((in_w10 - iVar23 & 0x80000001) == 1)) {
      lVar37 = *(long *)(unaff_x19 + 0xb8);
      if (lVar37 == 0) goto LAB_07277350;
      if (*(uint *)(lVar37 + 0x18) <= uVar49) goto LAB_07277320;
      lVar11 = (long)(int)uVar49;
      uVar49 = uVar49 - 1;
      iVar41 = iVar41 - *(int *)(lVar37 + lVar11 * 4 + 0x20);
    }
    iVar17 = (int)param_3;
    if (0 < iVar17) {
      lVar37 = unaff_x20 + uVar15 * 8;
      uVar24 = *(uint *)(unaff_x20 + 0x18);
      uVar44 = 0;
      do {
        if (((long)uVar44 < (long)(int)uVar30) || ((long)(int)uVar49 < (long)uVar44)) {
          if (uVar24 <= uVar15) goto LAB_07277320;
          lVar11 = *(long *)(lVar37 + 0x20);
          if (lVar11 == 0) goto LAB_07277350;
          if (*(uint *)(lVar11 + 0x18) <= uVar44) goto LAB_07277320;
          uVar14 = 0xf;
        }
        else {
          if (uVar24 <= uVar15) goto LAB_07277320;
          lVar11 = *(long *)(lVar37 + 0x20);
          if (lVar11 == 0) goto LAB_07277350;
          if (*(uint *)(lVar11 + 0x18) <= uVar44) goto LAB_07277320;
          uVar14 = 0;
        }
        lVar13 = uVar44 * 2;
        uVar44 = uVar44 + 1;
        *(undefined2 *)(lVar11 + lVar13 + 0x20) = uVar14;
      } while (param_3 != uVar44);
    }
    uVar30 = uVar49 + 1;
    in_w8 = in_w8 - iVar41;
    bVar1 = 1 < (long)uVar50;
    uVar50 = uVar15;
  } while (bVar1);
  uStack0000000000000024 = in_w11;
  lVar37 = FUN_04077674(*unaff_x24,6);
  uVar50 = 0;
  puVar48 = (undefined8 *)(lVar37 + 0x20);
  do {
    uVar12 = FUN_04077674(*unaff_x27,0x102);
    if (lVar37 == 0) goto LAB_07277350;
    if (*(uint *)(lVar37 + 0x18) <= uVar50) goto LAB_07277320;
    *puVar48 = uVar12;
    thunk_FUN_040ec700(puVar48,uVar12);
    uVar50 = uVar50 + 1;
    puVar48 = puVar48 + 1;
  } while (uVar50 != 6);
  lVar11 = FUN_04077674(*unaff_x27,6);
  lVar13 = FUN_04077674(*unaff_x25,6);
  if (lVar11 != 0) {
    iVar23 = 0;
    puVar2 = (undefined4 *)(lVar11 + 0x20);
    puVar3 = (undefined2 *)(lVar13 + 0x20);
    do {
      uVar15 = *(ulong *)(lVar11 + 0x18);
      uVar44 = uVar15 & 0xffffffff;
      uVar50 = uVar47;
      puVar28 = puVar2;
      do {
        if (uVar44 == 0) goto LAB_07277320;
        uVar50 = uVar50 - 1;
        uVar44 = uVar44 - 1;
        *puVar28 = 0;
        uVar26 = 0;
        puVar28 = puVar28 + 1;
      } while (uVar50 != 0);
      do {
        if (0 < iVar17) {
          if (*(uint *)(lVar37 + 0x18) <= uVar26) goto LAB_07277320;
          lVar27 = *(long *)(lVar37 + uVar26 * 8 + 0x20);
          if (lVar27 == 0) goto LAB_07277350;
          uVar44 = (ulong)*(uint *)(lVar27 + 0x18);
          puVar28 = (undefined4 *)(lVar27 + 0x20);
          uVar50 = param_3;
          do {
            if (uVar44 == 0) goto LAB_07277320;
            uVar50 = uVar50 - 1;
            uVar44 = uVar44 - 1;
            *puVar28 = 0;
            puVar28 = puVar28 + 1;
          } while (uVar50 != 0);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 != uVar47);
      iVar41 = *(int *)(unaff_x19 + 0xb0);
      if (iVar41 < 1) {
        uVar30 = 0;
      }
      else {
        if (lVar13 == 0) goto LAB_07277350;
        uVar50 = *(ulong *)(lVar13 + 0x18);
        uVar49 = 0;
        uVar30 = 0;
        uVar44 = uVar50 & 0xffffffff;
        do {
          uVar26 = uVar47;
          puVar34 = puVar3;
          uVar38 = uVar44;
          iVar36 = uVar49 + 0x31;
          if (iVar41 <= (int)(uVar49 + 0x31)) {
            iVar36 = iVar41 + -1;
          }
          do {
            if (uVar38 == 0) goto LAB_07277320;
            uVar26 = uVar26 - 1;
            *puVar34 = 0;
            puVar34 = puVar34 + 1;
            uVar38 = uVar38 - 1;
          } while (uVar26 != 0);
          uVar24 = (uint)uVar50;
          if ((uStack0000000000000024 & 1) == 0) {
            if ((int)uVar49 <= iVar36) {
              lVar27 = *(long *)(unaff_x19 + 0xa0);
              if (lVar27 == 0) goto LAB_07277350;
              uVar33 = uVar49;
              uVar4 = uVar49;
              if (uVar49 <= *(uint *)(lVar27 + 0x18)) {
                uVar4 = *(uint *)(lVar27 + 0x18);
              }
              do {
                if (uVar33 == uVar4) goto LAB_07277320;
                lVar39 = 0;
                sVar10 = *(short *)(lVar27 + (long)(int)uVar33 * 2 + 0x20);
                do {
                  if ((uVar24 == (uint)lVar39) || (*(uint *)(unaff_x20 + 0x18) <= (uint)lVar39))
                  goto LAB_07277320;
                  lVar20 = *(long *)(unaff_x20 + 0x20 + lVar39 * 8);
                  if (lVar20 == 0) goto LAB_07277350;
                  if (*(uint *)(lVar20 + 0x18) <= (uint)(int)sVar10) goto LAB_07277320;
                  puVar3[lVar39] = *(short *)(lVar20 + (long)sVar10 * 2 + 0x20) + puVar3[lVar39];
                  lVar39 = lVar39 + 1;
                } while (in_w10 != (uint)lVar39);
                uVar33 = uVar33 + 1;
              } while ((int)uVar33 <= iVar36);
            }
          }
          else {
            if (iVar36 < (int)uVar49) {
              sVar32 = 0;
              sVar35 = 0;
              sVar40 = 0;
              sVar42 = 0;
              sVar43 = 0;
              sVar10 = 0;
            }
            else {
              lVar27 = *(long *)(unaff_x19 + 0xa0);
              if (lVar27 == 0) goto LAB_07277350;
              sVar10 = 0;
              sVar43 = 0;
              sVar42 = 0;
              sVar40 = 0;
              sVar35 = 0;
              sVar32 = 0;
              uVar33 = uVar49;
              uVar4 = uVar49;
              if (uVar49 <= *(uint *)(lVar27 + 0x18)) {
                uVar4 = *(uint *)(lVar27 + 0x18);
              }
              do {
                if ((uVar4 == uVar33) || (uVar5 = *(uint *)(unaff_x20 + 0x18), uVar5 == 0))
                goto LAB_07277320;
                lVar39 = *unaff_x29;
                if (lVar39 == 0) goto LAB_07277350;
                sVar7 = *(short *)(lVar27 + (long)(int)uVar33 * 2 + 0x20);
                lVar20 = (long)sVar7;
                if ((*(uint *)(lVar39 + 0x18) <= (uint)(int)sVar7) || (uVar5 == 1))
                goto LAB_07277320;
                lVar22 = *(long *)(unaff_x20 + 0x28);
                if (lVar22 == 0) goto LAB_07277350;
                if ((*(uint *)(lVar22 + 0x18) <= (uint)(int)sVar7) || (uVar5 < 3))
                goto LAB_07277320;
                lVar52 = *(long *)(unaff_x20 + 0x30);
                if (lVar52 == 0) goto LAB_07277350;
                uVar19 = (uint)sVar7;
                if ((*(uint *)(lVar52 + 0x18) <= uVar19) || (uVar5 == 3)) goto LAB_07277320;
                lVar25 = *(long *)(unaff_x20 + 0x38);
                if (lVar25 == 0) goto LAB_07277350;
                if ((*(uint *)(lVar25 + 0x18) <= uVar19) || (uVar5 < 5)) goto LAB_07277320;
                lVar46 = *(long *)(unaff_x20 + 0x40);
                if (lVar46 == 0) goto LAB_07277350;
                if ((*(uint *)(lVar46 + 0x18) <= uVar19) || (uVar5 == 5)) goto LAB_07277320;
                lVar21 = *(long *)(unaff_x20 + 0x48);
                if (lVar21 == 0) goto LAB_07277350;
                if (*(uint *)(lVar21 + 0x18) <= uVar19) goto LAB_07277320;
                uVar33 = uVar33 + 1;
                sVar10 = *(short *)(lVar39 + lVar20 * 2 + 0x20) + sVar10;
                sVar43 = *(short *)(lVar22 + lVar20 * 2 + 0x20) + sVar43;
                sVar42 = *(short *)(lVar52 + lVar20 * 2 + 0x20) + sVar42;
                sVar40 = *(short *)(lVar25 + lVar20 * 2 + 0x20) + sVar40;
                sVar35 = *(short *)(lVar46 + lVar20 * 2 + 0x20) + sVar35;
                sVar32 = *(short *)(lVar21 + lVar20 * 2 + 0x20) + sVar32;
              } while ((int)uVar33 <= iVar36);
            }
            if ((((uVar24 == 0) || (*(short *)(lVar13 + 0x20) = sVar10, uVar24 == 1)) ||
                (*(short *)(lVar13 + 0x22) = sVar43, uVar24 < 3)) ||
               (((*(short *)(lVar13 + 0x24) = sVar42, uVar24 == 3 ||
                 (*(short *)(lVar13 + 0x26) = sVar40, uVar24 < 5)) ||
                (*(short *)(lVar13 + 0x28) = sVar35, uVar24 == 5)))) goto LAB_07277320;
            *(short *)(lVar13 + 0x2a) = sVar32;
          }
          uVar26 = 0;
          iVar41 = 999999999;
          uVar33 = 0xffffffff;
          do {
            if (uVar24 <= in_w10 - 1) goto LAB_07277320;
            sVar10 = puVar3[uVar26];
            uVar4 = (uint)uVar26;
            if (iVar41 <= sVar10) {
              uVar4 = uVar33;
            }
            uVar26 = uVar26 + 1;
            if (sVar10 <= iVar41) {
              iVar41 = (int)sVar10;
            }
            uVar33 = uVar4;
          } while (uVar47 != uVar26);
          if ((uint)uVar15 <= uVar4) goto LAB_07277320;
          lVar39 = (long)(int)uVar4;
          lVar27 = *(long *)(unaff_x19 + 0x78);
          puVar2[lVar39] = puVar2[lVar39] + 1;
          if (lVar27 == 0) goto LAB_07277350;
          if (*(uint *)(lVar27 + 0x18) <= uVar30) goto LAB_07277320;
          *(short *)(lVar27 + (long)(int)uVar30 * 2 + 0x20) = (short)uVar4;
          if ((int)uVar49 <= iVar36) {
            if (*(uint *)(lVar37 + 0x18) <= uVar4) goto LAB_07277320;
            lVar27 = *(long *)(unaff_x19 + 0xa0);
            if (lVar27 == 0) goto LAB_07277350;
            lVar39 = *(long *)(lVar37 + lVar39 * 8 + 0x20);
            uVar24 = uVar49;
            if (uVar49 <= *(uint *)(lVar27 + 0x18)) {
              uVar24 = *(uint *)(lVar27 + 0x18);
            }
            do {
              if (uVar24 == uVar49) goto LAB_07277320;
              if (lVar39 == 0) goto LAB_07277350;
              sVar10 = *(short *)(lVar27 + (long)(int)uVar49 * 2 + 0x20);
              if (*(uint *)(lVar39 + 0x18) <= (uint)(int)sVar10) goto LAB_07277320;
              uVar49 = uVar49 + 1;
              *(int *)(lVar39 + 0x20 + (long)(int)sVar10 * 4) =
                   *(int *)(lVar39 + 0x20 + (long)(int)sVar10 * 4) + 1;
            } while ((int)uVar49 <= iVar36);
          }
          iVar41 = *(int *)(unaff_x19 + 0xb0);
          uVar49 = iVar36 + 1;
          uVar30 = uVar30 + 1;
        } while ((int)uVar49 < iVar41);
      }
      uVar50 = 0;
      do {
        if ((*(uint *)(unaff_x20 + 0x18) <= uVar50) || (*(uint *)(lVar37 + 0x18) <= uVar50))
        goto LAB_07277320;
        FUN_072773a0(unaff_x29[uVar50],*(undefined8 *)(lVar37 + 0x20 + uVar50 * 8),param_3,0x14);
        uVar50 = uVar50 + 1;
      } while (uVar47 != uVar50);
      iVar23 = iVar23 + 1;
    } while (iVar23 != 4);
    if (0x4652 < (int)uVar30) {
LAB_07277354:
                    /* WARNING: Subroutine does not return */
      FUN_07277358();
    }
    lVar37 = FUN_04077674(*(undefined8 *)PTR_DAT_09286040,6);
    puVar9 = PTR_DAT_092be0b0;
    puVar8 = PTR_DAT_092869a0;
    if (lVar37 != 0) {
      uVar15 = *(ulong *)(lVar37 + 0x18);
      uVar50 = 0;
      do {
        if ((uVar15 & 0xffffffff) == uVar50) goto LAB_07277320;
        *(short *)(lVar37 + 0x20 + uVar50 * 2) = (short)uVar50;
        uVar50 = uVar50 + 1;
      } while (uVar47 != uVar50);
      if (0 < (int)uVar30) {
        lVar11 = *(long *)(unaff_x19 + 0x78);
        if (lVar11 == 0) goto LAB_07277350;
        uVar49 = *(uint *)(lVar11 + 0x18);
        uVar50 = 0;
        do {
          if ((uVar50 == uVar49) || (iVar23 = (int)uVar15, iVar23 == 0)) goto LAB_07277320;
          sVar10 = *(short *)(lVar11 + uVar50 * 2 + 0x20);
          if (sVar10 == *(short *)(lVar37 + 0x20)) {
            iVar36 = 0;
          }
          else {
            iVar41 = 1;
            sVar43 = *(short *)(lVar37 + 0x20);
            do {
              iVar36 = iVar41;
              if (iVar23 == iVar36) goto LAB_07277320;
              lVar13 = lVar37 + (long)iVar36 * 2;
              sVar42 = *(short *)(lVar13 + 0x20);
              *(short *)(lVar13 + 0x20) = sVar43;
              iVar41 = iVar36 + 1;
              sVar43 = sVar42;
            } while (sVar10 != sVar42);
          }
          lVar13 = *(long *)(unaff_x19 + 0x80);
          *(short *)(lVar37 + 0x20) = sVar10;
          if (lVar13 == 0) goto LAB_07277350;
          if (*(uint *)(lVar13 + 0x18) <= uVar50) goto LAB_07277320;
          lVar27 = uVar50 * 2;
          uVar50 = uVar50 + 1;
          *(short *)(lVar13 + lVar27 + 0x20) = (short)iVar36;
        } while (uVar50 != uVar30);
      }
      lVar37 = FUN_04077674(*(undefined8 *)puVar9,6);
      uVar50 = 0;
      puVar48 = (undefined8 *)(lVar37 + 0x20);
      do {
        uVar12 = FUN_04077674(*(undefined8 *)puVar8,0x102);
        if (lVar37 == 0) goto LAB_07277350;
        if (*(uint *)(lVar37 + 0x18) <= uVar50) goto LAB_07277320;
        *puVar48 = uVar12;
        thunk_FUN_040ec700(puVar48,uVar12);
        uVar50 = uVar50 + 1;
        puVar48 = puVar48 + 1;
      } while (uVar50 != 6);
      uVar50 = 0;
      do {
        lVar11 = unaff_x20 + uVar50 * 8;
        if (iVar17 < 1) {
          uVar18 = 0;
          uVar16 = 0x20;
        }
        else {
          if (*(uint *)(unaff_x20 + 0x18) <= uVar50) goto LAB_07277320;
          lVar13 = *(long *)(lVar11 + 0x20);
          if (lVar13 == 0) goto LAB_07277350;
          uVar18 = 0;
          uVar16 = 0x20;
          puVar29 = (ushort *)(lVar13 + 0x20);
          lVar27 = (long)iVar17;
          do {
            if (*(uint *)(lVar13 + 0x18) <= uVar45) goto LAB_07277320;
            uVar6 = *puVar29;
            if (uVar18 <= uVar6) {
              uVar18 = uVar6;
            }
            if (uVar6 <= uVar16) {
              uVar16 = uVar6;
            }
            lVar27 = lVar27 + -1;
            puVar29 = puVar29 + 1;
          } while (lVar27 != 0);
          if ((0x14 < uVar18) || (uVar16 == 0)) goto LAB_07277354;
        }
        if ((*(uint *)(lVar37 + 0x18) <= uVar50) || (*(uint *)(unaff_x20 + 0x18) <= uVar50))
        goto LAB_07277320;
        FUN_072779c0(*(undefined8 *)(lVar37 + uVar50 * 8 + 0x20),*(undefined8 *)(lVar11 + 0x20),
                     uVar16,uVar18,param_3 & 0xffffffff);
        uVar50 = uVar50 + 1;
      } while (uVar50 != uVar47);
      lVar11 = FUN_04077674(*(undefined8 *)PTR_DAT_09287a50,0x10);
      if (lVar11 != 0) {
        uVar45 = *(uint *)(lVar11 + 0x18);
        lVar13 = 0;
        uVar50 = 0;
        do {
          if (uVar50 == uVar45) goto LAB_07277320;
          lVar27 = *(long *)(unaff_x19 + 0x58);
          puVar31 = (undefined1 *)(lVar11 + uVar50 + 0x20);
          *puVar31 = 0;
          if (lVar27 == 0) goto LAB_07277350;
          uVar49 = *(uint *)(lVar27 + 0x18);
          lVar39 = 0;
          do {
            if ((ulong)uVar49 <= (ulong)(lVar13 + lVar39)) goto LAB_07277320;
            if (*(char *)(lVar27 + lVar13 + 0x20 + lVar39) != '\0') {
              *puVar31 = 1;
            }
            lVar39 = lVar39 + 1;
          } while (lVar39 != 0x10);
          uVar50 = uVar50 + 1;
          lVar13 = lVar13 + 0x10;
        } while (uVar50 != 0x10);
        uVar50 = 0;
        do {
          if (*(uint *)(lVar11 + 0x18) <= uVar50) goto LAB_07277320;
          FUN_07276410();
          uVar50 = uVar50 + 1;
        } while (uVar50 != 0x10);
        lVar13 = 0;
        uVar50 = 0;
        do {
          if (*(uint *)(lVar11 + 0x18) <= uVar50) goto LAB_07277320;
          if (*(char *)(lVar11 + uVar50 + 0x20) != '\0') {
            lVar27 = 0;
            do {
              if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_07277350;
              if ((ulong)*(uint *)(*(long *)(unaff_x19 + 0x58) + 0x18) <= (ulong)(lVar13 + lVar27))
              goto LAB_07277320;
              FUN_07276410();
              lVar27 = lVar27 + 1;
            } while (lVar27 != 0x10);
          }
          uVar50 = uVar50 + 1;
          lVar13 = lVar13 + 0x10;
        } while (uVar50 != 0x10);
        FUN_07276410();
        FUN_07276410();
        if (0 < (int)uVar30) {
          uVar50 = 0;
          do {
            lVar11 = *(long *)(unaff_x19 + 0x80);
            if (lVar11 == 0) goto LAB_07277350;
            uVar45 = 0xffffffff;
            while( true ) {
              if (*(uint *)(lVar11 + 0x18) <= uVar50) goto LAB_07277320;
              uVar45 = uVar45 + 1;
              if (*(ushort *)(lVar11 + uVar50 * 2 + 0x20) <= uVar45) break;
              FUN_07276410();
              lVar11 = *(long *)(unaff_x19 + 0x80);
              if (lVar11 == 0) goto LAB_07277350;
            }
            FUN_07276410();
            uVar50 = uVar50 + 1;
          } while (uVar50 != uVar30);
        }
        uVar45 = 0;
        do {
          if (*(uint *)(unaff_x20 + 0x18) <= uVar45) {
LAB_07277320:
                    /* WARNING: Subroutine does not return */
            FUN_04077838();
          }
          plVar51 = (long *)(unaff_x20 + (ulong)uVar45 * 8 + 0x20);
          lVar11 = *plVar51;
          if (lVar11 == 0) goto LAB_07277350;
          if (*(int *)(lVar11 + 0x18) == 0) goto LAB_07277320;
          uVar49 = (uint)*(ushort *)(lVar11 + 0x20);
          FUN_07276410();
          if (0 < iVar17) {
            uVar50 = 0;
            do {
              uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
              uVar24 = (uint)uVar12;
              while( true ) {
                if (uVar24 <= uVar45) goto LAB_07277320;
                lVar11 = *plVar51;
                if (lVar11 == 0) goto LAB_07277350;
                if (*(uint *)(lVar11 + 0x18) <= uVar50) goto LAB_07277320;
                if ((int)(uint)*(ushort *)(lVar11 + uVar50 * 2 + 0x20) <= (int)uVar49) break;
                FUN_07276410();
                uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
                uVar49 = uVar49 + 1;
                uVar24 = (uint)uVar12;
              }
              uVar24 = (uint)uVar12;
              while( true ) {
                if (uVar24 <= uVar45) goto LAB_07277320;
                lVar11 = *plVar51;
                if (lVar11 == 0) goto LAB_07277350;
                if (*(uint *)(lVar11 + 0x18) <= uVar50) goto LAB_07277320;
                if ((int)uVar49 <= (int)(uint)*(ushort *)(lVar11 + uVar50 * 2 + 0x20)) break;
                uVar49 = uVar49 - 1;
                FUN_07276410();
                uVar24 = *(uint *)(unaff_x20 + 0x18);
              }
              FUN_07276410();
              uVar50 = uVar50 + 1;
            } while (uVar50 != param_3);
          }
          uVar45 = uVar45 + 1;
        } while (uVar45 != in_w10);
        iVar17 = *(int *)(unaff_x19 + 0xb0);
        if (iVar17 < 1) {
          uVar45 = 0;
        }
        else {
          uVar49 = 0;
          uVar45 = 0;
          do {
            iVar23 = uVar49 + 0x31;
            if (iVar17 <= (int)(uVar49 + 0x31)) {
              iVar23 = iVar17 + -1;
            }
            if ((int)uVar49 <= iVar23) {
              do {
                lVar11 = *(long *)(unaff_x19 + 0x78);
                if (lVar11 == 0) goto LAB_07277350;
                if (*(uint *)(lVar11 + 0x18) <= uVar45) goto LAB_07277320;
                uVar18 = *(ushort *)(lVar11 + (long)(int)uVar45 * 2 + 0x20);
                if (*(uint *)(unaff_x20 + 0x18) <= (uint)uVar18) goto LAB_07277320;
                lVar11 = *(long *)(unaff_x19 + 0xa0);
                if (lVar11 == 0) goto LAB_07277350;
                if (*(uint *)(lVar11 + 0x18) <= uVar49) goto LAB_07277320;
                lVar13 = *(long *)(unaff_x20 + (ulong)uVar18 * 8 + 0x20);
                if (lVar13 == 0) goto LAB_07277350;
                uVar24 = (uint)*(short *)(lVar11 + (long)(int)uVar49 * 2 + 0x20);
                if ((*(uint *)(lVar13 + 0x18) <= uVar24) ||
                   (*(uint *)(lVar37 + 0x18) <= (uint)uVar18)) goto LAB_07277320;
                lVar11 = *(long *)(lVar37 + (ulong)uVar18 * 8 + 0x20);
                if (lVar11 == 0) goto LAB_07277350;
                if (*(uint *)(lVar11 + 0x18) <= uVar24) goto LAB_07277320;
                FUN_07276410();
                uVar49 = uVar49 + 1;
              } while ((int)uVar49 <= iVar23);
              iVar17 = *(int *)(unaff_x19 + 0xb0);
            }
            uVar49 = iVar23 + 1;
            uVar45 = uVar45 + 1;
          } while ((int)uVar49 < iVar17);
        }
        if (uVar45 == uVar30) {
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


