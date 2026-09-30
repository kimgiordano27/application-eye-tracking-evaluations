/*
FUNCTION_NAME: OVRPlugin.ControllerState2$$.ctor
ENTRY_POINT: 06aed428
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_ControllerState2___ctor(void)

{
  ulong uVar1;
  uint in_w9;
  ulong uVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  undefined8 *puVar6;
  long lVar7;
  float *pfVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float unaff_s9;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  
  uVar1 = (ulong)in_w9;
  if (1 < (int)in_w9) {
    uVar1 = (ulong)in_w9;
    puVar6 = (undefined8 *)(unaff_x19 + 0x30);
    unaff_s9 = 0.0;
    uVar2 = 1;
    do {
      if ((uVar1 <= uVar2) || (uVar1 <= uVar2 - 1)) goto LAB_06aed688;
      uVar14 = *puVar6;
      fVar15 = *(float *)((long)puVar6 + -4);
      fVar16 = *(float *)(puVar6 + -2);
      uVar17 = *(undefined8 *)((long)puVar6 + -0xc);
      if (*(char *)(unaff_x22 + 0xcc9) == '\0') {
        FUN_0335b6c8(&DAT_083ce8b0,1);
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x22 + 0xcc9) = 1;
      }
      if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar15 = fVar15 - fVar16;
      fVar16 = (float)uVar14 - (float)uVar17;
      fVar10 = (float)((ulong)uVar14 >> 0x20) - (float)((ulong)uVar17 >> 0x20);
      uVar1 = (ulong)*(uint *)(unaff_x19 + 0x18);
      uVar2 = uVar2 + 1;
      unaff_s9 = unaff_s9 + SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar10 * fVar10);
      puVar6 = (undefined8 *)((long)puVar6 + 0xc);
    } while ((long)uVar2 < (long)(int)*(uint *)(unaff_x19 + 0x18));
  }
  if (0 < (int)uVar1) {
    uVar2 = 0;
    lVar7 = 0x3c;
    pfVar8 = (float *)(unaff_x19 + 0x28);
    do {
      if (lVar7 == 0x3c) {
        if ((uint)uVar1 < 2) goto LAB_06aed688;
        uVar14 = *(undefined8 *)(unaff_x19 + 0x2c);
        uVar17 = *(undefined8 *)(unaff_x19 + 0x20);
        pfVar3 = (float *)(unaff_x19 + 0x28);
        pfVar4 = (float *)(unaff_x19 + 0x34);
      }
      else {
        if (((uVar1 & 0xffffffff) <= uVar2) || ((uint)uVar1 <= (int)uVar2 - 1U)) {
LAB_06aed688:
                    /* WARNING: Subroutine does not return */
          FUN_033d1d44();
        }
        uVar14 = *(undefined8 *)(pfVar8 + -2);
        uVar17 = *(undefined8 *)(pfVar8 + -5);
        pfVar3 = pfVar8 + -3;
        pfVar4 = pfVar8;
      }
      fVar15 = (float)uVar14 - (float)uVar17;
      fVar16 = (float)((ulong)uVar14 >> 0x20) - (float)((ulong)uVar17 >> 0x20);
      lVar5 = *unaff_x20;
      if (lVar5 == 0) {
LAB_06aed68c:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (((uVar1 & 0xffffffff) <= uVar2) || (*(uint *)(lVar5 + 0x18) <= uVar2)) goto LAB_06aed688;
      fVar12 = *pfVar8;
      fVar13 = *pfVar4;
      fVar10 = *pfVar3;
      *(undefined8 *)(lVar5 + lVar7 + -0x1c) = *(undefined8 *)(pfVar8 + -2);
      *(float *)(lVar5 + lVar7 + -0x14) = fVar12;
      lVar5 = *unaff_x20;
      if (lVar5 == 0) goto LAB_06aed68c;
      fVar13 = fVar13 - fVar10;
      fVar10 = fVar16;
      fVar11 = fVar13;
      uVar9 = FUN_07a00a64(0);
      if (*(uint *)(lVar5 + 0x18) <= uVar2) goto LAB_06aed688;
      lVar5 = lVar5 + lVar7;
      *(undefined4 *)(lVar5 + -0x10) = uVar9;
      *(float *)(lVar5 + -0xc) = fVar10;
      *(float *)(lVar5 + -8) = fVar11;
      *(float *)(lVar5 + -4) = fVar12;
      lVar5 = *unaff_x20;
      if (lVar5 == 0) goto LAB_06aed68c;
      if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) <= uVar2) goto LAB_06aed688;
      fVar10 = 0.0;
      if (lVar7 != 0x3c) {
        if ((uint)*(ulong *)(lVar5 + 0x18) <= (int)uVar2 - 1U) goto LAB_06aed688;
        fVar10 = *(float *)(lVar5 + lVar7 + -0x20);
        if (*(char *)(unaff_x22 + 0xcc9) == '\0') {
          FUN_0335b6c8(&DAT_083ce8b0,1);
          DataMemoryBarrier(2,3);
          *(undefined1 *)(unaff_x22 + 0xcc9) = 1;
        }
        if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
          FUN_033b9870();
        }
        fVar10 = SQRT(fVar15 * fVar15 + fVar16 * fVar16 + fVar13 * fVar13) / unaff_s9 + fVar10;
      }
      *(float *)(lVar5 + lVar7) = fVar10;
      uVar1 = *(ulong *)(unaff_x19 + 0x18);
      uVar2 = uVar2 + 1;
      lVar7 = lVar7 + 0x20;
      pfVar8 = pfVar8 + 3;
    } while ((long)uVar2 < (long)(int)uVar1);
  }
  return;
}


