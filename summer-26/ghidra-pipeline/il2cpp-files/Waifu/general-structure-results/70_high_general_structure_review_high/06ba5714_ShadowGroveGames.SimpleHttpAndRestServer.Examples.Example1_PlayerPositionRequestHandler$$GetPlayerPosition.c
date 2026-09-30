/*
FUNCTION_NAME: ShadowGroveGames.SimpleHttpAndRestServer.Examples.Example1_PlayerPositionRequestHandler$$GetPlayerPosition
ENTRY_POINT: 06ba5714
PROGRAM: Waifu-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2
*/


undefined8
ShadowGroveGames_SimpleHttpAndRestServer_Examples_Example1_PlayerPositionRequestHandler__GetPlayerPosition
          (long param_1)

{
  ulong *puVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  
  FUN_0335b6c8(param_1 + 0x3d0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ca458,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_08411c48,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_083ce7b0,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0843acf8,1);
  DataMemoryBarrier(2,3);
  FUN_0335b6c8(&DAT_0843aac0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x21 + 0x80e) = 1;
  if (unaff_x20 == 0) {
LAB_06ba5990:
                    /* WARNING: Subroutine does not return */
    FUN_033d1d3c();
  }
  if (*(int *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_033d1d44();
  }
  uVar2 = *(undefined1 *)(unaff_x20 + 0x20);
  if (*(int *)(DAT_083ce7b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  iVar5 = FUN_0404b674(uVar2,DAT_08411c48);
  pvVar7 = (void *)FUN_0672f75c(iVar5 * *(int *)(unaff_x20 + 0x18),0);
  FUN_0672f8d0();
  uVar8 = FUN_06bf169c(pvVar7,*(undefined4 *)(unaff_x20 + 0x18),0);
  free(pvVar7);
  uVar6 = FUN_06bf1880(uVar8,0);
  *(undefined4 *)(unaff_x19 + 1) = uVar6;
  uVar6 = FUN_06bf1a48(uVar8,0);
  *(undefined4 *)((long)unaff_x19 + 0xc) = uVar6;
  uVar9 = FUN_06bf1c10(uVar8,10,0);
  *(undefined4 *)((long)unaff_x19 + 0x14) = 0x30;
  if ((uVar9 & 1) == 0) {
    uVar8 = DAT_0843acf8;
    if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
      FUN_033b9870();
      uVar8 = DAT_0843acf8;
    }
  }
  else {
    uVar6 = FUN_06bf1ddc(uVar8,0);
    if (*(int *)(DAT_083ce7b0 + 0xe0) == 0) {
      FUN_033b9870(DAT_083ce7b0);
    }
    pvVar7 = (void *)FUN_0672f75c(uVar6,0);
    uVar9 = FUN_06bf1fa4(uVar8,pvVar7,uVar6,0);
    if ((uVar9 & 1) != 0) {
      lVar10 = FUN_03398188(DAT_083c73d0,uVar6);
      if (lVar10 != 0) {
        if (*(int *)(DAT_083ce7b0 + 0xe0) == 0) {
          FUN_033b9870();
        }
        FUN_0672fa78(pvVar7,lVar10,0,*(undefined4 *)(lVar10 + 0x18),0);
        free(pvVar7);
        *unaff_x19 = lVar10;
        if (DAT_08908cd0 != 0) {
          puVar1 = &DAT_0873ccb0 + ((ulong)unaff_x19 >> 0x12 & 0x7fff);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = *puVar1 | 1L << ((ulong)unaff_x19 >> 0xc & 0x3f);
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        FUN_06bf2188(uVar8,0);
        return 1;
      }
      goto LAB_06ba5990;
    }
    uVar8 = DAT_0843aac0;
    if (*(int *)(DAT_083ca458 + 0xe0) == 0) {
      FUN_033b9870();
      uVar8 = DAT_0843aac0;
    }
  }
  FUN_079ca0b0(uVar8,0);
  return 0;
}


