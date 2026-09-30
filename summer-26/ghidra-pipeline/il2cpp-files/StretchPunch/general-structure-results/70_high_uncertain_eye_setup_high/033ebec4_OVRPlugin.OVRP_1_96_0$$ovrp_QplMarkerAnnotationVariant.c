/*
FUNCTION_NAME: OVRPlugin.OVRP_1_96_0$$ovrp_QplMarkerAnnotationVariant
ENTRY_POINT: 033ebec4
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_6
*/


void OVRPlugin_OVRP_1_96_0__ovrp_QplMarkerAnnotationVariant(void)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int in_w8;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  uint *unaff_x19;
  ulong uVar12;
  long *unaff_x21;
  uint uVar13;
  double unaff_d8;
  double dVar14;
  
  if (in_w8 == 0) {
    thunk_FUN_01dc4f30();
  }
  uVar6 = (uint)((ulong)unaff_d8 >> 0x34) & 0x7ff;
  if (0x39f < uVar6) {
    if (0x45e < uVar6) {
      thunk_FUN_01dd295c(StringLiteral_1150);
      uVar3 = thunk_FUN_01de27b8();
      uVar4 = thunk_FUN_01dd295c(StringLiteral_8348);
      FUN_03390704(uVar3,uVar4,0);
      uVar4 = thunk_FUN_01dd295c(StringLiteral_9325);
                    /* WARNING: Subroutine does not return */
      FUN_01d7da3c(uVar3,uVar4);
    }
    uVar6 = uVar6 * 0x4d10;
    dVar14 = -unaff_d8;
    if (unaff_d8 >= 0.0) {
      dVar14 = unaff_d8;
    }
    uVar13 = 0xe - ((int)(uVar6 + 0xfecc5a20) >> 0x10);
    if (uVar6 < 0x142a5e0) {
      lVar2 = *unaff_x21;
      if (uVar6 < 0x125a5e0) {
        uVar13 = 0x1c;
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar2 = *unaff_x21;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
      if (lVar2 == 0) goto LAB_033ec28c;
      if (*(uint *)(lVar2 + 0x18) <= uVar13) goto OVRPlugin_Qpl_Variant__From;
      dVar14 = dVar14 * *(double *)(lVar2 + (ulong)uVar13 * 8 + 0x20);
    }
    else if ((DAT_00baee78 <= dVar14) || (uVar13 != 0xffffffff)) {
      lVar2 = *unaff_x21;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar2 = *unaff_x21;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
      if (lVar2 == 0) goto LAB_033ec28c;
      lVar7 = ((long)((ulong)(uVar6 + 0xfecc5a20) << 0x20) >> 0x30) + -0xe;
      if (*(uint *)(lVar2 + 0x18) <= (uint)lVar7) goto OVRPlugin_Qpl_Variant__From;
      dVar14 = dVar14 / *(double *)(lVar2 + lVar7 * 8 + 0x20);
    }
    else {
      uVar13 = 0;
    }
    uVar6 = (uint)(0x1b < (int)uVar13 || DAT_00baeda8 <= dVar14);
    if (uVar6 == 0) {
      dVar14 = dVar14 * 10.0;
    }
    uVar12 = 0x8000000000000000;
    if (dVar14 != INFINITY) {
      uVar12 = (long)dVar14;
    }
    if ((0.5 < dVar14 - (double)(long)uVar12) ||
       (((uVar12 & 1) != 0 && (dVar14 - (double)(long)uVar12 == 0.5)))) {
      uVar12 = uVar12 + 1;
    }
    if (uVar12 != 0) {
      uVar13 = uVar13 + (uVar6 ^ 1);
      uVar6 = (uint)(unaff_d8 < 0.0) << 0x1f;
      if ((int)uVar13 < 0) {
        lVar2 = *unaff_x21;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar2 = *unaff_x21;
        }
        if ((int)uVar13 < -9) {
          lVar2 = (*(long **)(lVar2 + 0xb8))[1];
          if (lVar2 == 0) {
LAB_033ec28c:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db70();
          }
          if (*(uint *)(lVar2 + 0x18) <= ~uVar13) {
OVRPlugin_Qpl_Variant__From:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          FUN_033f0e1c(uVar12,*(undefined8 *)(lVar2 + (long)(int)~uVar13 * 8 + 0x20));
        }
        else {
          lVar2 = **(long **)(lVar2 + 0xb8);
          if (lVar2 == 0) goto LAB_033ec28c;
          if (*(uint *)(lVar2 + 0x18) <= -uVar13) goto OVRPlugin_Qpl_Variant__From;
          uVar8 = (ulong)*(uint *)(lVar2 + (ulong)-uVar13 * 4 + 0x20);
          uVar10 = (uVar12 & 0xffffffff) * uVar8;
          lVar2 = (uVar12 >> 0x20) * uVar8 + (uVar10 >> 0x20);
          unaff_x19[2] = (uint)uVar10;
          unaff_x19[3] = (uint)lVar2;
          unaff_x19[1] = (uint)((ulong)lVar2 >> 0x20);
        }
      }
      else {
        uVar5 = uVar13;
        if (0xd < (int)uVar13) {
          uVar5 = 0xe;
        }
        uVar9 = (uint)uVar12;
        if ((7 < (int)uVar5) && ((uVar12 & 0xff) == 0)) {
          uVar11 = (uint)(uVar12 / 100000000);
          if (uVar11 * 100000000 == uVar9) {
            uVar13 = uVar13 - 8;
            uVar12 = uVar12 / 100000000;
            uVar5 = uVar5 - 8;
            uVar9 = uVar11;
          }
        }
        if ((((int)uVar5 < 4) || ((uVar9 & 0xf) != 0)) ||
           (uVar8 = uVar12 / 10000, (int)uVar8 * 10000 != uVar9)) {
          uVar8 = (ulong)uVar9;
        }
        else {
          uVar13 = uVar13 - 4;
          uVar12 = uVar8;
          uVar5 = uVar5 - 4;
        }
        if ((((int)uVar5 < 2) || ((uVar8 & 3) != 0)) ||
           (uVar10 = uVar12 / 100, (int)uVar10 * 100 != (int)uVar8)) {
          uVar10 = uVar8 & 0xffffffff;
        }
        else {
          uVar13 = uVar13 - 2;
          uVar5 = uVar5 - 2;
          uVar12 = uVar10;
        }
        uVar8 = uVar12;
        if ((0 < (int)uVar5) && ((uVar10 & 1) == 0)) {
          bVar1 = (int)(uVar12 / 10) * 10 == (int)uVar10;
          uVar8 = uVar12 / 10;
          if (!bVar1) {
            uVar8 = uVar12;
          }
          uVar13 = uVar13 - bVar1;
        }
        uVar6 = uVar6 | uVar13 << 0x10;
        if (*(int *)(*unaff_x21 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
        }
        *(ulong *)(unaff_x19 + 2) = uVar8;
      }
      *unaff_x19 = uVar6;
    }
  }
  return;
}


