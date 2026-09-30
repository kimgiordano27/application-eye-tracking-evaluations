/*
FUNCTION_NAME: OVRPlugin.Qpl$$MarkerPointCached
ENTRY_POINT: 033eba70
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_17;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Qpl__MarkerPointCached(float param_1)

{
  byte in_NG;
  bool bVar1;
  long lVar2;
  uint in_w8;
  int iVar3;
  ulong uVar4;
  uint in_w9;
  long lVar5;
  uint in_w10;
  int in_w11;
  int in_w12;
  uint *unaff_x19;
  long *unaff_x20;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  double dVar11;
  
  dVar11 = (double)param_1;
  uVar6 = in_w12 - ((int)(in_w9 + in_w11) >> 0x10);
  if (in_w10 < in_w9) {
    if ((DAT_00bafb60 <= param_1) || (uVar6 != 0xffffffff)) {
      lVar2 = *unaff_x20;
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
        lVar2 = *unaff_x20;
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
      if (lVar2 == 0) goto LAB_033ebde8;
      lVar5 = ((long)((ulong)(in_w9 + in_w11) << 0x20) >> 0x30) + -6;
      if (*(uint *)(lVar2 + 0x18) <= (uint)lVar5) goto LAB_033ebdec;
      dVar11 = dVar11 / *(double *)(lVar2 + lVar5 * 8 + 0x20);
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    lVar2 = *unaff_x20;
    if (in_w9 <= in_w8) {
      uVar6 = 0x1c;
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01dc4f30();
      lVar2 = *unaff_x20;
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
    if (lVar2 == 0) goto LAB_033ebde8;
    if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_033ebdec;
    dVar11 = *(double *)(lVar2 + (ulong)uVar6 * 8 + 0x20) * dVar11;
  }
  uVar9 = (uint)(0x1b < (int)uVar6 || DAT_00baead8 <= dVar11);
  if (uVar9 == 0) {
    dVar11 = dVar11 * 10.0;
  }
  uVar8 = 0x80000000;
  if (dVar11 != INFINITY) {
    uVar8 = (int)dVar11;
  }
  if ((0.5 < dVar11 - (double)(int)uVar8) ||
     (((uVar8 & 1) != 0 && (dVar11 - (double)(int)uVar8 == 0.5)))) {
    uVar8 = uVar8 + 1;
  }
  if (uVar8 != 0) {
    iVar7 = uVar6 + (uVar9 ^ 1);
    uVar6 = (uint)in_NG << 0x1f;
    if (iVar7 < 0) {
      if (iVar7 < -9) {
        lVar2 = *unaff_x20;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar2 = *unaff_x20;
        }
        lVar2 = **(long **)(lVar2 + 0xb8);
        if (lVar2 == 0) {
LAB_033ebde8:
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        if (iVar7 < -0x12) {
          if (*(uint *)(lVar2 + 0x18) <= -iVar7 - 0x12U) goto LAB_033ebdec;
          FUN_033f0e1c((ulong)*(uint *)(lVar2 + (ulong)(-iVar7 - 0x12U) * 4 + 0x20) * (ulong)uVar8,
                       1000000000000000000);
        }
        else {
          if (*(uint *)(lVar2 + 0x18) <= -iVar7 - 9U) {
LAB_033ebdec:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          uVar10 = (ulong)*(uint *)(lVar2 + (ulong)(-iVar7 - 9U) * 4 + 0x20) * (ulong)uVar8;
          uVar4 = (uVar10 & 0xffffffff) * 1000000000;
          lVar2 = (uVar10 >> 0x20) * 1000000000 + (uVar4 >> 0x20);
          unaff_x19[2] = (uint)uVar4;
          unaff_x19[3] = (uint)lVar2;
          unaff_x19[1] = (uint)((ulong)lVar2 >> 0x20);
        }
      }
      else {
        lVar2 = *unaff_x20;
        if (*(int *)(lVar2 + 0xe0) == 0) {
          thunk_FUN_01dc4f30();
          lVar2 = *unaff_x20;
        }
        lVar2 = **(long **)(lVar2 + 0xb8);
        if (lVar2 == 0) goto LAB_033ebde8;
        if (*(uint *)(lVar2 + 0x18) <= (uint)-iVar7) goto LAB_033ebdec;
        *(ulong *)(unaff_x19 + 2) =
             (ulong)*(uint *)(lVar2 + (ulong)(uint)-iVar7 * 4 + 0x20) * (ulong)uVar8;
      }
    }
    else {
      iVar3 = iVar7;
      if (5 < iVar7) {
        iVar3 = 6;
      }
      if (((3 < iVar3) && ((uVar8 & 0xf) == 0)) && (uVar8 == (uVar8 / 10000) * 10000)) {
        iVar7 = iVar7 + -4;
        uVar8 = uVar8 / 10000;
        iVar3 = iVar3 + -4;
      }
      if (((iVar3 < 2) || ((uVar8 & 3) != 0)) ||
         (uVar10 = (ulong)uVar8 / 100, uVar8 != (uVar8 / 100) * 100)) {
        uVar10 = (ulong)uVar8;
      }
      else {
        iVar7 = iVar7 + -2;
        iVar3 = iVar3 + -2;
      }
      uVar8 = (uint)uVar10;
      uVar9 = uVar8;
      if ((0 < iVar3) && ((uVar10 & 1) == 0)) {
        bVar1 = uVar8 == (int)(uVar10 / 10) * 10;
        uVar9 = (uint)(uVar10 / 10);
        if (!bVar1) {
          uVar9 = uVar8;
        }
        iVar7 = iVar7 - (uint)bVar1;
      }
      uVar6 = uVar6 | iVar7 << 0x10;
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      unaff_x19[2] = uVar9;
    }
    *unaff_x19 = uVar6;
  }
  return;
}


