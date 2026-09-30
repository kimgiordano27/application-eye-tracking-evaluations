/*
FUNCTION_NAME: FUN_05c461b0
ENTRY_POINT: 05c461b0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 89
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;possible_biometrics
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;foveation_rendering;frame_behavior;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;strong_foveation_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_known_unity_or_il2cpp_false_positive_family;cap_below_near_certain_without_eye_anchor_or_ordered_structure;functionality_permission_setup;functionality_foveated_rendering;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05c46b6c) */
/* WARNING: Removing unreachable block (ram,0x05c470f8) */

void FUN_05c461b0(long param_1,long param_2,long param_3,undefined8 *param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,byte param_8,undefined8 param_9,byte param_10
                 )

{
  undefined2 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte bVar11;
  uint uVar12;
  int iVar19;
  undefined4 uVar20;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  long *plVar26;
  ulong uVar27;
  undefined8 *puVar28;
  long *plVar29;
  undefined8 extraout_x1;
  char cVar30;
  int *piVar31;
  long lVar32;
  char cVar33;
  long lVar34;
  undefined1 auVar35 [16];
  undefined8 local_200;
  long **pplStack_1f8;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  ulong uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if ((DAT_06a578e4 & 1) == 0) {
    FUN_02d4dc40(PTR_DAT_066462e0);
    FUN_02d4dc40(Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateFacebook__);
    FUN_02d4dc40(Method_UnityEngine_InputSystem_Utilities_MemoryHelpers_SetBitsInBuffer__);
    FUN_02d4dc40(Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateFacebookInstantGames__);
    FUN_02d4dc40(Method_System_Runtime_InteropServices_MemoryMarshal_TryGetArray<byte>__);
    FUN_02d4dc40(Method_UnityEngine_InputSystem_Utilities_MemoryHelpers_WriteUIntAsMultipleBits__);
    FUN_02d4dc40(PTR_DAT_06646730);
    FUN_02d4dc40(Method_System_Linq_Enumerable_ElementAt<Column>__);
    FUN_02d4dc40(PTR_DAT_066479a8);
    FUN_02d4dc40(Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateGoogle__);
    FUN_02d4dc40(Method_System_Enum_ToObject__);
    FUN_02d4dc40(PTR_DAT_066462d0);
    FUN_02d4dc40(Method_System_MemoryExtensions_AsSpan<GradientAlphaKey>__);
    FUN_02d4dc40(Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateKongregate__);
    FUN_02d4dc40(PTR_DAT_06648568);
    FUN_02d4dc40(Method_System_Net_Configuration_NetSectionGroup_get_AuthenticationModules__);
    FUN_02d4dc40(Method_UnityEngine_Component_TryGetComponent<UIRenderer>__);
    FUN_02d4dc40(Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateNintendo__);
    FUN_02d4dc40(
                Method_UnityEngine_UIElements_PanelEventHandler_UpdatePointerEventTarget<PointerMoveEvent>__
                );
    FUN_02d4dc40(PTR_DAT_0664d6f0);
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StopSubsystem<XRInputSubsystem>__);
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_ProcessOpenXRMessageLoop__);
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_ReceiveNativeEvent__);
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<DPadInteraction>__);
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<FoveatedRenderingFeature>__)
    ;
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<MockRuntime>__);
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeatures<OpenXRInteractionFeature>__
                );
    FUN_02d4dc40(Method_UnityEngine_XR_OpenXR_OpenXRSettings_PermissionGrantedCallback__);
    FUN_02d4dc40(Method_System_OperatingSystem__ctor__);
    FUN_02d4dc40(Method_System_OperatingSystem_GetObjectData__);
    FUN_02d4dc40(Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Deserialize__);
    FUN_02d4dc40(Method_System_Runtime_Serialization_OptionalFieldAttribute_set_VersionAdded__);
    FUN_02d4dc40(Method_System_ParseNumbers_LongToString__);
    FUN_02d4dc40(Method_PlayFab_PlayFabAddonAPI_CreateOrUpdatePSN__);
    FUN_02d4dc40(Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateSteam__);
    FUN_02d4dc40(Method_Mono_Security_Cryptography_PKCS1_HashNameFromOid__);
    FUN_02d4dc40(Method_System_Collections_Specialized_OrderedDictionary_Remove__);
    DAT_06a578e4 = 1;
  }
  puVar6 = Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateFacebookInstantGames__;
  puVar5 = Method_System_Runtime_InteropServices_MemoryMarshal_TryGetArray<byte>__;
  puVar4 = Method_UnityEngine_InputSystem_Utilities_MemoryHelpers_SetBitsInBuffer__;
  puVar3 = PTR_DAT_0664d6f0;
  uStack_68 = 0;
  local_70 = 0;
  local_78 = (long *)0x0;
  local_80 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_98 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_f0 = 0;
  uStack_168 = 0;
  local_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  local_180 = 0;
  uStack_178 = 0;
  if (param_3 == 0) goto LAB_05c470f0;
  uVar21 = FUN_05bfdf34(param_3,*(undefined8 *)
                                 Method_UnityEngine_InputSystem_Utilities_MemoryHelpers_WriteUIntAsMultipleBits__
                       );
  FUN_05bfdf34(param_3,*(undefined8 *)puVar5);
  lVar22 = FUN_05bfdf34(param_3,*(undefined8 *)puVar4);
  lVar23 = FUN_05bfdf34(param_3,*(undefined8 *)puVar6);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)puVar3);
  }
  lVar24 = FUN_05b1fe8c(0);
  puVar10 = Method_System_Runtime_Serialization_OptionalFieldAttribute_set_VersionAdded__;
  puVar9 = Method_System_OperatingSystem_GetObjectData__;
  puVar8 = Method_System_OperatingSystem__ctor__;
  puVar7 = Method_UnityEngine_XR_OpenXR_OpenXRSettings_PermissionGrantedCallback__;
  puVar6 = Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeatures<OpenXRInteractionFeature>__;
  puVar5 = Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<DPadInteraction>__;
  puVar4 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_ProcessOpenXRMessageLoop__;
  puVar3 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StopSubsystem<XRInputSubsystem>__;
  if ((lVar24 == 0) || (lVar24 = *(long *)(lVar24 + 0x10), lVar24 == 0)) goto LAB_05c470f0;
  uVar25 = FUN_0344f524(lVar24,*(undefined8 *)
                                Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<FoveatedRenderingFeature>__
                       );
  *(undefined8 *)(param_1 + 0x1c0) = uVar25;
  thunk_FUN_02dc1ef0(param_1 + 0x1c0,uVar25);
  uVar25 = FUN_0344f524(lVar24,*(undefined8 *)puVar7);
  *(undefined8 *)(param_1 + 0x1c8) = uVar25;
  thunk_FUN_02dc1ef0(param_1 + 0x1c8,uVar25);
  uVar25 = FUN_0344f524(lVar24,*(undefined8 *)puVar8);
  *(undefined8 *)(param_1 + 0x1d8) = uVar25;
  thunk_FUN_02dc1ef0(param_1 + 0x1d8,uVar25);
  uVar25 = FUN_0344f524(lVar24,*(undefined8 *)puVar3);
  *(undefined8 *)(param_1 + 0x1e0) = uVar25;
  thunk_FUN_02dc1ef0(param_1 + 0x1e0,uVar25);
  uVar25 = FUN_0344f524(lVar24,*(undefined8 *)puVar9);
  *(undefined8 *)(param_1 + 0x1d0) = uVar25;
  thunk_FUN_02dc1ef0(param_1 + 0x1d0,uVar25);
  uVar25 = FUN_0344f524(lVar24,*(undefined8 *)puVar6);
  *(undefined8 *)(param_1 + 0x1e8) = uVar25;
  thunk_FUN_02dc1ef0(param_1 + 0x1e8,uVar25);
  uVar25 = FUN_0344f524(lVar24,*(undefined8 *)puVar4);
  *(undefined8 *)(param_1 + 0x1f0) = uVar25;
  thunk_FUN_02dc1ef0(param_1 + 0x1f0,uVar25);
  uVar25 = FUN_0344f524(lVar24,*(undefined8 *)puVar10);
  *(undefined8 *)(param_1 + 0x1f8) = uVar25;
  thunk_FUN_02dc1ef0(param_1 + 0x1f8,uVar25);
  uVar25 = FUN_0344f524(lVar24,*(undefined8 *)puVar5);
  *(undefined8 *)(param_1 + 0x200) = uVar25;
  thunk_FUN_02dc1ef0(param_1 + 0x200,uVar25);
  uVar25 = FUN_0344f524(lVar24,*(undefined8 *)
                                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_ReceiveNativeEvent__);
  *(undefined8 *)(param_1 + 0x208) = uVar25;
  thunk_FUN_02dc1ef0(param_1 + 0x208,uVar25);
  uVar25 = FUN_0344f524(lVar24,*(undefined8 *)
                                Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Deserialize__
                       );
  *(undefined8 *)(param_1 + 0x210) = uVar25;
  thunk_FUN_02dc1ef0(param_1 + 0x210,uVar25);
  uVar25 = FUN_0344f524(lVar24,*(undefined8 *)
                                Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<MockRuntime>__
                       );
  *(undefined8 *)(param_1 + 0x218) = uVar25;
  thunk_FUN_02dc1ef0(param_1 + 0x218,uVar25);
  if (lVar23 == 0) goto LAB_05c470f0;
  *(undefined1 *)(param_1 + 599) = *(undefined1 *)(lVar23 + 0x1c);
  uVar1 = *(undefined2 *)(lVar23 + 0x1d);
  *(byte *)(param_1 + 0x255) = param_8 & 1;
  *(undefined2 *)(param_1 + 600) = uVar1;
  *(byte *)(param_1 + 0x256) = param_10 & 1;
  puVar3 = PTR_DAT_066462d0;
  if (lVar22 == 0) goto LAB_05c470f0;
  uVar12 = FUN_05c1fe68(lVar22,0);
  if (*(char *)(lVar22 + 0x1c8) == '\0') {
    uVar13 = 0;
  }
  else {
    if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_05c470f0;
    uVar25 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x10);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar13 = FUN_05ee1474(uVar25,0,0);
    uVar13 = uVar13 & 1;
  }
  if ((*(long *)(param_1 + 0x1c0) == 0) ||
     (plVar26 = *(long **)(*(long *)(param_1 + 0x1c0) + 0x38), plVar26 == (long *)0x0))
  goto LAB_05c470f0;
  iVar19 = *(int *)(lVar22 + 0x1cc);
  iVar14 = (**(code **)(*plVar26 + 0x218))(plVar26,*(undefined8 *)(*plVar26 + 0x220));
  puVar4 = Method_System_Enum_ToObject__;
  lVar24 = *(long *)(param_1 + 0x1b0);
  if (iVar14 == 1) {
    if (lVar24 == 0) goto LAB_05c470f0;
    puVar28 = (undefined8 *)(lVar24 + 0x20);
  }
  else {
    if (lVar24 == 0) goto LAB_05c470f0;
    puVar28 = (undefined8 *)(lVar24 + 0x30);
  }
  if (*(long *)(param_1 + 0x1c0) == 0) goto LAB_05c470f0;
  uVar25 = *puVar28;
  uVar15 = FUN_05c28690(*(long *)(param_1 + 0x1c0),0);
  if (((uVar12 | uVar15 ^ 0xffffffff) & 1) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar15 = FUN_05ee1474(uVar25,0,0);
    uVar15 = uVar15 & 1;
  }
  else {
    uVar15 = 0;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar24 = FUN_05b363c4(0);
  if (lVar24 == 0) goto LAB_05c470f0;
  uVar27 = FUN_05b365ac(lVar24,0);
  if ((uVar27 & 1) == 0) {
    cVar33 = *(char *)(param_1 + 0x259);
  }
  else {
    cVar33 = '\0';
  }
  if (*(long *)(param_1 + 0x1d0) == 0) goto LAB_05c470f0;
  uVar27 = FUN_05c29860(*(long *)(param_1 + 0x1d0),0);
  if ((uVar27 & 1) == 0) {
    cVar30 = '\0';
  }
  else {
    cVar30 = *(char *)(param_1 + 600);
  }
  if (*(long *)(param_1 + 0x1c8) == 0) goto LAB_05c470f0;
  uVar16 = FUN_05c29060(*(long *)(param_1 + 0x1c8),0);
  if (*(long *)(param_1 + 0x1d8) == 0) goto LAB_05c470f0;
  uVar17 = FUN_05c29290(*(long *)(param_1 + 0x1d8),0);
  if (((uVar12 | uVar16 ^ 0xffffffff) & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_066462e0 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar27 = FUN_05e9a9c0(0);
    if ((uVar27 & 1) == 0) goto LAB_05c468b4;
    if ((*(long *)(param_1 + 0x1c8) == 0) ||
       (plVar26 = *(long **)(*(long *)(param_1 + 0x1c8) + 0x38), plVar26 == (long *)0x0))
    goto LAB_05c470f0;
    iVar14 = (**(code **)(*plVar26 + 0x218))(plVar26,*(undefined8 *)(*plVar26 + 0x220));
    if (iVar14 == 1) {
      plVar26 = *(long **)(lVar22 + 0x1d8);
      if (plVar26 == (long *)0x0) goto LAB_05c470f0;
      uVar27 = (**(code **)(*plVar26 + 0x198))(plVar26,*(undefined8 *)(*plVar26 + 0x1a0));
      if ((uVar27 & 1) == 0) {
        uVar25 = *(undefined8 *)Method_PlayFab_PlayFabAddonAPI_CreateOrUpdatePSN__;
        iVar14 = FUN_05eec824(0);
        if ((iVar14 * -0x11111111 + 0x8888888U >> 2 | iVar14 * -0x40000000) < 0x4444445) {
          if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_05ea2df4(uVar25,0);
        }
        goto LAB_05c468b4;
      }
    }
    bVar2 = true;
  }
  else {
LAB_05c468b4:
    bVar2 = false;
  }
  puVar3 = Method_System_MemoryExtensions_AsSpan<GradientAlphaKey>__;
  uVar16 = FUN_05c20504(lVar22,0);
  uVar18 = FUN_05c205f4(lVar22,0);
  if (((uVar16 & 1) == 0) && (uVar27 = FUN_05c204f4(lVar22,0), (uVar27 & 1) != 0)) {
    if (*(int *)(*(long *)
                  Method_System_Net_Configuration_NetSectionGroup_get_AuthenticationModules__ + 0xe4
                ) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05c6de94(lVar22,uVar18 & 1,0);
  }
  uVar25 = FUN_032f60d4(0x20,*(undefined8 *)puVar3);
  if (param_2 != 0) {
    plVar26 = (long *)FUN_03356fdc(param_2,*(undefined8 *)
                                            Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateSteam__,
                                   &local_80,uVar25,
                                   *(undefined8 *)Method_System_ParseNumbers_LongToString__,0x805,
                                   *(undefined8 *)
                                    Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateKongregate__);
    pplStack_1f8 = &local_78;
    local_200 = 0;
    local_78 = plVar26;
    if (plVar26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar24 = *plVar26;
    uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar27 != 0) {
      piVar31 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == *(long *)Method_System_Linq_Enumerable_ElementAt<Column>__) {
          puVar28 = (undefined8 *)(lVar24 + (long)(*piVar31 + 0xc) * 0x10 + 0x138);
          goto LAB_05c469d4;
        }
        uVar27 = uVar27 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar27 != 0);
    }
    puVar28 = (undefined8 *)
              FUN_02d87540(plVar26,*(long *)Method_System_Linq_Enumerable_ElementAt<Column>__,0xc);
LAB_05c469d4:
    (*(code *)*puVar28)(plVar26,1,puVar28[1]);
    plVar26 = local_78;
    puVar3 = 
    Method_UnityEngine_UIElements_PanelEventHandler_UpdatePointerEventTarget<PointerMoveEvent>__;
    lVar24 = *(long *)
              Method_UnityEngine_UIElements_PanelEventHandler_UpdatePointerEventTarget<PointerMoveEvent>__
    ;
    if (*(int *)(lVar24 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar24 = *(long *)puVar3;
    }
    puVar28 = *(undefined8 **)(lVar24 + 0xb8);
    lVar34 = puVar28[0x17];
    if (lVar34 == 0) {
      if (*(int *)(lVar24 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        puVar28 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar25 = *puVar28;
      lVar34 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateFacebook__);
      FUN_045acfb0(lVar34,uVar25,
                   *(undefined8 *)Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateNintendo__,0);
      plVar29 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xb8);
      *plVar29 = lVar34;
      thunk_FUN_02dc1ef0(plVar29,lVar34);
    }
    if (plVar26 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar24 = *plVar26;
    lVar32 = *(long *)Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateGoogle__;
    uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
    if (uVar27 != 0) {
      piVar31 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
      do {
        if (*(long *)(piVar31 + -2) == *(long *)(lVar32 + 0x20)) {
          lVar24 = lVar24 + (long)(int)(*piVar31 + (uint)*(ushort *)(lVar32 + 0x50)) * 0x10 + 0x138;
          goto LAB_05c46ac8;
        }
        uVar27 = uVar27 - 1;
        piVar31 = piVar31 + 4;
      } while (uVar27 != 0);
    }
    lVar24 = FUN_02d87540(plVar26);
LAB_05c46ac8:
    lVar24 = thunk_FUN_02d6c7a8(*(undefined8 *)(lVar24 + 8),lVar32);
    (**(code **)(lVar24 + 8))(plVar26,lVar34,lVar24);
    plVar26 = local_78;
    if (local_78 != (long *)0x0) {
      lVar24 = *local_78;
      uVar27 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar27 != 0) {
        piVar31 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar31 + -2) == *(long *)PTR_DAT_066479a8) {
            puVar28 = (undefined8 *)(lVar24 + (long)*piVar31 * 0x10 + 0x138);
            goto LAB_05c46b50;
          }
          uVar27 = uVar27 - 1;
          piVar31 = piVar31 + 4;
        } while (uVar27 != 0);
      }
      puVar28 = (undefined8 *)FUN_02d87540(local_78,*(long *)PTR_DAT_066479a8,0);
LAB_05c46b50:
      (*(code *)*puVar28)(plVar26,puVar28[1]);
    }
    uStack_68 = param_4[1];
    local_70 = *param_4;
    if (uVar13 != 0) {
      FUN_05c3c454(param_1,param_2,&local_70,&local_90);
      uStack_68 = uStack_88;
      local_70 = local_90;
    }
    if (iVar19 == 2) {
      FUN_05c3c910(param_1,param_2,uVar21,*(undefined4 *)(lVar22 + 0x1d0),&local_70,&local_a0);
      uStack_68 = uStack_98;
      local_70 = local_a0;
    }
    if (uVar15 != 0) {
      FUN_05c3f134(param_1,param_2,uVar21,lVar22,&local_70,&local_b0);
      uStack_68 = uStack_a8;
      local_70 = local_b0;
    }
    if ((uVar16 & 1) != 0) {
      if ((uVar16 & uVar18 & 1) == 0) {
        puVar28 = &uStack_d0;
        FUN_05c41548(param_1,param_2,uVar21,lVar22,&local_70,&uStack_d0);
      }
      else {
        puVar28 = &local_c0;
        FUN_05c41680(param_1,param_2,uVar21,lVar22,&local_70,&local_c0);
      }
      uStack_68 = puVar28[1];
      local_70 = *puVar28;
    }
    if (bVar2) {
      FUN_05c41958(param_1,param_2,uVar21,lVar22,&local_70,&local_e0);
      uStack_68 = uStack_d8;
      local_70 = local_e0;
    }
    if (((uVar17 ^ 1 | uVar12) & 1) == 0) {
      FUN_05c40e8c(param_1,param_2,*(undefined8 *)(lVar22 + 0xd8),&local_70,&local_f0);
      uStack_68 = uStack_e8;
      local_70 = local_f0;
    }
    puVar3 = Method_UnityEngine_Component_TryGetComponent<UIRenderer>__;
    if ((*(long *)(param_1 + 0x1b0) != 0) &&
       (lVar24 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x78), lVar24 != 0)) {
      thunk_FUN_05eb63c4(lVar24,0,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_05b8e8e0(&local_200,&local_70,param_2,0);
      memcpy(&local_170,&local_200,0x80);
      if (DAT_06a5718b == '\0') {
        FUN_02d4dc40(Method_UnityEngine_Component_TryGetComponent<UIRenderer>__);
        DAT_06a5718b = '\x01';
      }
      lVar24 = *(long *)puVar3;
      if (*(int *)(lVar24 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar24 = *(long *)puVar3;
      }
      uStack_178 = (*(undefined8 **)(lVar24 + 0xb8))[1];
      local_180 = **(undefined8 **)(lVar24 + 0xb8);
      if (*(long *)(param_1 + 0x1e0) != 0) {
        uVar27 = FUN_05c1d4d8(*(long *)(param_1 + 0x1e0),0);
        if ((cVar30 != '\0') || ((uVar27 & 1) != 0)) {
          FUN_05c3e3b8(param_1,param_2,&local_70,&local_180,*(undefined1 *)(lVar22 + 399));
          auVar35._8_8_ = extraout_x1;
          auVar35._0_8_ = local_180;
          if (cVar30 != '\0') {
            auVar35 = FUN_05c3e210(param_1,extraout_x1,&local_170);
            iVar19 = FUN_05c3e2b0(param_1,auVar35._8_8_,auVar35._0_8_);
            if ((*(long *)(param_1 + 0x1e0) == 0) ||
               (plVar26 = *(long **)(*(long *)(param_1 + 0x1e0) + 0x78), plVar26 == (long *)0x0))
            goto LAB_05c470f0;
            iVar14 = (**(code **)(*plVar26 + 0x218))(plVar26,*(undefined8 *)(*plVar26 + 0x220));
            uVar13 = iVar19 - 1;
            if (iVar14 < 0) {
              iVar14 = iVar14 + 1;
            }
            uVar15 = uVar13;
            if (iVar14 >> 1 <= (int)uVar13) {
              uVar15 = iVar14 >> 1;
            }
            uVar16 = 0;
            if (-1 < (int)uVar13) {
              uVar16 = uVar15;
            }
            if ((*(long *)(param_1 + 0x1d0) == 0) ||
               (plVar26 = *(long **)(*(long *)(param_1 + 0x1d0) + 0x48), plVar26 == (long *)0x0))
            goto LAB_05c470f0;
            uVar15 = (**(code **)(*plVar26 + 0x218))(plVar26,*(undefined8 *)(*plVar26 + 0x220));
            lVar24 = *(long *)(param_1 + 0x158);
            uVar13 = uVar15;
            if ((int)uVar16 <= (int)uVar15) {
              uVar13 = uVar16;
            }
            uVar16 = 0;
            if (-1 < (int)uVar15) {
              uVar16 = uVar13;
            }
            if (lVar24 == 0) goto LAB_05c470f0;
            if (*(uint *)(lVar24 + 0x18) <= uVar16) {
LAB_05c46e30:
                    /* WARNING: Subroutine does not return */
              FUN_02d4def0();
            }
            if (iVar19 == 1) {
              lVar24 = *(long *)(param_1 + 0x160);
              if (lVar24 == 0) goto LAB_05c470f0;
              if (*(int *)(lVar24 + 0x18) == 0) goto LAB_05c46e30;
            }
            else {
              lVar24 = lVar24 + (long)(int)uVar16 * 0x10;
            }
            auVar35 = FUN_05c42d84(param_1,param_2,*(undefined8 *)(lVar22 + 0xd8),&local_170,
                                   local_180,uStack_178,*(undefined8 *)(lVar24 + 0x20),
                                   *(undefined8 *)(lVar24 + 0x28),uVar16 == 0);
            uStack_178 = auVar35._8_8_;
          }
          local_180 = auVar35._0_8_;
          if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_05c470f0;
          FUN_05c3dcc8(param_1,auVar35._8_8_,*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78),
                       &local_170);
        }
        if (cVar33 != '\0') {
          FUN_05c42158(param_1,param_2,uVar21,lVar22,&local_170);
          FUN_05c42734(param_1,param_2,uVar21,lVar22,&local_70,&local_170);
        }
        if (*(long *)(param_1 + 0x1b0) != 0) {
          FUN_05c39cb4(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78),uVar12 & 1);
          if (*(long *)(param_1 + 0x1b0) != 0) {
            FUN_05c39fb0(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78));
            if (*(long *)(param_1 + 0x1b0) != 0) {
              FUN_05c3a0a4(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78),
                           *(undefined8 *)(lVar22 + 0x1a0),local_170._4_4_,uStack_168 & 0xffffffff);
              if (*(long *)(param_1 + 0x1b0) != 0) {
                FUN_05c3a650(param_1,lVar22,*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78));
                if (*(long *)(param_1 + 0x1b0) != 0) {
                  TMPro_TMP_TextUtilities__HexToInt
                            (param_1,lVar22,*(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78));
                  uVar27 = FUN_05c1fcc0(lVar22,0);
                  if (((uVar27 & 1) != 0) && (*(char *)(param_1 + 0x256) != '\0')) {
                    if ((*(long *)(param_1 + 0x1b0) == 0) ||
                       (lVar24 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x78), lVar24 == 0))
                    goto LAB_05c470f0;
                    uVar27 = FUN_05eb5004(lVar24,*(undefined8 *)
                                                  Method_System_Collections_Specialized_OrderedDictionary_Remove__
                                          ,0);
                  }
                  if (*(char *)(param_1 + 599) != '\0') {
                    if ((*(long *)(param_1 + 0x1b0) == 0) ||
                       (lVar24 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x78), lVar24 == 0))
                    goto LAB_05c470f0;
                    uVar27 = FUN_05eb5004(lVar24,*(undefined8 *)
                                                  Method_Mono_Security_Cryptography_PKCS1_HashNameFromOid__
                                          ,0);
                  }
                  bVar11 = FUN_05c36f54(uVar27,lVar22);
                  if ((bVar11 & 1) != 0) {
                    if (*(char *)(param_1 + 0x255) == '\0') {
                      iVar19 = (uint)*(byte *)(param_1 + 0x256) << 1;
                    }
                    else {
                      iVar19 = 0;
                    }
                    auVar35 = FUN_05c1fff4(lVar22,0);
                    uVar20 = FUN_05c200ec(lVar22,0);
                    if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_05c470f0;
                    uVar21 = *(undefined8 *)(*(long *)(param_1 + 0x1b0) + 0x78);
                    uVar12 = FUN_05c2017c(lVar22,0);
                    FUN_05c3a79c(param_1,auVar35._0_8_,auVar35._8_8_,uVar20,uVar21,iVar19,uVar12 & 1
                                );
                  }
                  cVar33 = *(char *)(lVar22 + 399);
                  if (*(int *)(*(long *)PTR_DAT_06648568 + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  FUN_05c0c7d8(lVar22,0);
                  FUN_05c454f0(param_1,param_2,param_3,lVar22,lVar23,&local_70,param_7,param_5,
                               &local_180,param_6,bVar11 & 1,cVar33 != '\0',0,param_8 & 1);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_05c470f0:
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


