/*
FUNCTION_NAME: OVRPlugin.RectiPair$$get_Item
ENTRY_POINT: 06aed614
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


void OVRPlugin_RectiPair__get_Item(long param_1)

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
  ulong unaff_x24;
  float *unaff_x25;
  float *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  float *unaff_x29;
  float *pfVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined8 in_stack_00000000;
  
  do {
    if (*(int *)(param_1 + 0xe0) == 0) {
      FUN_033b9870();
    }
    fVar8 = (float)((ulong)in_stack_00000000 >> 0x20);
    fVar8 = SQRT((float)in_stack_00000000 * (float)in_stack_00000000 + fVar8 * fVar8 +
                 unaff_s8 * unaff_s8) / unaff_s9 + unaff_s10;
    pfVar6 = unaff_x29;
    do {
      *(float *)(unaff_x28 + unaff_x27) = fVar8;
      uVar2 = *(ulong *)(unaff_x19 + 0x18);
      unaff_x24 = unaff_x24 + 1;
      unaff_x27 = unaff_x27 + 0x20;
      unaff_x29 = pfVar6 + 3;
      uVar1 = (uint)uVar2;
      if ((long)(int)uVar1 <= (long)unaff_x24) {
        return;
      }
      if (unaff_x27 == 0x3c) {
        if (uVar1 < 2) goto LAB_06aed688;
        uVar9 = *(undefined8 *)(unaff_x19 + 0x2c);
        uVar11 = *(undefined8 *)(unaff_x19 + 0x20);
        pfVar3 = unaff_x26;
        pfVar4 = unaff_x25;
      }
      else {
        if (((uVar2 & 0xffffffff) <= unaff_x24) || (uVar1 <= (int)unaff_x24 - 1U))
        goto LAB_06aed688;
        uVar9 = *(undefined8 *)(pfVar6 + 1);
        uVar11 = *(undefined8 *)(pfVar6 + -2);
        pfVar3 = pfVar6;
        pfVar4 = unaff_x29;
      }
      fVar8 = (float)((ulong)uVar9 >> 0x20) - (float)((ulong)uVar11 >> 0x20);
      in_stack_00000000 = CONCAT44(fVar8,(float)uVar9 - (float)uVar11);
      lVar5 = *unaff_x20;
      if (lVar5 == 0) {
LAB_06aed68c:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (((uVar2 & 0xffffffff) <= unaff_x24) || (*(uint *)(lVar5 + 0x18) <= unaff_x24))
      goto LAB_06aed688;
      fVar12 = *unaff_x29;
      fVar13 = *pfVar4;
      fVar10 = *pfVar3;
      *(undefined8 *)(lVar5 + unaff_x27 + -0x1c) = *(undefined8 *)(pfVar6 + 1);
      *(float *)(lVar5 + unaff_x27 + -0x14) = fVar12;
      lVar5 = *unaff_x20;
      if (lVar5 == 0) goto LAB_06aed68c;
      unaff_s8 = fVar13 - fVar10;
      fVar10 = unaff_s8;
      uVar7 = FUN_07a00a64(0);
      if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_06aed688;
      lVar5 = lVar5 + unaff_x27;
      *(undefined4 *)(lVar5 + -0x10) = uVar7;
      *(float *)(lVar5 + -0xc) = fVar8;
      *(float *)(lVar5 + -8) = fVar10;
      *(float *)(lVar5 + -4) = fVar12;
      unaff_x28 = *unaff_x20;
      if (unaff_x28 == 0) goto LAB_06aed68c;
      if ((*(ulong *)(unaff_x28 + 0x18) & 0xffffffff) <= unaff_x24) goto LAB_06aed688;
      fVar8 = 0.0;
      pfVar6 = unaff_x29;
    } while (unaff_x27 == 0x3c);
    if ((uint)*(ulong *)(unaff_x28 + 0x18) <= (int)unaff_x24 - 1U) {
LAB_06aed688:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    unaff_s10 = *(float *)(unaff_x28 + unaff_x27 + -0x20);
    if (*(char *)(unaff_x22 + 0xcc9) == '\0') {
      FUN_0335b6c8();
      DataMemoryBarrier(2,3);
      *(undefined1 *)(unaff_x22 + 0xcc9) = 1;
    }
    param_1 = *(long *)(unaff_x23 + 0x8b0);
  } while( true );
}


