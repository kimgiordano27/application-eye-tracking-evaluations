/*
FUNCTION_NAME: FUN_06624c1c
ENTRY_POINT: 06624c1c
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_pose_or_ray_construction_hits_1;telemetry_or_network_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x06624e34) */
/* WARNING: Removing unreachable block (ram,0x06624f44) */

void FUN_06624c1c(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam00000000071cf0b0 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d49c50);
    FUN_02f07e70(PTR_DAT_06d08618);
    FUN_02f07e70(UnityEngine_UIElements_StyleSheets_InitialStyle_TypeInfo);
    FUN_02f07e70(PlayFab_DataModels_InitiateFileUploadsRequest_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d08628);
    FUN_02f07e70(PTR_DAT_06d08630);
    FUN_02f07e70(PlayFab_DataModels_InitiateFileUploadsResponse_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d17e78);
    FUN_02f07e70(PTR_DAT_06d08648);
    FUN_02f07e70(UnityEngine_UIElements_InlineStyleAccess_TypeInfo);
    bRam00000000071cf0b0 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  lStack_90 = 0;
  uStack_a8 = 0;
  lVar9 = FUN_0662413c();
  puVar8 = UnityEngine_UIElements_InlineStyleAccess_TypeInfo;
  puVar7 = PlayFab_DataModels_InitiateFileUploadsRequest_TypeInfo;
  puVar6 = UnityEngine_UIElements_StyleSheets_InitialStyle_TypeInfo;
  puVar5 = PTR_DAT_06d49c50;
  puVar4 = PTR_DAT_06d17e78;
  puVar3 = PTR_DAT_06d08628;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  FUN_03fd16fc(&uStack_c0,param_1,*(undefined8 *)PTR_DAT_06d08648);
  uStack_78 = uStack_b8;
  uStack_80 = uStack_c0;
  lStack_70 = lStack_b0;
  do {
    uVar10 = FUN_04df6d30(&uStack_80,*(undefined8 *)puVar3);
    lVar12 = lStack_70;
    if ((uVar10 & 1) == 0) {
      FUN_04df6d2c(&uStack_80,*(undefined8 *)PTR_DAT_06d08618);
      return;
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    FUN_03fd16fc(&uStack_c0,lVar9,*(undefined8 *)puVar8);
    uStack_98 = uStack_b8;
    uStack_a0 = uStack_c0;
    lStack_90 = lStack_b0;
    do {
      uVar10 = FUN_04df6d30(&uStack_a0,*(undefined8 *)puVar7);
      if ((uVar10 & 1) == 0) {
        bVar2 = false;
        goto LAB_06624e18;
      }
      if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar10 = System_Array_EmptyInternalEnumerator<KeyValuePair<NetworkObjectGuid,_int>>__Dispose
                         (lStack_90,lVar12,&uStack_a8,*(undefined8 *)puVar5);
    } while ((uVar10 & 1) == 0);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar12 = *(long *)(param_2 + 0x10);
    lVar13 = *(long *)puVar4;
    *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    uVar1 = *(uint *)(param_2 + 0x18);
    if (uVar1 < *(uint *)(lVar12 + 0x18)) {
      *(uint *)(param_2 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20) = uStack_a8;
      thunk_FUN_02f411dc();
    }
    else {
      FUN_03fd0c9c(param_2,uStack_a8,
                   *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
    }
    bVar2 = true;
LAB_06624e18:
    FUN_04df6d2c(&uStack_a0,*(undefined8 *)puVar6);
    if (!bVar2) {
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      lVar12 = *(long *)(param_2 + 0x10);
      lVar13 = *(long *)puVar4;
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      uVar1 = *(uint *)(param_2 + 0x18);
      if (uVar1 < *(uint *)(lVar12 + 0x18)) {
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        puVar11 = (undefined8 *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
        *puVar11 = 0;
        thunk_FUN_02f411dc(puVar11,0);
      }
      else {
        FUN_03fd0c9c(param_2,0,*(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
}


