/*
FUNCTION_NAME: RenderHeads.Media.AVProVideo.RequestPermissions.WaitForAuthorisation$$get_keepWaiting
ENTRY_POINT: 049f25e0
PROGRAM: Hyper-libil2cpp.so
SCORE: 77
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: attempted_eye_tracking_use
MODULES: weak_source_state;validity_gate;telemetry;attempted_use
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;telemetry_or_network_hits_2;attempted_eye_tracking_permission_or_feature_enable
*/


long RenderHeads_Media_AVProVideo_RequestPermissions_WaitForAuthorisation__get_keepWaiting
               (undefined8 *param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x24;
  ulong uVar13;
  ulong unaff_x26;
  undefined8 *puStack0000000000000000;
  long lStack0000000000000008;
  
  uVar13 = unaff_x26 >> 6;
  puStack0000000000000000 = param_1;
  lStack0000000000000008 = param_2;
  if ((*(int *)(unaff_x24 + 0x728) != 0) && (iVar5 = FUN_04a68ec0(1,&DAT_0b558730), iVar5 != 0)) {
    FUN_049e90c4();
  }
  lVar12 = DAT_0b558f38;
  if (DAT_0b558f30 <= DAT_0b558f38 + uVar13) {
    do {
      uVar9 = DAT_0b558f30;
      if (DAT_0b558f30 == 0) {
        DAT_0b558dd0 = FUN_049f25ac;
        if (*(int *)(unaff_x24 + 0x728) != 0) {
          DAT_0b558730 = 0;
        }
        uVar11 = 100;
      }
      else {
        if (*(int *)(unaff_x24 + 0x728) != 0) {
          DAT_0b558730 = 0;
        }
        if ((DAT_0b558f30 >> 0x37 & 0xff) != 0) {
          return -1;
        }
        uVar11 = DAT_0b558f30 << 1;
      }
      pvVar6 = (void *)FUN_049f0430(uVar11 << 4,0);
      if (pvVar6 == (void *)0x0) {
        return -1;
      }
      if ((*(int *)(unaff_x24 + 0x728) != 0) && (iVar5 = FUN_04a68ec0(1,&DAT_0b558730), iVar5 != 0))
      {
        FUN_049e90c4();
      }
      lVar12 = DAT_0b558f38;
      pvVar3 = DAT_0b558f28;
      uVar4 = DAT_0b558f30;
      if ((uVar9 == DAT_0b558f30) && (pvVar3 = pvVar6, uVar4 = uVar11, DAT_0b558f38 != 0)) {
        memcpy(pvVar6,DAT_0b558f28,DAT_0b558f38 << 4);
      }
      DAT_0b558f30 = uVar4;
      DAT_0b558f28 = pvVar3;
    } while (DAT_0b558f30 <= lVar12 + uVar13);
  }
  pvVar6 = DAT_0b558f28;
  lVar2 = uVar13 - 1;
  if (lVar2 != 0) {
    puVar7 = (undefined4 *)((long)DAT_0b558f28 + lVar12 * 0x10 + 8);
    puVar8 = puStack0000000000000000;
    lVar10 = lVar2;
    do {
      lVar10 = lVar10 + -1;
      *(undefined8 *)(puVar7 + -2) = *puVar8;
      *puVar7 = 1;
      puVar7 = puVar7 + 4;
      puVar8 = puVar8 + 1;
    } while (lVar10 != 0);
  }
  uVar9 = puStack0000000000000000[lVar2];
  puVar1 = (ulong *)((long)pvVar6 + (lVar2 + lVar12) * 0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = uVar9 & 0xffffffffffffffffU >> (-lStack0000000000000008 & 0x3fU);
  if (*(int *)(unaff_x24 + 0x728) != 0) {
    DAT_0b558730 = 0;
  }
  DAT_0b558f38 = DAT_0b558f38 + uVar13;
  return lVar12;
}


