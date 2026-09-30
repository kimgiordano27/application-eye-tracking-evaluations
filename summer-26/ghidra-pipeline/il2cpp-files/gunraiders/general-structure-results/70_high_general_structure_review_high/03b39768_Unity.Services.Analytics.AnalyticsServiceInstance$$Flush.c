/*
FUNCTION_NAME: Unity.Services.Analytics.AnalyticsServiceInstance$$Flush
ENTRY_POINT: 03b39768
PROGRAM: gunraiders-libil2cpp.so
SCORE: 87
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_6;strong_file_logging_hits_2;telemetry_or_network_hits_4
*/


byte Unity_Services_Analytics_AnalyticsServiceInstance__Flush(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long *unaff_x19;
  long unaff_x20;
  long unaff_x21;
  byte unaff_w23;
  long *unaff_x24;
  long *unaff_x25;
  int iStack000000000000000c;
  int iStack0000000000000018;
  int iStack000000000000001c;
  
  FUN_01c5d288(*(undefined8 *)(param_1 + 0xa60));
  FUN_01c5d288(PTR_DAT_0422f9e8);
  FUN_01c5d288(PTR_DAT_04231170);
  *(undefined1 *)(unaff_x21 + 0xc1f) = 1;
  puVar1 = PTR_DAT_0422f9e8;
  lVar9 = *unaff_x19;
  _iStack0000000000000018 = 0;
  iStack000000000000000c = 0;
  if (unaff_x25 == (long *)0x0) {
LAB_03b397b4:
    unaff_x25 = (long *)0x0;
  }
  else {
    if (*(byte *)(*unaff_x25 + 0x130) < *(byte *)(lVar9 + 0x130)) goto LAB_03b397b4;
    if (*(long *)(*(long *)(*unaff_x25 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9)
    {
      unaff_x25 = (long *)0x0;
    }
  }
  if (unaff_x24 == (long *)0x0) {
LAB_03b397f0:
    unaff_x24 = (long *)0x0;
  }
  else {
    if (*(byte *)(*unaff_x24 + 0x130) < *(byte *)(lVar9 + 0x130)) goto LAB_03b397f0;
    if (*(long *)(*(long *)(*unaff_x24 + 200) + (ulong)*(byte *)(lVar9 + 0x130) * 8 + -8) != lVar9)
    {
      unaff_x24 = (long *)0x0;
    }
  }
  uVar4 = FUN_03b392e8();
  iVar5 = FUN_03b39270();
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8(*(long *)puVar1);
  }
  puVar2 = System_Runtime_Serialization_Formatters_Binary_NameInfo_TypeInfo;
  uVar8 = FUN_03d4f3bc(unaff_x25,0,0);
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
    }
    uVar8 = FUN_03d4f3bc(unaff_x24,0,0);
    if ((uVar8 & 1) != 0) goto LAB_03b39880;
    if (*(long *)(unaff_x20 + 0x40) == 0) goto LAB_03b39b18;
    uVar8 = FUN_028a9910(*(long *)(unaff_x20 + 0x40),uVar4,&stack0x00000018,*(undefined8 *)puVar2);
    if ((iStack0000000000000018 == iVar5) || ((uVar8 & 1) == 0)) {
      if (*(long *)(unaff_x20 + 0x38) == 0) goto LAB_03b39b18;
      uVar8 = FUN_028a9910(*(long *)(unaff_x20 + 0x38),uVar4,&stack0x0000000c,*(undefined8 *)puVar2)
      ;
      if ((uVar8 & 1) == 0) goto LAB_03b399fc;
      if (iStack000000000000000c != 0) {
        return iStack000000000000000c == 1 & unaff_w23;
      }
    }
    else {
      lVar9 = *(long *)(unaff_x20 + 0x40);
      uVar6 = uVar4;
joined_r0x03b39b14:
      if (lVar9 == 0) {
LAB_03b39b18:
                    /* WARNING: Subroutine does not return */
        FUN_01c5d4a4();
      }
      FUN_028a82d0(lVar9,uVar4,uVar6,
                   *(undefined8 *)VoxelBusters_EssentialKit_LeaderboardLoadScoresResult_TypeInfo);
    }
    bVar3 = 1;
  }
  else {
LAB_03b39880:
    if (*(long *)(unaff_x20 + 0x38) == 0) goto LAB_03b39b18;
    uVar8 = FUN_028a9910(*(long *)(unaff_x20 + 0x38),uVar4,(long)&stack0x00000018 + 4,
                         *(undefined8 *)puVar2);
    if ((uVar8 & 1) == 0) {
      if (*(long *)(unaff_x20 + 0x38) == 0) goto LAB_03b39b18;
      FUN_028a82d0(*(long *)(unaff_x20 + 0x38),uVar4,iVar5,
                   *(undefined8 *)VoxelBusters_EssentialKit_LeaderboardLoadScoresResult_TypeInfo);
    }
    else {
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar8 = FUN_03d4f3bc(unaff_x25,0,0);
      if ((uVar8 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_01c1d1e8();
        }
        uVar8 = FUN_03d4f3bc(unaff_x24,0,0);
        if ((uVar8 & 1) != 0) {
          if ((unaff_x25 == (long *)0x0) ||
             (uVar6 = FUN_03d2b93c(unaff_x25,0), unaff_x24 == (long *)0x0)) goto LAB_03b39b18;
          uVar7 = FUN_03d2b93c(unaff_x24,0);
          puVar2 = PTR_DAT_0422fa60;
          if (*(int *)(*(long *)PTR_DAT_0422fa60 + 0xe0) == 0) {
            thunk_FUN_01c1d1e8(*(long *)PTR_DAT_0422fa60);
          }
          uVar8 = FUN_032d2c34(uVar6,uVar7,0);
          if ((uVar8 & 0xffffffff) != (long)iStack000000000000001c) {
            lVar9 = *(long *)(unaff_x20 + 0x38);
            uVar6 = FUN_03d2b93c(unaff_x25,0);
            uVar7 = FUN_03d2b93c(unaff_x24,0);
            if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
              thunk_FUN_01c1d1e8(*(long *)puVar2);
            }
            uVar6 = FUN_032d2c34(uVar6,uVar7,0);
            goto joined_r0x03b39b14;
          }
        }
      }
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar8 = FUN_03d4f3bc(unaff_x25,0,0);
      if ((uVar8 & 1) != 0) {
        if (unaff_x25 == (long *)0x0) goto LAB_03b39b18;
        uVar8 = FUN_03d2b93c(unaff_x25,0);
        if ((uVar8 & 0xffffffff) == (long)iStack000000000000001c) goto LAB_03b3998c;
        lVar9 = *(long *)(unaff_x20 + 0x38);
LAB_03b39a84:
        uVar6 = FUN_03d2b93c(unaff_x25,0);
        goto joined_r0x03b39b14;
      }
LAB_03b3998c:
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
      }
      uVar8 = FUN_03d4f3bc(unaff_x24,0,0);
      if ((uVar8 & 1) != 0) {
        if (unaff_x24 == (long *)0x0) goto LAB_03b39b18;
        uVar8 = FUN_03d2b93c(unaff_x24,0);
        if ((uVar8 & 0xffffffff) != (long)iStack000000000000001c) {
          lVar9 = *(long *)(unaff_x20 + 0x38);
          unaff_x25 = unaff_x24;
          goto LAB_03b39a84;
        }
      }
    }
LAB_03b399fc:
    bVar3 = 0;
  }
  return bVar3;
}


