/*
FUNCTION_NAME: FUN_01f83e10
ENTRY_POINT: 01f83e10
PROGRAM: gunraiders-libil2cpp.so
SCORE: 115
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_12;ray_or_cast_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_4
*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f83e10(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  
  if ((DAT_0452eac9 & 1) == 0) {
    FUN_01c5d288(PTR_DAT_04232bd8);
    FUN_01c5d288(System_DelegateSerializationHolder_DelegateEntry_var);
    FUN_01c5d288(System_Xml_Serialization_EnumMap_EnumMapMember_var);
    FUN_01c5d288(FriendSystem_FriendSystemState_var);
    FUN_01c5d288(PTR_DAT_04231fd8);
    FUN_01c5d288(VoxelBusters_EssentialKit_NetworkServicesUnitySettings_Address_var);
    FUN_01c5d288(PTR_DAT_04231ff0);
    FUN_01c5d288(
                VoxelBusters_EssentialKit_NotificationServicesUnitySettings_AndroidPlatformProperties_var
                );
    FUN_01c5d288(OVRPlugin_SpaceQueryResult_var);
    FUN_01c5d288(OVRPlugin_Vector3f_var);
    FUN_01c5d288(ExitGames_Client_Photon_Protocol18_GpType_var);
    FUN_01c5d288(Photon_Pun_UtilityScripts_PunTeams_Team_var);
    FUN_01c5d288(UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllCallback_var);
    FUN_01c5d288(UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback_var);
    FUN_01c5d288(UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_var);
    DAT_0452eac9 = 1;
  }
  uVar14 = _UNK_00b94b98;
  uVar13 = _DAT_00b94b90;
  *(undefined1 *)(param_1 + 0x51) = 1;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f4ccccd;
  *(undefined8 *)(param_1 + 0xa8) = uVar14;
  *(undefined8 *)(param_1 + 0xa0) = uVar13;
  puVar5 = VoxelBusters_EssentialKit_NetworkServicesUnitySettings_Address_var;
  puVar3 = FriendSystem_FriendSystemState_var;
  if (DAT_0452d6ea == '\0') {
    FUN_01c5d288(PTR_DAT_042301a0);
    DAT_0452d6ea = '\x01';
  }
  uVar13 = **(undefined8 **)(*(long *)PTR_DAT_042301a0 + 0xb8);
  *(undefined8 *)(param_1 + 0x160) = (*(undefined8 **)(*(long *)PTR_DAT_042301a0 + 0xb8))[1];
  *(undefined8 *)(param_1 + 0x158) = uVar13;
  *(undefined4 *)(param_1 + 0x1e8) = 7;
  lVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
  FUN_02d28cd4(lVar9,*(undefined8 *)puVar3);
  puVar4 = System_DelegateSerializationHolder_DelegateEntry_var;
  if (lVar9 != 0) {
    lVar11 = *(long *)(lVar9 + 0x10);
    lVar12 = *(long *)System_DelegateSerializationHolder_DelegateEntry_var;
    *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
    if (lVar11 != 0) {
      uVar1 = *(uint *)(lVar9 + 0x18);
      if (uVar1 < *(uint *)(lVar11 + 0x18)) {
        *(uint *)(lVar9 + 0x18) = uVar1 + 1;
        *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x22;
      }
      else {
        FUN_02d294cc(lVar9,0x22,*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
      }
      *(long *)(param_1 + 0x238) = lVar9;
      lVar9 = thunk_FUN_01c496e0(*(undefined8 *)puVar5);
      FUN_02d28cd4(lVar9,*(undefined8 *)puVar3);
      if (lVar9 != 0) {
        lVar11 = *(long *)(lVar9 + 0x10);
        lVar12 = *(long *)puVar4;
        *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
        if (lVar11 != 0) {
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x16;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          }
          else {
            FUN_02d294cc(lVar9,0x16,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            lVar11 = *(long *)(lVar9 + 0x10);
            lVar12 = *(long *)puVar4;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_01f843dc;
          }
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x28;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          }
          else {
            FUN_02d294cc(lVar9,0x28,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            lVar11 = *(long *)(lVar9 + 0x10);
            lVar12 = *(long *)puVar4;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_01f843dc;
          }
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x2a;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
          }
          else {
            FUN_02d294cc(lVar9,0x2a,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
            lVar11 = *(long *)(lVar9 + 0x10);
            lVar12 = *(long *)puVar4;
            *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_01f843dc;
          }
          uVar1 = *(uint *)(lVar9 + 0x18);
          if (uVar1 < *(uint *)(lVar11 + 0x18)) {
            *(uint *)(lVar9 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar11 + (long)(int)uVar1 * 4 + 0x20) = 0x34;
          }
          else {
            FUN_02d294cc(lVar9,0x34,
                         *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
          }
          puVar4 = Photon_Pun_UtilityScripts_PunTeams_Team_var;
          uVar14 = _UNK_00b944b8;
          uVar13 = _DAT_00b944b0;
          *(long *)(param_1 + 0x240) = lVar9;
          *(undefined4 *)(param_1 + 0x3c8) = 0x3e4ccccd;
          *(undefined4 *)(param_1 + 0x430) = 1;
          *(undefined8 *)(param_1 + 0x480) = uVar14;
          *(undefined8 *)(param_1 + 0x478) = uVar13;
          uVar13 = NEON_fmov(0x3f800000,4);
          *(undefined8 *)(param_1 + 0x488) = uVar13;
          puVar8 = UnityEngine_UI_ReflectionMethodsCache_GetRaycastNonAllocCallback_var;
          *(undefined8 *)(param_1 + 0x4ec) = DAT_00b92de0;
          *(undefined4 *)(param_1 + 0x4f4) = 0x42700000;
          puVar7 = UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllNonAllocCallback_var;
          puVar6 = UnityEngine_UI_ReflectionMethodsCache_GetRayIntersectionAllCallback_var;
          puVar5 = ExitGames_Client_Photon_Protocol18_GpType_var;
          puVar3 = OVRPlugin_Vector3f_var;
          if (DAT_0452d6e9 == '\0') {
            FUN_01c5d288(PTR_DAT_042301b0);
            DAT_0452d6e9 = '\x01';
          }
          uVar13 = DAT_00b92ae8;
          uVar14 = **(undefined8 **)(*(long *)PTR_DAT_042301b0 + 0xb8);
          uVar15 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_042301b0 + 0xb8) + 1);
          *(undefined8 *)(param_1 + 0x540) = DAT_00b922f8;
          *(undefined8 *)(param_1 + 0x578) = uVar13;
          *(undefined1 *)(param_1 + 0x568) = 1;
          *(undefined4 *)(param_1 + 0x580) = 8;
          *(undefined4 *)(param_1 + 0x5c0) = 0x42c80000;
          *(undefined8 *)(param_1 + 0x500) = uVar14;
          *(undefined4 *)(param_1 + 0x508) = uVar15;
          uVar14 = _UNK_00b93b78;
          uVar13 = _DAT_00b93b70;
          *(undefined8 *)(param_1 + 0x5c8) = *(undefined8 *)puVar4;
          uVar2 = _UNK_00b947c8;
          uVar10 = _DAT_00b947c0;
          *(undefined8 *)(param_1 + 0x5d0) = *(undefined8 *)puVar8;
          *(undefined8 *)(param_1 + 0x5d8) = *(undefined8 *)puVar7;
          *(undefined8 *)(param_1 + 0x5e0) = *(undefined8 *)puVar3;
          puVar4 = PTR_DAT_04231ff0;
          *(undefined8 *)(param_1 + 0x5e8) = *(undefined8 *)puVar5;
          *(undefined8 *)(param_1 + 0x5f0) = *(undefined8 *)puVar6;
          *(undefined8 *)(param_1 + 0x600) = uVar14;
          *(undefined8 *)(param_1 + 0x5f8) = uVar13;
          puVar3 = PTR_DAT_04231fd8;
          uVar13 = DAT_00b923a0;
          *(undefined8 *)(param_1 + 0x610) = uVar2;
          *(undefined8 *)(param_1 + 0x608) = uVar10;
          *(undefined8 *)(param_1 + 0x618) = uVar13;
          *(undefined4 *)(param_1 + 0x620) = 0x14f;
          puVar8 = OVRPlugin_SpaceQueryResult_var;
          puVar7 = 
          VoxelBusters_EssentialKit_NotificationServicesUnitySettings_AndroidPlatformProperties_var;
          puVar6 = System_Xml_Serialization_EnumMap_EnumMapMember_var;
          puVar5 = PTR_DAT_04232bd8;
          if (DAT_0452d6e8 == '\0') {
            FUN_01c5d288(PTR_DAT_042301a8);
            DAT_0452d6e8 = '\x01';
          }
          uVar13 = **(undefined8 **)(*(long *)PTR_DAT_042301a8 + 0xb8);
          *(undefined8 *)(param_1 + 0x630) = 0x7f8000007f800000;
          *(undefined8 *)(param_1 + 0x628) = uVar13;
          uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar4);
          FUN_02d4f880(uVar10,*(undefined8 *)puVar3);
          uVar14 = _UNK_00b94868;
          uVar13 = _DAT_00b94860;
          *(undefined8 *)(param_1 + 0x640) = uVar10;
          *(undefined4 *)(param_1 + 0x6a0) = 0x3f000000;
          *(undefined4 *)(param_1 + 0x6a8) = 0x3f000000;
          *(undefined8 *)(param_1 + 0x6b8) = uVar14;
          *(undefined8 *)(param_1 + 0x6b0) = uVar13;
          uVar13 = FUN_01c5d2fc(*(undefined8 *)puVar5,5);
          FUN_032032f0(uVar13,*(undefined8 *)puVar8,0);
          *(undefined8 *)(param_1 + 0x6c8) = uVar13;
          *(undefined4 *)(param_1 + 0x6d0) = 4;
          uVar10 = thunk_FUN_01c496e0(*(undefined8 *)puVar7);
          FUN_02d4f880(uVar10,*(undefined8 *)puVar6);
          uVar14 = DAT_00b92888;
          uVar13 = DAT_00b923a8;
          *(undefined8 *)(param_1 + 0x700) = uVar10;
          *(undefined4 *)(param_1 + 0x724) = 5;
          *(undefined8 *)(param_1 + 0x750) = uVar13;
          *(undefined8 *)(param_1 + 0x778) = uVar14;
          thunk_FUN_03d45eb0(param_1,0);
          return;
        }
      }
    }
  }
LAB_01f843dc:
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


