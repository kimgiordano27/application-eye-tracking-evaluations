/*
FUNCTION_NAME: Meta.XR.EnvironmentDepth.EnvironmentDepthManager.Mask$$Dispose
ENTRY_POINT: 07276954
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 92
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentDepth_EnvironmentDepthManager_Mask__Dispose
               (ulong param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  short sVar8;
  undefined8 uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong in_x9;
  ulong uVar19;
  undefined4 *puVar20;
  undefined4 *in_x10;
  ulong uVar21;
  ushort *puVar22;
  uint uVar23;
  ulong in_x11;
  ulong in_x12;
  undefined1 *puVar24;
  short sVar25;
  undefined2 *puVar26;
  long lVar27;
  short sVar28;
  int iVar29;
  ulong uVar30;
  long lVar31;
  short sVar32;
  long lVar33;
  long lVar34;
  short sVar35;
  short sVar36;
  long unaff_x19;
  long unaff_x20;
  long lVar37;
  ulong unaff_x22;
  uint uVar38;
  long unaff_x24;
  uint uVar39;
  long unaff_x25;
  undefined8 *puVar40;
  undefined2 *unaff_x27;
  long *plVar41;
  uint unaff_w28;
  long *unaff_x29;
  uint in_stack_00000000;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  ulong in_stack_00000020;
  undefined4 *in_stack_00000028;
  long in_stack_00000030;
  ulong in_stack_00000038;
  
  do {
    in_x11 = in_x11 - 1;
    param_1 = param_1 - 1;
    puVar20 = in_x10 + 1;
    *in_x10 = 0;
    if (in_x11 == 0) {
      do {
        in_x11 = in_x12;
        in_x9 = in_x9 + 1;
        if (in_x9 == unaff_x22) {
          iVar14 = *(int *)(unaff_x19 + 0xb0);
          if (iVar14 < 1) {
            uVar38 = 0;
          }
          else {
            if (in_stack_00000018 == 0) goto LAB_07277350;
            uVar19 = *(ulong *)(in_stack_00000018 + 0x18);
            uVar23 = 0;
            uVar38 = 0;
            uVar21 = uVar19 & 0xffffffff;
            do {
              uVar17 = unaff_x22;
              puVar26 = unaff_x27;
              uVar30 = uVar21;
              iVar2 = uVar23 + 0x31;
              if (iVar14 <= (int)(uVar23 + 0x31)) {
                iVar2 = iVar14 + -1;
              }
              do {
                if (uVar30 == 0) goto LAB_07277320;
                uVar17 = uVar17 - 1;
                *puVar26 = 0;
                puVar26 = puVar26 + 1;
                uVar30 = uVar30 - 1;
              } while (uVar17 != 0);
              uVar39 = (uint)uVar19;
              if ((in_stack_00000020 & 0x100000000) == 0) {
                if ((int)uVar23 <= iVar2) {
                  lVar18 = *(long *)(unaff_x19 + 0xa0);
                  if (lVar18 == 0) goto LAB_07277350;
                  uVar15 = uVar23;
                  uVar1 = uVar23;
                  if (uVar23 <= *(uint *)(lVar18 + 0x18)) {
                    uVar1 = *(uint *)(lVar18 + 0x18);
                  }
                  do {
                    if (uVar15 == uVar1) goto LAB_07277320;
                    lVar31 = 0;
                    sVar8 = *(short *)(lVar18 + (long)(int)uVar15 * 2 + 0x20);
                    do {
                      if ((uVar39 == (uint)lVar31) || (*(uint *)(unaff_x20 + 0x18) <= (uint)lVar31))
                      goto LAB_07277320;
                      lVar33 = *(long *)(unaff_x25 + lVar31 * 8);
                      if (lVar33 == 0) goto LAB_07277350;
                      if (*(uint *)(lVar33 + 0x18) <= (uint)(int)sVar8) goto LAB_07277320;
                      unaff_x27[lVar31] =
                           *(short *)(lVar33 + (long)sVar8 * 2 + 0x20) + unaff_x27[lVar31];
                      lVar31 = lVar31 + 1;
                    } while ((uint)unaff_x22 != (uint)lVar31);
                    uVar15 = uVar15 + 1;
                  } while ((int)uVar15 <= iVar2);
                }
              }
              else {
                if (iVar2 < (int)uVar23) {
                  sVar25 = 0;
                  sVar28 = 0;
                  sVar32 = 0;
                  sVar35 = 0;
                  sVar36 = 0;
                  sVar8 = 0;
                }
                else {
                  lVar18 = *(long *)(unaff_x19 + 0xa0);
                  if (lVar18 == 0) goto LAB_07277350;
                  sVar8 = 0;
                  sVar36 = 0;
                  sVar35 = 0;
                  sVar32 = 0;
                  sVar28 = 0;
                  sVar25 = 0;
                  uVar15 = uVar23;
                  uVar1 = uVar23;
                  if (uVar23 <= *(uint *)(lVar18 + 0x18)) {
                    uVar1 = *(uint *)(lVar18 + 0x18);
                  }
                  do {
                    if ((uVar1 == uVar15) || (uVar3 = *(uint *)(unaff_x20 + 0x18), uVar3 == 0))
                    goto LAB_07277320;
                    lVar31 = *unaff_x29;
                    if (lVar31 == 0) goto LAB_07277350;
                    sVar5 = *(short *)(lVar18 + (long)(int)uVar15 * 2 + 0x20);
                    lVar33 = (long)sVar5;
                    if ((*(uint *)(lVar31 + 0x18) <= (uint)(int)sVar5) || (uVar3 == 1))
                    goto LAB_07277320;
                    lVar34 = *(long *)(unaff_x20 + 0x28);
                    if (lVar34 == 0) goto LAB_07277350;
                    if ((*(uint *)(lVar34 + 0x18) <= (uint)(int)sVar5) || (uVar3 < 3))
                    goto LAB_07277320;
                    lVar27 = *(long *)(unaff_x20 + 0x30);
                    if (lVar27 == 0) goto LAB_07277350;
                    uVar12 = (uint)sVar5;
                    if ((*(uint *)(lVar27 + 0x18) <= uVar12) || (uVar3 == 3)) goto LAB_07277320;
                    lVar16 = *(long *)(unaff_x20 + 0x38);
                    if (lVar16 == 0) goto LAB_07277350;
                    if ((*(uint *)(lVar16 + 0x18) <= uVar12) || (uVar3 < 5)) goto LAB_07277320;
                    lVar37 = *(long *)(unaff_x20 + 0x40);
                    if (lVar37 == 0) goto LAB_07277350;
                    if ((*(uint *)(lVar37 + 0x18) <= uVar12) || (uVar3 == 5)) goto LAB_07277320;
                    lVar13 = *(long *)(unaff_x20 + 0x48);
                    if (lVar13 == 0) goto LAB_07277350;
                    if (*(uint *)(lVar13 + 0x18) <= uVar12) goto LAB_07277320;
                    uVar15 = uVar15 + 1;
                    sVar8 = *(short *)(lVar31 + lVar33 * 2 + 0x20) + sVar8;
                    sVar36 = *(short *)(lVar34 + lVar33 * 2 + 0x20) + sVar36;
                    sVar35 = *(short *)(lVar27 + lVar33 * 2 + 0x20) + sVar35;
                    sVar32 = *(short *)(lVar16 + lVar33 * 2 + 0x20) + sVar32;
                    sVar28 = *(short *)(lVar37 + lVar33 * 2 + 0x20) + sVar28;
                    sVar25 = *(short *)(lVar13 + lVar33 * 2 + 0x20) + sVar25;
                  } while ((int)uVar15 <= iVar2);
                }
                if (((((uVar39 == 0) || (*(short *)(in_stack_00000018 + 0x20) = sVar8, uVar39 == 1))
                     || (*(short *)(in_stack_00000018 + 0x22) = sVar36, uVar39 < 3)) ||
                    ((*(short *)(in_stack_00000018 + 0x24) = sVar35, uVar39 == 3 ||
                     (*(short *)(in_stack_00000018 + 0x26) = sVar32, uVar39 < 5)))) ||
                   (*(short *)(in_stack_00000018 + 0x28) = sVar28, uVar39 == 5)) goto LAB_07277320;
                *(short *)(in_stack_00000018 + 0x2a) = sVar25;
              }
              uVar17 = 0;
              iVar14 = 999999999;
              uVar15 = 0xffffffff;
              do {
                if (uVar39 <= unaff_w28) goto LAB_07277320;
                sVar8 = unaff_x27[uVar17];
                uVar1 = (uint)uVar17;
                if (iVar14 <= sVar8) {
                  uVar1 = uVar15;
                }
                uVar17 = uVar17 + 1;
                if (sVar8 <= iVar14) {
                  iVar14 = (int)sVar8;
                }
                uVar15 = uVar1;
              } while (unaff_x22 != uVar17);
              if ((uint)param_3 <= uVar1) goto LAB_07277320;
              lVar31 = (long)(int)uVar1;
              lVar18 = *(long *)(unaff_x19 + 0x78);
              in_stack_00000028[lVar31] = in_stack_00000028[lVar31] + 1;
              if (lVar18 == 0) goto LAB_07277350;
              if (*(uint *)(lVar18 + 0x18) <= uVar38) goto LAB_07277320;
              *(short *)(lVar18 + (long)(int)uVar38 * 2 + 0x20) = (short)uVar1;
              if ((int)uVar23 <= iVar2) {
                if (*(uint *)(unaff_x24 + 0x18) <= uVar1) goto LAB_07277320;
                lVar18 = *(long *)(unaff_x19 + 0xa0);
                if (lVar18 == 0) goto LAB_07277350;
                lVar31 = *(long *)(unaff_x24 + lVar31 * 8 + 0x20);
                uVar39 = uVar23;
                if (uVar23 <= *(uint *)(lVar18 + 0x18)) {
                  uVar39 = *(uint *)(lVar18 + 0x18);
                }
                do {
                  if (uVar39 == uVar23) goto LAB_07277320;
                  if (lVar31 == 0) goto LAB_07277350;
                  sVar8 = *(short *)(lVar18 + (long)(int)uVar23 * 2 + 0x20);
                  if (*(uint *)(lVar31 + 0x18) <= (uint)(int)sVar8) goto LAB_07277320;
                  uVar23 = uVar23 + 1;
                  *(int *)(lVar31 + 0x20 + (long)(int)sVar8 * 4) =
                       *(int *)(lVar31 + 0x20 + (long)(int)sVar8 * 4) + 1;
                } while ((int)uVar23 <= iVar2);
              }
              iVar14 = *(int *)(unaff_x19 + 0xb0);
              uVar23 = iVar2 + 1;
              uVar38 = uVar38 + 1;
            } while ((int)uVar23 < iVar14);
          }
          uVar19 = 0;
          do {
            if ((*(uint *)(unaff_x20 + 0x18) <= uVar19) || (*(uint *)(unaff_x24 + 0x18) <= uVar19))
            goto LAB_07277320;
            FUN_072773a0(unaff_x29[uVar19],*(undefined8 *)(in_stack_00000030 + uVar19 * 8),
                         in_stack_00000038,0x14);
            uVar19 = uVar19 + 1;
          } while (unaff_x22 != uVar19);
          in_stack_00000010._4_4_ = in_stack_00000010._4_4_ + 1;
          if (in_stack_00000010._4_4_ == 4) {
            if (0x4652 < (int)uVar38) goto LAB_07277354;
            lVar18 = FUN_04077674(*(undefined8 *)PTR_DAT_09286040,6);
            puVar7 = PTR_DAT_092be0b0;
            puVar6 = PTR_DAT_092869a0;
            if (lVar18 == 0) goto LAB_07277350;
            uVar21 = *(ulong *)(lVar18 + 0x18);
            uVar19 = 0;
            goto LAB_07276d9c;
          }
          param_3 = *(ulong *)(in_stack_00000008 + 0x18);
          uVar21 = param_3 & 0xffffffff;
          uVar19 = unaff_x22;
          puVar20 = in_stack_00000028;
          do {
            if (uVar21 == 0) goto LAB_07277320;
            uVar19 = uVar19 - 1;
            uVar21 = uVar21 - 1;
            *puVar20 = 0;
            in_x9 = 0;
            puVar20 = puVar20 + 1;
            in_x11 = in_stack_00000038;
          } while (uVar19 != 0);
        }
        in_x12 = in_x11;
      } while ((int)in_x11 < 1);
      if (*(uint *)(unaff_x24 + 0x18) <= in_x9) break;
      lVar18 = *(long *)(unaff_x24 + in_x9 * 8 + 0x20);
      if (lVar18 == 0) goto LAB_07277350;
      param_1 = (ulong)*(uint *)(lVar18 + 0x18);
      puVar20 = (undefined4 *)(lVar18 + 0x20);
    }
    in_x10 = puVar20;
  } while (param_1 != 0);
  goto LAB_07277320;
  while( true ) {
    *(short *)(lVar18 + 0x20 + uVar19 * 2) = (short)uVar19;
    uVar19 = uVar19 + 1;
    if (unaff_x22 == uVar19) break;
LAB_07276d9c:
    if ((uVar21 & 0xffffffff) == uVar19) goto LAB_07277320;
  }
  if (0 < (int)uVar38) {
    lVar31 = *(long *)(unaff_x19 + 0x78);
    if (lVar31 == 0) goto LAB_07277350;
    uVar23 = *(uint *)(lVar31 + 0x18);
    uVar19 = 0;
    do {
      if ((uVar19 == uVar23) || (iVar14 = (int)uVar21, iVar14 == 0)) goto LAB_07277320;
      sVar8 = *(short *)(lVar31 + uVar19 * 2 + 0x20);
      if (sVar8 == *(short *)(lVar18 + 0x20)) {
        iVar29 = 0;
      }
      else {
        iVar2 = 1;
        sVar36 = *(short *)(lVar18 + 0x20);
        do {
          iVar29 = iVar2;
          if (iVar14 == iVar29) goto LAB_07277320;
          lVar33 = lVar18 + (long)iVar29 * 2;
          sVar35 = *(short *)(lVar33 + 0x20);
          *(short *)(lVar33 + 0x20) = sVar36;
          iVar2 = iVar29 + 1;
          sVar36 = sVar35;
        } while (sVar8 != sVar35);
      }
      lVar33 = *(long *)(unaff_x19 + 0x80);
      *(short *)(lVar18 + 0x20) = sVar8;
      if (lVar33 == 0) goto LAB_07277350;
      if (*(uint *)(lVar33 + 0x18) <= uVar19) goto LAB_07277320;
      lVar34 = uVar19 * 2;
      uVar19 = uVar19 + 1;
      *(short *)(lVar33 + lVar34 + 0x20) = (short)iVar29;
    } while (uVar19 != uVar38);
  }
  lVar18 = FUN_04077674(*(undefined8 *)puVar7,6);
  uVar19 = 0;
  puVar40 = (undefined8 *)(lVar18 + 0x20);
  do {
    uVar9 = FUN_04077674(*(undefined8 *)puVar6,0x102);
    if (lVar18 == 0) goto LAB_07277350;
    if (*(uint *)(lVar18 + 0x18) <= uVar19) goto LAB_07277320;
    *puVar40 = uVar9;
    thunk_FUN_040ec700(puVar40,uVar9);
    uVar19 = uVar19 + 1;
    puVar40 = puVar40 + 1;
  } while (uVar19 != 6);
  uVar19 = 0;
  iVar14 = (int)in_stack_00000038;
  do {
    lVar31 = unaff_x20 + uVar19 * 8;
    if (iVar14 < 1) {
      uVar11 = 0;
      uVar10 = 0x20;
    }
    else {
      if (*(uint *)(unaff_x20 + 0x18) <= uVar19) goto LAB_07277320;
      lVar33 = *(long *)(lVar31 + 0x20);
      if (lVar33 == 0) goto LAB_07277350;
      uVar11 = 0;
      uVar10 = 0x20;
      puVar22 = (ushort *)(lVar33 + 0x20);
      lVar34 = (long)iVar14;
      do {
        if (*(uint *)(lVar33 + 0x18) <= in_stack_00000000) goto LAB_07277320;
        uVar4 = *puVar22;
        if (uVar11 <= uVar4) {
          uVar11 = uVar4;
        }
        if (uVar4 <= uVar10) {
          uVar10 = uVar4;
        }
        lVar34 = lVar34 + -1;
        puVar22 = puVar22 + 1;
      } while (lVar34 != 0);
      if ((0x14 < uVar11) || (uVar10 == 0)) goto LAB_07277354;
    }
    if ((*(uint *)(lVar18 + 0x18) <= uVar19) || (*(uint *)(unaff_x20 + 0x18) <= uVar19))
    goto LAB_07277320;
    FUN_072779c0(*(undefined8 *)(lVar18 + uVar19 * 8 + 0x20),*(undefined8 *)(lVar31 + 0x20),uVar10,
                 uVar11,in_stack_00000038 & 0xffffffff);
    uVar19 = uVar19 + 1;
  } while (uVar19 != unaff_x22);
  lVar31 = FUN_04077674(*(undefined8 *)PTR_DAT_09287a50,0x10);
  if (lVar31 == 0) {
LAB_07277350:
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  uVar23 = *(uint *)(lVar31 + 0x18);
  lVar33 = 0;
  uVar19 = 0;
  do {
    if (uVar19 == uVar23) goto LAB_07277320;
    lVar34 = *(long *)(unaff_x19 + 0x58);
    puVar24 = (undefined1 *)(lVar31 + uVar19 + 0x20);
    *puVar24 = 0;
    if (lVar34 == 0) goto LAB_07277350;
    uVar39 = *(uint *)(lVar34 + 0x18);
    lVar27 = 0;
    do {
      if ((ulong)uVar39 <= (ulong)(lVar33 + lVar27)) goto LAB_07277320;
      if (*(char *)(lVar34 + lVar33 + 0x20 + lVar27) != '\0') {
        *puVar24 = 1;
      }
      lVar27 = lVar27 + 1;
    } while (lVar27 != 0x10);
    uVar19 = uVar19 + 1;
    lVar33 = lVar33 + 0x10;
  } while (uVar19 != 0x10);
  uVar19 = 0;
  do {
    if (*(uint *)(lVar31 + 0x18) <= uVar19) goto LAB_07277320;
    FUN_07276410();
    uVar19 = uVar19 + 1;
  } while (uVar19 != 0x10);
  lVar33 = 0;
  uVar19 = 0;
  do {
    if (*(uint *)(lVar31 + 0x18) <= uVar19) goto LAB_07277320;
    if (*(char *)(lVar31 + uVar19 + 0x20) != '\0') {
      lVar34 = 0;
      do {
        if (*(long *)(unaff_x19 + 0x58) == 0) goto LAB_07277350;
        if ((ulong)*(uint *)(*(long *)(unaff_x19 + 0x58) + 0x18) <= (ulong)(lVar33 + lVar34))
        goto LAB_07277320;
        FUN_07276410();
        lVar34 = lVar34 + 1;
      } while (lVar34 != 0x10);
    }
    uVar19 = uVar19 + 1;
    lVar33 = lVar33 + 0x10;
  } while (uVar19 != 0x10);
  FUN_07276410();
  FUN_07276410();
  if (0 < (int)uVar38) {
    uVar19 = 0;
    do {
      lVar31 = *(long *)(unaff_x19 + 0x80);
      if (lVar31 == 0) goto LAB_07277350;
      uVar23 = 0xffffffff;
      while( true ) {
        if (*(uint *)(lVar31 + 0x18) <= uVar19) goto LAB_07277320;
        uVar23 = uVar23 + 1;
        if (*(ushort *)(lVar31 + uVar19 * 2 + 0x20) <= uVar23) break;
        FUN_07276410();
        lVar31 = *(long *)(unaff_x19 + 0x80);
        if (lVar31 == 0) goto LAB_07277350;
      }
      FUN_07276410();
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar38);
  }
  uVar23 = 0;
  while (uVar23 < *(uint *)(unaff_x20 + 0x18)) {
    plVar41 = (long *)(unaff_x20 + (ulong)uVar23 * 8 + 0x20);
    lVar31 = *plVar41;
    if (lVar31 == 0) goto LAB_07277350;
    if (*(int *)(lVar31 + 0x18) == 0) break;
    uVar39 = (uint)*(ushort *)(lVar31 + 0x20);
    FUN_07276410();
    if (0 < iVar14) {
      uVar19 = 0;
      do {
        uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
        uVar15 = (uint)uVar9;
        while( true ) {
          if (uVar15 <= uVar23) goto LAB_07277320;
          lVar31 = *plVar41;
          if (lVar31 == 0) goto LAB_07277350;
          if (*(uint *)(lVar31 + 0x18) <= uVar19) goto LAB_07277320;
          if ((int)(uint)*(ushort *)(lVar31 + uVar19 * 2 + 0x20) <= (int)uVar39) break;
          FUN_07276410();
          uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
          uVar39 = uVar39 + 1;
          uVar15 = (uint)uVar9;
        }
        uVar15 = (uint)uVar9;
        while( true ) {
          if (uVar15 <= uVar23) goto LAB_07277320;
          lVar31 = *plVar41;
          if (lVar31 == 0) goto LAB_07277350;
          if (*(uint *)(lVar31 + 0x18) <= uVar19) goto LAB_07277320;
          if ((int)uVar39 <= (int)(uint)*(ushort *)(lVar31 + uVar19 * 2 + 0x20)) break;
          uVar39 = uVar39 - 1;
          FUN_07276410();
          uVar15 = *(uint *)(unaff_x20 + 0x18);
        }
        FUN_07276410();
        uVar19 = uVar19 + 1;
      } while (uVar19 != in_stack_00000038);
    }
    uVar23 = uVar23 + 1;
    if (uVar23 == (uint)unaff_x22) {
      iVar14 = *(int *)(unaff_x19 + 0xb0);
      if (iVar14 < 1) {
        uVar23 = 0;
      }
      else {
        uVar39 = 0;
        uVar23 = 0;
        do {
          iVar2 = uVar39 + 0x31;
          if (iVar14 <= (int)(uVar39 + 0x31)) {
            iVar2 = iVar14 + -1;
          }
          if ((int)uVar39 <= iVar2) {
            do {
              lVar31 = *(long *)(unaff_x19 + 0x78);
              if (lVar31 == 0) goto LAB_07277350;
              if (*(uint *)(lVar31 + 0x18) <= uVar23) goto LAB_07277320;
              uVar11 = *(ushort *)(lVar31 + (long)(int)uVar23 * 2 + 0x20);
              if (*(uint *)(unaff_x20 + 0x18) <= (uint)uVar11) goto LAB_07277320;
              lVar31 = *(long *)(unaff_x19 + 0xa0);
              if (lVar31 == 0) goto LAB_07277350;
              if (*(uint *)(lVar31 + 0x18) <= uVar39) goto LAB_07277320;
              lVar33 = *(long *)(unaff_x20 + (ulong)uVar11 * 8 + 0x20);
              if (lVar33 == 0) goto LAB_07277350;
              uVar15 = (uint)*(short *)(lVar31 + (long)(int)uVar39 * 2 + 0x20);
              if ((*(uint *)(lVar33 + 0x18) <= uVar15) || (*(uint *)(lVar18 + 0x18) <= (uint)uVar11)
                 ) goto LAB_07277320;
              lVar31 = *(long *)(lVar18 + (ulong)uVar11 * 8 + 0x20);
              if (lVar31 == 0) goto LAB_07277350;
              if (*(uint *)(lVar31 + 0x18) <= uVar15) goto LAB_07277320;
              FUN_07276410();
              uVar39 = uVar39 + 1;
            } while ((int)uVar39 <= iVar2);
            iVar14 = *(int *)(unaff_x19 + 0xb0);
          }
          uVar39 = iVar2 + 1;
          uVar23 = uVar23 + 1;
        } while ((int)uVar39 < iVar14);
      }
      if (uVar23 == uVar38) {
        return;
      }
LAB_07277354:
                    /* WARNING: Subroutine does not return */
      FUN_07277358();
    }
  }
LAB_07277320:
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


