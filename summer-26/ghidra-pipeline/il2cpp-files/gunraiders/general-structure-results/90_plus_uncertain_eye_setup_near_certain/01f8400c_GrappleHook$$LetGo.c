/*
FUNCTION_NAME: GrappleHook$$LetGo
ENTRY_POINT: 01f8400c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GrappleHook__LetGo(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    }
    else {
      FUN_02d294cc();
      param_1 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (param_1 == 0) goto LAB_01f843dc;
    }
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0x28;
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    }
    else {
      FUN_02d294cc();
      param_1 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (param_1 == 0) goto LAB_01f843dc;
    }
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0x2a;
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    }
    else {
      FUN_02d294cc();
      param_1 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (param_1 == 0) goto LAB_01f843dc;
    }
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x20) = 0x34;
    }
    else {
      FUN_02d294cc();
    }
    puVar4 = Photon_Pun_UtilityScripts_PunTeams_Team_var;
    uVar11 = _UNK_00b944b8;
    uVar10 = _DAT_00b944b0;
    *(long *)(unaff_x19 + 0x240) = unaff_x20;
    *(undefined4 *)(unaff_x19 + 0x3c8) = 0x3e4ccccd;
    *(undefined4 *)(unaff_x19 + 0x430) = 1;
    *(undefined8 *)(unaff_x21 + 0x328) = uVar11;
    *(undefined8 *)(unaff_x21 + 800) = uVar10;
    uVar10 = NEON_fmov(0x3f800000,4);
    *(undefined8 *)(unaff_x19 + 0x488) = uVar10;
    puVar8 = UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_var;
    *(undefined8 *)(unaff_x21 + 0x394) = DAT_00b92de0;
    *(undefined4 *)(unaff_x19 + 0x4f4) = 0x42700000;
    puVar7 = UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback_var;
    puVar6 = UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllCallback_var;
    puVar5 = ExitGames_Client_Photon_Protocol18_GpType_var;
    puVar3 = OVRPlugin_Vector3f_var;
    if (DAT_0452d6e9 == '\0') {
      FUN_01c5d288(PTR_DAT_042301b0);
      DAT_0452d6e9 = '\x01';
    }
    uVar10 = DAT_00b92ae8;
    uVar11 = **(undefined8 **)(*(long *)PTR_DAT_042301b0 + 0xb8);
    uVar12 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_042301b0 + 0xb8) + 1);
    *(undefined8 *)(unaff_x19 + 0x540) = DAT_00b922f8;
    *(undefined8 *)(unaff_x19 + 0x578) = uVar10;
    *(undefined1 *)(unaff_x19 + 0x568) = 1;
    *(undefined4 *)(unaff_x19 + 0x580) = 8;
    *(undefined4 *)(unaff_x19 + 0x5c0) = 0x42c80000;
    *(undefined8 *)(unaff_x19 + 0x500) = uVar11;
    *(undefined4 *)(unaff_x19 + 0x508) = uVar12;
    uVar11 = _UNK_00b93b78;
    uVar10 = _DAT_00b93b70;
    *(undefined8 *)(unaff_x19 + 0x5c8) = *(undefined8 *)puVar4;
    uVar2 = _UNK_00b947c8;
    uVar9 = _DAT_00b947c0;
    *(undefined8 *)(unaff_x19 + 0x5d0) = *(undefined8 *)puVar8;
    *(undefined8 *)(unaff_x19 + 0x5d8) = *(undefined8 *)puVar7;
    *(undefined8 *)(unaff_x19 + 0x5e0) = *(undefined8 *)puVar3;
    puVar4 = PTR_DAT_04231ff0;
    *(undefined8 *)(unaff_x19 + 0x5e8) = *(undefined8 *)puVar5;
    *(undefined8 *)(unaff_x19 + 0x5f0) = *(undefined8 *)puVar6;
    *(undefined8 *)(unaff_x21 + 0x4a8) = uVar11;
    *(undefined8 *)(unaff_x21 + 0x4a0) = uVar10;
    puVar3 = PTR_DAT_04231fd8;
    uVar10 = DAT_00b923a0;
    *(undefined8 *)(unaff_x21 + 0x4b8) = uVar2;
    *(undefined8 *)(unaff_x21 + 0x4b0) = uVar9;
    *(undefined8 *)(unaff_x19 + 0x618) = uVar10;
    *(undefined4 *)(unaff_x19 + 0x620) = 0x14f;
    puVar8 = OVRPlugin_SpaceQueryResult_var;
    puVar7 = 
    VoxelBusters_EssentialKit_NotificationServicesUnitySettings_AndroidPlatformProperties_var;
    puVar6 = System_Xml_Serialization_EnumMap_EnumMapMember_var;
    puVar5 = PTR_DAT_04232bd8;
    if (DAT_0452d6e8 == '\0') {
      FUN_01c5d288(PTR_DAT_042301a8);
      DAT_0452d6e8 = '\x01';
    }
    uVar10 = **(undefined8 **)(*(long *)PTR_DAT_042301a8 + 0xb8);
    *(undefined8 *)(unaff_x19 + 0x630) = 0x7f8000007f800000;
    *(undefined8 *)(unaff_x19 + 0x628) = uVar10;
    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
    FUN_02d4f880(uVar9,*(undefined8 *)puVar3);
    uVar11 = _UNK_00b94868;
    uVar10 = _DAT_00b94860;
    *(undefined8 *)(unaff_x19 + 0x640) = uVar9;
    *(undefined4 *)(unaff_x19 + 0x6a0) = 0x3f000000;
    *(undefined4 *)(unaff_x19 + 0x6a8) = 0x3f000000;
    *(undefined8 *)(unaff_x19 + 0x6b8) = uVar11;
    *(undefined8 *)(unaff_x19 + 0x6b0) = uVar10;
    uVar10 = FUN_01c5d2fc(*(undefined8 *)puVar5,5);
    FUN_032032f0(uVar10,*(undefined8 *)puVar8,0);
    *(undefined8 *)(unaff_x19 + 0x6c8) = uVar10;
    *(undefined4 *)(unaff_x19 + 0x6d0) = 4;
    uVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
    FUN_02d4f880(uVar9,*(undefined8 *)puVar6);
    uVar11 = DAT_00b92888;
    uVar10 = DAT_00b923a8;
    *(undefined8 *)(unaff_x19 + 0x700) = uVar9;
    *(undefined4 *)(unaff_x19 + 0x724) = 5;
    *(undefined8 *)(unaff_x19 + 0x750) = uVar10;
    *(undefined8 *)(unaff_x19 + 0x778) = uVar11;
    thunk_FUN_03d45eb0();
    return;
  }
LAB_01f843dc:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


