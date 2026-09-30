/*
FUNCTION_NAME: OVRPlugin.Sizei$$Equals
ENTRY_POINT: 06aed480
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Sizei__Equals(void)

{
  uint uVar1;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 unaff_w25;
  ulong unaff_x26;
  long lVar8;
  float *pfVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar15;
  undefined8 uVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 unaff_d8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  undefined8 unaff_d12;
  
  do {
    FUN_0335b6c8();
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x22 + 0xcc9) = unaff_w25;
    puVar6 = unaff_x24;
    do {
      if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar12 = (float)unaff_d8 - (float)unaff_d12;
      fVar15 = (float)((ulong)unaff_d8 >> 0x20) - (float)((ulong)unaff_d12 >> 0x20);
      uVar1 = *(uint *)(unaff_x19 + 0x18);
      uVar2 = (ulong)uVar1;
      unaff_s9 = unaff_s9 +
                 SQRT((unaff_s10 - unaff_s11) * (unaff_s10 - unaff_s11) + fVar12 * fVar12 +
                      fVar15 * fVar15);
      unaff_x24 = (undefined8 *)((long)puVar6 + 0xc);
      if ((long)(int)uVar1 <= (long)(unaff_x26 + 2)) {
        if ((int)uVar1 < 1) {
          return;
        }
        uVar7 = 0;
        lVar8 = 0x3c;
        pfVar9 = (float *)(unaff_x19 + 0x28);
        goto LAB_06aed500;
      }
      if ((uVar2 <= unaff_x26 + 2) || (unaff_x26 = unaff_x26 + 1, uVar2 <= unaff_x26))
      goto LAB_06aed688;
      unaff_d8 = *unaff_x24;
      unaff_s10 = *(float *)(puVar6 + 1);
      unaff_s11 = *(float *)((long)puVar6 + -4);
      unaff_d12 = *puVar6;
      puVar6 = unaff_x24;
    } while (*(char *)(unaff_x22 + 0xcc9) != '\0');
  } while( true );
LAB_06aed500:
  if (lVar8 == 0x3c) {
    if ((uint)uVar2 < 2) goto LAB_06aed688;
    uVar11 = *(undefined8 *)(unaff_x19 + 0x2c);
    uVar14 = *(undefined8 *)(unaff_x19 + 0x20);
    pfVar3 = (float *)(unaff_x19 + 0x28);
    pfVar4 = (float *)(unaff_x19 + 0x34);
  }
  else {
    if (((uVar2 & 0xffffffff) <= uVar7) || ((uint)uVar2 <= (int)uVar7 - 1U)) {
LAB_06aed688:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    uVar11 = *(undefined8 *)(pfVar9 + -2);
    uVar14 = *(undefined8 *)(pfVar9 + -5);
    pfVar3 = pfVar9 + -3;
    pfVar4 = pfVar9;
  }
  fVar12 = (float)uVar11 - (float)uVar14;
  fVar15 = (float)((ulong)uVar11 >> 0x20) - (float)((ulong)uVar14 >> 0x20);
  lVar5 = *unaff_x20;
  if (lVar5 == 0) {
LAB_06aed68c:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (((uVar2 & 0xffffffff) <= uVar7) || (*(uint *)(lVar5 + 0x18) <= uVar7)) goto LAB_06aed688;
  fVar17 = *pfVar9;
  fVar18 = *pfVar4;
  fVar13 = *pfVar3;
  *(undefined8 *)(lVar5 + lVar8 + -0x1c) = *(undefined8 *)(pfVar9 + -2);
  *(float *)(lVar5 + lVar8 + -0x14) = fVar17;
  lVar5 = *unaff_x20;
  if (lVar5 == 0) goto LAB_06aed68c;
  fVar18 = fVar18 - fVar13;
  fVar13 = fVar15;
  fVar16 = fVar18;
  uVar10 = FUN_07a00a64(0);
  if (*(uint *)(lVar5 + 0x18) <= uVar7) goto LAB_06aed688;
  lVar5 = lVar5 + lVar8;
  *(undefined4 *)(lVar5 + -0x10) = uVar10;
  *(float *)(lVar5 + -0xc) = fVar13;
  *(float *)(lVar5 + -8) = fVar16;
  *(float *)(lVar5 + -4) = fVar17;
  lVar5 = *unaff_x20;
  if (lVar5 == 0) goto LAB_06aed68c;
  if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) <= uVar7) goto LAB_06aed688;
  fVar13 = 0.0;
  if (lVar8 != 0x3c) {
    if ((uint)*(ulong *)(lVar5 + 0x18) <= (int)uVar7 - 1U) goto LAB_06aed688;
    fVar13 = *(float *)(lVar5 + lVar8 + -0x20);
    if (*(char *)(unaff_x22 + 0xcc9) == '\0') {
      FUN_0335b6c8(&DAT_083ce8b0,1);
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x22 + 0xcc9) = 1;
    }
    if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar13 = SQRT(fVar12 * fVar12 + fVar15 * fVar15 + fVar18 * fVar18) / unaff_s9 + fVar13;
  }
  *(float *)(lVar5 + lVar8) = fVar13;
  uVar2 = *(ulong *)(unaff_x19 + 0x18);
  uVar7 = uVar7 + 1;
  lVar8 = lVar8 + 0x20;
  pfVar9 = pfVar9 + 3;
  if ((long)(int)uVar2 <= (long)uVar7) {
    return;
  }
  goto LAB_06aed500;
}


