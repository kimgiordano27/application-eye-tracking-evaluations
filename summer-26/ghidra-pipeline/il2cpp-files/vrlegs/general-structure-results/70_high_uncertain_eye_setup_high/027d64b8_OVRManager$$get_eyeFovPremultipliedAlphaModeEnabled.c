/*
FUNCTION_NAME: OVRManager$$get_eyeFovPremultipliedAlphaModeEnabled
ENTRY_POINT: 027d64b8
PROGRAM: vrlegs-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRManager__get_eyeFovPremultipliedAlphaModeEnabled(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  
  puVar4 = PTR_DAT_03cc5358;
  if ((DAT_04125011 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cfca30);
    FUN_01ab69ac(PTR_DAT_03cc5358);
    DAT_04125011 = 1;
  }
  iVar8 = *param_2;
  iVar2 = iVar8 - *param_1;
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar10 = iVar8 >> 0x1f | 1;
  if ((DAT_04124fb8 & 1) == 0) {
    FUN_01ab69ac(PTR_DAT_03cc5358);
    DAT_04124fb8 = 1;
  }
  puVar4 = PTR_DAT_03cfca30;
  uVar13 = *(ulong *)(param_1 + 2);
  uVar14 = param_1[1];
  uVar9 = *(ulong *)(param_2 + 2);
  uVar12 = param_2[1];
  if (iVar2 != 0) {
    iVar8 = iVar2 >> 0x10;
    uVar11 = uVar9;
    uVar3 = uVar12;
    if (iVar2 < 0) {
      iVar8 = -iVar8;
      uVar10 = -uVar10;
      uVar11 = uVar13;
      uVar13 = uVar9;
      uVar3 = uVar14;
      uVar14 = uVar12;
    }
    uVar12 = uVar3;
    uVar9 = (ulong)uVar14;
    lVar15 = (long)iVar8;
    do {
      lVar5 = *(long *)puVar4;
      if (lVar15 < 9) {
        if (*(int *)(lVar5 + 0xe0) == 0) {
          thunk_FUN_01a58e78();
          lVar5 = *(long *)puVar4;
        }
        lVar6 = **(long **)(lVar5 + 0xb8);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        if (*(uint *)(lVar6 + 0x18) <= (uint)lVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        uVar14 = *(uint *)(lVar6 + lVar15 * 4 + 0x20);
      }
      else {
        uVar14 = 1000000000;
      }
      if (*(int *)(lVar5 + 0xe0) == 0) {
        thunk_FUN_01a58e78();
      }
      uVar7 = (uVar13 & 0xffffffff) * (ulong)uVar14;
      uVar13 = (uVar13 >> 0x20) * (ulong)uVar14 + (uVar7 >> 0x20);
      uVar9 = (uVar13 >> 0x20) + (ulong)uVar14 * (uVar9 & 0xffffffff);
      if (uVar9 >> 0x20 != 0) {
        return uVar10;
      }
      uVar13 = uVar7 & 0xffffffff | uVar13 << 0x20;
      lVar5 = lVar15 + -9;
      bVar1 = 8 < lVar15;
      lVar15 = lVar5;
    } while (lVar5 != 0 && bVar1);
    uVar14 = (uint)uVar9;
    uVar9 = uVar11;
  }
  if (uVar14 == uVar12) {
    if (uVar13 == uVar9) {
      uVar3 = 0;
    }
    else {
      uVar3 = -uVar10;
      if (uVar9 <= uVar13) {
        uVar3 = uVar10;
      }
    }
  }
  else {
    uVar3 = -uVar10;
    if (uVar12 <= uVar14) {
      uVar3 = uVar10;
    }
  }
  return uVar3;
}


