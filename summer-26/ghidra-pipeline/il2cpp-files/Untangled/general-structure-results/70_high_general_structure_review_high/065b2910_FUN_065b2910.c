/*
FUNCTION_NAME: FUN_065b2910
ENTRY_POINT: 065b2910
PROGRAM: Untangled-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_9;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


void FUN_065b2910(long param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_071ceb39 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d53730);
    FUN_02f07e70(PTR_DAT_06d59c80);
    FUN_02f07e70(PTR_DAT_06d6a748);
    FUN_02f07e70(PTR_DAT_06d53740);
    FUN_02f07e70(PTR_DAT_06d59c88);
    FUN_02f07e70(PTR_DAT_06d59c90);
    FUN_02f07e70(PTR_DAT_06d59c98);
    FUN_02f07e70(PlayFab_EconomyModels_CreateUploadUrlsResponse_TypeInfo);
    FUN_02f07e70(PTR_DAT_06d59ca0);
    FUN_02f07e70(PTR_DAT_06d59ca8);
    FUN_02f07e70(ES3Types_ES3Type_BoundsArray_TypeInfo);
    DAT_071ceb39 = 1;
  }
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  if ((param_2 == 0) || (*(long *)(param_1 + 0x38) == 0)) goto LAB_065b2c30;
  uVar6 = FUN_04c74820(*(long *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x10),
                       *(undefined8 *)PTR_DAT_06d53730);
  puVar4 = PTR_DAT_06d6a748;
  if ((uVar6 & 1) == 0) {
    lVar11 = thunk_FUN_02ef1808(*(undefined8 *)ES3Types_ES3Type_BoundsArray_TypeInfo);
    FUN_065ce740(lVar11,0);
    lVar12 = *(long *)(param_1 + 0x18);
    if (lVar12 != 0) {
      (**(code **)(lVar12 + 0x18))
                (*(undefined8 *)(lVar12 + 0x40),*(undefined8 *)(param_1 + 0x20),
                 *(undefined8 *)(param_2 + 0x10),lVar11,*(undefined8 *)(lVar12 + 0x28));
    }
    if (lVar11 == 0) goto LAB_065b2c30;
    if (*(char *)(lVar11 + 0x18) == '\0') {
      FUN_02a551a0(param_2);
      uVar13 = *(undefined8 *)(param_2 + 0x10);
      thunk_FUN_02f239f0(PTR_DAT_06d02080);
      uVar9 = thunk_FUN_02ef1808();
      uVar10 = thunk_FUN_02f239f0(ES3Types_ES3Type_BoxCollider_TypeInfo);
      FUN_05558580(uVar9,uVar10,uVar13,0);
      uVar10 = thunk_FUN_02f239f0(ES3Types_ES3Type_BoxCollider2D_TypeInfo);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar9,uVar10);
    }
    plVar8 = *(long **)(lVar11 + 0x10);
    *(long **)(param_1 + 0x30) = plVar8;
    goto LAB_065b2bf8;
  }
  if (*(long *)(param_1 + 0x38) == 0) goto LAB_065b2c30;
  plVar7 = (long *)FUN_04c745ac(*(long *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x10),
                                *(undefined8 *)PTR_DAT_06d6a748);
  puVar5 = PlayFab_EconomyModels_CreateUploadUrlsResponse_TypeInfo;
  if (plVar7 == (long *)0x0) {
LAB_065b2a38:
    plVar7 = (long *)0x0;
  }
  else {
    bVar1 = *(byte *)(*(long *)PlayFab_EconomyModels_CreateUploadUrlsResponse_TypeInfo + 0x130);
    if (*(byte *)(*plVar7 + 0x130) < bVar1) goto LAB_065b2a38;
    if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) !=
        *(long *)PlayFab_EconomyModels_CreateUploadUrlsResponse_TypeInfo) {
      plVar7 = (long *)0x0;
    }
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar8 = (long *)FUN_04c745ac(*(long *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x10),
                                  *(undefined8 *)puVar4);
    if (plVar7 == (long *)0x0) {
      *(long **)(param_1 + 0x30) = plVar8;
LAB_065b2bf8:
      thunk_FUN_02f411dc(param_1 + 0x30,plVar8);
      return;
    }
    if (plVar8 != (long *)0x0) {
      lVar11 = *(long *)puVar5;
      bVar1 = *(byte *)(lVar11 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
        FUN_02f08440(plVar8);
      }
    }
    if (*(long *)(param_1 + 0x38) != 0) {
      FUN_04c74a5c(&local_a8,*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_06d59c80);
      puVar3 = PTR_DAT_06d59c90;
      puVar2 = PTR_DAT_06d53740;
      uStack_78 = uStack_a0;
      local_80 = local_a8;
      uStack_68 = uStack_90;
      local_70 = local_98;
      local_60 = local_88;
      while (uVar6 = FUN_04e98e80(&local_80,*(undefined8 *)puVar3), uVar10 = uStack_68,
            uVar9 = local_70, (uVar6 & 1) != 0) {
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        lVar11 = FUN_065b2d1c(plVar8);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02f080c0();
        }
        FUN_04c74618(lVar11,uVar9,uVar10,*(undefined8 *)puVar2);
      }
      FUN_04e98fa0(&local_80,*(undefined8 *)PTR_DAT_06d59c88);
      if (plVar8 != (long *)0x0) {
        FUN_065b250c(plVar8,*(undefined8 *)(param_1 + 0x10));
        FUN_065b25a8(plVar8,*(undefined8 *)(param_1 + 0x18));
        if ((*(long *)(param_1 + 0x38) != 0) &&
           (plVar8 = (long *)FUN_04c745ac(*(long *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x10),
                                          *(undefined8 *)puVar4), plVar8 != (long *)0x0)) {
          lVar11 = *(long *)puVar5;
          bVar1 = *(byte *)(lVar11 + 0x130);
          if ((*(byte *)(*plVar8 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar1 * 8 + -8) != lVar11)) {
                    /* WARNING: Subroutine does not return */
            FUN_02f08440();
          }
          plVar8 = (long *)FUN_065b2da0(plVar8,*(undefined8 *)(param_1 + 0x20));
          *(long **)(param_1 + 0x30) = plVar8;
          goto LAB_065b2bf8;
        }
      }
    }
  }
LAB_065b2c30:
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


