/*
FUNCTION_NAME: OVRPlugin.Sizei$$.cctor
ENTRY_POINT: 06aed52c
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


void OVRPlugin_Sizei___cctor(ulong param_1)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  float *unaff_x25;
  float *unaff_x26;
  long unaff_x27;
  float *unaff_x29;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_s9;
  
code_r0x06aed52c:
  if ((int)unaff_x24 - 1U < (uint)param_1) {
    uVar6 = *(undefined8 *)(unaff_x29 + -2);
    uVar9 = *(undefined8 *)(unaff_x29 + -5);
    pfVar1 = unaff_x29 + -3;
    pfVar2 = unaff_x29;
    do {
      fVar4 = (float)uVar6 - (float)uVar9;
      fVar7 = (float)((ulong)uVar6 >> 0x20) - (float)((ulong)uVar9 >> 0x20);
      lVar3 = *unaff_x20;
      if (lVar3 == 0) {
LAB_06aed68c:
                    /* WARNING: Subroutine does not return */
        FUN_033d1d3c();
      }
      if (((param_1 & 0xffffffff) <= unaff_x24) || (*(uint *)(lVar3 + 0x18) <= unaff_x24)) break;
      fVar11 = *unaff_x29;
      fVar12 = *pfVar2;
      fVar8 = *pfVar1;
      *(undefined8 *)(lVar3 + unaff_x27 + -0x1c) = *(undefined8 *)(unaff_x29 + -2);
      *(float *)(lVar3 + unaff_x27 + -0x14) = fVar11;
      lVar3 = *unaff_x20;
      if (lVar3 == 0) goto LAB_06aed68c;
      fVar12 = fVar12 - fVar8;
      fVar8 = fVar7;
      fVar10 = fVar12;
      uVar5 = FUN_07a00a64(0);
      if (*(uint *)(lVar3 + 0x18) <= unaff_x24) break;
      lVar3 = lVar3 + unaff_x27;
      *(undefined4 *)(lVar3 + -0x10) = uVar5;
      *(float *)(lVar3 + -0xc) = fVar8;
      *(float *)(lVar3 + -8) = fVar10;
      *(float *)(lVar3 + -4) = fVar11;
      lVar3 = *unaff_x20;
      if (lVar3 == 0) goto LAB_06aed68c;
      if ((*(ulong *)(lVar3 + 0x18) & 0xffffffff) <= unaff_x24) break;
      fVar8 = 0.0;
      if (unaff_x27 != 0x3c) {
        if ((uint)*(ulong *)(lVar3 + 0x18) <= (int)unaff_x24 - 1U) break;
        fVar8 = *(float *)(lVar3 + unaff_x27 + -0x20);
        if (*(char *)(unaff_x22 + 0xcc9) == '\0') {
          FUN_0335b6c8();
          DataMemoryBarrier(2,3);
          *(undefined1 *)(unaff_x22 + 0xcc9) = 1;
        }
        if (*(int *)(*(long *)(unaff_x23 + 0x8b0) + 0xe0) == 0) {
          FUN_033b9870();
        }
        fVar8 = SQRT(fVar4 * fVar4 + fVar7 * fVar7 + fVar12 * fVar12) / unaff_s9 + fVar8;
      }
      *(float *)(lVar3 + unaff_x27) = fVar8;
      param_1 = *(ulong *)(unaff_x19 + 0x18);
      unaff_x24 = unaff_x24 + 1;
      unaff_x27 = unaff_x27 + 0x20;
      unaff_x29 = unaff_x29 + 3;
      if ((long)(int)(uint)param_1 <= (long)unaff_x24) {
        return;
      }
      if (unaff_x27 != 0x3c) goto LAB_06aed524;
      if ((uint)param_1 < 2) break;
      uVar6 = *(undefined8 *)(unaff_x19 + 0x2c);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x20);
      pfVar1 = unaff_x26;
      pfVar2 = unaff_x25;
    } while( true );
  }
  goto LAB_06aed688;
LAB_06aed524:
  if ((param_1 & 0xffffffff) <= unaff_x24) {
LAB_06aed688:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
  goto code_r0x06aed52c;
}


