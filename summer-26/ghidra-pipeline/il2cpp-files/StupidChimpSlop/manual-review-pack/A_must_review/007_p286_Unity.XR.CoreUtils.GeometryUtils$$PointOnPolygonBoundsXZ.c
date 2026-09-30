/*
FUNCTION_NAME: Unity.XR.CoreUtils.GeometryUtils$$PointOnPolygonBoundsXZ
ENTRY_POINT: 05c461e0
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 82
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;possible_biometrics
MODULES: weak_source_state;validity_gate;pose_vector;paired_state_refs;ui_interaction;telemetry;foveation_rendering;frame_behavior;structure_combo;keyword_support
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_3;telemetry_or_network_hits_2;strong_foveation_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;eye_or_gaze_keyword_boost_only;negative_known_unity_or_il2cpp_false_positive_family;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_permission_setup;functionality_foveated_rendering;functionality_possible_biometrics_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05c46b6c) */
/* WARNING: Removing unreachable block (ram,0x05c470f8) */

void Unity_XR_CoreUtils_GeometryUtils__PointOnPolygonBoundsXZ(ulong param_1,long param_2)

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
  uint uVar11;
  int iVar18;
  undefined4 uVar19;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long *plVar25;
  ulong uVar26;
  undefined8 *puVar27;
  long *plVar28;
  undefined8 extraout_x1;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined4 in_w7;
  char cVar29;
  int *piVar30;
  long unaff_x19;
  long lVar31;
  char cVar32;
  long unaff_x23;
  long unaff_x25;
  long lVar33;
  undefined1 auVar34 [16];
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined4 uStack0000000000000094;
  undefined8 in_stack_000000a0;
  undefined1 *in_stack_000000a8;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  ulong in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  undefined8 in_stack_00000160;
  undefined8 in_stack_00000168;
  undefined8 in_stack_00000170;
  undefined8 in_stack_00000178;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  undefined8 in_stack_000001d0;
  undefined8 in_stack_000001d8;
  undefined8 in_stack_000001e0;
  undefined8 in_stack_000001e8;
  byte in_stack_000002a8;
  
  uStack0000000000000058 = in_x5;
  uStack0000000000000060 = in_x4;
  uStack0000000000000068 = in_x6;
  uStack0000000000000094 = in_w7;
  if ((param_1 & 1) == 0) {
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
    *(undefined1 *)(unaff_x19 + 0x8e4) = 1;
  }
  puVar3 = PTR_DAT_0664d6f0;
  in_stack_000001e8 = 0;
  in_stack_000001d8 = 0;
  in_stack_000001e0 = 0;
  in_stack_000001c8 = 0;
  in_stack_000001d0 = 0;
  in_stack_000001b8 = 0;
  in_stack_000001c0 = 0;
  in_stack_000001b0 = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  in_stack_00000148 = 0;
  in_stack_00000140 = 0;
  in_stack_00000158 = 0;
  in_stack_00000150 = 0;
  in_stack_00000168 = 0;
  in_stack_00000160 = 0;
  in_stack_00000178 = 0;
  in_stack_00000170 = 0;
  in_stack_00000188 = 0;
  in_stack_00000180 = 0;
  in_stack_00000198 = 0;
  in_stack_00000190 = 0;
  in_stack_000001a8 = 0;
  in_stack_000001a0 = 0;
  in_stack_00000120 = 0;
  in_stack_00000128 = 0;
  if (unaff_x23 == 0) goto LAB_05c470f0;
  uVar20 = FUN_05bfdf34();
  FUN_05bfdf34();
  lVar21 = FUN_05bfdf34();
  lVar22 = FUN_05bfdf34();
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*(long *)puVar3);
  }
  lVar23 = FUN_05b1fe8c(0);
  puVar10 = Method_System_Runtime_Serialization_OptionalFieldAttribute_set_VersionAdded__;
  puVar9 = Method_System_OperatingSystem_GetObjectData__;
  puVar8 = Method_System_OperatingSystem__ctor__;
  puVar7 = Method_UnityEngine_XR_OpenXR_OpenXRSettings_PermissionGrantedCallback__;
  puVar6 = Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeatures<OpenXRInteractionFeature>__;
  puVar5 = Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<DPadInteraction>__;
  puVar4 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_ProcessOpenXRMessageLoop__;
  puVar3 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StopSubsystem<XRInputSubsystem>__;
  if ((lVar23 == 0) || (lVar23 = *(long *)(lVar23 + 0x10), lVar23 == 0)) goto LAB_05c470f0;
  uVar24 = FUN_0344f524(lVar23,*(undefined8 *)
                                Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<FoveatedRenderingFeature>__
                       );
  *(undefined8 *)(param_2 + 0x1c0) = uVar24;
  thunk_FUN_02dc1ef0(param_2 + 0x1c0,uVar24);
  uVar24 = FUN_0344f524(lVar23,*(undefined8 *)puVar7);
  *(undefined8 *)(param_2 + 0x1c8) = uVar24;
  thunk_FUN_02dc1ef0(param_2 + 0x1c8,uVar24);
  uVar24 = FUN_0344f524(lVar23,*(undefined8 *)puVar8);
  *(undefined8 *)(param_2 + 0x1d8) = uVar24;
  thunk_FUN_02dc1ef0(param_2 + 0x1d8,uVar24);
  uVar24 = FUN_0344f524(lVar23,*(undefined8 *)puVar3);
  *(undefined8 *)(param_2 + 0x1e0) = uVar24;
  thunk_FUN_02dc1ef0(param_2 + 0x1e0,uVar24);
  uVar24 = FUN_0344f524(lVar23,*(undefined8 *)puVar9);
  *(undefined8 *)(param_2 + 0x1d0) = uVar24;
  thunk_FUN_02dc1ef0(param_2 + 0x1d0,uVar24);
  uVar24 = FUN_0344f524(lVar23,*(undefined8 *)puVar6);
  *(undefined8 *)(param_2 + 0x1e8) = uVar24;
  thunk_FUN_02dc1ef0(param_2 + 0x1e8,uVar24);
  uVar24 = FUN_0344f524(lVar23,*(undefined8 *)puVar4);
  *(undefined8 *)(param_2 + 0x1f0) = uVar24;
  thunk_FUN_02dc1ef0(param_2 + 0x1f0,uVar24);
  uVar24 = FUN_0344f524(lVar23,*(undefined8 *)puVar10);
  *(undefined8 *)(param_2 + 0x1f8) = uVar24;
  thunk_FUN_02dc1ef0(param_2 + 0x1f8,uVar24);
  uVar24 = FUN_0344f524(lVar23,*(undefined8 *)puVar5);
  *(undefined8 *)(param_2 + 0x200) = uVar24;
  thunk_FUN_02dc1ef0(param_2 + 0x200,uVar24);
  uVar24 = FUN_0344f524(lVar23,*(undefined8 *)
                                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_ReceiveNativeEvent__);
  *(undefined8 *)(param_2 + 0x208) = uVar24;
  thunk_FUN_02dc1ef0(param_2 + 0x208,uVar24);
  uVar24 = FUN_0344f524(lVar23,*(undefined8 *)
                                Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Deserialize__
                       );
  *(undefined8 *)(param_2 + 0x210) = uVar24;
  thunk_FUN_02dc1ef0(param_2 + 0x210,uVar24);
  uVar24 = FUN_0344f524(lVar23,*(undefined8 *)
                                Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<MockRuntime>__
                       );
  *(undefined8 *)(param_2 + 0x218) = uVar24;
  thunk_FUN_02dc1ef0(param_2 + 0x218,uVar24);
  if (lVar22 == 0) goto LAB_05c470f0;
  *(undefined1 *)(param_2 + 599) = *(undefined1 *)(lVar22 + 0x1c);
  uVar1 = *(undefined2 *)(lVar22 + 0x1d);
  *(byte *)(param_2 + 0x255) = (byte)uStack0000000000000094 & 1;
  *(undefined2 *)(param_2 + 600) = uVar1;
  *(byte *)(param_2 + 0x256) = in_stack_000002a8 & 1;
  puVar3 = PTR_DAT_066462d0;
  if (lVar21 == 0) goto LAB_05c470f0;
  uVar11 = FUN_05c1fe68(lVar21,0);
  if (*(char *)(lVar21 + 0x1c8) == '\0') {
    uVar12 = 0;
  }
  else {
    if (*(long *)(param_2 + 0x1b0) == 0) goto LAB_05c470f0;
    uVar24 = *(undefined8 *)(*(long *)(param_2 + 0x1b0) + 0x10);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar12 = FUN_05ee1474(uVar24,0,0);
    uVar12 = uVar12 & 1;
  }
  if ((*(long *)(param_2 + 0x1c0) == 0) ||
     (plVar25 = *(long **)(*(long *)(param_2 + 0x1c0) + 0x38), plVar25 == (long *)0x0))
  goto LAB_05c470f0;
  iVar18 = *(int *)(lVar21 + 0x1cc);
  iVar13 = (**(code **)(*plVar25 + 0x218))(plVar25,*(undefined8 *)(*plVar25 + 0x220));
  puVar4 = Method_System_Enum_ToObject__;
  lVar23 = *(long *)(param_2 + 0x1b0);
  if (iVar13 == 1) {
    if (lVar23 == 0) goto LAB_05c470f0;
    puVar27 = (undefined8 *)(lVar23 + 0x20);
  }
  else {
    if (lVar23 == 0) goto LAB_05c470f0;
    puVar27 = (undefined8 *)(lVar23 + 0x30);
  }
  if (*(long *)(param_2 + 0x1c0) == 0) goto LAB_05c470f0;
  uVar24 = *puVar27;
  uVar14 = FUN_05c28690(*(long *)(param_2 + 0x1c0),0);
  if (((uVar11 | uVar14 ^ 0xffffffff) & 1) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar14 = FUN_05ee1474(uVar24,0,0);
    uVar14 = uVar14 & 1;
  }
  else {
    uVar14 = 0;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar23 = FUN_05b363c4(0);
  if (lVar23 == 0) goto LAB_05c470f0;
  uVar26 = FUN_05b365ac(lVar23,0);
  if ((uVar26 & 1) == 0) {
    cVar32 = *(char *)(param_2 + 0x259);
  }
  else {
    cVar32 = '\0';
  }
  if (*(long *)(param_2 + 0x1d0) == 0) goto LAB_05c470f0;
  uVar26 = FUN_05c29860(*(long *)(param_2 + 0x1d0),0);
  if ((uVar26 & 1) == 0) {
    cVar29 = '\0';
  }
  else {
    cVar29 = *(char *)(param_2 + 600);
  }
  if (*(long *)(param_2 + 0x1c8) == 0) goto LAB_05c470f0;
  uVar15 = FUN_05c29060(*(long *)(param_2 + 0x1c8),0);
  if (*(long *)(param_2 + 0x1d8) == 0) goto LAB_05c470f0;
  uVar16 = FUN_05c29290(*(long *)(param_2 + 0x1d8),0);
  if (((uVar11 | uVar15 ^ 0xffffffff) & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_066462e0 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar26 = FUN_05e9a9c0(0);
    if ((uVar26 & 1) == 0) goto LAB_05c468b4;
    if ((*(long *)(param_2 + 0x1c8) == 0) ||
       (plVar25 = *(long **)(*(long *)(param_2 + 0x1c8) + 0x38), plVar25 == (long *)0x0))
    goto LAB_05c470f0;
    iVar13 = (**(code **)(*plVar25 + 0x218))(plVar25,*(undefined8 *)(*plVar25 + 0x220));
    if (iVar13 == 1) {
      plVar25 = *(long **)(lVar21 + 0x1d8);
      if (plVar25 == (long *)0x0) goto LAB_05c470f0;
      uVar26 = (**(code **)(*plVar25 + 0x198))(plVar25,*(undefined8 *)(*plVar25 + 0x1a0));
      if ((uVar26 & 1) == 0) {
        uVar24 = *(undefined8 *)Method_PlayFab_PlayFabAddonAPI_CreateOrUpdatePSN__;
        iVar13 = FUN_05eec824(0);
        if ((iVar13 * -0x11111111 + 0x8888888U >> 2 | iVar13 * -0x40000000) < 0x4444445) {
          if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_05ea2df4(uVar24,0);
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
  uVar15 = FUN_05c20504(lVar21,0);
  uVar17 = FUN_05c205f4(lVar21,0);
  if (((uVar15 & 1) == 0) && (uVar26 = FUN_05c204f4(lVar21,0), (uVar26 & 1) != 0)) {
    if (*(int *)(*(long *)
                  Method_System_Net_Configuration_NetSectionGroup_get_AuthenticationModules__ + 0xe4
                ) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05c6de94(lVar21,uVar17 & 1,0);
  }
  uVar24 = FUN_032f60d4(0x20,*(undefined8 *)puVar3);
  if (unaff_x25 != 0) {
    plVar25 = (long *)FUN_03356fdc(unaff_x25,
                                   *(undefined8 *)
                                    Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateSteam__,
                                   &stack0x00000220,uVar24,
                                   *(undefined8 *)Method_System_ParseNumbers_LongToString__,0x805,
                                   *(undefined8 *)
                                    Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateKongregate__);
    in_stack_000000a8 = &stack0x00000228;
    in_stack_000000a0 = 0;
    if (plVar25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar23 = *plVar25;
    uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)Method_System_Linq_Enumerable_ElementAt<Column>__) {
          puVar27 = (undefined8 *)(lVar23 + (long)(*piVar30 + 0xc) * 0x10 + 0x138);
          goto LAB_05c469d4;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    puVar27 = (undefined8 *)
              FUN_02d87540(plVar25,*(long *)Method_System_Linq_Enumerable_ElementAt<Column>__,0xc);
LAB_05c469d4:
    (*(code *)*puVar27)(plVar25,1,puVar27[1]);
    puVar3 = 
    Method_UnityEngine_UIElements_PanelEventHandler_UpdatePointerEventTarget<PointerMoveEvent>__;
    lVar23 = *(long *)
              Method_UnityEngine_UIElements_PanelEventHandler_UpdatePointerEventTarget<PointerMoveEvent>__
    ;
    if (*(int *)(lVar23 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar23 = *(long *)puVar3;
    }
    puVar27 = *(undefined8 **)(lVar23 + 0xb8);
    lVar33 = puVar27[0x17];
    if (lVar33 == 0) {
      if (*(int *)(lVar23 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        puVar27 = *(undefined8 **)(*(long *)puVar3 + 0xb8);
      }
      uVar24 = *puVar27;
      lVar33 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateFacebook__);
      FUN_045acfb0(lVar33,uVar24,
                   *(undefined8 *)Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateNintendo__,0);
      plVar28 = (long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0xb8);
      *plVar28 = lVar33;
      thunk_FUN_02dc1ef0(plVar28,lVar33);
    }
    if (plVar25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar23 = *plVar25;
    lVar31 = *(long *)Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateGoogle__;
    uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
    if (uVar26 != 0) {
      piVar30 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
      do {
        if (*(long *)(piVar30 + -2) == *(long *)(lVar31 + 0x20)) {
          lVar23 = lVar23 + (long)(int)(*piVar30 + (uint)*(ushort *)(lVar31 + 0x50)) * 0x10 + 0x138;
          goto LAB_05c46ac8;
        }
        uVar26 = uVar26 - 1;
        piVar30 = piVar30 + 4;
      } while (uVar26 != 0);
    }
    lVar23 = FUN_02d87540(plVar25);
LAB_05c46ac8:
    lVar23 = thunk_FUN_02d6c7a8(*(undefined8 *)(lVar23 + 8),lVar31);
    (**(code **)(lVar23 + 8))(plVar25,lVar33,lVar23);
    if (plVar25 != (long *)0x0) {
      lVar23 = *plVar25;
      uVar26 = (ulong)*(ushort *)(lVar23 + 0x12e);
      if (uVar26 != 0) {
        piVar30 = (int *)(*(long *)(lVar23 + 0xb0) + 8);
        do {
          if (*(long *)(piVar30 + -2) == *(long *)PTR_DAT_066479a8) {
            puVar27 = (undefined8 *)(lVar23 + (long)*piVar30 * 0x10 + 0x138);
            goto LAB_05c46b50;
          }
          uVar26 = uVar26 - 1;
          piVar30 = piVar30 + 4;
        } while (uVar26 != 0);
      }
      puVar27 = (undefined8 *)FUN_02d87540(plVar25,*(long *)PTR_DAT_066479a8,0);
LAB_05c46b50:
      (*(code *)*puVar27)(plVar25,puVar27[1]);
    }
    if (uVar12 != 0) {
      FUN_05c3c454(param_2,unaff_x25,&stack0x00000230,&stack0x00000210);
    }
    if (iVar18 == 2) {
      FUN_05c3c910(param_2,unaff_x25,uVar20,*(undefined4 *)(lVar21 + 0x1d0),&stack0x00000230,
                   &stack0x00000200);
    }
    if (uVar14 != 0) {
      FUN_05c3f134(param_2,unaff_x25,uVar20,lVar21,&stack0x00000230,&stack0x000001f0);
    }
    if ((uVar15 & 1) != 0) {
      if ((uVar15 & uVar17 & 1) == 0) {
        FUN_05c41548(param_2,unaff_x25,uVar20,lVar21,&stack0x00000230,&stack0x000001d0);
      }
      else {
        FUN_05c41680(param_2,unaff_x25,uVar20,lVar21,&stack0x00000230,&stack0x000001e0);
      }
    }
    if (bVar2) {
      FUN_05c41958(param_2,unaff_x25,uVar20,lVar21,&stack0x00000230,&stack0x000001c0);
    }
    if (((uVar16 ^ 1 | uVar11) & 1) == 0) {
      FUN_05c40e8c(param_2,unaff_x25,*(undefined8 *)(lVar21 + 0xd8),&stack0x00000230,
                   &stack0x000001b0);
    }
    puVar3 = Method_UnityEngine_Component_TryGetComponent<UIRenderer>__;
    if ((*(long *)(param_2 + 0x1b0) != 0) &&
       (lVar23 = *(long *)(*(long *)(param_2 + 0x1b0) + 0x78), lVar23 != 0)) {
      thunk_FUN_05eb63c4(lVar23,0,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_05b8e8e0(&stack0x000000a0,&stack0x00000230,unaff_x25,0);
      memcpy(&stack0x00000130,&stack0x000000a0,0x80);
      if (DAT_06a5718b == '\0') {
        FUN_02d4dc40(Method_UnityEngine_Component_TryGetComponent<UIRenderer>__);
        DAT_06a5718b = '\x01';
      }
      lVar23 = *(long *)puVar3;
      if (*(int *)(lVar23 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar23 = *(long *)puVar3;
      }
      in_stack_00000128 = (*(undefined8 **)(lVar23 + 0xb8))[1];
      in_stack_00000120 = **(undefined8 **)(lVar23 + 0xb8);
      if (*(long *)(param_2 + 0x1e0) != 0) {
        uVar26 = FUN_05c1d4d8(*(long *)(param_2 + 0x1e0),0);
        if ((cVar29 != '\0') || ((uVar26 & 1) != 0)) {
          FUN_05c3e3b8(param_2,unaff_x25,&stack0x00000230,&stack0x00000120,
                       *(undefined1 *)(lVar21 + 399));
          auVar34._8_8_ = extraout_x1;
          auVar34._0_8_ = in_stack_00000120;
          if (cVar29 != '\0') {
            auVar34 = FUN_05c3e210(param_2,extraout_x1,&stack0x00000130);
            iVar18 = FUN_05c3e2b0(param_2,auVar34._8_8_,auVar34._0_8_);
            if ((*(long *)(param_2 + 0x1e0) == 0) ||
               (plVar25 = *(long **)(*(long *)(param_2 + 0x1e0) + 0x78), plVar25 == (long *)0x0))
            goto LAB_05c470f0;
            iVar13 = (**(code **)(*plVar25 + 0x218))(plVar25,*(undefined8 *)(*plVar25 + 0x220));
            uVar12 = iVar18 - 1;
            if (iVar13 < 0) {
              iVar13 = iVar13 + 1;
            }
            uVar14 = uVar12;
            if (iVar13 >> 1 <= (int)uVar12) {
              uVar14 = iVar13 >> 1;
            }
            uVar15 = 0;
            if (-1 < (int)uVar12) {
              uVar15 = uVar14;
            }
            if ((*(long *)(param_2 + 0x1d0) == 0) ||
               (plVar25 = *(long **)(*(long *)(param_2 + 0x1d0) + 0x48), plVar25 == (long *)0x0))
            goto LAB_05c470f0;
            uVar14 = (**(code **)(*plVar25 + 0x218))(plVar25,*(undefined8 *)(*plVar25 + 0x220));
            lVar23 = *(long *)(param_2 + 0x158);
            uVar12 = uVar14;
            if ((int)uVar15 <= (int)uVar14) {
              uVar12 = uVar15;
            }
            uVar15 = 0;
            if (-1 < (int)uVar14) {
              uVar15 = uVar12;
            }
            if (lVar23 == 0) goto LAB_05c470f0;
            if (*(uint *)(lVar23 + 0x18) <= uVar15) {
LAB_05c46e30:
                    /* WARNING: Subroutine does not return */
              FUN_02d4def0();
            }
            if (iVar18 == 1) {
              lVar23 = *(long *)(param_2 + 0x160);
              if (lVar23 == 0) goto LAB_05c470f0;
              if (*(int *)(lVar23 + 0x18) == 0) goto LAB_05c46e30;
            }
            else {
              lVar23 = lVar23 + (long)(int)uVar15 * 0x10;
            }
            auVar34 = FUN_05c42d84(param_2,unaff_x25,*(undefined8 *)(lVar21 + 0xd8),&stack0x00000130
                                   ,in_stack_00000120,in_stack_00000128,
                                   *(undefined8 *)(lVar23 + 0x20),*(undefined8 *)(lVar23 + 0x28));
            in_stack_00000128 = auVar34._8_8_;
          }
          in_stack_00000120 = auVar34._0_8_;
          if (*(long *)(param_2 + 0x1b0) == 0) goto LAB_05c470f0;
          FUN_05c3dcc8(param_2,auVar34._8_8_,*(undefined8 *)(*(long *)(param_2 + 0x1b0) + 0x78),
                       &stack0x00000130);
        }
        if (cVar32 != '\0') {
          FUN_05c42158(param_2,unaff_x25,uVar20,lVar21,&stack0x00000130);
          FUN_05c42734(param_2,unaff_x25,uVar20,lVar21,&stack0x00000230,&stack0x00000130);
        }
        if (*(long *)(param_2 + 0x1b0) != 0) {
          FUN_05c39cb4(param_2,*(undefined8 *)(*(long *)(param_2 + 0x1b0) + 0x78),uVar11 & 1);
          if (*(long *)(param_2 + 0x1b0) != 0) {
            FUN_05c39fb0(param_2,*(undefined8 *)(*(long *)(param_2 + 0x1b0) + 0x78));
            if (*(long *)(param_2 + 0x1b0) != 0) {
              FUN_05c3a0a4(param_2,*(undefined8 *)(*(long *)(param_2 + 0x1b0) + 0x78),
                           *(undefined8 *)(lVar21 + 0x1a0),in_stack_00000130._4_4_,
                           in_stack_00000138 & 0xffffffff);
              if (*(long *)(param_2 + 0x1b0) != 0) {
                FUN_05c3a650(param_2,lVar21,*(undefined8 *)(*(long *)(param_2 + 0x1b0) + 0x78));
                if (*(long *)(param_2 + 0x1b0) != 0) {
                  TMPro_TMP_TextUtilities__HexToInt
                            (param_2,lVar21,*(undefined8 *)(*(long *)(param_2 + 0x1b0) + 0x78));
                  uVar26 = FUN_05c1fcc0(lVar21,0);
                  if (((uVar26 & 1) != 0) && (*(char *)(param_2 + 0x256) != '\0')) {
                    if ((*(long *)(param_2 + 0x1b0) == 0) ||
                       (lVar23 = *(long *)(*(long *)(param_2 + 0x1b0) + 0x78), lVar23 == 0))
                    goto LAB_05c470f0;
                    uVar26 = FUN_05eb5004(lVar23,*(undefined8 *)
                                                  Method_System_Collections_Specialized_OrderedDictionary_Remove__
                                          ,0);
                  }
                  if (*(char *)(param_2 + 599) != '\0') {
                    if ((*(long *)(param_2 + 0x1b0) == 0) ||
                       (lVar23 = *(long *)(*(long *)(param_2 + 0x1b0) + 0x78), lVar23 == 0))
                    goto LAB_05c470f0;
                    uVar26 = FUN_05eb5004(lVar23,*(undefined8 *)
                                                  Method_Mono_Security_Cryptography_PKCS1_HashNameFromOid__
                                          ,0);
                  }
                  uVar26 = FUN_05c36f54(uVar26,lVar21);
                  if ((uVar26 & 1) != 0) {
                    if (*(char *)(param_2 + 0x255) == '\0') {
                      iVar18 = (uint)*(byte *)(param_2 + 0x256) << 1;
                    }
                    else {
                      iVar18 = 0;
                    }
                    auVar34 = FUN_05c1fff4(lVar21,0);
                    uVar19 = FUN_05c200ec(lVar21,0);
                    if (*(long *)(param_2 + 0x1b0) == 0) goto LAB_05c470f0;
                    uVar20 = *(undefined8 *)(*(long *)(param_2 + 0x1b0) + 0x78);
                    uVar11 = FUN_05c2017c(lVar21,0);
                    FUN_05c3a79c(param_2,auVar34._0_8_,auVar34._8_8_,uVar19,uVar20,iVar18,uVar11 & 1
                                );
                  }
                  if (*(int *)(*(long *)PTR_DAT_06648568 + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  FUN_05c0c7d8(lVar21,0);
                  FUN_05c454f0(param_2,unaff_x25,unaff_x23,lVar21,lVar22,&stack0x00000230,
                               uStack0000000000000068,uStack0000000000000060);
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


