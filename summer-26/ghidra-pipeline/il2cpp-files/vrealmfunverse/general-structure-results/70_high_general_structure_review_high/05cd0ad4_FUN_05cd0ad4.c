/*
FUNCTION_NAME: FUN_05cd0ad4
ENTRY_POINT: 05cd0ad4
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_6;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_2
*/


void FUN_05cd0ad4(undefined8 *param_1,undefined4 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 local_660;
  undefined4 local_658;
  undefined1 auStack_5f0 [96];
  undefined4 *local_590;
  undefined8 uStack_588;
  void *local_580;
  undefined8 local_578;
  undefined8 local_570;
  undefined8 uStack_568;
  ulong local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined1 auStack_4b0 [208];
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined1 auStack_3c8 [160];
  undefined4 local_328;
  undefined8 local_300;
  undefined3 uStack_2f8;
  undefined5 uStack_2f5;
  undefined3 local_2f0;
  undefined4 uStack_2ed;
  undefined4 uStack_2e9;
  undefined1 auStack_2e0 [200];
  undefined1 auStack_218 [168];
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined3 local_150;
  undefined5 uStack_14d;
  undefined3 uStack_148;
  undefined5 uStack_145;
  undefined3 uStack_140;
  undefined4 uStack_13d;
  undefined4 uStack_139;
  undefined1 auStack_130 [200];
  long local_68;
  
  puVar3 = Method_System_Nullable<MRUK_SharedRoomsData>__ctor__;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((DAT_066d9d5b & 1) == 0) {
    FUN_02b3c81c(PTR_DAT_06312d90);
    FUN_02b3c81c(Method_System_Threading_Tasks_Task<WebResponse>_ConfigureAwait__);
    FUN_02b3c81c(Method_System_Resources_ResourceReader_CompareStringEqualsName__);
    FUN_02b3c81c(Method_System_Resources_ResourceReader_DeserializeObject__);
    FUN_02b3c81c(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__);
    FUN_02b3c81c(Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_SelectPrefab__);
    FUN_02b3c81c(Method_UnityEngine_UIElements_TextInputBaseField<string>_get_textInputBase__);
    FUN_02b3c81c(Method_System_Resources_ResourceReader_FindPosForResource__);
    FUN_02b3c81c(Method_System_Resources_ResourceReader_FindType__);
    FUN_02b3c81c(PTR_DAT_06312520);
    FUN_02b3c81c(Method_System_Nullable<MRUK_SharedRoomsData>__ctor__);
    FUN_02b3c81c(Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_SetDefault__);
    FUN_02b3c81c(
                Method_UnityEngine_UIElements_UxmlFactory<MinMaxSlider,_MinMaxSlider_UxmlTraits>__ctor__
                );
    DAT_066d9d5b = 1;
  }
  memset(auStack_130,0,200);
  uStack_140 = 0;
  uStack_13d = 0;
  local_150 = 0;
  uStack_14d = 0;
  uStack_148 = 0;
  uStack_145 = 0;
  uStack_139 = 0;
  local_3d0 = 0;
  local_3e0 = 0;
  uStack_3d8 = 0;
  memset(auStack_218,0,200);
  memset(auStack_2e0,0,200);
  local_2f0 = 0;
  uStack_2ed = 0;
  local_300 = 0;
  uStack_2f8 = 0;
  uStack_2f5 = 0;
  uStack_528 = 0;
  local_530 = 0;
  uStack_518 = 0;
  uStack_520 = 0;
  uStack_508 = 0;
  local_510 = 0;
  local_4f8 = 0;
  uStack_500 = 0;
  uStack_4c8 = 0;
  local_4d0 = 0;
  uStack_4b8 = 0;
  uStack_4c0 = 0;
  uStack_2e9 = 0;
  uStack_4e8 = 0;
  local_4e0 = 0;
  local_4f0 = 0;
  uStack_548 = 0;
  local_550 = 0;
  uStack_538 = 0;
  uStack_540 = 0;
  memset(auStack_3c8,0,200);
  local_580 = (void *)0x0;
  local_578 = 0;
  local_590 = (undefined4 *)0x0;
  uStack_588 = 0;
  uStack_568 = 0;
  local_570 = 0;
  uStack_558 = 0;
  local_560 = 0;
  memcpy(auStack_4b0,param_2,0xd0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02b9ad44();
  }
  uVar7 = FUN_05cd09bc(auStack_4b0);
  puVar5 = Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_SetDefault__;
  puVar4 = Method_System_Threading_Tasks_Task<WebResponse>_ConfigureAwait__;
  if ((uVar7 & 1) == 0) {
    lVar8 = *(long *)
             Method_UnityEngine_TextCore_Text_TextProcessingStack<TextAlignment>_SetDefault__;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
      lVar8 = *(long *)puVar5;
    }
    puVar12 = *(undefined8 **)(lVar8 + 0xb8);
    uStack_698 = puVar12[1];
    local_6a0 = *puVar12;
    memcpy(auStack_2e0,puVar12 + 2,200);
    uStack_4c8 = puVar12[0x1c];
    local_4d0 = puVar12[0x1b];
    uStack_4b8 = puVar12[0x1e];
    uStack_4c0 = puVar12[0x1d];
    uVar11 = *(undefined8 *)((long)puVar12 + 0x105);
    local_300 = *(undefined8 *)((long)puVar12 + 0xfd);
    uVar10 = *(undefined4 *)(puVar12 + 0x1f);
    uVar9 = *(undefined1 *)((long)puVar12 + 0xfc);
    uVar14 = puVar12[0x22];
    uVar13 = puVar12[0x21];
    puVar12 = puVar12 + 0x23;
  }
  else {
    memset(auStack_130,0,200);
    uStack_140 = 0;
    uStack_13d = 0;
    local_150 = 0;
    uStack_14d = 0;
    uStack_148 = 0;
    uStack_145 = 0;
    uStack_139 = 0;
    local_3d0 = 0;
    local_3e0 = 0;
    uStack_3d8 = 0;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    puVar5 = 
    Method_UnityEngine_UIElements_UxmlFactory<MinMaxSlider,_MinMaxSlider_UxmlTraits>__ctor__;
    FUN_05cca9cc(&local_550,*(undefined8 *)(param_2 + 0x2e));
    local_4f8 = CONCAT44(local_4f8._4_4_,*param_2);
    uVar10 = **(undefined4 **)(*(long *)puVar3 + 0xb8);
    memcpy(&local_660,&local_550,0x60);
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    memcpy(auStack_5f0,&local_660,0x60);
    FUN_05cc3124(auStack_3c8,uVar10,auStack_5f0);
    local_328 = param_2[1];
    memcpy(auStack_218,auStack_3c8,200);
    if (param_2[0x30] == **(int **)(*(long *)puVar5 + 0xb8)) {
      uVar7 = 0;
      do {
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        lVar8 = *(long *)(param_2 + 0x32);
        if (lVar8 == 0) {
LAB_05cd119c:
          if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_02b3cac4();
          }
          goto LAB_05cd11c4;
        }
        if ((long)*(int *)(lVar8 + 0x18) <= (long)uVar7) goto LAB_05cd0ea0;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
          lVar8 = *(long *)(param_2 + 0x32);
          if (lVar8 == 0) goto LAB_05cd119c;
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar7) goto LAB_05cd11b0;
        uVar10 = *(undefined4 *)(lVar8 + uVar7 * 4 + 0x20);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_02b9ad44();
        }
        FUN_05cc33e4(auStack_218,uVar7 & 0xffffffff,uVar10);
        uVar7 = uVar7 + 1;
      } while( true );
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    lVar8 = *(long *)(param_2 + 0x32);
    if (*(int *)(*(long *)PTR_DAT_06312d90 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05c45700(lVar8 == 0,0);
    uVar10 = param_2[0x30];
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    FUN_05cc33e4(auStack_218,0,uVar10);
LAB_05cd0ea0:
    puVar2 = PTR_DAT_06312520;
    uVar11 = *(undefined8 *)(param_2 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_06312520 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar7 = FUN_05c8c45c(uVar11,0,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *(long *)(param_2 + 0x20);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        if (lVar8 == 0) goto LAB_05cd0efc;
LAB_05cd0ee4:
        local_170 = FUN_05c91f88(lVar8,0);
      }
      else {
        if (lVar8 != 0) goto LAB_05cd0ee4;
LAB_05cd0efc:
        local_170 = 0;
      }
      local_16c = param_2[0x29];
    }
    uVar11 = *(undefined8 *)(param_2 + 0x22);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uVar7 = FUN_05c8c45c(uVar11,0,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *(long *)(param_2 + 0x22);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_02b9ad44();
        if (lVar8 == 0) goto LAB_05cd0f60;
LAB_05cd0f48:
        local_168 = FUN_05c91f88(lVar8,0);
      }
      else {
        if (lVar8 != 0) goto LAB_05cd0f48;
LAB_05cd0f60:
        local_168 = 0;
      }
      local_164 = param_2[0x28];
    }
    local_658 = 0;
    local_660 = 0;
    FUN_03adaf10(&local_660,*(undefined8 *)(param_2 + 2),
                 *(undefined8 *)
                  Method_UnityEngine_UIElements_TextInputBaseField<string>_get_textInputBase__);
    FUN_05cc3a74(&local_570,local_660,local_658,param_2[0x25],param_2[0x26],0);
    local_560 = (ulong)CONCAT14(*(undefined1 *)(param_2 + 0x24),(undefined4)local_560);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02b9ad44();
    }
    uStack_698 = *(undefined8 *)(param_2 + 0x2c);
    local_6a0 = *(undefined8 *)(param_2 + 0x2a);
    local_560 = CONCAT44(local_560._4_4_,param_2[0x27]);
    memcpy(auStack_130,auStack_218,200);
    uVar10 = **(undefined4 **)(*(long *)puVar5 + 0xb8);
    if (*(char *)(param_2 + 4) != '\0') {
      FUN_03a65f7c(&local_580,1,2,1,
                   *(undefined8 *)Method_System_Resources_ResourceReader_DeserializeObject__);
      FUN_03adb3d4(&local_660,param_2 + 4,
                   *(undefined8 *)Method_System_Resources_ResourceReader_FindType__);
      pvVar6 = local_580;
      memcpy(local_580,&local_660,0x6c);
      local_678 = 0;
      uStack_670 = 0;
      local_668 = 0;
      FUN_03acb960(&local_678,pvVar6,local_578,
                   *(undefined8 *)
                    Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_SelectPrefab__);
      uStack_3d8 = uStack_670;
      local_3e0 = local_678;
      local_3d0 = local_668;
      FUN_03a6c66c(&local_590,1,2,1,
                   *(undefined8 *)Method_System_Resources_ResourceReader_CompareStringEqualsName__);
      puVar3 = Method_Meta_XR_MRUtilityKit_AnchorPrefabSpawnerUtilities_ScalePrefab__;
      *local_590 = **(undefined4 **)(*(long *)puVar5 + 0xb8);
      local_690 = 0;
      uStack_688 = 0;
      local_680 = 0;
      FUN_03acbd80(&local_690,local_590,uStack_588,*(undefined8 *)puVar3);
      uStack_145 = (undefined5)uStack_688;
      uStack_140 = (undefined3)((ulong)uStack_688 >> 0x28);
      uStack_14d = (undefined5)local_690;
      uStack_148 = (undefined3)((ulong)local_690 >> 0x28);
      uStack_13d = (undefined4)local_680;
      uStack_139 = (undefined4)((ulong)local_680 >> 0x20);
    }
    memcpy(auStack_2e0,auStack_130,200);
    uVar9 = 0;
    uVar11 = CONCAT53(uStack_145,uStack_148);
    local_300 = CONCAT53(uStack_14d,local_150);
    puVar12 = &local_3e0;
    uStack_4c8 = uStack_568;
    local_4d0 = local_570;
    uStack_4b8 = uStack_558;
    uStack_4c0 = local_560;
    uVar14 = CONCAT44(uStack_139,uStack_13d);
    uVar13 = CONCAT35(uStack_140,uStack_145);
  }
  uStack_2f8 = (undefined3)uVar11;
  uStack_2ed = (undefined4)uVar14;
  uStack_2e9 = (undefined4)((ulong)uVar14 >> 0x20);
  uStack_2f5 = (undefined5)uVar13;
  local_2f0 = (undefined3)((ulong)uVar13 >> 0x28);
  uStack_4e8 = puVar12[1];
  local_4f0 = *puVar12;
  local_4e0 = puVar12[2];
  param_1[1] = uStack_698;
  *param_1 = local_6a0;
  memcpy(param_1 + 2,auStack_2e0,200);
  *(undefined4 *)(param_1 + 0x1f) = uVar10;
  *(undefined1 *)((long)param_1 + 0xfc) = uVar9;
  param_1[0x1c] = uStack_4c8;
  param_1[0x1b] = local_4d0;
  param_1[0x1e] = uStack_4b8;
  param_1[0x1d] = uStack_4c0;
  *(ulong *)((long)param_1 + 0x105) = CONCAT53(uStack_2f5,uStack_2f8);
  *(undefined8 *)((long)param_1 + 0xfd) = local_300;
  param_1[0x25] = local_4e0;
  param_1[0x22] = CONCAT44(uStack_2e9,uStack_2ed);
  param_1[0x21] = CONCAT35(local_2f0,uStack_2f5);
  param_1[0x24] = uStack_4e8;
  param_1[0x23] = local_4f0;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
LAB_05cd11c4:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_05cd11b0:
  if (*(long *)(lVar1 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_02b3cacc();
  }
  goto LAB_05cd11c4;
}


