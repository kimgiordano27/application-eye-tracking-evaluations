/*
FUNCTION_NAME: thunk_FUN_03377730
ENTRY_POINT: 03377f78
PROGRAM: vrlegs-libil2cpp.so
SCORE: 80
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_1;ray_or_cast_sink_hits_3;telemetry_or_network_hits_2
*/


void thunk_FUN_03377730(uint *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  ulong uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined4 uStack_350;
  undefined1 auStack_340 [384];
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_38;
  
  puVar2 = Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_TypeInfo;
  if ((DAT_0412d00e & 1) == 0) {
    FUN_01ab69ac(UnityEngine_UI_Graphic_TypeInfo);
    FUN_01ab69ac(UniGLTF_GlbLowLevelParser_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cd7da0);
    FUN_01ab69ac(System_Collections_Hashtable_TypeInfo);
    FUN_01ab69ac(Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_TypeInfo);
    FUN_01ab69ac(_Common_Gameplay_Support_Scripts_InteractiveItem_FootTrail_TypeInfo);
    FUN_01ab69ac(UniGLTF_GlbParseException_TypeInfo);
    FUN_01ab69ac(UnityEngine_UI_GraphicRaycaster_TypeInfo);
    FUN_01ab69ac(UnityEngine_Graphics_TypeInfo);
    FUN_01ab69ac(System_Net_HeaderInfo_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cd7da8);
    DAT_0412d00e = 1;
  }
  uStack_350 = 0;
  uStack_380 = 0;
  uStack_378 = 0;
  uStack_38 = 0;
  uStack_390 = 0;
  uStack_388 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  uStack_358 = 0;
  uStack_360 = 0;
  uStack_398 = 0;
  uVar3 = FUN_01f614e4(param_1 + 2,&uStack_370,*(undefined8 *)puVar2);
  puVar2 = _Common_Gameplay_Support_Scripts_InteractiveItem_FootTrail_TypeInfo;
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)_Common_Gameplay_Support_Scripts_InteractiveItem_FootTrail_TypeInfo;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *(long *)puVar2;
    }
    puVar9 = *(undefined8 **)(lVar4 + 0xb8);
    uStack_350 = *(undefined4 *)(puVar9 + 4);
    uStack_368 = puVar9[1];
    uStack_370 = *puVar9;
    uStack_358 = puVar9[3];
    uStack_360 = puVar9[2];
  }
  uVar1 = *param_1;
  if ((uint)uStack_370 == uVar1) {
    return;
  }
  if (uVar1 == 1) {
    uStack_38 = *(undefined8 *)(param_2 + 0xb0);
    if (*(int *)(*(long *)PTR_DAT_03cd7da8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar10 = FUN_02007a70(&uStack_38,*(undefined8 *)UnityEngine_Graphics_TypeInfo);
    uStack_38 = *(undefined8 *)(param_2 + 0xb0);
    uVar5 = Unity_Mathematics_math__hashwide(&uStack_38,auVar10._0_8_,auVar10._8_8_,0);
    uStack_388 = *(undefined8 *)(param_2 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_03cd7da0 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cd7da0);
    }
    uStack_398 = FUN_01f605a4(&uStack_388,auVar10._0_8_,auVar10._8_8_,
                              *(undefined8 *)UnityEngine_UI_Graphic_TypeInfo);
    puVar7 = (undefined1 *)
             FUN_0207035c(&uStack_398,*(undefined8 *)UnityEngine_UI_GraphicRaycaster_TypeInfo);
    uVar6 = FUN_0335e4dc(puVar7 + 8,0);
    *puVar7 = 1;
    FUN_03378538(uVar6,0,uVar5);
  }
  else {
    if (uVar1 != 0) goto LAB_03377a1c;
    uStack_38 = *(undefined8 *)(param_2 + 0xb0);
    if (*(int *)(*(long *)PTR_DAT_03cd7da8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar10 = FUN_02007a70(&uStack_38,*(undefined8 *)System_Net_HeaderInfo_TypeInfo);
    uStack_38 = *(undefined8 *)(param_2 + 0xb0);
    uVar5 = Unity_Mathematics_math__hashwide(&uStack_38,auVar10._0_8_,auVar10._8_8_,0);
    uStack_388 = *(undefined8 *)(param_2 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_03cd7da0 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cd7da0);
    }
    uStack_390 = FUN_01f605a4(&uStack_388,auVar10._0_8_,auVar10._8_8_,
                              *(undefined8 *)UniGLTF_GlbLowLevelParser_TypeInfo);
    lVar4 = FUN_0207035c(&uStack_390,*(undefined8 *)UniGLTF_GlbParseException_TypeInfo);
    FUN_031aa7c8(uVar5,0,0);
    FUN_0335b28c(lVar4 + 1,0);
  }
LAB_03377a1c:
  *param_1 = (uint)uStack_370;
  uStack_380 = (ulong)(uint)uStack_370;
  uStack_378 = 0;
  if ((uint)uStack_370 == 1) {
    uStack_38 = *(undefined8 *)(param_2 + 0xb0);
    if (*(int *)(*(long *)PTR_DAT_03cd7da8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar10 = FUN_02007a70(&uStack_38,*(undefined8 *)UnityEngine_Graphics_TypeInfo);
    uStack_38 = *(undefined8 *)(param_2 + 0xb0);
    uVar5 = Unity_Mathematics_math__hashwide(&uStack_38,auVar10._0_8_,auVar10._8_8_,0);
    uStack_388 = *(undefined8 *)(param_2 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_03cd7da0 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cd7da0);
    }
    uStack_398 = FUN_01f605a4(&uStack_388,auVar10._0_8_,auVar10._8_8_,
                              *(undefined8 *)UnityEngine_UI_Graphic_TypeInfo);
    puVar7 = (undefined1 *)
             FUN_0207035c(&uStack_398,*(undefined8 *)UnityEngine_UI_GraphicRaycaster_TypeInfo);
    FUN_0335e3d4(auStack_340,0);
    memcpy(&uStack_1c0,auStack_340,0x180);
    pvVar8 = memcpy(puVar7 + 8,&uStack_1c0,0x180);
    *puVar7 = 0;
    FUN_03378538(pvVar8,1,uVar5);
    FUN_033659f0(&uStack_380,puVar7 + 8,0);
  }
  else if ((uint)uStack_370 == 0) {
    uStack_38 = *(undefined8 *)(param_2 + 0xb0);
    if (*(int *)(*(long *)PTR_DAT_03cd7da8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar10 = FUN_02007a70(&uStack_38,*(undefined8 *)System_Net_HeaderInfo_TypeInfo);
    uStack_38 = *(undefined8 *)(param_2 + 0xb0);
    uVar5 = Unity_Mathematics_math__hashwide(&uStack_38,auVar10._0_8_,auVar10._8_8_,0);
    uStack_388 = *(undefined8 *)(param_2 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_03cd7da0 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cd7da0);
    }
    uStack_390 = FUN_01f605a4(&uStack_388,auVar10._0_8_,auVar10._8_8_,
                              *(undefined8 *)UniGLTF_GlbLowLevelParser_TypeInfo);
    lVar4 = FUN_0207035c(&uStack_390,*(undefined8 *)UniGLTF_GlbParseException_TypeInfo);
    FUN_031aa7c8(uVar5,1,0);
    *(undefined1 *)(lVar4 + 1) = 0;
  }
  uStack_1c0 = uStack_380;
  uStack_1b8 = uStack_378;
  FUN_01f61360(param_1 + 6,&uStack_1c0,*(undefined8 *)System_Collections_Hashtable_TypeInfo);
  return;
}


