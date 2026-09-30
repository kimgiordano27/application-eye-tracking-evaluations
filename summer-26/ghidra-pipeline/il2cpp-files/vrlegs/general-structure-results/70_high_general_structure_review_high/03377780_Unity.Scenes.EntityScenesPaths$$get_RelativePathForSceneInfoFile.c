/*
FUNCTION_NAME: Unity.Scenes.EntityScenesPaths$$get_RelativePathForSceneInfoFile
ENTRY_POINT: 03377780
PROGRAM: vrlegs-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ray_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_3;validity_or_gating_hits_2;ray_or_cast_sink_hits_3;telemetry_or_network_hits_1
*/


void Unity_Scenes_EntityScenesPaths__get_RelativePathForSceneInfoFile(void)

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
  uint *unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined1 auVar10 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  ulong in_stack_00000020;
  undefined8 in_stack_00000028;
  uint uStack0000000000000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined4 in_stack_00000050;
  ulong in_stack_000001e0;
  undefined8 in_stack_000001e8;
  
  FUN_01ab69ac();
  FUN_01ab69ac(System_Collections_Hashtable_TypeInfo);
  FUN_01ab69ac(Unity_Services_CloudSave_Internal_Data_GetProtectedItemsRequest_TypeInfo);
  FUN_01ab69ac(_Common_Gameplay_Support_Scripts_InteractiveItem_FootTrail_TypeInfo);
  FUN_01ab69ac(UniGLTF_GlbParseException_TypeInfo);
  FUN_01ab69ac(UnityEngine_UI_GraphicRaycaster_TypeInfo);
  FUN_01ab69ac(UnityEngine_Graphics_TypeInfo);
  FUN_01ab69ac(System_Net_HeaderInfo_TypeInfo);
  FUN_01ab69ac(PTR_DAT_03cd7da8);
  *(undefined1 *)(unaff_x22 + 0xe) = 1;
  in_stack_00000050 = 0;
  in_stack_00000020 = 0;
  in_stack_00000028 = 0;
  in_stack_00000010 = 0;
  in_stack_00000018 = 0;
  in_stack_00000038 = 0;
  _uStack0000000000000030 = 0;
  in_stack_00000048 = 0;
  in_stack_00000040 = 0;
  in_stack_00000008 = 0;
  uVar3 = FUN_01f614e4(unaff_x19 + 2,&stack0x00000030,*unaff_x21);
  puVar2 = _Common_Gameplay_Support_Scripts_InteractiveItem_FootTrail_TypeInfo;
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)_Common_Gameplay_Support_Scripts_InteractiveItem_FootTrail_TypeInfo;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
      lVar4 = *(long *)puVar2;
    }
    puVar9 = *(undefined8 **)(lVar4 + 0xb8);
    in_stack_00000050 = *(undefined4 *)(puVar9 + 4);
    in_stack_00000038 = puVar9[1];
    _uStack0000000000000030 = *puVar9;
    in_stack_00000048 = puVar9[3];
    in_stack_00000040 = puVar9[2];
  }
  uVar1 = *unaff_x19;
  if (uStack0000000000000030 == uVar1) {
    return;
  }
  if (uVar1 == 1) {
    if (*(int *)(*(long *)PTR_DAT_03cd7da8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar10 = FUN_02007a70(&stack0x00000368,*(undefined8 *)UnityEngine_Graphics_TypeInfo);
    uVar5 = Unity_Mathematics_math__hashwide(&stack0x00000368,auVar10._0_8_,auVar10._8_8_,0);
    in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_03cd7da0 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cd7da0);
    }
    in_stack_00000008 =
         FUN_01f605a4(&stack0x00000018,auVar10._0_8_,auVar10._8_8_,
                      *(undefined8 *)UnityEngine_UI_Graphic_TypeInfo);
    puVar7 = (undefined1 *)
             FUN_0207035c(&stack0x00000008,*(undefined8 *)UnityEngine_UI_GraphicRaycaster_TypeInfo);
    uVar6 = FUN_0335e4dc(puVar7 + 8,0);
    *puVar7 = 1;
    FUN_03378538(uVar6,0,uVar5);
  }
  else {
    if (uVar1 != 0) goto LAB_03377a1c;
    if (*(int *)(*(long *)PTR_DAT_03cd7da8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar10 = FUN_02007a70(&stack0x00000368,*(undefined8 *)System_Net_HeaderInfo_TypeInfo);
    uVar5 = Unity_Mathematics_math__hashwide(&stack0x00000368,auVar10._0_8_,auVar10._8_8_,0);
    in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_03cd7da0 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cd7da0);
    }
    in_stack_00000010 =
         FUN_01f605a4(&stack0x00000018,auVar10._0_8_,auVar10._8_8_,
                      *(undefined8 *)UniGLTF_GlbLowLevelParser_TypeInfo);
    lVar4 = FUN_0207035c(&stack0x00000010,*(undefined8 *)UniGLTF_GlbParseException_TypeInfo);
    FUN_031aa7c8(uVar5,0,0);
    FUN_0335b28c(lVar4 + 1,0);
  }
