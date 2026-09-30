/*
FUNCTION_NAME: OVRPlugin$$GetBodyState4
ENTRY_POINT: 02c295e0
PROGRAM: sharks-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetBodyState4(long param_1)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint *unaff_x19;
  ulong uVar8;
  long *unaff_x21;
  int unaff_w22;
  uint uVar9;
  uint unaff_w23;
  uint uVar10;
  double unaff_d8;
  double dVar11;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0xb8) + 0x10);
  if (lVar3 == 0) goto LAB_02c29908;
  if (*(uint *)(lVar3 + 0x18) <= unaff_w23) goto LAB_02c2990c;
  dVar11 = unaff_d8 * *(double *)(lVar3 + (ulong)unaff_w23 * 8 + 0x20);
  uVar10 = (uint)(0x1b < (int)unaff_w23 || DAT_009a5948 <= dVar11);
  if (uVar10 == 0) {
    dVar11 = dVar11 * 10.0;
  }
  uVar8 = 0x8000000000000000;
  if (dVar11 != INFINITY) {
    uVar8 = (long)dVar11;
  }
  if ((0.5 < dVar11 - (double)(long)uVar8) ||
     (((uVar8 & 1) != 0 && (dVar11 - (double)(long)uVar8 == 0.5)))) {
    uVar8 = uVar8 + 1;
  }
  if (uVar8 != 0) {
    uVar10 = unaff_w23 + (uVar10 ^ 1);
    uVar9 = unaff_w22 << 0x1f;
    if ((int)uVar10 < 0) {
      lVar3 = *unaff_x21;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
        lVar3 = *unaff_x21;
      }
      if ((int)uVar10 < -9) {
        lVar3 = (*(long **)(lVar3 + 0xb8))[1];
        if (lVar3 == 0) {
LAB_02c29908:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5a8();
        }
        if (*(uint *)(lVar3 + 0x18) <= ~uVar10) {
LAB_02c2990c:
                    /* WARNING: Subroutine does not return */
          FUN_017fc5b0();
        }
        FUN_02c2dff4(uVar8,*(undefined8 *)(lVar3 + (long)(int)~uVar10 * 8 + 0x20));
      }
      else {
        lVar3 = **(long **)(lVar3 + 0xb8);
        if (lVar3 == 0) goto LAB_02c29908;
        if (*(uint *)(lVar3 + 0x18) <= -uVar10) goto LAB_02c2990c;
        uVar4 = (ulong)*(uint *)(lVar3 + (ulong)-uVar10 * 4 + 0x20);
        uVar6 = (uVar8 & 0xffffffff) * uVar4;
        lVar3 = (uVar8 >> 0x20) * uVar4 + (uVar6 >> 0x20);
        unaff_x19[2] = (uint)uVar6;
        unaff_x19[3] = (uint)lVar3;
        unaff_x19[1] = (uint)((ulong)lVar3 >> 0x20);
      }
    }
    else {
      uVar2 = uVar10;
      if (0xd < (int)uVar10) {
        uVar2 = 0xe;
      }
      uVar5 = (uint)uVar8;
      if ((7 < (int)uVar2) && ((uVar8 & 0xff) == 0)) {
        uVar7 = (uint)(uVar8 / 100000000);
        if (uVar7 * 100000000 == uVar5) {
          uVar10 = uVar10 - 8;
          uVar8 = uVar8 / 100000000;
          uVar2 = uVar2 - 8;
          uVar5 = uVar7;
        }
      }
      if ((((int)uVar2 < 4) || ((uVar5 & 0xf) != 0)) ||
         (uVar4 = uVar8 / 10000, (int)uVar4 * 10000 != uVar5)) {
        uVar4 = (ulong)uVar5;
      }
      else {
        uVar10 = uVar10 - 4;
        uVar8 = uVar4;
        uVar2 = uVar2 - 4;
      }
      if ((((int)uVar2 < 2) || ((uVar4 & 3) != 0)) ||
         (uVar6 = uVar8 / 100, (int)uVar6 * 100 != (int)uVar4)) {
        uVar6 = uVar4 & 0xffffffff;
      }
      else {
        uVar10 = uVar10 - 2;
        uVar2 = uVar2 - 2;
        uVar8 = uVar6;
      }
      uVar4 = uVar8;
      if ((0 < (int)uVar2) && ((uVar6 & 1) == 0)) {
        bVar1 = (int)(uVar8 / 10) * 10 == (int)uVar6;
        uVar4 = uVar8 / 10;
        if (!bVar1) {
          uVar4 = uVar8;
        }
        uVar10 = uVar10 - bVar1;
      }
      uVar9 = uVar9 | uVar10 << 0x10;
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01843fdc();
      }
      *(ulong *)(unaff_x19 + 2) = uVar4;
    }
    *unaff_x19 = uVar9;
  }
  return;
}


