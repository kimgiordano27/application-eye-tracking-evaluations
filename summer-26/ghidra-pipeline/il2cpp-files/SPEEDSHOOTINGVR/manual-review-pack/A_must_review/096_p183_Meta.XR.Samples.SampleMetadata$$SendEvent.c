/*
FUNCTION_NAME: Meta.XR.Samples.SampleMetadata$$SendEvent
ENTRY_POINT: 01d50c28
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 92
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_11;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


bool Meta_XR_Samples_SampleMetadata__SendEvent(long *param_1)

{
  bool bVar1;
  undefined *puVar2;
  bool in_ZR;
  bool in_CY;
  short sVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  ulong in_x9;
  uint uVar8;
  int unaff_w19;
  long unaff_x20;
  int iVar9;
  int *unaff_x21;
  short *psVar10;
  int unaff_w23;
  ulong unaff_x24;
  ulong uVar11;
  int unaff_w25;
  int iVar12;
  
  if (in_CY && !in_ZR) {
    if (((uint)(in_x9 >> 5) & 0x7ffffff) < 0xc35) {
      iVar12 = unaff_w25 + 4;
    }
    else if ((uint)in_x9 < 1000000) {
      iVar12 = unaff_w25 + 5;
    }
    else {
      iVar12 = unaff_w25 + 6;
    }
  }
  else {
    iVar12 = unaff_w25 + 3;
  }
  if (*(int *)(*param_1 + 0xe0) == 0) {
    thunk_FUN_01022c14();
  }
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fdc534();
  }
  if (iVar12 <= unaff_w23) {
    iVar12 = unaff_w23;
  }
  iVar12 = *(int *)(unaff_x20 + 0x10) + iVar12;
  if (unaff_w19 < iVar12) {
    *unaff_x21 = 0;
    goto LAB_01d50dc8;
  }
  *unaff_x21 = iVar12;
  lVar4 = FUN_011b22d4();
  puVar2 = PTR_DAT_02351818;
  psVar10 = (short *)(lVar4 + (long)iVar12 * 2);
  iVar9 = unaff_w23 + -2;
  while( true ) {
    iVar7 = *(int *)(*(long *)puVar2 + 0xe0);
    if (iVar7 == 0) {
      thunk_FUN_01022c14();
      iVar7 = *(int *)(*(long *)puVar2 + 0xe0);
    }
    iVar5 = (int)unaff_x24;
    if (unaff_x24 >> 0x20 == 0) break;
    if (iVar7 == 0) {
      thunk_FUN_01022c14();
    }
    unaff_x24 = unaff_x24 / 1000000000;
    uVar11 = (ulong)(uint)(iVar5 + (int)unaff_x24 * -1000000000);
    iVar7 = 7;
    do {
      do {
        uVar6 = uVar11 / 10;
        uVar8 = (uint)uVar11;
        psVar10 = psVar10 + -1;
        *psVar10 = (short)uVar11 + (short)(uVar11 / 10) * -10 + 0x30;
        iVar5 = iVar7 + -1;
        bVar1 = -1 < iVar7;
        uVar11 = uVar6;
        iVar7 = iVar5;
      } while (bVar1);
    } while (9 < uVar8);
    unaff_w23 = unaff_w23 + -9;
    iVar9 = iVar9 + -9;
  }
  if (iVar7 == 0) {
    thunk_FUN_01022c14();
    if (iVar5 == 0) goto LAB_01d50d5c;
LAB_01d50d70:
    do {
      do {
        uVar8 = (uint)unaff_x24;
        uVar11 = (unaff_x24 & 0xffffffff) / 10;
        psVar10 = psVar10 + -1;
        *psVar10 = (short)unaff_x24 + (short)((unaff_x24 & 0xffffffff) / 10) * -10 + 0x30;
        iVar7 = iVar9 + -1;
        bVar1 = -1 < iVar9;
        unaff_x24 = uVar11;
        iVar9 = iVar7;
      } while (bVar1);
    } while (9 < uVar8);
  }
  else {
    if (iVar5 != 0) goto LAB_01d50d70;
LAB_01d50d5c:
    if (-1 < unaff_w23 + -1) goto LAB_01d50d70;
  }
  iVar9 = *(int *)(unaff_x20 + 0x10);
  if (-1 < iVar9 + -1) {
    do {
      iVar9 = iVar9 + -1;
      sVar3 = FUN_01c49538();
      psVar10 = psVar10 + -1;
      *psVar10 = sVar3;
    } while (0 < iVar9);
  }
LAB_01d50dc8:
  return iVar12 <= unaff_w19;
}


