/*
FUNCTION_NAME: OVRPlugin.ControllerState4$$.ctor
ENTRY_POINT: 06aed3bc
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_ControllerState4___ctor(void)

{
  ulong *puVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  long unaff_x19;
  long *unaff_x20;
  undefined8 *puVar10;
  float *pfVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  
  if (unaff_x19 == 0) {
LAB_06aed68c:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06aed3b8 with catch @ 06aed3c0
                        */
  lVar4 = FUN_03398188(DAT_083c7db8,*(undefined4 *)(unaff_x19 + 0x18));
  *unaff_x20 = lVar4;
  if (DAT_08908cd0 != 0) {
    puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x20 >> 0x12 & 0x7fff);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = *puVar1 | 1L << ((ulong)unaff_x20 >> 0xc & 0x3f);
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar6 = *(ulong *)(unaff_x19 + 0x18);
  fVar18 = 0.0;
  uVar5 = uVar6 & 0xffffffff;
  if (1 < (int)uVar6) {
    uVar5 = uVar6 & 0xffffffff;
    puVar10 = (undefined8 *)(unaff_x19 + 0x30);
    fVar18 = 0.0;
    uVar6 = 1;
    do {
      if ((uVar5 <= uVar6) || (uVar5 <= uVar6 - 1)) goto LAB_06aed688;
      uVar17 = *puVar10;
      fVar19 = *(float *)((long)puVar10 + -4);
      fVar20 = *(float *)(puVar10 + -2);
      uVar21 = *(undefined8 *)((long)puVar10 + -0xc);
      if (DAT_086d7cc9 == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        DAT_086d7cc9 = '\x01';
      }
      if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar19 = fVar19 - fVar20;
      fVar20 = (float)uVar17 - (float)uVar21;
      fVar13 = (float)((ulong)uVar17 >> 0x20) - (float)((ulong)uVar21 >> 0x20);
      uVar5 = (ulong)*(uint *)(unaff_x19 + 0x18);
      uVar6 = uVar6 + 1;
      fVar18 = fVar18 + SQRT(fVar19 * fVar19 + fVar20 * fVar20 + fVar13 * fVar13);
      puVar10 = (undefined8 *)((long)puVar10 + 0xc);
    } while ((long)uVar6 < (long)(int)*(uint *)(unaff_x19 + 0x18));
  }
  if (0 < (int)uVar5) {
    uVar6 = 0;
    lVar4 = 0x3c;
    pfVar11 = (float *)(unaff_x19 + 0x28);
    do {
      if (lVar4 == 0x3c) {
        if ((uint)uVar5 < 2) goto LAB_06aed688;
        uVar17 = *(undefined8 *)(unaff_x19 + 0x2c);
        uVar21 = *(undefined8 *)(unaff_x19 + 0x20);
        pfVar7 = (float *)(unaff_x19 + 0x28);
        pfVar8 = (float *)(unaff_x19 + 0x34);
      }
      else {
        if (((uVar5 & 0xffffffff) <= uVar6) || ((uint)uVar5 <= (int)uVar6 - 1U)) {
LAB_06aed688:
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        uVar17 = *(undefined8 *)(pfVar11 + -2);
        uVar21 = *(undefined8 *)(pfVar11 + -5);
        pfVar7 = pfVar11 + -3;
        pfVar8 = pfVar11;
      }
      fVar19 = (float)uVar17 - (float)uVar21;
      fVar20 = (float)((ulong)uVar17 >> 0x20) - (float)((ulong)uVar21 >> 0x20);
      lVar9 = *unaff_x20;
      if (lVar9 == 0) goto LAB_06aed68c;
      if (((uVar5 & 0xffffffff) <= uVar6) || (*(uint *)(lVar9 + 0x18) <= uVar6)) goto LAB_06aed688;
      fVar15 = *pfVar11;
      fVar16 = *pfVar8;
      fVar13 = *pfVar7;
      *(undefined8 *)(lVar9 + lVar4 + -0x1c) = *(undefined8 *)(pfVar11 + -2);
      *(float *)(lVar9 + lVar4 + -0x14) = fVar15;
      lVar9 = *unaff_x20;
      if (lVar9 == 0) goto LAB_06aed68c;
      fVar16 = fVar16 - fVar13;
      fVar13 = fVar20;
      fVar14 = fVar16;
      uVar12 = FUN_07a00a64(0);
      if (*(uint *)(lVar9 + 0x18) <= uVar6) goto LAB_06aed688;
      lVar9 = lVar9 + lVar4;
      *(undefined4 *)(lVar9 + -0x10) = uVar12;
      *(float *)(lVar9 + -0xc) = fVar13;
      *(float *)(lVar9 + -8) = fVar14;
      *(float *)(lVar9 + -4) = fVar15;
      lVar9 = *unaff_x20;
      if (lVar9 == 0) goto LAB_06aed68c;
      if ((*(ulong *)(lVar9 + 0x18) & 0xffffffff) <= uVar6) goto LAB_06aed688;
      fVar13 = 0.0;
      if (lVar4 != 0x3c) {
        if ((uint)*(ulong *)(lVar9 + 0x18) <= (int)uVar6 - 1U) goto LAB_06aed688;
        fVar13 = *(float *)(lVar9 + lVar4 + -0x20);
        if (DAT_086d7cc9 == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          DAT_086d7cc9 = '\x01';
        }
        if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        fVar13 = SQRT(fVar19 * fVar19 + fVar20 * fVar20 + fVar16 * fVar16) / fVar18 + fVar13;
      }
      *(float *)(lVar9 + lVar4) = fVar13;
      uVar5 = *(ulong *)(unaff_x19 + 0x18);
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 0x20;
      pfVar11 = pfVar11 + 3;
    } while ((long)uVar6 < (long)(int)uVar5);
  }
  return;
}


