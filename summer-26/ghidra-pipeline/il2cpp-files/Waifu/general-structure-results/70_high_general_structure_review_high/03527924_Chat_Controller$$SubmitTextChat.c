/*
FUNCTION_NAME: Chat_Controller$$SubmitTextChat
ENTRY_POINT: 03527924
PROGRAM: Waifu-libil2cpp.so
SCORE: 84
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;data_collection;frame_behavior
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_3;strong_file_logging_hits_3;frame_or_lifecycle_behavior
*/


/* WARNING: Removing unreachable block (ram,0x03527c7c) */

void Chat_Controller__SubmitTextChat(void)

{
  ulong *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long unaff_x19;
  long lVar10;
  long unaff_x23;
  long *plVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  float fVar19;
  ulong uVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  
  FUN_033b9870();
  uVar5 = FUN_07a0d2c4();
  if ((uVar5 & 1) != 0) {
    if ((*(long *)(unaff_x19 + 0x38) == 0) ||
       (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x40), lVar7 == 0)) goto LAB_03528474;
    uVar8 = *(undefined8 *)(lVar7 + 0x90);
    *(undefined4 *)(unaff_x19 + 0xfc) = *(undefined4 *)(lVar7 + 0x98);
    *(undefined8 *)(unaff_x19 + 0xf4) = uVar8;
  }
  if (*(char *)(unaff_x19 + 0xd4) == '\0') {
    uVar8 = *(undefined8 *)(unaff_x19 + 0x28);
    if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = FUN_07a0d2c4(uVar8,0,0);
    if ((uVar5 & 1) != 0) {
      *(undefined1 *)(unaff_x19 + 0xd4) = 1;
      uVar8 = *(undefined8 *)(unaff_x19 + 0x40);
      if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar5 = FUN_07a0d2c4(uVar8,0,0);
      if ((uVar5 & 1) != 0) {
        lVar7 = *(long *)(unaff_x19 + 0x40);
        if (lVar7 == 0) goto LAB_03528474;
        if (DAT_086ef168 == (code *)0x0) {
          DAT_086ef168 = (code *)FUN_033d1b68("UnityEngine.Behaviour::set_enabled(System.Boolean)");
        }
        (*DAT_086ef168)(lVar7,0);
      }
      if ((*(long *)(unaff_x19 + 0x28) == 0) ||
         (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x48), lVar7 == 0)) goto LAB_03528474;
      plVar11 = (long *)(lVar7 + 0x40);
      lVar7 = *plVar11;
      uVar8 = FUN_03398a84(DAT_083d6648);
      FUN_034e0ef8();
      plVar6 = (long *)FUN_0687a9b0(lVar7,uVar8,0);
      lVar7 = DAT_083d6648;
      if (plVar6 == (long *)0x0) {
        *plVar11 = 0;
      }
      else if ((*plVar6 != DAT_083d6648) || (*plVar11 = (long)plVar6, *plVar6 != lVar7))
      goto LAB_03527b38;
      if (DAT_08908cd0 != 0) {
        puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
      if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
        FUN_033b9870();
      }
      uVar5 = FUN_07a0d2c4(uVar8,0,0);
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(unaff_x19 + 0x38) == 0) ||
           (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x40), lVar7 == 0)) goto LAB_03528474;
        plVar11 = (long *)(lVar7 + 0x40);
        lVar7 = *plVar11;
        uVar8 = FUN_03398a84(DAT_083d6648);
        FUN_034e0ef8();
        plVar6 = (long *)FUN_0687a9b0(lVar7,uVar8,0);
        lVar7 = DAT_083d6648;
        if (plVar6 == (long *)0x0) {
          *plVar11 = 0;
        }
        else if ((*plVar6 != DAT_083d6648) || (*plVar11 = (long)plVar6, *plVar6 != lVar7)) {
LAB_03527b38:
                    /* WARNING: Subroutine does not return */
          FUN_033d1fec();
        }
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)plVar11 >> 0x12 & 0x7fff);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)plVar11 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
      }
    }
  }
  if (DAT_086ef688 == (code *)0x0) {
    DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
  }
  fVar13 = (float)(*DAT_086ef688)();
  fVar29 = *(float *)(unaff_x19 + 0x9c);
  if (fVar29 <= fVar13) {
    if (DAT_086d7c53 == '\0') {
      FUN_0335b6c8(&DAT_083d0300,1);
      DataMemoryBarrier(2,3);
      DAT_086d7c53 = '\x01';
    }
    uVar8 = **(undefined8 **)(DAT_083d0300 + 0xb8);
    *(undefined8 *)(unaff_x19 + 0x90) = (*(undefined8 **)(DAT_083d0300 + 0xb8))[1];
    *(undefined8 *)(unaff_x19 + 0x88) = uVar8;
    return;
  }
  fVar14 = *(float *)(unaff_x19 + 0x7c);
  fVar13 = fVar14;
  if (fVar14 <= 0.0) {
    fVar13 = 0.0;
  }
  *(float *)(unaff_x19 + 0x7c) = fVar13;
  uVar15 = 0x3f800000;
  if (0.0 < fVar14) {
    fVar13 = *(float *)(unaff_x19 + 0xd8);
    if (DAT_086ef698 == (code *)0x0) {
      DAT_086ef698 = (code *)FUN_033d1b68("UnityEngine.Time::get_deltaTime()");
    }
    fVar14 = (float)(*DAT_086ef698)();
    fVar29 = *(float *)(unaff_x19 + 0x9c);
    uVar15 = NEON_fminnm(fVar13 + fVar14 * (1.0 / *(float *)(unaff_x19 + 0x7c)),0x3f800000);
  }
  *(undefined4 *)(unaff_x19 + 0xd8) = uVar15;
  lVar7 = *(long *)(unaff_x19 + 0x58);
  fVar13 = *(float *)(unaff_x19 + 0xd0);
  if (DAT_086ef688 == (code *)0x0) {
    DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
  }
  fVar14 = (float)(*DAT_086ef688)();
  if (lVar7 == 0) goto LAB_03528474;
  if (DAT_086ed278 == (code *)0x0) {
    DAT_086ed278 = (code *)FUN_033d1b68("UnityEngine.AnimationCurve::Evaluate(System.Single)");
  }
  fVar16 = (float)(*DAT_086ed278)(fVar13 - (fVar29 - fVar14),lVar7);
  fVar13 = *(float *)(unaff_x19 + 0xd8);
  fVar14 = *(float *)(unaff_x19 + 0xdc);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
  fVar29 = 0.0;
  if (fVar13 < 0.0) {
    fVar13 = 0.0;
  }
  *(float *)(unaff_x19 + 0xdc) = fVar14 + (fVar16 * *(float *)(unaff_x19 + 0x98) - fVar14) * fVar13;
  if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
    fVar29 = 0.0;
    FUN_033b9870();
  }
  uVar5 = FUN_07a0d2c4(uVar8,0,0);
  if ((uVar5 & 1) == 0) {
LAB_03527d00:
    if ((*(long *)(unaff_x19 + 0x28) == 0) ||
       ((lVar7 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x40), lVar7 == 0 ||
        (lVar7 = *(long *)(lVar7 + 0x10), lVar7 == 0)))) goto LAB_03528474;
    fVar16 = (float)FUN_07a172b0(lVar7,0);
  }
  else {
    if ((*(long *)(unaff_x19 + 0x38) == 0) ||
       (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x40), lVar7 == 0)) goto LAB_03528474;
    uVar8 = *(undefined8 *)(lVar7 + 0x88);
    if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
      FUN_033b9870();
    }
    uVar5 = FUN_07a0d2c4(uVar8,0,0);
    if (((uVar5 & 1) == 0) || (*(char *)(unaff_x19 + 0x48) != '\0')) goto LAB_03527d00;
    if (((*(long *)(unaff_x19 + 0x38) == 0) ||
        (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x40), lVar7 == 0)) ||
       (*(long *)(lVar7 + 0x88) == 0)) goto LAB_03528474;
    fVar14 = *(float *)(lVar7 + 0x18);
    fVar19 = *(float *)(lVar7 + 0x1c);
    fVar17 = *(float *)(lVar7 + 0x14);
    fVar16 = (float)FUN_07a18d2c(*(long *)(lVar7 + 0x88),0);
    if (((*(long *)(unaff_x19 + 0x28) == 0) ||
        (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x40), lVar7 == 0)) ||
       (lVar7 = *(long *)(lVar7 + 0x10), lVar7 == 0)) goto LAB_03528474;
    fVar13 = fVar14 - fVar13;
    fVar29 = fVar19 - fVar29;
    fVar14 = (float)FUN_07a193bc(lVar7,0);
    fVar16 = (float)FUN_07a009b0(fVar17 - fVar16,0);
  }
  lVar7 = *(long *)(unaff_x19 + 0x80);
  if (lVar7 == 0) goto LAB_03528474;
  uVar2 = *(uint *)(lVar7 + 0x18);
  if (0 < (int)uVar2) {
    fVar28 = *(float *)(unaff_x19 + 200);
    fVar23 = *(float *)(unaff_x19 + 0xcc);
    fVar25 = *(float *)(unaff_x19 + 0xc0);
    fVar26 = *(float *)(unaff_x19 + 0xc4);
    lVar12 = 0;
    fVar31 = fVar14 * fVar23;
    fVar32 = fVar13 * fVar26;
    fVar33 = fVar29 * fVar28;
    fVar34 = fVar25 * fVar13;
    fVar35 = fVar14 * fVar28;
    fVar36 = fVar29 * fVar23;
    fVar37 = fVar14 * fVar26;
    fVar27 = fVar29 * fVar26;
    fVar19 = fVar25 * fVar29;
    fVar22 = fVar25 * fVar14;
    fVar24 = fVar13 * fVar23;
    fVar17 = fVar13 * fVar28;
    do {
      if (uVar2 <= (uint)lVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_033d1d44();
      }
      if (*(long *)(unaff_x19 + 0x28) == 0) goto LAB_03528474;
      lVar10 = *(long *)(lVar7 + 0x20 + lVar12 * 8);
      uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x28) + 0x48);
      if (DAT_086ef688 == (code *)0x0) {
        DAT_086ef688 = (code *)FUN_033d1b68("UnityEngine.Time::get_time()");
      }
      (*DAT_086ef688)();
      if (lVar10 == 0) goto LAB_03528474;
      fVar13 = (fVar16 * fVar28 + fVar37 + fVar24) - fVar19;
      fVar29 = (fVar34 + fVar35 + fVar36) - fVar16 * fVar26;
      fVar14 = ((fVar31 - fVar25 * fVar16) - fVar32) - fVar33;
      FUN_0352847c((fVar27 + fVar22 + fVar16 * fVar23) - fVar17,lVar10,uVar8);
      uVar2 = *(uint *)(lVar7 + 0x18);
      lVar12 = lVar12 + 1;
    } while ((int)lVar12 < (int)uVar2);
  }
  if (*(char *)(unaff_x19 + 0xf0) == '\0') {
    lVar7 = FUN_0352869c();
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) goto LAB_03528474;
    uVar15 = FUN_07a172b0(*(long *)(lVar7 + 0x10),0);
    *(undefined4 *)(unaff_x19 + 0xe0) = uVar15;
    *(float *)(unaff_x19 + 0xe4) = fVar13;
    *(float *)(unaff_x19 + 0xe8) = fVar29;
    *(float *)(unaff_x19 + 0xec) = fVar14;
  }
  *(undefined1 *)(unaff_x19 + 0xf0) = 0;
  if (DAT_086d7c53 == '\0') {
    FUN_0335b6c8(&DAT_083d0300,1);
    DataMemoryBarrier(2,3);
    DAT_086d7c53 = '\x01';
  }
  fVar13 = *(float *)(unaff_x19 + 0xc0);
  fVar29 = *(float *)(unaff_x19 + 0xc4);
  fVar23 = *(float *)(unaff_x19 + 200);
  fVar17 = *(float *)(unaff_x19 + 0xcc);
  fVar25 = *(float *)(unaff_x19 + 0xe0);
  fVar26 = *(float *)(unaff_x19 + 0xe4);
  fVar27 = *(float *)(unaff_x19 + 0xe8);
  fVar28 = *(float *)(unaff_x19 + 0xec);
  puVar9 = *(undefined4 **)(DAT_083d0300 + 0xb8);
  fVar14 = (fVar23 * fVar25 + fVar17 * fVar26 + fVar29 * fVar28) - fVar13 * fVar27;
  uVar15 = *puVar9;
  fVar16 = (float)puVar9[1];
  fVar22 = (float)puVar9[2];
  fVar24 = (float)puVar9[3];
  fVar19 = (fVar13 * fVar26 + fVar17 * fVar27 + fVar23 * fVar28) - fVar29 * fVar25;
  fVar13 = (float)FUN_07a00c3c((fVar29 * fVar27 + fVar17 * fVar25 + fVar13 * fVar28) -
                               fVar23 * fVar26,fVar14,fVar19,
                               ((fVar17 * fVar28 - fVar13 * fVar25) - fVar29 * fVar26) -
                               fVar23 * fVar27,*(undefined4 *)(unaff_x19 + 0x70),
                               *(undefined4 *)(unaff_x19 + 0x74),*(undefined4 *)(unaff_x19 + 0x78),0
                              );
  FUN_07a00714(fVar13 * DAT_012edabc,fVar14 * DAT_012edabc,fVar19 * DAT_012edabc,0);
  fVar29 = (float)FUN_07a00640(uVar15,0);
  fVar19 = *(float *)(unaff_x19 + 0xe0);
  fVar26 = *(float *)(unaff_x19 + 0xe4);
  fVar23 = *(float *)(unaff_x19 + 0xe8);
  fVar25 = *(float *)(unaff_x19 + 0xec);
  *(float *)(unaff_x19 + 0x88) = fVar29;
  *(float *)(unaff_x19 + 0x8c) = fVar16;
  *(float *)(unaff_x19 + 0x90) = fVar22;
  *(float *)(unaff_x19 + 0x94) = fVar24;
  fVar13 = fVar22 * fVar23;
  uVar20 = (ulong)(uint)fVar13;
  fVar17 = (fVar16 * fVar23 + fVar24 * fVar19 + fVar29 * fVar25) - fVar22 * fVar26;
  uVar5 = (ulong)(uint)fVar17;
  fVar14 = (fVar22 * fVar19 + fVar24 * fVar26 + fVar16 * fVar25) - fVar29 * fVar23;
  *(float *)(unaff_x19 + 0xa0) = fVar17;
  *(float *)(unaff_x19 + 0xa4) = fVar14;
  *(float *)(unaff_x19 + 0xa8) =
       (fVar29 * fVar26 + fVar24 * fVar23 + fVar22 * fVar25) - fVar16 * fVar19;
  *(float *)(unaff_x19 + 0xac) = ((fVar24 * fVar25 - fVar29 * fVar19) - fVar16 * fVar26) - fVar13;
  if (*(char *)(unaff_x19 + 0x50) != '\0') {
    lVar7 = FUN_0352869c();
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) goto LAB_03528474;
    FUN_07a172b0(*(long *)(lVar7 + 0x10),0);
    uVar8 = FUN_07a00400(0);
    lVar7 = FUN_035286d0();
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) goto LAB_03528474;
    FUN_07a18d2c(*(long *)(lVar7 + 0x10),0);
    lVar7 = FUN_0352869c();
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) goto LAB_03528474;
    FUN_07a18d2c(*(long *)(lVar7 + 0x10),0);
    uVar8 = FUN_07a00c3c(uVar8,0);
    uVar18 = uVar5;
    uVar21 = uVar20;
    lVar7 = FUN_0352869c();
    fVar29 = (float)uVar21;
    fVar13 = (float)uVar18;
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) goto LAB_03528474;
    FUN_07a172b0(*(long *)(lVar7 + 0x10),0);
    fVar22 = (float)FUN_07a00400(0);
    fVar16 = fVar14;
    fVar17 = fVar13;
    fVar19 = fVar29;
    lVar7 = FUN_035286d0();
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) goto LAB_03528474;
    fVar23 = (float)FUN_07a172b0(*(long *)(lVar7 + 0x10),0);
    fVar25 = fVar29 * fVar19;
    fVar24 = ((fVar14 * fVar16 - fVar22 * fVar23) - fVar13 * fVar17) - fVar25;
    *(float *)(unaff_x19 + 0xb0) =
         (fVar13 * fVar19 + fVar14 * fVar23 + fVar22 * fVar16) - fVar29 * fVar17;
    *(float *)(unaff_x19 + 0xb4) =
         (fVar29 * fVar23 + fVar14 * fVar17 + fVar13 * fVar16) - fVar22 * fVar19;
    *(float *)(unaff_x19 + 0xb8) =
         (fVar22 * fVar17 + fVar14 * fVar19 + fVar29 * fVar16) - fVar13 * fVar23;
    *(float *)(unaff_x19 + 0xbc) = fVar24;
    lVar7 = FUN_0352869c();
    if ((lVar7 == 0) || (*(long *)(lVar7 + 0x10) == 0)) goto LAB_03528474;
    fVar29 = (float)FUN_07a18d2c(*(long *)(lVar7 + 0x10),0);
    lVar7 = FUN_0352869c();
    if (lVar7 == 0) goto LAB_03528474;
    fVar17 = *(float *)(unaff_x19 + 0xa4);
    fVar19 = *(float *)(unaff_x19 + 0xa8);
    uVar30 = *(undefined8 *)(lVar7 + 0x44);
    fVar22 = *(float *)(lVar7 + 0x4c);
    fVar14 = (float)FUN_07a00c3c(*(undefined4 *)(unaff_x19 + 0xa0),fVar17,fVar19,
                                 *(undefined4 *)(unaff_x19 + 0xac),uVar8,uVar5,uVar20,0);
    fVar13 = fVar19;
    fVar16 = fVar17;
    lVar7 = FUN_035286d0();
    if (lVar7 == 0) goto LAB_03528474;
    uVar8 = *(undefined8 *)(lVar7 + 0x44);
    fVar23 = *(float *)(lVar7 + 0x4c);
    lVar12 = FUN_035286d0();
    if ((lVar12 == 0) || (*(long *)(lVar12 + 0x10) == 0)) goto LAB_03528474;
    fVar26 = (float)FUN_07a18d2c(*(long *)(lVar12 + 0x10),0);
    lVar12 = FUN_035286d0();
    if (lVar12 == 0) goto LAB_03528474;
    fVar14 = fVar29 + (float)uVar30 + fVar14;
    fVar13 = fVar13 + *(float *)(lVar12 + 0x4c);
    uVar5 = CONCAT44((float)((ulong)uVar8 >> 0x20) +
                     ((fVar24 + (float)((ulong)uVar30 >> 0x20) + fVar17) -
                     (fVar16 + (float)((ulong)*(undefined8 *)(lVar12 + 0x44) >> 0x20))),
                     (float)uVar8 + (fVar14 - (fVar26 + (float)*(undefined8 *)(lVar12 + 0x44))));
    *(ulong *)(lVar7 + 0x44) = uVar5;
    *(float *)(lVar7 + 0x4c) = fVar23 + ((fVar25 + fVar22 + fVar19) - fVar13);
  }
  fVar29 = (float)uVar5;
  uVar8 = *(undefined8 *)(unaff_x19 + 0x38);
  if (*(int *)(*(long *)(unaff_x23 + 0x7d8) + 0xe0) == 0) {
    FUN_033b9870();
  }
  uVar5 = FUN_07a0d2c4(uVar8,0,0);
  if (((uVar5 & 1) == 0) || (*(char *)(unaff_x19 + 0x48) == '\0')) {
    return;
  }
  if ((*(long *)(unaff_x19 + 0x38) != 0) &&
     (((*(long *)(unaff_x19 + 0x28) != 0 &&
       (lVar7 = *(long *)(*(long *)(unaff_x19 + 0x28) + 0x40), lVar7 != 0)) &&
      (lVar7 = *(long *)(lVar7 + 0x10), lVar7 != 0)))) {
    lVar12 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x40);
    FUN_07a172b0(lVar7,0);
    fVar16 = (float)FUN_07a00400(0);
    fVar23 = *(float *)(unaff_x19 + 0x90);
    fVar25 = *(float *)(unaff_x19 + 0x94);
    fVar19 = *(float *)(unaff_x19 + 0x8c);
    fVar17 = (float)FUN_07a00400(*(undefined4 *)(unaff_x19 + 0x88),0);
    fVar22 = (fVar13 * fVar17 + fVar14 * fVar19 + fVar29 * fVar25) - fVar16 * fVar23;
    fVar24 = (fVar16 * fVar19 + fVar14 * fVar23 + fVar13 * fVar25) - fVar29 * fVar17;
    uVar15 = FUN_07a00c3c((fVar29 * fVar23 + fVar14 * fVar17 + fVar16 * fVar25) - fVar13 * fVar19,
                          fVar22,fVar24,
                          ((fVar14 * fVar25 - fVar16 * fVar17) - fVar29 * fVar19) - fVar13 * fVar23,
                          *(undefined4 *)(unaff_x19 + 0xf4),*(undefined4 *)(unaff_x19 + 0xf8),
                          *(undefined4 *)(unaff_x19 + 0xfc),0);
    if (lVar12 != 0) {
      *(undefined4 *)(lVar12 + 0x90) = uVar15;
      *(float *)(lVar12 + 0x94) = fVar22;
      *(float *)(lVar12 + 0x98) = fVar24;
      return;
    }
  }
LAB_03528474:
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