LAB_03377a1c:
  *unaff_x19 = uStack0000000000000030;
  in_stack_00000020 = (ulong)uStack0000000000000030;
  in_stack_00000028 = 0;
  if (uStack0000000000000030 == 1) {
    if (*(int *)(*(long *)PTR_DAT_03cd7da8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar10 = FUN_02007a70(&stack0x00000368,*(undefined8 *)UnityEngine_Graphics_TypeInfo);
    uVar5 = Unity_Mathematics_math__hashwide(&stack0x00000368,auVar10._0_8_,auVar10._8_8_,0);
    in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_03cd7da0 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cd7da0);
    }
    in_stack_00000008 =
         FUN_01f605a4(&stack0x00000018,auVar10._0_8_,auVar10._8_8_,
                      *(undefined8 *)UnityEngine_UI_Graphic_TypeInfo);
    puVar7 = (undefined1 *)
             FUN_0207035c(&stack0x00000008,*(undefined8 *)UnityEngine_UI_GraphicRaycaster_TypeInfo);
    FUN_0335e3d4(&stack0x00000060,0);
    memcpy(&stack0x000001e0,&stack0x00000060,0x180);
    pvVar8 = memcpy(puVar7 + 8,&stack0x000001e0,0x180);
    *puVar7 = 0;
    FUN_03378538(pvVar8,1,uVar5);
    FUN_033659f0(&stack0x00000020,puVar7 + 8,0);
  }
  else if (uStack0000000000000030 == 0) {
    if (*(int *)(*(long *)PTR_DAT_03cd7da8 + 0xe0) == 0) {
      thunk_FUN_01a58e78();
    }
    auVar10 = FUN_02007a70(&stack0x00000368,*(undefined8 *)System_Net_HeaderInfo_TypeInfo);
    uVar5 = Unity_Mathematics_math__hashwide(&stack0x00000368,auVar10._0_8_,auVar10._8_8_,0);
    in_stack_00000018 = *(undefined8 *)(unaff_x20 + 0x48);
    if (*(int *)(*(long *)PTR_DAT_03cd7da0 + 0xe0) == 0) {
      thunk_FUN_01a58e78(*(long *)PTR_DAT_03cd7da0);
    }
    in_stack_00000010 =
         FUN_01f605a4(&stack0x00000018,auVar10._0_8_,auVar10._8_8_,
                      *(undefined8 *)UniGLTF_GlbLowLevelParser_TypeInfo);
    lVar4 = FUN_0207035c(&stack0x00000010,*(undefined8 *)UniGLTF_GlbParseException_TypeInfo);
    FUN_031aa7c8(uVar5,1,0);
    *(undefined1 *)(lVar4 + 1) = 0;
  }
  in_stack_000001e0 = in_stack_00000020;
  in_stack_000001e8 = in_stack_00000028;
  FUN_01f61360(unaff_x19 + 6,&stack0x000001e0,*(undefined8 *)System_Collections_Hashtable_TypeInfo);
  return;
}


