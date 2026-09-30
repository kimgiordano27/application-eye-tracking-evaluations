/*
FUNCTION_NAME: FUN_033ebe78
ENTRY_POINT: 033ebe78
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_16;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_033ebe78(double param_1,uint *param_2)

{
  undefined *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  double dVar15;
  
  puVar1 = StringLiteral_9323;
  if ((DAT_044a6b7d & 1) == 0) {
    FUN_01d7d918(StringLiteral_9323);
    DAT_044a6b7d = 1;
  }
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar7 = (uint)((ulong)param_1 >> 0x34) & 0x7ff;
  if (0x39f < uVar7) {
    if (0x45e < uVar7) {
      thunk_FUN_01dd295c(StringLiteral_1150);
      uVar4 = thunk_FUN_01de27b8();
      uVar5 = thunk_FUN_01dd295c(StringLiteral_8348);
      FUN_03390704(uVar4,uVar5,0);
      uVar5 = thunk_FUN_01dd295c(StringLiteral_9325);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar4,uVar5);
    }
    uVar7 = uVar7 * 0x4d10;
    dVar15 = -param_1;
    if (param_1 >= 0.0) {
      dVar15 = param_1;
    }
    uVar14 = 0xe - ((int)(uVar7 + 0xfecc5a20) >> 0x10);
    if (uVar7 < 0x142a5e0) {
      lVar3 = *(long *)puVar1;
      if (uVar7 < 0x125a5e0) {
        uVar14 = 0x1c;
      }
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (lVar3 == 0) goto LAB_033ec28c;
      if (*(uint *)(lVar3 + 0x18) <= uVar14) goto OVRPlugin_Qpl_Variant__From;
      dVar15 = dVar15 * *(double *)(lVar3 + (ulong)uVar14 * 8 + 0x20);
    }
    else if ((DAT_00baee78 <= dVar15) || (uVar14 != 0xffffffff)) {
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar3 = *(long *)puVar1;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
      if (lVar3 == 0) goto LAB_033ec28c;
      lVar8 = ((long)((ulong)(uVar7 + 0xfecc5a20) << 0x20) >> 0x30) + -0xe;
      if (*(uint *)(lVar3 + 0x18) <= (uint)lVar8) goto OVRPlugin_Qpl_Variant__From;
      dVar15 = dVar15 / *(double *)(lVar3 + lVar8 * 8 + 0x20);
    }
    else {
      uVar14 = 0;
    }
    uVar7 = (uint)(0x1b < (int)uVar14 || DAT_00baeda8 <= dVar15);
    if (uVar7 == 0) {
      dVar15 = dVar15 * 10.0;
    }
    uVar13 = 0x8000000000000000;
    if (dVar15 != INFINITY) {
      uVar13 = (long)dVar15;
    }
    if ((0.5 < dVar15 - (double)(long)uVar13) ||
       (((uVar13 & 1) != 0 && (dVar15 - (double)(long)uVar13 == 0.5)))) {
      uVar13 = uVar13 + 1;
    }
    if (uVar13 != 0) {
      uVar14 = uVar14 + (uVar7 ^ 1);
      uVar7 = (uint)(param_1 < 0.0) << 0x1f;
      if ((int)uVar14 < 0) {
        lVar3 = *(long *)puVar1;
        if (*(int *)(lVar3 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar3 = *(long *)puVar1;
        }
        if ((int)uVar14 < -9) {
          lVar3 = (*(long **)(lVar3 + 0xb8))[1];
          if (lVar3 == 0) {
LAB_033ec28c:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if (*(uint *)(lVar3 + 0x18) <= ~uVar14) {
OVRPlugin_Qpl_Variant__From:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          FUN_033f0e1c(uVar13,*(undefined8 *)(lVar3 + (long)(int)~uVar14 * 8 + 0x20),param_2);
        }
        else {
          lVar3 = **(long **)(lVar3 + 0xb8);
          if (lVar3 == 0) goto LAB_033ec28c;
          if (*(uint *)(lVar3 + 0x18) <= -uVar14) goto OVRPlugin_Qpl_Variant__From;
          uVar9 = (ulong)*(uint *)(lVar3 + (ulong)-uVar14 * 4 + 0x20);
          uVar11 = (uVar13 & 0xffffffff) * uVar9;
          lVar3 = (uVar13 >> 0x20) * uVar9 + (uVar11 >> 0x20);
          param_2[2] = (uint)uVar11;
          param_2[3] = (uint)lVar3;
          param_2[1] = (uint)((ulong)lVar3 >> 0x20);
        }
      }
      else {
        uVar6 = uVar14;
        if (0xd < (int)uVar14) {
          uVar6 = 0xe;
        }
        uVar10 = (uint)uVar13;
        if ((7 < (int)uVar6) && ((uVar13 & 0xff) == 0)) {
          uVar12 = (uint)(uVar13 / 100000000);
          if (uVar12 * 100000000 == uVar10) {
            uVar14 = uVar14 - 8;
            uVar13 = uVar13 / 100000000;
            uVar6 = uVar6 - 8;
            uVar10 = uVar12;
          }
        }
        if ((((int)uVar6 < 4) || ((uVar10 & 0xf) != 0)) ||
           (uVar9 = uVar13 / 10000, (int)uVar9 * 10000 != uVar10)) {
          uVar9 = (ulong)uVar10;
        }
        else {
          uVar14 = uVar14 - 4;
          uVar13 = uVar9;
          uVar6 = uVar6 - 4;
        }
        if ((((int)uVar6 < 2) || ((uVar9 & 3) != 0)) ||
           (uVar11 = uVar13 / 100, (int)uVar11 * 100 != (int)uVar9)) {
          uVar11 = uVar9 & 0xffffffff;
        }
        else {
          uVar14 = uVar14 - 2;
          uVar6 = uVar6 - 2;
          uVar13 = uVar11;
        }
        uVar9 = uVar13;
        if ((0 < (int)uVar6) && ((uVar11 & 1) == 0)) {
          bVar2 = (int)(uVar13 / 10) * 10 == (int)uVar11;
          uVar9 = uVar13 / 10;
          if (!bVar2) {
            uVar9 = uVar13;
          }
          uVar14 = uVar14 - bVar2;
        }
        uVar7 = uVar7 | uVar14 << 0x10;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        *(ulong *)(param_2 + 2) = uVar9;
      }
      *param_2 = uVar7;
    }
  }
  return;
}


