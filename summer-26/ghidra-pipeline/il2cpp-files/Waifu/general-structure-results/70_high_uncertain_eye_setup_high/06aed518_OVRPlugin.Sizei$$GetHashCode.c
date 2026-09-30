/*
FUNCTION_NAME: OVRPlugin.Sizei$$GetHashCode
ENTRY_POINT: 06aed518
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


void OVRPlugin_Sizei__GetHashCode(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  float *pfVar1;
  uint uVar2;
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
  float *unaff_x29;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s9;
  
  pfVar3 = unaff_x26;
  pfVar4 = unaff_x25;
  while( true ) {
    fVar6 = (float)param_2 - (float)param_3;
    fVar8 = (float)((ulong)param_2 >> 0x20) - (float)((ulong)param_3 >> 0x20);
    lVar5 = *unaff_x20;
    if (lVar5 == 0) break;
    if (((param_1 & 0xffffffff) <= unaff_x24) || (*(uint *)(lVar5 + 0x18) <= unaff_x24)) {
LAB_06aed688:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    fVar11 = *unaff_x29;
    fVar12 = *pfVar4;
    fVar9 = *pfVar3;
    *(undefined8 *)(lVar5 + unaff_x27 + -0x1c) = *(undefined8 *)(unaff_x29 + -2);
    *(float *)(lVar5 + unaff_x27 + -0x14) = fVar11;
    lVar5 = *unaff_x20;
    if (lVar5 == 0) break;
    fVar12 = fVar12 - fVar9;
    fVar9 = fVar8;
    fVar10 = fVar12;
    uVar7 = FUN_07a00a64(0);
    if (*(uint *)(lVar5 + 0x18) <= unaff_x24) goto LAB_06aed688;
    lVar5 = lVar5 + unaff_x27;
    *(undefined4 *)(lVar5 + -0x10) = uVar7;
    *(float *)(lVar5 + -0xc) = fVar9;
    *(float *)(lVar5 + -8) = fVar10;
    *(float *)(lVar5 + -4) = fVar11;
    lVar5 = *unaff_x20;
    if (lVar5 == 0) break;
    if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) <= unaff_x24) goto LAB_06aed688;
    fVar9 = 0.0;
    if (unaff_x27 != 0x3c) {
      if ((uint)*(ulong *)(lVar5 + 0x18) <= (int)unaff_x24 - 1U) goto LAB_06aed688;
      fVar9 = *(float *)(lVar5 + unaff_x27 + -0x20);
      if (*(char *)(unaff_x22 + 0xcc9) == '\0') {
        FUN_0335b6c8();
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x22 + 0xcc9) = 1;
      }
      if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar9 = SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar12 * fVar12) / unaff_s9 + fVar9;
    }
    *(float *)(lVar5 + unaff_x27) = fVar9;
    param_1 = *(ulong *)(unaff_x19 + 0x18);
    unaff_x24 = unaff_x24 + 1;
    unaff_x27 = unaff_x27 + 0x20;
    pfVar1 = unaff_x29 + 3;
    uVar2 = (uint)param_1;
    if ((long)(int)uVar2 <= (long)unaff_x24) {
      return;
    }
    if (unaff_x27 == 0x3c) {
      if (uVar2 < 2) goto LAB_06aed688;
      param_2 = *(undefined8 *)(unaff_x19 + 0x2c);
      param_3 = *(undefined8 *)(unaff_x19 + 0x20);
      pfVar3 = unaff_x26;
      pfVar4 = unaff_x25;
      unaff_x29 = pfVar1;
    }
    else {
      if (((param_1 & 0xffffffff) <= unaff_x24) || (uVar2 <= (int)unaff_x24 - 1U))
      goto LAB_06aed688;
      param_2 = *(undefined8 *)(unaff_x29 + 1);
      param_3 = *(undefined8 *)(unaff_x29 + -2);
      pfVar3 = unaff_x29;
      pfVar4 = pfVar1;
      unaff_x29 = pfVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


