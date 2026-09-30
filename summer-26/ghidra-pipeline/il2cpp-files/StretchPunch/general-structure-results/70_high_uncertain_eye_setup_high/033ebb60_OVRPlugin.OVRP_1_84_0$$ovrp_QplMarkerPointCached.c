/*
FUNCTION_NAME: OVRPlugin.OVRP_1_84_0$$ovrp_QplMarkerPointCached
ENTRY_POINT: 033ebb60
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_84_0__ovrp_QplMarkerPointCached(double param_1,double param_2)

{
  bool in_ZR;
  bool bVar1;
  long lVar2;
  uint in_w8;
  int iVar3;
  ulong uVar4;
  uint *unaff_x19;
  long *unaff_x20;
  int unaff_w21;
  uint uVar5;
  int unaff_w22;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  double unaff_d8;
  
  if (in_ZR) {
    unaff_d8 = param_1;
  }
  uVar7 = 0x80000000;
  if (unaff_d8 != param_2) {
    uVar7 = (int)unaff_d8;
  }
  if ((0.5 < unaff_d8 - (double)(int)uVar7) ||
     (((uVar7 & 1) != 0 && (unaff_d8 - (double)(int)uVar7 == 0.5)))) {
    uVar7 = uVar7 + 1;
  }
  if (uVar7 != 0) {
    iVar6 = unaff_w22 + (in_w8 ^ 1);
    uVar5 = unaff_w21 << 0x1f;
    if (iVar6 < 0) {
      if (iVar6 < -9) {
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
        if (iVar6 < -0x12) {
          if (*(uint *)(lVar2 + 0x18) <= -iVar6 - 0x12U) goto LAB_033ebdec;
          FUN_033f0e1c((ulong)*(uint *)(lVar2 + (ulong)(-iVar6 - 0x12U) * 4 + 0x20) * (ulong)uVar7,
                       1000000000000000000);
        }
        else {
          if (*(uint *)(lVar2 + 0x18) <= -iVar6 - 9U) {
LAB_033ebdec:
                    /* WARNING: Subroutine does not return */
            FUN_01d7db78();
          }
          uVar9 = (ulong)*(uint *)(lVar2 + (ulong)(-iVar6 - 9U) * 4 + 0x20) * (ulong)uVar7;
          uVar4 = (uVar9 & 0xffffffff) * 1000000000;
          lVar2 = (uVar9 >> 0x20) * 1000000000 + (uVar4 >> 0x20);
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
        if (*(uint *)(lVar2 + 0x18) <= (uint)-iVar6) goto LAB_033ebdec;
        *(ulong *)(unaff_x19 + 2) =
             (ulong)*(uint *)(lVar2 + (ulong)(uint)-iVar6 * 4 + 0x20) * (ulong)uVar7;
      }
    }
    else {
      iVar3 = iVar6;
      if (5 < iVar6) {
        iVar3 = 6;
      }
      if (((3 < iVar3) && ((uVar7 & 0xf) == 0)) && (uVar7 == (uVar7 / 10000) * 10000)) {
        iVar6 = iVar6 + -4;
        uVar7 = uVar7 / 10000;
        iVar3 = iVar3 + -4;
      }
      if (((iVar3 < 2) || ((uVar7 & 3) != 0)) ||
         (uVar9 = (ulong)uVar7 / 100, uVar7 != (uVar7 / 100) * 100)) {
        uVar9 = (ulong)uVar7;
      }
      else {
        iVar6 = iVar6 + -2;
        iVar3 = iVar3 + -2;
      }
      uVar8 = (uint)uVar9;
      uVar7 = uVar8;
      if ((0 < iVar3) && ((uVar9 & 1) == 0)) {
        bVar1 = uVar8 == (int)(uVar9 / 10) * 10;
        uVar7 = (uint)(uVar9 / 10);
        if (!bVar1) {
          uVar7 = uVar8;
        }
        iVar6 = iVar6 - (uint)bVar1;
      }
      uVar5 = uVar5 | iVar6 << 0x10;
      if (*(int *)(*unaff_x20 + 0xe0) == 0) {
        thunk_FUN_01dc4f30();
      }
      unaff_x19[2] = uVar7;
    }
    *unaff_x19 = uVar5;
  }
  return;
}


