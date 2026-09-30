/*
FUNCTION_NAME: OVRPlugin$$GetSkeleton2
ENTRY_POINT: 03222c4c
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__GetSkeleton2(long *param_1)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong unaff_x19;
  ulong uVar10;
  int unaff_w20;
  short *psVar11;
  int unaff_w22;
  
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  if (unaff_w20 <= unaff_w22) {
    unaff_w20 = unaff_w22;
  }
  lVar4 = thunk_FUN_015c3580(unaff_w20,0);
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  else {
    iVar3 = thunk_FUN_01644b08(0);
    lVar5 = lVar4 + iVar3;
  }
  puVar2 = PTR_DAT_06e3f9a0;
  iVar3 = unaff_w22 + -2;
  psVar11 = (short *)(lVar5 + (ulong)(uint)(unaff_w20 << 1));
  while( true ) {
    iVar7 = *(int *)(*(long *)puVar2 + 0xe0);
    if (iVar7 == 0) {
      thunk_FUN_016466fc();
      iVar7 = *(int *)(*(long *)puVar2 + 0xe0);
    }
    iVar9 = (int)unaff_x19;
    if (unaff_x19 >> 0x20 == 0) break;
    if (iVar7 == 0) {
      thunk_FUN_016466fc();
    }
    unaff_x19 = unaff_x19 / 1000000000;
    uVar10 = (ulong)(uint)(iVar9 + (int)unaff_x19 * -1000000000);
    iVar7 = 7;
    do {
      do {
        uVar6 = uVar10 / 10;
        uVar8 = (uint)uVar10;
        psVar11 = psVar11 + -1;
        *psVar11 = (short)uVar10 + (short)(uVar10 / 10) * -10 + 0x30;
        iVar9 = iVar7 + -1;
        bVar1 = -1 < iVar7;
        uVar10 = uVar6;
        iVar7 = iVar9;
      } while (bVar1);
    } while (9 < uVar8);
    unaff_w22 = unaff_w22 + -9;
    iVar3 = iVar3 + -9;
  }
  if (iVar7 == 0) {
    thunk_FUN_016466fc();
  }
  if ((iVar9 != 0) || (-1 < unaff_w22 + -1)) {
    do {
      do {
        uVar8 = (uint)unaff_x19;
        uVar10 = (unaff_x19 & 0xffffffff) / 10;
        psVar11 = psVar11 + -1;
        *psVar11 = (short)unaff_x19 + (short)((unaff_x19 & 0xffffffff) / 10) * -10 + 0x30;
        iVar7 = iVar3 + -1;
        bVar1 = -1 < iVar3;
        unaff_x19 = uVar10;
        iVar3 = iVar7;
      } while (bVar1);
    } while (9 < uVar8);
  }
  return lVar4;
}


