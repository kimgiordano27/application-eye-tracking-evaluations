/*
FUNCTION_NAME: OVRPlugin$$GetHandTrackingEnabled
ENTRY_POINT: 03222390
PROGRAM: vrfs-libil2cpp.so
SCORE: 77
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_6;validity_or_gating_hits_12;functionality_gaze_retrieval_or_extraction
*/


long OVRPlugin__GetHandTrackingEnabled(void)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  short sVar5;
  int iVar6;
  long lVar7;
  uint in_w8;
  int iVar8;
  long unaff_x19;
  int unaff_w20;
  int unaff_w21;
  ulong unaff_x22;
  ulong uVar9;
  short *psVar10;
  long lVar11;
  
  uVar1 = (in_w8 & 0xffff | 0x10000) + 1;
  if (unaff_w21 < 2) {
    unaff_w21 = 1;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = (uint)unaff_x22 / uVar1;
  }
  iVar8 = 6;
  if (((uint)(unaff_x22 >> 5) & 0x7ffffff) < 0xc35) {
    iVar8 = 1;
    uVar3 = -unaff_w20;
  }
  if (9 < uVar3) {
    if (uVar3 < 100) {
      iVar8 = iVar8 + 1;
    }
    else if (uVar3 < 1000) {
      iVar8 = iVar8 + 2;
    }
    else if (uVar3 >> 4 < 0x271) {
      iVar8 = iVar8 + 3;
    }
    else {
      iVar8 = iVar8 + 4;
    }
  }
  if (*(int *)(*(long *)PTR_DAT_06e1a840 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  puVar4 = PTR_DAT_06e3f9a0;
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0160eeb4();
  }
  if (iVar8 <= unaff_w21) {
    iVar8 = unaff_w21;
  }
  iVar8 = *(int *)(unaff_x19 + 0x10) + iVar8;
  lVar7 = thunk_FUN_015c3580(iVar8,0);
  if (lVar7 == 0) {
    lVar11 = 0;
  }
  else {
    iVar6 = thunk_FUN_01644b08(0);
    lVar11 = lVar7 + iVar6;
  }
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  psVar10 = (short *)(lVar11 + (long)iVar8 * 2);
  iVar8 = unaff_w21 + -2;
  do {
    do {
      uVar1 = (uint)unaff_x22;
      uVar9 = (unaff_x22 & 0xffffffff) / 10;
      psVar10 = psVar10 + -1;
      *psVar10 = (short)unaff_x22 + (short)((unaff_x22 & 0xffffffff) / 10) * -10 + 0x30;
      iVar6 = iVar8 + -1;
      bVar2 = -1 < iVar8;
      unaff_x22 = uVar9;
      iVar8 = iVar6;
    } while (bVar2);
  } while (9 < uVar1);
  iVar8 = *(int *)(unaff_x19 + 0x10);
  if (-1 < iVar8 + -1) {
    do {
      iVar8 = iVar8 + -1;
      sVar5 = FUN_02521d48();
      psVar10 = psVar10 + -1;
      *psVar10 = sVar5;
    } while (0 < iVar8);
  }
  return lVar7;
}


