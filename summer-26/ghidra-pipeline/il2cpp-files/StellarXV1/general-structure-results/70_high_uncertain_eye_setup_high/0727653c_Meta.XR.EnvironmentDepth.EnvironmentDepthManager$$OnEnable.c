/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager$$OnEnable
ENTRY_POINT: 0727653c
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


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager__OnEnable(long param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  short sVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  short sVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined2 uVar19;
  ushort uVar20;
  ulong uVar21;
  ushort uVar22;
  uint uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  uint uVar28;
  long lVar29;
  ulong uVar30;
  int iVar31;
  uint uVar32;
  int iVar33;
  long lVar34;
  undefined4 *puVar35;
  ushort *puVar36;
  ulong uVar37;
  undefined2 *puVar38;
  undefined1 *puVar39;
  short sVar40;
  uint uVar41;
  undefined2 *puVar42;
  short sVar43;
  ulong uVar44;
  long lVar45;
  short sVar46;
  short sVar47;
  short sVar48;
  ulong uVar49;
  uint uVar50;
  uint uVar51;
  long *plVar52;
  long lVar53;
  ulong uVar54;
  ulong uVar55;
  uint uVar56;
  undefined8 *puVar57;
  uint uVar58;
  long *plVar59;
  long lVar60;
  
  puVar10 = PTR_DAT_092c12c8;
  if ((DAT_0988f746 & 1) == 0) {
    FUN_04077588(PTR_DAT_09287a50);
    FUN_04077588(PTR_DAT_092c12c8);
    FUN_04077588(PTR_DAT_09286040);
    FUN_04077588(PTR_DAT_09289910);
    FUN_04077588(PTR_DAT_092be0b0);
    FUN_04077588(PTR_DAT_092869a0);
    DAT_0988f746 = 1;
  }
  puVar12 = PTR_DAT_092be0b0;
  puVar11 = PTR_DAT_09289910;
  puVar9 = PTR_DAT_092869a0;
  puVar8 = PTR_DAT_09286040;
  lVar14 = FUN_04077674(*(undefined8 *)puVar10,6);
  plVar59 = (long *)(lVar14 + 0x20);
  uVar54 = 0;
  plVar52 = plVar59;
  do {
    lVar15 = FUN_04077674(*(undefined8 *)puVar8,0x102);
    if (lVar14 == 0) goto LAB_07277350;
    if (*(uint *)(lVar14 + 0x18) <= uVar54) goto LAB_07277320;
    *plVar52 = lVar15;
    thunk_FUN_040ec700(plVar52,lVar15);
    uVar54 = uVar54 + 1;
    plVar52 = plVar52 + 1;
  } while (uVar54 != 6);
  iVar27 = *(int *)(param_1 + 0x60);
  uVar54 = 0;
  uVar51 = iVar27 + 2;
  uVar21 = (ulong)uVar51;
  do {
    if (0 < (int)uVar51) {
      if (*(uint *)(lVar14 + 0x18) <= uVar54) goto LAB_07277320;
      lVar15 = *(long *)(lVar14 + uVar54 * 8 + 0x20);
      if (lVar15 == 0) goto LAB_07277350;
      uVar37 = (ulong)*(uint *)(lVar15 + 0x18);
      puVar38 = (undefined2 *)(lVar15 + 0x20);
      uVar55 = uVar21;
      do {
        if (uVar37 == 0) goto LAB_07277320;
        uVar55 = uVar55 - 1;
        uVar37 = uVar37 - 1;
        *puVar38 = 0xf;
        puVar38 = puVar38 + 1;
      } while (uVar55 != 0);
    }
    uVar54 = uVar54 + 1;
  } while (uVar54 != 6);
  uVar56 = *(uint *)(param_1 + 0xb0);
  if (0 < (int)uVar56) {
    if (uVar56 < 200) {
      bVar2 = false;
      uVar32 = 2;
    }
    else if (uVar56 < 600) {
      bVar2 = false;
      uVar32 = 3;
    }
    else if (uVar56 < 0x4b0) {
      bVar2 = false;
      uVar32 = 4;
    }
    else {
      bVar2 = 0x95f < uVar56;
      uVar32 = 5;
      if (0x95f < uVar56) {
        uVar32 = 6;
      }
    }
    uVar50 = iVar27 + 1;
    uVar55 = (ulong)uVar32;
    uVar58 = 0;
    uVar54 = uVar55;
    do {
      iVar27 = 0;
      iVar31 = (int)uVar54;
      if (iVar31 != 0) {
        iVar27 = (int)uVar56 / iVar31;
      }
      uVar28 = uVar58 - 1;
      if (iVar27 < 1 || (int)uVar50 <= (int)uVar28) {
        iVar33 = 0;
      }
      else {
        lVar15 = *(long *)(param_1 + 0xb8);
        if (lVar15 == 0) goto LAB_07277350;
        lVar16 = (long)(int)uVar28;
        iVar33 = 0;
        uVar41 = uVar58;
        do {
          uVar28 = uVar41;
          if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_07277320;
          iVar33 = *(int *)(lVar15 + 0x24 + lVar16 * 4) + iVar33;
        } while ((iVar33 < iVar27) &&
                (lVar16 = lVar16 + 1, uVar41 = uVar28 + 1, lVar16 < (int)uVar50));
      }
      uVar37 = uVar54 - 1;
      if ((((uVar37 != 0) && (uVar54 != uVar55)) && ((int)uVar58 < (int)uVar28)) &&
         ((uVar32 - iVar31 & 0x80000001) == 1)) {
        lVar15 = *(long *)(param_1 + 0xb8);
        if (lVar15 == 0) goto LAB_07277350;
        if (*(uint *)(lVar15 + 0x18) <= uVar28) goto LAB_07277320;
        lVar16 = (long)(int)uVar28;
        uVar28 = uVar28 - 1;
        iVar33 = iVar33 - *(int *)(lVar15 + lVar16 * 4 + 0x20);
      }
      if (0 < (int)uVar51) {
        lVar15 = lVar14 + uVar37 * 8;
        uVar41 = *(uint *)(lVar14 + 0x18);
        uVar49 = 0;
        do {
          if (((long)uVar49 < (long)(int)uVar58) || ((long)(int)uVar28 < (long)uVar49)) {
            if (uVar41 <= uVar37) goto LAB_07277320;
            lVar16 = *(long *)(lVar15 + 0x20);
            if (lVar16 == 0) goto LAB_07277350;
            if (*(uint *)(lVar16 + 0x18) <= uVar49) goto LAB_07277320;
            uVar19 = 0xf;
          }
          else {
            if (uVar41 <= uVar37) goto LAB_07277320;
            lVar16 = *(long *)(lVar15 + 0x20);
            if (lVar16 == 0) goto LAB_07277350;
            if (*(uint *)(lVar16 + 0x18) <= uVar49) goto LAB_07277320;
            uVar19 = 0;
          }
          lVar18 = uVar49 * 2;
          uVar49 = uVar49 + 1;
          *(undefined2 *)(lVar16 + lVar18 + 0x20) = uVar19;
        } while (uVar21 != uVar49);
      }
      uVar58 = uVar28 + 1;
      uVar56 = uVar56 - iVar33;
      bVar1 = 1 < (long)uVar54;
      uVar54 = uVar37;
    } while (bVar1);
    lVar15 = FUN_04077674(*(undefined8 *)puVar12,6);
    uVar54 = 0;
    puVar57 = (undefined8 *)(lVar15 + 0x20);
    do {
      uVar17 = FUN_04077674(*(undefined8 *)puVar9,0x102);
      if (lVar15 == 0) goto LAB_07277350;
      if (*(uint *)(lVar15 + 0x18) <= uVar54) goto LAB_07277320;
      *puVar57 = uVar17;
      thunk_FUN_040ec700(puVar57,uVar17);
      uVar54 = uVar54 + 1;
      puVar57 = puVar57 + 1;
    } while (uVar54 != 6);
    lVar16 = FUN_04077674(*(undefined8 *)puVar9,6);
    lVar18 = FUN_04077674(*(undefined8 *)puVar11,6);
    if (lVar16 != 0) {
      iVar27 = 0;
      puVar3 = (undefined4 *)(lVar16 + 0x20);
      puVar38 = (undefined2 *)(lVar18 + 0x20);
      do {
        uVar37 = *(ulong *)(lVar16 + 0x18);
        uVar49 = uVar37 & 0xffffffff;
        uVar54 = uVar55;
        puVar35 = puVar3;
        do {
          if (uVar49 == 0) goto LAB_07277320;
          uVar54 = uVar54 - 1;
          uVar49 = uVar49 - 1;
          *puVar35 = 0;
          uVar30 = 0;
          puVar35 = puVar35 + 1;
        } while (uVar54 != 0);
        do {
          if (0 < (int)uVar51) {
            if (*(uint *)(lVar15 + 0x18) <= uVar30) goto LAB_07277320;
            lVar34 = *(long *)(lVar15 + uVar30 * 8 + 0x20);
            if (lVar34 == 0) goto LAB_07277350;
            uVar49 = (ulong)*(uint *)(lVar34 + 0x18);
            puVar35 = (undefined4 *)(lVar34 + 0x20);
            uVar54 = uVar21;
            do {
              if (uVar49 == 0) goto LAB_07277320;
              uVar54 = uVar54 - 1;
              uVar49 = uVar49 - 1;
              *puVar35 = 0;
              puVar35 = puVar35 + 1;
            } while (uVar54 != 0);
          }
          uVar30 = uVar30 + 1;
        } while (uVar30 != uVar55);
        iVar31 = *(int *)(param_1 + 0xb0);
        if (iVar31 < 1) {
          uVar56 = 0;
        }
        else {
          if (lVar18 == 0) goto LAB_07277350;
          uVar54 = *(ulong *)(lVar18 + 0x18);
          uVar58 = 0;
          uVar56 = 0;
          uVar49 = uVar54 & 0xffffffff;
          do {
            uVar30 = uVar55;
            puVar42 = puVar38;
            uVar44 = uVar49;
            iVar33 = uVar58 + 0x31;
            if (iVar31 <= (int)(uVar58 + 0x31)) {
              iVar33 = iVar31 + -1;
            }
            do {
              if (uVar44 == 0) goto LAB_07277320;
              uVar30 = uVar30 - 1;
              *puVar42 = 0;
              puVar42 = puVar42 + 1;
              uVar44 = uVar44 - 1;
            } while (uVar30 != 0);
            uVar28 = (uint)uVar54;
            if (bVar2) {
              if (iVar33 < (int)uVar58) {
                sVar40 = 0;
                sVar43 = 0;
                sVar46 = 0;
                sVar47 = 0;
                sVar48 = 0;
                sVar13 = 0;
              }
              else {
                lVar34 = *(long *)(param_1 + 0xa0);
                if (lVar34 == 0) goto LAB_07277350;
                sVar13 = 0;
                sVar48 = 0;
                sVar47 = 0;
                sVar46 = 0;
                sVar43 = 0;
                sVar40 = 0;
                uVar41 = uVar58;
                uVar4 = uVar58;
                if (uVar58 <= *(uint *)(lVar34 + 0x18)) {
                  uVar4 = *(uint *)(lVar34 + 0x18);
                }
                do {
                  if ((uVar4 == uVar41) || (uVar5 = *(uint *)(lVar14 + 0x18), uVar5 == 0))
                  goto LAB_07277320;
                  lVar45 = *plVar59;
                  if (lVar45 == 0) goto LAB_07277350;
                  sVar7 = *(short *)(lVar34 + (long)(int)uVar41 * 2 + 0x20);
                  lVar24 = (long)sVar7;
                  if ((*(uint *)(lVar45 + 0x18) <= (uint)(int)sVar7) || (uVar5 == 1))
                  goto LAB_07277320;
                  lVar26 = *(long *)(lVar14 + 0x28);
                  if (lVar26 == 0) goto LAB_07277350;
                  if ((*(uint *)(lVar26 + 0x18) <= (uint)(int)sVar7) || (uVar5 < 3))
                  goto LAB_07277320;
                  lVar60 = *(long *)(lVar14 + 0x30);
                  if (lVar60 == 0) goto LAB_07277350;
                  uVar23 = (uint)sVar7;
                  if ((*(uint *)(lVar60 + 0x18) <= uVar23) || (uVar5 == 3)) goto LAB_07277320;
                  lVar29 = *(long *)(lVar14 + 0x38);
                  if (lVar29 == 0) goto LAB_07277350;
                  if ((*(uint *)(lVar29 + 0x18) <= uVar23) || (uVar5 < 5)) goto LAB_07277320;
                  lVar53 = *(long *)(lVar14 + 0x40);
                  if (lVar53 == 0) goto LAB_07277350;
                  if ((*(uint *)(lVar53 + 0x18) <= uVar23) || (uVar5 == 5)) goto LAB_07277320;
                  lVar25 = *(long *)(lVar14 + 0x48);
                  if (lVar25 == 0) goto LAB_07277350;
                  if (*(uint *)(lVar25 + 0x18) <= uVar23) goto LAB_07277320;
                  uVar41 = uVar41 + 1;
                  sVar13 = *(short *)(lVar45 + lVar24 * 2 + 0x20) + sVar13;
                  sVar48 = *(short *)(lVar26 + lVar24 * 2 + 0x20) + sVar48;
                  sVar47 = *(short *)(lVar60 + lVar24 * 2 + 0x20) + sVar47;
                  sVar46 = *(short *)(lVar29 + lVar24 * 2 + 0x20) + sVar46;
                  sVar43 = *(short *)(lVar53 + lVar24 * 2 + 0x20) + sVar43;
                  sVar40 = *(short *)(lVar25 + lVar24 * 2 + 0x20) + sVar40;
                } while ((int)uVar41 <= iVar33);
              }
              if ((((uVar28 == 0) || (*(short *)(lVar18 + 0x20) = sVar13, uVar28 == 1)) ||
                  (*(short *)(lVar18 + 0x22) = sVar48, uVar28 < 3)) ||
                 (((*(short *)(lVar18 + 0x24) = sVar47, uVar28 == 3 ||
                   (*(short *)(lVar18 + 0x26) = sVar46, uVar28 < 5)) ||
                  (*(short *)(lVar18 + 0x28) = sVar43, uVar28 == 5)))) goto LAB_07277320;
              *(short *)(lVar18 + 0x2a) = sVar40;
            }
            else if ((int)uVar58 <= iVar33) {
              lVar34 = *(long *)(param_1 + 0xa0);
              if (lVar34 == 0) goto LAB_07277350;
              uVar41 = uVar58;
              uVar4 = uVar58;
              if (uVar58 <= *(uint *)(lVar34 + 0x18)) {
                uVar4 = *(uint *)(lVar34 + 0x18);
              }
              do {
                if (uVar41 == uVar4) goto LAB_07277320;
                lVar45 = 0;
                sVar13 = *(short *)(lVar34 + (long)(int)uVar41 * 2 + 0x20);
                do {
                  if ((uVar28 == (uint)lVar45) || (*(uint *)(lVar14 + 0x18) <= (uint)lVar45))
                  goto LAB_07277320;
                  lVar24 = *(long *)(lVar14 + 0x20 + lVar45 * 8);
                  if (lVar24 == 0) goto LAB_07277350;
                  if (*(uint *)(lVar24 + 0x18) <= (uint)(int)sVar13) goto LAB_07277320;
                  puVar38[lVar45] = *(short *)(lVar24 + (long)sVar13 * 2 + 0x20) + puVar38[lVar45];
                  lVar45 = lVar45 + 1;
                } while (uVar32 != (uint)lVar45);
                uVar41 = uVar41 + 1;
              } while ((int)uVar41 <= iVar33);
            }
            uVar30 = 0;
            iVar31 = 999999999;
            uVar41 = 0xffffffff;
            do {
              if (uVar28 <= uVar32 - 1) goto LAB_07277320;
              sVar13 = puVar38[uVar30];
              uVar4 = (uint)uVar30;
              if (iVar31 <= sVar13) {
                uVar4 = uVar41;
              }
              uVar30 = uVar30 + 1;
              if (sVar13 <= iVar31) {
                iVar31 = (int)sVar13;
              }
              uVar41 = uVar4;
            } while (uVar55 != uVar30);
            if ((uint)uVar37 <= uVar4) goto LAB_07277320;
            lVar45 = (long)(int)uVar4;
            lVar34 = *(long *)(param_1 + 0x78);
            puVar3[lVar45] = puVar3[lVar45] + 1;
            if (lVar34 == 0) goto LAB_07277350;
            if (*(uint *)(lVar34 + 0x18) <= uVar56) goto LAB_07277320;
            *(short *)(lVar34 + (long)(int)uVar56 * 2 + 0x20) = (short)uVar4;
            if ((int)uVar58 <= iVar33) {
              if (*(uint *)(lVar15 + 0x18) <= uVar4) goto LAB_07277320;
              lVar34 = *(long *)(param_1 + 0xa0);
              if (lVar34 == 0) goto LAB_07277350;
              lVar45 = *(long *)(lVar15 + lVar45 * 8 + 0x20);
              uVar28 = uVar58;
              if (uVar58 <= *(uint *)(lVar34 + 0x18)) {
                uVar28 = *(uint *)(lVar34 + 0x18);
              }
              do {
                if (uVar28 == uVar58) goto LAB_07277320;
                if (lVar45 == 0) goto LAB_07277350;
                sVar13 = *(short *)(lVar34 + (long)(int)uVar58 * 2 + 0x20);
                if (*(uint *)(lVar45 + 0x18) <= (uint)(int)sVar13) goto LAB_07277320;
                uVar58 = uVar58 + 1;
                *(int *)(lVar45 + 0x20 + (long)(int)sVar13 * 4) =
                     *(int *)(lVar45 + 0x20 + (long)(int)sVar13 * 4) + 1;
              } while ((int)uVar58 <= iVar33);
            }
            iVar31 = *(int *)(param_1 + 0xb0);
            uVar58 = iVar33 + 1;
            uVar56 = uVar56 + 1;
          } while ((int)uVar58 < iVar31);
        }
        uVar54 = 0;
        do {
          if ((*(uint *)(lVar14 + 0x18) <= uVar54) || (*(uint *)(lVar15 + 0x18) <= uVar54))
          goto LAB_07277320;
          FUN_072773a0(plVar59[uVar54],*(undefined8 *)(lVar15 + 0x20 + uVar54 * 8),uVar21,0x14);
          uVar54 = uVar54 + 1;
        } while (uVar55 != uVar54);
        iVar27 = iVar27 + 1;
      } while (iVar27 != 4);
      if (0x4652 < (int)uVar56) goto LAB_07277354;
      lVar15 = FUN_04077674(*(undefined8 *)PTR_DAT_09286040,6);
      puVar8 = PTR_DAT_092be0b0;
      puVar10 = PTR_DAT_092869a0;
      if (lVar15 != 0) {
        uVar37 = *(ulong *)(lVar15 + 0x18);
        uVar54 = 0;
        do {
          if ((uVar37 & 0xffffffff) == uVar54) goto LAB_07277320;
          *(short *)(lVar15 + 0x20 + uVar54 * 2) = (short)uVar54;
          uVar54 = uVar54 + 1;
        } while (uVar55 != uVar54);
        if (0 < (int)uVar56) {
          lVar16 = *(long *)(param_1 + 0x78);
          if (lVar16 == 0) goto LAB_07277350;
          uVar58 = *(uint *)(lVar16 + 0x18);
          uVar54 = 0;
          do {
            if ((uVar54 == uVar58) || (iVar27 = (int)uVar37, iVar27 == 0)) goto LAB_07277320;
            sVar13 = *(short *)(lVar16 + uVar54 * 2 + 0x20);
            if (sVar13 == *(short *)(lVar15 + 0x20)) {
              iVar33 = 0;
            }
            else {
              iVar31 = 1;
              sVar48 = *(short *)(lVar15 + 0x20);
              do {
                iVar33 = iVar31;
                if (iVar27 == iVar33) goto LAB_07277320;
                lVar18 = lVar15 + (long)iVar33 * 2;
                sVar47 = *(short *)(lVar18 + 0x20);
                *(short *)(lVar18 + 0x20) = sVar48;
                iVar31 = iVar33 + 1;
                sVar48 = sVar47;
              } while (sVar13 != sVar47);
            }
            lVar18 = *(long *)(param_1 + 0x80);
            *(short *)(lVar15 + 0x20) = sVar13;
            if (lVar18 == 0) goto LAB_07277350;
            if (*(uint *)(lVar18 + 0x18) <= uVar54) goto LAB_07277320;
            lVar34 = uVar54 * 2;
            uVar54 = uVar54 + 1;
            *(short *)(lVar18 + lVar34 + 0x20) = (short)iVar33;
          } while (uVar54 != uVar56);
        }
        lVar15 = FUN_04077674(*(undefined8 *)puVar8,6);
        uVar54 = 0;
        puVar57 = (undefined8 *)(lVar15 + 0x20);
        do {
          uVar17 = FUN_04077674(*(undefined8 *)puVar10,0x102);
          if (lVar15 == 0) goto LAB_07277350;
          if (*(uint *)(lVar15 + 0x18) <= uVar54) goto LAB_07277320;
          *puVar57 = uVar17;
          thunk_FUN_040ec700(puVar57,uVar17);
          uVar54 = uVar54 + 1;
          puVar57 = puVar57 + 1;
        } while (uVar54 != 6);
        uVar54 = 0;
        do {
          lVar16 = lVar14 + uVar54 * 8;
          if ((int)uVar51 < 1) {
            uVar22 = 0;
            uVar20 = 0x20;
          }
          else {
            if (*(uint *)(lVar14 + 0x18) <= uVar54) goto LAB_07277320;
            lVar18 = *(long *)(lVar16 + 0x20);
            if (lVar18 == 0) goto LAB_07277350;
            uVar22 = 0;
            uVar20 = 0x20;
            puVar36 = (ushort *)(lVar18 + 0x20);
            lVar34 = (long)(int)uVar51;
            do {
              if (*(uint *)(lVar18 + 0x18) <= uVar50) goto LAB_07277320;
              uVar6 = *puVar36;
              if (uVar22 <= uVar6) {
                uVar22 = uVar6;
              }
              if (uVar6 <= uVar20) {
                uVar20 = uVar6;
              }
              lVar34 = lVar34 + -1;
              puVar36 = puVar36 + 1;
            } while (lVar34 != 0);
            if ((0x14 < uVar22) || (uVar20 == 0)) goto LAB_07277354;
          }
          if ((*(uint *)(lVar15 + 0x18) <= uVar54) || (*(uint *)(lVar14 + 0x18) <= uVar54))
          goto LAB_07277320;
          FUN_072779c0(*(undefined8 *)(lVar15 + uVar54 * 8 + 0x20),*(undefined8 *)(lVar16 + 0x20),
                       uVar20,uVar22,uVar21);
          uVar54 = uVar54 + 1;
        } while (uVar54 != uVar55);
        lVar16 = FUN_04077674(*(undefined8 *)PTR_DAT_09287a50,0x10);
        if (lVar16 != 0) {
          uVar50 = *(uint *)(lVar16 + 0x18);
          lVar18 = 0;
          uVar54 = 0;
          do {
            if (uVar54 == uVar50) goto LAB_07277320;
            lVar34 = *(long *)(param_1 + 0x58);
            puVar39 = (undefined1 *)(lVar16 + uVar54 + 0x20);
            *puVar39 = 0;
            if (lVar34 == 0) goto LAB_07277350;
            uVar58 = *(uint *)(lVar34 + 0x18);
            lVar45 = 0;
            do {
              if ((ulong)uVar58 <= (ulong)(lVar18 + lVar45)) goto LAB_07277320;
              if (*(char *)(lVar34 + lVar18 + 0x20 + lVar45) != '\0') {
                *puVar39 = 1;
              }
              lVar45 = lVar45 + 1;
            } while (lVar45 != 0x10);
            uVar54 = uVar54 + 1;
            lVar18 = lVar18 + 0x10;
          } while (uVar54 != 0x10);
          uVar54 = 0;
          do {
            if (*(uint *)(lVar16 + 0x18) <= uVar54) goto LAB_07277320;
            FUN_07276410(param_1,1,*(undefined1 *)(lVar16 + 0x20 + uVar54));
            uVar54 = uVar54 + 1;
          } while (uVar54 != 0x10);
          lVar18 = 0;
          uVar54 = 0;
          do {
            if (*(uint *)(lVar16 + 0x18) <= uVar54) goto LAB_07277320;
            if (*(char *)(lVar16 + uVar54 + 0x20) != '\0') {
              lVar34 = 0;
              do {
                lVar45 = *(long *)(param_1 + 0x58);
                if (lVar45 == 0) goto LAB_07277350;
                if ((ulong)*(uint *)(lVar45 + 0x18) <= (ulong)(lVar18 + lVar34)) goto LAB_07277320;
                FUN_07276410(param_1,1,*(undefined1 *)(lVar45 + lVar18 + lVar34 + 0x20));
                lVar34 = lVar34 + 1;
              } while (lVar34 != 0x10);
            }
            uVar54 = uVar54 + 1;
            lVar18 = lVar18 + 0x10;
          } while (uVar54 != 0x10);
          FUN_07276410(param_1,3,uVar55);
          FUN_07276410(param_1,0xf,uVar56);
          if (0 < (int)uVar56) {
            uVar54 = 0;
            do {
              lVar16 = *(long *)(param_1 + 0x80);
              if (lVar16 == 0) goto LAB_07277350;
              uVar50 = 0xffffffff;
              while( true ) {
                if (*(uint *)(lVar16 + 0x18) <= uVar54) goto LAB_07277320;
                uVar50 = uVar50 + 1;
                if (*(ushort *)(lVar16 + uVar54 * 2 + 0x20) <= uVar50) break;
                FUN_07276410(param_1,1,1);
                lVar16 = *(long *)(param_1 + 0x80);
                if (lVar16 == 0) goto LAB_07277350;
              }
              FUN_07276410(param_1,1,0);
              uVar54 = uVar54 + 1;
            } while (uVar54 != uVar56);
          }
          uVar50 = 0;
          do {
            if (*(uint *)(lVar14 + 0x18) <= uVar50) {
LAB_07277320:
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            plVar59 = (long *)(lVar14 + (ulong)uVar50 * 8 + 0x20);
            lVar16 = *plVar59;
            if (lVar16 == 0) goto LAB_07277350;
            if (*(int *)(lVar16 + 0x18) == 0) goto LAB_07277320;
            uVar58 = (uint)*(ushort *)(lVar16 + 0x20);
            FUN_07276410(param_1,5,uVar58);
            if (0 < (int)uVar51) {
              uVar54 = 0;
              do {
                uVar17 = *(undefined8 *)(lVar14 + 0x18);
                uVar28 = (uint)uVar17;
                while( true ) {
                  if (uVar28 <= uVar50) goto LAB_07277320;
                  lVar16 = *plVar59;
                  if (lVar16 == 0) goto LAB_07277350;
                  if (*(uint *)(lVar16 + 0x18) <= uVar54) goto LAB_07277320;
                  if ((int)(uint)*(ushort *)(lVar16 + uVar54 * 2 + 0x20) <= (int)uVar58) break;
                  FUN_07276410(param_1,2,2);
                  uVar17 = *(undefined8 *)(lVar14 + 0x18);
                  uVar58 = uVar58 + 1;
                  uVar28 = (uint)uVar17;
                }
                uVar28 = (uint)uVar17;
                while( true ) {
                  if (uVar28 <= uVar50) goto LAB_07277320;
                  lVar16 = *plVar59;
                  if (lVar16 == 0) goto LAB_07277350;
                  if (*(uint *)(lVar16 + 0x18) <= uVar54) goto LAB_07277320;
                  if ((int)uVar58 <= (int)(uint)*(ushort *)(lVar16 + uVar54 * 2 + 0x20)) break;
                  uVar58 = uVar58 - 1;
                  FUN_07276410(param_1,2,3);
                  uVar28 = *(uint *)(lVar14 + 0x18);
                }
                FUN_07276410(param_1,1,0);
                uVar54 = uVar54 + 1;
              } while (uVar54 != uVar21);
            }
            uVar50 = uVar50 + 1;
          } while (uVar50 != uVar32);
          iVar27 = *(int *)(param_1 + 0xb0);
          if (iVar27 < 1) {
            uVar51 = 0;
          }
          else {
            uVar32 = 0;
            uVar51 = 0;
            do {
              iVar31 = uVar32 + 0x31;
              if (iVar27 <= (int)(uVar32 + 0x31)) {
                iVar31 = iVar27 + -1;
              }
              if ((int)uVar32 <= iVar31) {
                do {
                  lVar16 = *(long *)(param_1 + 0x78);
                  if (lVar16 == 0) goto LAB_07277350;
                  if (*(uint *)(lVar16 + 0x18) <= uVar51) goto LAB_07277320;
                  uVar22 = *(ushort *)(lVar16 + (long)(int)uVar51 * 2 + 0x20);
                  if (*(uint *)(lVar14 + 0x18) <= (uint)uVar22) goto LAB_07277320;
                  lVar16 = *(long *)(param_1 + 0xa0);
                  if (lVar16 == 0) goto LAB_07277350;
                  if (*(uint *)(lVar16 + 0x18) <= uVar32) goto LAB_07277320;
                  lVar18 = *(long *)(lVar14 + (ulong)uVar22 * 8 + 0x20);
                  if (lVar18 == 0) goto LAB_07277350;
                  sVar13 = *(short *)(lVar16 + (long)(int)uVar32 * 2 + 0x20);
                  if ((*(uint *)(lVar18 + 0x18) <= (uint)(int)sVar13) ||
                     (*(uint *)(lVar15 + 0x18) <= (uint)uVar22)) goto LAB_07277320;
                  lVar16 = *(long *)(lVar15 + (ulong)uVar22 * 8 + 0x20);
                  if (lVar16 == 0) goto LAB_07277350;
                  if (*(uint *)(lVar16 + 0x18) <= (uint)(int)sVar13) goto LAB_07277320;
                  FUN_07276410(param_1,*(undefined2 *)(lVar18 + (long)(int)sVar13 * 2 + 0x20),
                               *(undefined4 *)(lVar16 + (long)(int)sVar13 * 4 + 0x20));
                  uVar32 = uVar32 + 1;
                } while ((int)uVar32 <= iVar31);
                iVar27 = *(int *)(param_1 + 0xb0);
              }
              uVar32 = iVar31 + 1;
              uVar51 = uVar51 + 1;
            } while ((int)uVar32 < iVar27);
          }
          if (uVar51 == uVar56) {
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
LAB_07277354:
                    /* WARNING: Subroutine does not return */
  FUN_07277358();
}


