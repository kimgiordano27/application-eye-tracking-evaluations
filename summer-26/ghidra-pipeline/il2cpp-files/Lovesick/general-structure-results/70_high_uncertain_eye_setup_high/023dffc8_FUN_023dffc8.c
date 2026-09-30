/*
FUNCTION_NAME: FUN_023dffc8
ENTRY_POINT: 023dffc8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_023dffc8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined1 auStack_718 [536];
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined1 local_338 [8];
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_1c8 [320];
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  local_318 = param_2;
  if ((DAT_0378218c & 1) == 0) {
    thunk_FUN_00d48444(Method_System_DateTimeFormat_ParseQuoteString__);
    thunk_FUN_00d48444(StringLiteral_302);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_52__);
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_TreeView_UnbindTreeItem__);
    thunk_FUN_00d48444(PTR_DAT_033ed8c0);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__);
    thunk_FUN_00d48444(DigitalOpus_MB_Core_TextureBlenderURPLit_TypeInfo);
    thunk_FUN_00d48444(PTR_DAT_033ee770);
    thunk_FUN_00d48444(
                      Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_get_State__
                      );
    DAT_0378218c = 1;
  }
  puVar4 = Method_UnityEngine_UIElements_TreeView_UnbindTreeItem__;
  memset(auStack_1c8,0,0x13c);
  puVar3 = Method_System_DateTimeFormat_ParseQuoteString__;
  uStack_328 = 0;
  local_330 = 0;
  local_338[0] = 0;
  uStack_348 = 0;
  local_350 = 0;
  uStack_358 = 0;
  local_360 = 0;
  uStack_368 = 0;
  local_370 = 0;
  uStack_378 = 0;
  local_380 = 0;
  uStack_388 = 0;
  local_390 = 0;
  uStack_398 = 0;
  local_3a0 = 0;
  uStack_3b8 = 0;
  local_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  if (*(int *)(param_1 + 0xd8) == 1) {
    uVar16 = 0x17;
  }
  else {
    uVar16 = *(undefined4 *)((long)param_3 + 0x11c);
  }
  FUN_0241b984(&local_310,param_1,*(undefined8 *)(param_1 + 0x120),param_3,uVar16,0);
  memcpy(auStack_1c8,&local_310,0x13c);
  uVar9 = *(undefined8 *)(param_1 + 0x110);
  if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026bc6dc(auStack_1c8,uVar9,0);
  FUN_026bc708(auStack_1c8,*(undefined4 *)(param_1 + 0x118),0);
  uStack_328 = *(undefined8 *)((long)param_3 + 0xe4);
  local_330 = *(undefined8 *)((long)param_3 + 0xdc);
  lVar10 = param_3[0x12];
  fVar14 = (float)FUN_026884c4(&local_330,0);
  fVar15 = (float)FUN_026884d4(&local_330,0);
  if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar13 = (long *)Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__;
  lVar6 = FUN_023a0ea8(0);
  FUN_023ae3ac(local_338,lVar6,*(undefined8 *)(param_1 + 0x108),0);
  puVar3 = PTR_DAT_033ed8c0;
  if (*(long *)(param_1 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  puVar1 = param_3 + 2;
  if (*(char *)(*(long *)(param_1 + 0xf8) + 0x10) != '\0') {
    if (param_3[0x24] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar7 = FUN_02447430(param_3[0x24],0);
    if ((uVar7 & 1) == 0) {
      if (*(long *)(param_1 + 0xf8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      uVar16 = *(undefined4 *)(*(long *)(param_1 + 0xf8) + 0x24);
      uVar9 = FUN_02683e5c(lVar10,0);
      uVar12 = FUN_02683ee4(lVar10,0);
      FUN_02693d84(&local_310,uVar16,fVar14 / fVar15,uVar9,uVar12,0);
      uStack_358 = uStack_2e8;
      local_360 = local_2f0;
      uStack_378 = uStack_308;
      local_380 = local_310;
      uStack_368 = uStack_2f8;
      local_370 = local_300;
      uStack_348 = uStack_2d8;
      local_350 = local_2e0;
      uVar5 = FUN_0244ce3c(puVar1,0);
      uStack_438 = uStack_308;
      local_440 = local_310;
      uStack_428 = uStack_2f8;
      local_430 = local_300;
      uStack_418 = uStack_2e8;
      uStack_420 = local_2f0;
      uStack_408 = uStack_2d8;
      local_410 = local_2e0;
      FUN_02680d84(&local_400,&local_440,uVar5 & 1,0);
      uStack_358 = uStack_3d8;
      local_360 = local_3e0;
      uStack_378 = uStack_3f8;
      local_380 = local_400;
      uStack_368 = uStack_3e8;
      local_370 = local_3f0;
      uStack_348 = uStack_3c8;
      local_350 = local_3d0;
      FUN_0244ccfc(&local_400,puVar1,0,0);
      uStack_398 = uStack_3d8;
      local_3a0 = local_3e0;
      uStack_3b8 = uStack_3f8;
      local_3c0 = local_400;
      uStack_3a8 = uStack_3e8;
      uStack_3b0 = local_3f0;
      uStack_388 = uStack_3c8;
      local_390 = local_3d0;
      fVar14 = (float)FUN_02692760(&local_3c0,3,0);
      lVar10 = *(long *)(param_1 + 0xf8);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_02692cf8(fVar14 + *(float *)(lVar10 + 0x14),(float)local_400 + *(float *)(lVar10 + 0x18),
                   (float)local_3f0 + *(float *)(lVar10 + 0x1c),
                   (float)local_3d0 + *(float *)(lVar10 + 0x20),&local_3c0,3,0);
      uStack_3e8 = uStack_3a8;
      local_3f0 = uStack_3b0;
      uStack_3d8 = uStack_398;
      local_3e0 = local_3a0;
      uStack_3f8 = uStack_3b8;
      local_400 = local_3c0;
      uStack_3c8 = uStack_388;
      local_3d0 = local_390;
      uStack_468 = uStack_368;
      local_470 = local_370;
      uStack_458 = uStack_358;
      local_460 = local_360;
      uStack_478 = uStack_378;
      local_480 = local_380;
      uStack_448 = uStack_348;
      local_450 = local_350;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uStack_488 = uStack_3c8;
      local_490 = local_3d0;
      uStack_4a8 = uStack_3e8;
      local_4b0 = local_3f0;
      uStack_498 = uStack_3d8;
      uStack_4a0 = local_3e0;
      uStack_4c8 = uStack_448;
      local_4d0 = local_450;
      uStack_4b8 = uStack_3f8;
      uStack_4c0 = local_400;
      uStack_4e8 = uStack_468;
      local_4f0 = local_470;
      uStack_4d8 = uStack_458;
      uStack_4e0 = local_460;
      uStack_4f8 = uStack_478;
      local_500 = local_480;
      FUN_0243793c(lVar6,&uStack_4c0,&local_500,0,0);
    }
    else {
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_02661754(*(undefined8 *)
                    Method_Oculus_Interaction_Interactor<LocomotionTurnerInteractor,_LocomotionTurnerInteractable>_get_State__
                   ,0);
    }
  }
  memcpy(auStack_718,param_3,0x218);
  lVar10 = FUN_0241cc10(param_1,auStack_718,0);
  uVar9 = local_318;
  puVar4 = PTR_DAT_033ee770;
  if (lVar10 == 0) {
    if (*(int *)(*plVar13 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026b6dc8(&local_318,lVar6,0);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    FUN_026a8aa4(lVar6,0);
    FUN_026b68dc(&local_318,*param_3,param_3[1],auStack_1c8,param_1 + 0xdc,param_1 + 0x128,0);
  }
  else {
    lVar8 = *(long *)PTR_DAT_033ee770;
    if (*(int *)(lVar8 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar8);
      lVar8 = *(long *)puVar4;
    }
    lVar11 = *(long *)(*(long *)(lVar8 + 0xb8) + 8);
    if (lVar11 == 0) {
      if (*(int *)(lVar8 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar8);
        lVar8 = *(long *)puVar4;
      }
      uVar12 = **(undefined8 **)(lVar8 + 0xb8);
      lVar11 = thunk_FUN_00d62348(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_52__);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0240fb6c(lVar11,uVar12,*(undefined8 *)DigitalOpus_MB_Core_TextureBlenderURPLit_TypeInfo,0)
      ;
      *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8) = lVar11;
      plVar13 = (long *)Method_System_Collections_Generic_List_Enumerator<UsageHint>_MoveNext__;
    }
    FUN_0240edb8(lVar10,uVar9,lVar6,param_3,auStack_1c8,param_1 + 0xdc,param_1 + 0x128,lVar11,0);
  }
  lVar10 = *(long *)(param_1 + 0xf8);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((*(char *)(lVar10 + 0x10) != '\0') && (*(char *)(lVar10 + 0x11) != '\0')) {
    if (param_3[0x24] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar7 = FUN_02447430(param_3[0x24],0);
    if ((uVar7 & 1) == 0) {
      FUN_0244ccfc(&local_400,puVar1,0,0);
      uStack_2e8 = uStack_3d8;
      local_2f0 = local_3e0;
      uStack_308 = uStack_3f8;
      local_310 = local_400;
      uStack_2f8 = uStack_3e8;
      local_300 = local_3f0;
      uStack_2d8 = uStack_3c8;
      local_2e0 = local_3d0;
      FUN_0244cde4(&local_480,puVar1,0,0);
      uStack_3e8 = uStack_468;
      local_3f0 = local_470;
      uStack_3d8 = uStack_458;
      local_3e0 = local_460;
      uStack_3f8 = uStack_478;
      local_400 = local_480;
      uStack_3c8 = uStack_448;
      local_3d0 = local_450;
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      uStack_748 = uStack_2f8;
      local_750 = local_300;
      uStack_738 = uStack_2e8;
      uStack_740 = local_2f0;
      uStack_768 = uStack_3c8;
      local_770 = local_3d0;
      uStack_758 = uStack_308;
      uStack_760 = local_310;
      uStack_728 = uStack_2d8;
      local_730 = local_2e0;
      uStack_788 = uStack_3e8;
      local_790 = local_3f0;
      uStack_778 = uStack_3d8;
      uStack_780 = local_3e0;
      uStack_798 = uStack_3f8;
      local_7a0 = local_400;
      FUN_0243793c(lVar6,&uStack_760,&local_7a0,0,0);
    }
  }
  FUN_023ae3b0(local_338,0);
  if (*(int *)(*plVar13 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026b6dc8(&local_318,lVar6,0);
  if (*(int *)(*(long *)Method_System_DateTimeFormat_ParseQuoteString__ + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_023a1000(lVar6,0);
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


