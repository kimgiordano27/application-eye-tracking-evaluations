/*
FUNCTION_NAME: OVRPlugin.Qpl$$CreateMarkerHandle
ENTRY_POINT: 033ebf7c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_8;functionality_eye_api_context_without_clear_sink_hits_4
*/


void OVRPlugin_Qpl__CreateMarkerHandle(long param_1)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
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
  
  dVar11 = unaff_d8 * *(double *)(param_1 + (ulong)unaff_w23 * 8 + 0x20);
  uVar10 = (uint)(0x1b < (int)unaff_w23 || DAT_00baeda8 <= dVar11);
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
      lVar2 = *unaff_x21;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar2 = *unaff_x21;
      }
      if ((int)uVar10 < -9) {
        lVar2 = (*(long **)(lVar2 + 0xb8))[1];
        if (lVar2 == 0) {
LAB_033ec28c:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (*(uint *)(lVar2 + 0x18) <= ~uVar10) {
OVRPlugin_Qpl_Variant__From:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db78();
        }
        FUN_033f0e1c(uVar8,*(undefined8 *)(lVar2 + (long)(int)~uVar10 * 8 + 0x20));
      }
      else {
        lVar2 = **(long **)(lVar2 + 0xb8);
        if (lVar2 == 0) goto LAB_033ec28c;
        if (*(uint *)(lVar2 + 0x18) <= -uVar10) goto OVRPlugin_Qpl_Variant__From;
        uVar4 = (ulong)*(uint *)(lVar2 + (ulong)-uVar10 * 4 + 0x20);
        uVar6 = (uVar8 & 0xffffffff) * uVar4;
        lVar2 = (uVar8 >> 0x20) * uVar4 + (uVar6 >> 0x20);
        unaff_x19[2] = (uint)uVar6;
        unaff_x19[3] = (uint)lVar2;
        unaff_x19[1] = (uint)((ulong)lVar2 >> 0x20);
      }
    }
    else {
      uVar3 = uVar10;
      if (0xd < (int)uVar10) {
        uVar3 = 0xe;
      }
      uVar5 = (uint)uVar8;
      if ((7 < (int)uVar3) && ((uVar8 & 0xff) == 0)) {
        uVar7 = (uint)(uVar8 / 100000000);
        if (uVar7 * 100000000 == uVar5) {
          uVar10 = uVar10 - 8;
          uVar8 = uVar8 / 100000000;
          uVar3 = uVar3 - 8;
          uVar5 = uVar7;
        }
      }
      if ((((int)uVar3 < 4) || ((uVar5 & 0xf) != 0)) ||
         (uVar4 = uVar8 / 10000, (int)uVar4 * 10000 != uVar5)) {
        uVar4 = (ulong)uVar5;
      }
      else {
        uVar10 = uVar10 - 4;
        uVar8 = uVar4;
        uVar3 = uVar3 - 4;
      }
      if ((((int)uVar3 < 2) || ((uVar4 & 3) != 0)) ||
         (uVar6 = uVar8 / 100, (int)uVar6 * 100 != (int)uVar4)) {
        uVar6 = uVar4 & 0xffffffff;
      }
      else {
        uVar10 = uVar10 - 2;
        uVar3 = uVar3 - 2;
        uVar8 = uVar6;
      }
      uVar4 = uVar8;
      if ((0 < (int)uVar3) && ((uVar6 & 1) == 0)) {
        bVar1 = (int)(uVar8 / 10) * 10 == (int)uVar6;
        uVar4 = uVar8 / 10;
        if (!bVar1) {
          uVar4 = uVar8;
        }
        uVar10 = uVar10 - bVar1;
      }
      uVar9 = uVar9 | uVar10 << 0x10;
      if (*(int *)(*unaff_x21 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      *(ulong *)(unaff_x19 + 2) = uVar4;
    }
    *unaff_x19 = uVar9;
  }
  return;
}


