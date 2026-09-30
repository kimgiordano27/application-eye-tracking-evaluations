/*
FUNCTION_NAME: GrappleHook$$SetWeaponLevel
ENTRY_POINT: 01f8416c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;ray_or_cast_sink_hits_1;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GrappleHook__SetWeaponLevel(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  
  FUN_02d294cc();
  puVar3 = Photon_Pun_UtilityScripts_PunTeams_Team_var;
  uVar10 = _UNK_00b944b8;
  uVar9 = _DAT_00b944b0;
  *(undefined8 *)(unaff_x19 + 0x240) = unaff_x20;
  *(undefined4 *)(unaff_x19 + 0x3c8) = 0x3e4ccccd;
  *(undefined4 *)(unaff_x19 + 0x430) = 1;
  *(undefined8 *)(unaff_x21 + 0x328) = uVar10;
  *(undefined8 *)(unaff_x21 + 800) = uVar9;
  uVar9 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(unaff_x19 + 0x488) = uVar9;
  puVar7 = UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_var;
  *(undefined8 *)(unaff_x21 + 0x394) = DAT_00b92de0;
  *(undefined4 *)(unaff_x19 + 0x4f4) = 0x42700000;
  puVar6 = UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback_var;
  puVar5 = UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllCallback_var;
  puVar4 = ExitGames_Client_Photon_Protocol18_GpType_var;
  puVar2 = OVRPlugin_Vector3f_var;
  if (DAT_0452d6e9 == '\0') {
    FUN_01c5d288(PTR_DAT_042301b0);
    DAT_0452d6e9 = '\x01';
  }
  uVar9 = DAT_00b92ae8;
  uVar10 = **(undefined8 **)(*(long *)PTR_DAT_042301b0 + 0xb8);
  uVar11 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_042301b0 + 0xb8) + 1);
  *(undefined8 *)(unaff_x19 + 0x540) = DAT_00b922f8;
  *(undefined8 *)(unaff_x19 + 0x578) = uVar9;
  *(undefined1 *)(unaff_x19 + 0x568) = 1;
  *(undefined4 *)(unaff_x19 + 0x580) = 8;
  *(undefined4 *)(unaff_x19 + 0x5c0) = 0x42c80000;
  *(undefined8 *)(unaff_x19 + 0x500) = uVar10;
  *(undefined4 *)(unaff_x19 + 0x508) = uVar11;
  uVar10 = _UNK_00b93b78;
  uVar9 = _DAT_00b93b70;
  *(undefined8 *)(unaff_x19 + 0x5c8) = *(undefined8 *)puVar3;
  uVar1 = _UNK_00b947c8;
  uVar8 = _DAT_00b947c0;
  *(undefined8 *)(unaff_x19 + 0x5d0) = *(undefined8 *)puVar7;
  *(undefined8 *)(unaff_x19 + 0x5d8) = *(undefined8 *)puVar6;
  *(undefined8 *)(unaff_x19 + 0x5e0) = *(undefined8 *)puVar2;
  puVar3 = PTR_DAT_04231ff0;
  *(undefined8 *)(unaff_x19 + 0x5e8) = *(undefined8 *)puVar4;
  *(undefined8 *)(unaff_x19 + 0x5f0) = *(undefined8 *)puVar5;
  *(undefined8 *)(unaff_x21 + 0x4a8) = uVar10;
  *(undefined8 *)(unaff_x21 + 0x4a0) = uVar9;
  puVar2 = PTR_DAT_04231fd8;
  uVar9 = DAT_00b923a0;
  *(undefined8 *)(unaff_x21 + 0x4b8) = uVar1;
  *(undefined8 *)(unaff_x21 + 0x4b0) = uVar8;
  *(undefined8 *)(unaff_x19 + 0x618) = uVar9;
  *(undefined4 *)(unaff_x19 + 0x620) = 0x14f;
  puVar7 = OVRPlugin_SpaceQueryResult_var;
  puVar6 = VoxelBusters_EssentialKit_NotificationServicesUnitySettings_AndroidPlatformProperties_var
  ;
  puVar5 = System_Xml_Serialization_EnumMap_EnumMapMember_var;
  puVar4 = PTR_DAT_04232bd8;
  if (DAT_0452d6e8 == '\0') {
    FUN_01c5d288(PTR_DAT_042301a8);
    DAT_0452d6e8 = '\x01';
  }
  uVar9 = **(undefined8 **)(*(long *)PTR_DAT_042301a8 + 0xb8);
  *(undefined8 *)(unaff_x19 + 0x630) = 0x7f8000007f800000;
  *(undefined8 *)(unaff_x19 + 0x628) = uVar9;
  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar3);
  FUN_02d4f880(uVar8,*(undefined8 *)puVar2);
  uVar10 = _UNK_00b94868;
  uVar9 = _DAT_00b94860;
  *(undefined8 *)(unaff_x19 + 0x640) = uVar8;
  *(undefined4 *)(unaff_x19 + 0x6a0) = 0x3f000000;
  *(undefined4 *)(unaff_x19 + 0x6a8) = 0x3f000000;
  *(undefined8 *)(unaff_x19 + 0x6b8) = uVar10;
  *(undefined8 *)(unaff_x19 + 0x6b0) = uVar9;
  uVar9 = FUN_01c5d2fc(*(undefined8 *)puVar4,5);
  FUN_032032f0(uVar9,*(undefined8 *)puVar7,0);
  *(undefined8 *)(unaff_x19 + 0x6c8) = uVar9;
  *(undefined4 *)(unaff_x19 + 0x6d0) = 4;
  uVar8 = thunk_FUN_01c496e0(*(undefined8 *)puVar6);
  FUN_02d4f880(uVar8,*(undefined8 *)puVar5);
  uVar10 = DAT_00b92888;
  uVar9 = DAT_00b923a8;
  *(undefined8 *)(unaff_x19 + 0x700) = uVar8;
  *(undefined4 *)(unaff_x19 + 0x724) = 5;
  *(undefined8 *)(unaff_x19 + 0x750) = uVar9;
  *(undefined8 *)(unaff_x19 + 0x778) = uVar10;
  thunk_FUN_03d45eb0();
  return;
}


