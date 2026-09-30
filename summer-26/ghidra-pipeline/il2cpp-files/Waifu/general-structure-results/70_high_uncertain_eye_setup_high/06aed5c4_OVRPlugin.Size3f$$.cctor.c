/*
FUNCTION_NAME: OVRPlugin.Size3f$$.cctor
ENTRY_POINT: 06aed5c4
PROGRAM: Waifu-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Size3f___cctor(void)

{
  float *pfVar1;
  uint uVar2;
  ulong uVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  float *unaff_x25;
  float *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  float *unaff_x29;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float unaff_s8;
  float unaff_s9;
  float fVar13;
  undefined8 in_stack_00000000;
  
  do {
    if ((*(ulong *)(unaff_x28 + 0x18) & 0xffffffff) <= unaff_x24) {
LAB_06aed688:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    fVar13 = 0.0;
    if (unaff_x27 != 0x3c) {
      if ((uint)*(ulong *)(unaff_x28 + 0x18) <= (int)unaff_x24 - 1U) goto LAB_06aed688;
      fVar13 = *(float *)(unaff_x28 + unaff_x27 + -0x20);
      if (*(char *)(unaff_x22 + 0xcc9) == '\0') {
        FUN_0335b6c8();
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x22 + 0xcc9) = 1;
      }
      if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar9 = (float)((ulong)in_stack_00000000 >> 0x20);
      fVar13 = SQRT((float)in_stack_00000000 * (float)in_stack_00000000 + fVar9 * fVar9 +
                    unaff_s8 * unaff_s8) / unaff_s9 + fVar13;
    }
    *(float *)(unaff_x28 + unaff_x27) = fVar13;
    uVar3 = *(ulong *)(unaff_x19 + 0x18);
    unaff_x24 = unaff_x24 + 1;
    unaff_x27 = unaff_x27 + 0x20;
    pfVar1 = unaff_x29 + 3;
    uVar2 = (uint)uVar3;
    if ((long)(int)uVar2 <= (long)unaff_x24) {
      return;
    }
    if (unaff_x27 == 0x3c) {
      if (uVar2 < 2) goto LAB_06aed688;
      uVar8 = *(undefined8 *)(unaff_x19 + 0x2c);
      uVar10 = *(undefined8 *)(unaff_x19 + 0x20);
      pfVar4 = unaff_x26;
      pfVar5 = unaff_x25;
    }
    else {
      if (((uVar3 & 0xffffffff) <= unaff_x24) || (uVar2 <= (int)unaff_x24 - 1U)) goto LAB_06aed688;
      uVar8 = *(undefined8 *)(unaff_x29 + 1);
      uVar10 = *(undefined8 *)(unaff_x29 + -2);
      pfVar4 = unaff_x29;
      pfVar5 = pfVar1;
    }
    fVar13 = (float)((ulong)uVar8 >> 0x20) - (float)((ulong)uVar10 >> 0x20);
    in_stack_00000000 = CONCAT44(fVar13,(float)uVar8 - (float)uVar10);
    lVar6 = *unaff_x20;
    if (lVar6 == 0) break;
    if (((uVar3 & 0xffffffff) <= unaff_x24) || (*(uint *)(lVar6 + 0x18) <= unaff_x24))
    goto LAB_06aed688;
    fVar11 = *pfVar1;
    fVar12 = *pfVar5;
    fVar9 = *pfVar4;
    *(undefined8 *)(lVar6 + unaff_x27 + -0x1c) = *(undefined8 *)(unaff_x29 + 1);
    *(float *)(lVar6 + unaff_x27 + -0x14) = fVar11;
    lVar6 = *unaff_x20;
    if (lVar6 == 0) break;
    unaff_s8 = fVar12 - fVar9;
    fVar9 = unaff_s8;
    uVar7 = FUN_07a00a64(0);
    if (*(uint *)(lVar6 + 0x18) <= unaff_x24) goto LAB_06aed688;
    lVar6 = lVar6 + unaff_x27;
    *(undefined4 *)(lVar6 + -0x10) = uVar7;
    *(float *)(lVar6 + -0xc) = fVar13;
    *(float *)(lVar6 + -8) = fVar9;
    *(float *)(lVar6 + -4) = fVar11;
    unaff_x28 = *unaff_x20;
    unaff_x29 = pfVar1;
  } while (unaff_x28 != 0);
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


