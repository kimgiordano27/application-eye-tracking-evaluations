/*
FUNCTION_NAME: OVRPlugin.Sizef$$.cctor
ENTRY_POINT: 06aed578
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


void OVRPlugin_Sizef___cctor
               (long param_1,undefined8 param_2,undefined1 param_3 [16],undefined8 param_4,
               float param_5,float param_6)

{
  float *pfVar1;
  uint uVar2;
  ulong uVar3;
  float *in_x9;
  float *pfVar4;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  float *unaff_x25;
  float *unaff_x26;
  long unaff_x27;
  long lVar5;
  float *unaff_x29;
  undefined4 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float unaff_s9;
  float fVar11;
  
  while( true ) {
    fVar8 = *in_x9;
    *(undefined8 *)(param_1 + -0x1c) = param_4;
    *(float *)(param_1 + -0x14) = param_5;
    lVar5 = *unaff_x20;
    if (lVar5 == 0) break;
    param_6 = param_6 - fVar8;
    fVar8 = (float)((ulong)param_2 >> 0x20);
    fVar11 = fVar8;
    fVar10 = param_6;
    uVar6 = FUN_07a00a64(0);
    if (*(uint *)(lVar5 + 0x18) <= unaff_x24) {
LAB_06aed688:
                    /* WARNING: Subroutine does not return */
      FUN_033d1d44();
    }
    lVar5 = lVar5 + unaff_x27;
    *(undefined4 *)(lVar5 + -0x10) = uVar6;
    *(float *)(lVar5 + -0xc) = fVar11;
    *(float *)(lVar5 + -8) = fVar10;
    *(float *)(lVar5 + -4) = param_5;
    lVar5 = *unaff_x20;
    if (lVar5 == 0) break;
    if ((*(ulong *)(lVar5 + 0x18) & 0xffffffff) <= unaff_x24) goto LAB_06aed688;
    fVar11 = 0.0;
    if (unaff_x27 != 0x3c) {
      if ((uint)*(ulong *)(lVar5 + 0x18) <= (int)unaff_x24 - 1U) goto LAB_06aed688;
      fVar11 = *(float *)(lVar5 + unaff_x27 + -0x20);
      if (*(char *)(unaff_x22 + 0xcc9) == '\0') {
        FUN_0335b6c8();
        DataMemoryBarrier(2,3);
        *(undefined1 *)(unaff_x22 + 0xcc9) = 1;
      }
      if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
        FUN_033b9870();
      }
      fVar11 = SQRT((float)param_2 * (float)param_2 + fVar8 * fVar8 + param_6 * param_6) / unaff_s9
               + fVar11;
    }
    *(float *)(lVar5 + unaff_x27) = fVar11;
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
      uVar7 = *(undefined8 *)(unaff_x19 + 0x2c);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x20);
      in_x9 = unaff_x26;
      pfVar4 = unaff_x25;
    }
    else {
      if (((uVar3 & 0xffffffff) <= unaff_x24) || (uVar2 <= (int)unaff_x24 - 1U)) goto LAB_06aed688;
      uVar7 = *(undefined8 *)(unaff_x29 + 1);
      uVar9 = *(undefined8 *)(unaff_x29 + -2);
      in_x9 = unaff_x29;
      pfVar4 = pfVar1;
    }
    param_2 = CONCAT44((float)((ulong)uVar7 >> 0x20) - (float)((ulong)uVar9 >> 0x20),
                       (float)uVar7 - (float)uVar9);
    param_1 = *unaff_x20;
    if (param_1 == 0) break;
    if (((uVar3 & 0xffffffff) <= unaff_x24) || (*(uint *)(param_1 + 0x18) <= unaff_x24))
    goto LAB_06aed688;
    param_4 = *(undefined8 *)(unaff_x29 + 1);
    param_5 = *pfVar1;
    param_1 = param_1 + unaff_x27;
    param_6 = *pfVar4;
    unaff_x29 = pfVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


