/*
FUNCTION_NAME: OVRPlugin$$DestroyInsightPassthroughGeometryInstance
ENTRY_POINT: 060d4ce0
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__DestroyInsightPassthroughGeometryInstance(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  float *unaff_x24;
  float *pfVar4;
  long unaff_x25;
  undefined1 unaff_w26;
  long unaff_x27;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined8 in_stack_00000000;
  
code_r0x060d4ce0:
  *(undefined1 *)(unaff_x22 + 0x6bb) = unaff_w26;
LAB_060d4ce4:
  if (*(int *)(*unaff_x21 + 0xe4) == 0) {
    thunk_FUN_036a1978();
  }
  fVar6 = (float)((ulong)in_stack_00000000 >> 0x20);
  fVar6 = SQRT((float)in_stack_00000000 * (float)in_stack_00000000 + fVar6 * fVar6 +
               unaff_s8 * unaff_s8) / unaff_s9 + unaff_s10;
  pfVar4 = unaff_x24;
  do {
    uVar2 = *(ulong *)(unaff_x19 + 0x18);
    unaff_x23 = unaff_x23 + 1;
    lVar3 = unaff_x27 + unaff_x25;
    unaff_x25 = unaff_x25 + 0x20;
    unaff_x24 = pfVar4 + 3;
    *(float *)(lVar3 + 0x1c) = fVar6;
    if ((long)(int)(uint)uVar2 <= (long)unaff_x23) {
      return;
    }
    if (unaff_x25 == 0x20) {
      if ((uint)uVar2 < 2) goto LAB_060d4d5c;
      fVar10 = *(float *)(unaff_x19 + 0x34);
      uVar8 = *(undefined8 *)(unaff_x19 + 0x2c);
      uVar9 = *(undefined8 *)(unaff_x19 + 0x20);
      fVar6 = *(float *)(unaff_x19 + 0x28);
    }
    else {
      if ((uVar2 & 0xffffffff) <= unaff_x23) goto LAB_060d4d5c;
      fVar10 = *unaff_x24;
      uVar8 = *(undefined8 *)(pfVar4 + 1);
      uVar9 = *(undefined8 *)(pfVar4 + -2);
      fVar6 = *pfVar4;
    }
    fVar7 = (float)((ulong)uVar8 >> 0x20) - (float)((ulong)uVar9 >> 0x20);
    in_stack_00000000 = CONCAT44(fVar7,(float)uVar8 - (float)uVar9);
    unaff_s8 = fVar10 - fVar6;
    lVar3 = *unaff_x20;
    if (lVar3 == 0) {
LAB_060d4d60:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (((uVar2 & 0xffffffff) <= unaff_x23) || (*(uint *)(lVar3 + 0x18) <= unaff_x23))
    goto LAB_060d4d5c;
    fVar10 = *unaff_x24;
    *(undefined8 *)(lVar3 + unaff_x25) = *(undefined8 *)(pfVar4 + 1);
    *(float *)((undefined8 *)(lVar3 + unaff_x25) + 1) = fVar10;
    lVar3 = *unaff_x20;
    if (lVar3 == 0) goto LAB_060d4d60;
    fVar10 = unaff_s8;
    uVar5 = FUN_071af474(0);
    if (*(uint *)(lVar3 + 0x18) <= unaff_x23) goto LAB_060d4d5c;
    lVar3 = lVar3 + unaff_x25;
    *(undefined4 *)(lVar3 + 0xc) = uVar5;
    *(float *)(lVar3 + 0x10) = fVar7;
    *(float *)(lVar3 + 0x14) = fVar10;
    *(float *)(lVar3 + 0x18) = fVar6;
    unaff_x27 = *unaff_x20;
    if (unaff_x27 == 0) goto LAB_060d4d60;
    uVar1 = *(uint *)(unaff_x27 + 0x18);
    if (unaff_x25 != 0x20) break;
    fVar6 = 0.0;
    pfVar4 = unaff_x24;
    if ((ulong)uVar1 == 0) goto LAB_060d4d5c;
  } while( true );
  if ((uVar1 <= unaff_x23) || (uVar1 <= (int)unaff_x23 - 1U)) {
LAB_060d4d5c:
                    /* WARNING: Subroutine does not return */
    FUN_03642c20();
  }
  unaff_s10 = *(float *)(unaff_x27 + unaff_x25 + -4);
  if (*(char *)(unaff_x22 + 0x6bb) == '\0') goto code_r0x060d4cd8;
  goto LAB_060d4ce4;
code_r0x060d4cd8:
  FUN_03642964();
  goto code_r0x060d4ce0;
}


