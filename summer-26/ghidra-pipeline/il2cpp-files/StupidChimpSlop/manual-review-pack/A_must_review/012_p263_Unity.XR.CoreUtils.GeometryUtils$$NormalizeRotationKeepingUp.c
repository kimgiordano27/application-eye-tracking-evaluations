/*
FUNCTION_NAME: Unity.XR.CoreUtils.GeometryUtils$$NormalizeRotationKeepingUp
ENTRY_POINT: 05c4645c
PROGRAM: StupidChimpSlop-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: permission_setup;foveated_rendering;possible_biometrics
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry;foveation_rendering;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_21;validity_or_gating_hits_21;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_1;strong_foveation_hits_1;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_permission_setup;functionality_foveated_rendering;functionality_possible_biometrics_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05c46b6c) */
/* WARNING: Removing unreachable block (ram,0x05c470f8) */

void Unity_XR_CoreUtils_GeometryUtils__NormalizeRotationKeepingUp(long param_1)

{
  undefined2 uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  undefined8 uVar32;
  long *plVar33;
  ulong uVar34;
  undefined8 *puVar35;
  long *plVar36;
  char cVar37;
  undefined1 (*pauVar38) [16];
  int *piVar39;
  long lVar40;
  long *unaff_x22;
  char cVar41;
  long unaff_x24;
  long unaff_x25;
  undefined8 in_stack_00000090;
  undefined8 in_stack_000000a0;
  undefined1 *in_stack_000000a8;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined4 in_stack_00000138;
  undefined8 in_stack_000001b0;
  undefined8 in_stack_000001b8;
  undefined8 in_stack_000001c0;
  undefined8 in_stack_000001c8;
  byte in_stack_000002a8;
  
  lVar30 = FUN_05bfdf34();
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02dabd98(*unaff_x22);
  }
  lVar31 = FUN_05b1fe8c(0);
  puVar21 = Method_System_Runtime_Serialization_OptionalFieldAttribute_set_VersionAdded__;
  puVar20 = Method_System_OperatingSystem_GetObjectData__;
  puVar19 = Method_System_OperatingSystem__ctor__;
  puVar18 = Method_UnityEngine_XR_OpenXR_OpenXRSettings_PermissionGrantedCallback__;
  puVar17 = Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeatures<OpenXRInteractionFeature>__;
  puVar16 = Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<DPadInteraction>__;
  puVar15 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_ProcessOpenXRMessageLoop__;
  puVar14 = Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_StopSubsystem<XRInputSubsystem>__;
  auVar4._8_8_ = in_stack_00000128;
  auVar4._0_8_ = in_stack_00000120;
  auVar3._8_8_ = in_stack_00000128;
  auVar3._0_8_ = in_stack_00000120;
  if ((lVar31 == 0) || (lVar31 = *(long *)(lVar31 + 0x10), auVar3 = auVar4, lVar31 == 0))
  goto LAB_05c470f0;
  uVar32 = FUN_0344f524(lVar31,*(undefined8 *)
                                Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<FoveatedRenderingFeature>__
                       );
  *(undefined8 *)(unaff_x24 + 0x1c0) = uVar32;
  thunk_FUN_02dc1ef0(unaff_x24 + 0x1c0,uVar32);
  uVar32 = FUN_0344f524(lVar31,*(undefined8 *)puVar18);
  *(undefined8 *)(unaff_x24 + 0x1c8) = uVar32;
  thunk_FUN_02dc1ef0(unaff_x24 + 0x1c8,uVar32);
                    /* try { // try from 05c46520 to 05d465eb has its CatchHandler @ 05c46520
                       catch() { ... } // from try @ 05c46520 with catch @ 05c46520
                       catch() { ... } // from try @ 05c46708 with catch @ 05c46520
                       catch() { ... } // from try @ 05c46774 with catch @ 05c46520
                       catch() { ... } // from try @ 05c467c4 with catch @ 05c46520
                       catch() { ... } // from try @ 05c467e8 with catch @ 05c46520 */
  uVar32 = FUN_0344f524(lVar31,*(undefined8 *)puVar19);
  *(undefined8 *)(unaff_x24 + 0x1d8) = uVar32;
  thunk_FUN_02dc1ef0(unaff_x24 + 0x1d8,uVar32);
  uVar32 = FUN_0344f524(lVar31,*(undefined8 *)puVar14);
  *(undefined8 *)(unaff_x24 + 0x1e0) = uVar32;
  thunk_FUN_02dc1ef0(unaff_x24 + 0x1e0,uVar32);
  uVar32 = FUN_0344f524(lVar31,*(undefined8 *)puVar20);
  *(undefined8 *)(unaff_x24 + 0x1d0) = uVar32;
  thunk_FUN_02dc1ef0(unaff_x24 + 0x1d0,uVar32);
  uVar32 = FUN_0344f524(lVar31,*(undefined8 *)puVar17);
  *(undefined8 *)(unaff_x24 + 0x1e8) = uVar32;
  thunk_FUN_02dc1ef0(unaff_x24 + 0x1e8,uVar32);
  uVar32 = FUN_0344f524(lVar31,*(undefined8 *)puVar15);
  *(undefined8 *)(unaff_x24 + 0x1f0) = uVar32;
  thunk_FUN_02dc1ef0(unaff_x24 + 0x1f0,uVar32);
  uVar32 = FUN_0344f524(lVar31,*(undefined8 *)puVar21);
  *(undefined8 *)(unaff_x24 + 0x1f8) = uVar32;
  thunk_FUN_02dc1ef0(unaff_x24 + 0x1f8,uVar32);
  uVar32 = FUN_0344f524(lVar31,*(undefined8 *)puVar16);
  *(undefined8 *)(unaff_x24 + 0x200) = uVar32;
  thunk_FUN_02dc1ef0(unaff_x24 + 0x200,uVar32);
                    /* try { // try from 05c465ec to 05d465f3 has its CatchHandler @ 05c4679c */
  uVar32 = FUN_0344f524(lVar31,*(undefined8 *)
                                Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_ReceiveNativeEvent__);
  *(undefined8 *)(unaff_x24 + 0x208) = uVar32;
  thunk_FUN_02dc1ef0(unaff_x24 + 0x208,uVar32);
  uVar32 = FUN_0344f524(lVar31,*(undefined8 *)
                                Method_System_Runtime_Serialization_Formatters_Binary_ObjectReader_Deserialize__
                       );
                    /* try { // try from 05c4661c to 05d46623 has its CatchHandler @ 05c46780 */
  *(undefined8 *)(unaff_x24 + 0x210) = uVar32;
  thunk_FUN_02dc1ef0(unaff_x24 + 0x210,uVar32);
  uVar32 = FUN_0344f524(lVar31,*(undefined8 *)
                                Method_UnityEngine_XR_OpenXR_OpenXRSettings_GetFeature<MockRuntime>__
                       );
  *(undefined8 *)(unaff_x24 + 0x218) = uVar32;
  thunk_FUN_02dc1ef0(unaff_x24 + 0x218,uVar32);
  auVar5._8_8_ = in_stack_00000128;
  auVar5._0_8_ = in_stack_00000120;
  auVar3._8_8_ = in_stack_00000128;
  auVar3._0_8_ = in_stack_00000120;
  if (lVar30 == 0) goto LAB_05c470f0;
  *(undefined1 *)(unaff_x24 + 599) = *(undefined1 *)(lVar30 + 0x1c);
                    /* try { // try from 05c46664 to 05d46697 has its CatchHandler @ 05c467a0 */
  uVar1 = *(undefined2 *)(lVar30 + 0x1d);
  *(byte *)(unaff_x24 + 0x255) = in_stack_00000090._4_1_ & 1;
  *(undefined2 *)(unaff_x24 + 600) = uVar1;
  *(byte *)(unaff_x24 + 0x256) = in_stack_000002a8 & 1;
  puVar14 = PTR_DAT_066462d0;
  auVar3 = auVar5;
  if (param_1 == 0) goto LAB_05c470f0;
  uVar22 = FUN_05c1fe68(param_1,0);
  auVar3._8_8_ = in_stack_00000128;
  auVar3._0_8_ = in_stack_00000120;
  if (*(char *)(param_1 + 0x1c8) == '\0') {
    uVar23 = 0;
  }
  else {
    if (*(long *)(unaff_x24 + 0x1b0) == 0) goto LAB_05c470f0;
    uVar32 = *(undefined8 *)(*(long *)(unaff_x24 + 0x1b0) + 0x10);
    if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar23 = FUN_05ee1474(uVar32,0,0);
    uVar23 = uVar23 & 1;
  }
  auVar6._8_8_ = in_stack_00000128;
  auVar6._0_8_ = in_stack_00000120;
  auVar3._8_8_ = in_stack_00000128;
  auVar3._0_8_ = in_stack_00000120;
  if ((*(long *)(unaff_x24 + 0x1c0) == 0) ||
     (plVar33 = *(long **)(*(long *)(unaff_x24 + 0x1c0) + 0x38), auVar3 = auVar6,
     plVar33 == (long *)0x0)) goto LAB_05c470f0;
  iVar29 = *(int *)(param_1 + 0x1cc);
  iVar24 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
  puVar15 = Method_System_Enum_ToObject__;
  auVar3._8_8_ = in_stack_00000128;
  auVar3._0_8_ = in_stack_00000120;
  auVar8._8_8_ = in_stack_00000128;
  auVar8._0_8_ = in_stack_00000120;
  auVar7._8_8_ = in_stack_00000128;
  auVar7._0_8_ = in_stack_00000120;
  lVar30 = *(long *)(unaff_x24 + 0x1b0);
  if (iVar24 == 1) {
    auVar3 = auVar7;
    if (lVar30 == 0) goto LAB_05c470f0;
    puVar35 = (undefined8 *)(lVar30 + 0x20);
  }
  else {
    if (lVar30 == 0) goto LAB_05c470f0;
    puVar35 = (undefined8 *)(lVar30 + 0x30);
  }
  auVar3 = auVar8;
  if (*(long *)(unaff_x24 + 0x1c0) == 0) goto LAB_05c470f0;
  uVar32 = *puVar35;
  uVar25 = FUN_05c28690(*(long *)(unaff_x24 + 0x1c0),0);
  if (((uVar22 | uVar25 ^ 0xffffffff) & 1) == 0) {
    if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar25 = FUN_05ee1474(uVar32,0,0);
    uVar25 = uVar25 & 1;
  }
  else {
    uVar25 = 0;
  }
  if (*(int *)(*(long *)puVar15 + 0xe4) == 0) {
    thunk_FUN_02dabd98();
  }
  lVar30 = FUN_05b363c4(0);
  auVar3._8_8_ = in_stack_00000128;
  auVar3._0_8_ = in_stack_00000120;
  if (lVar30 == 0) goto LAB_05c470f0;
  uVar34 = FUN_05b365ac(lVar30,0);
  auVar3._8_8_ = in_stack_00000128;
  auVar3._0_8_ = in_stack_00000120;
  if ((uVar34 & 1) == 0) {
    cVar41 = *(char *)(unaff_x24 + 0x259);
  }
  else {
    cVar41 = '\0';
  }
  if (*(long *)(unaff_x24 + 0x1d0) == 0) goto LAB_05c470f0;
  uVar34 = FUN_05c29860(*(long *)(unaff_x24 + 0x1d0),0);
  auVar3._8_8_ = in_stack_00000128;
  auVar3._0_8_ = in_stack_00000120;
  if ((uVar34 & 1) == 0) {
    cVar37 = '\0';
  }
  else {
    cVar37 = *(char *)(unaff_x24 + 600);
  }
  if (*(long *)(unaff_x24 + 0x1c8) == 0) goto LAB_05c470f0;
  uVar26 = FUN_05c29060(*(long *)(unaff_x24 + 0x1c8),0);
  auVar3._8_8_ = in_stack_00000128;
  auVar3._0_8_ = in_stack_00000120;
  if (*(long *)(unaff_x24 + 0x1d8) == 0) goto LAB_05c470f0;
  uVar27 = FUN_05c29290(*(long *)(unaff_x24 + 0x1d8),0);
  if (((uVar22 | uVar26 ^ 0xffffffff) & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_066462e0 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
    }
    uVar34 = FUN_05e9a9c0(0);
    auVar9._8_8_ = in_stack_00000128;
    auVar9._0_8_ = in_stack_00000120;
    auVar3._8_8_ = in_stack_00000128;
    auVar3._0_8_ = in_stack_00000120;
    if ((uVar34 & 1) == 0) goto LAB_05c468b4;
    if ((*(long *)(unaff_x24 + 0x1c8) == 0) ||
       (plVar33 = *(long **)(*(long *)(unaff_x24 + 0x1c8) + 0x38), auVar3 = auVar9,
       plVar33 == (long *)0x0)) goto LAB_05c470f0;
    iVar24 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
    auVar3._8_8_ = in_stack_00000128;
    auVar3._0_8_ = in_stack_00000120;
    if (iVar24 == 1) {
      plVar33 = *(long **)(param_1 + 0x1d8);
      if (plVar33 == (long *)0x0) goto LAB_05c470f0;
      uVar34 = (**(code **)(*plVar33 + 0x198))(plVar33,*(undefined8 *)(*plVar33 + 0x1a0));
      if ((uVar34 & 1) == 0) {
        uVar32 = *(undefined8 *)Method_PlayFab_PlayFabAddonAPI_CreateOrUpdatePSN__;
        iVar24 = FUN_05eec824(0);
        if ((iVar24 * -0x11111111 + 0x8888888U >> 2 | iVar24 * -0x40000000) < 0x4444445) {
          if (*(int *)(*(long *)PTR_DAT_06646730 + 0xe4) == 0) {
            thunk_FUN_02dabd98();
          }
          FUN_05ea2df4(uVar32,0);
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
  puVar14 = Method_System_MemoryExtensions_AsSpan<GradientAlphaKey>__;
  uVar26 = FUN_05c20504(param_1,0);
  uVar28 = FUN_05c205f4(param_1,0);
  if (((uVar26 & 1) == 0) && (uVar34 = FUN_05c204f4(param_1,0), (uVar34 & 1) != 0)) {
    if (*(int *)(*(long *)
                  Method_System_Net_Configuration_NetSectionGroup_get_AuthenticationModules__ + 0xe4
                ) == 0) {
      thunk_FUN_02dabd98();
    }
    FUN_05c6de94(param_1,uVar28 & 1,0);
  }
  uVar32 = FUN_032f60d4(0x20,*(undefined8 *)puVar14);
  auVar3._8_8_ = in_stack_00000128;
  auVar3._0_8_ = in_stack_00000120;
  if (unaff_x25 != 0) {
    plVar33 = (long *)FUN_03356fdc(unaff_x25,
                                   *(undefined8 *)
                                    Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateSteam__,
                                   &stack0x00000220,uVar32,
                                   *(undefined8 *)Method_System_ParseNumbers_LongToString__,0x805,
                                   *(undefined8 *)
                                    Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateKongregate__);
    in_stack_000000a8 = &stack0x00000228;
    in_stack_000000a0 = 0;
    if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar30 = *plVar33;
    uVar34 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar34 != 0) {
      piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == *(long *)Method_System_Linq_Enumerable_ElementAt<Column>__) {
          puVar35 = (undefined8 *)(lVar30 + (long)(*piVar39 + 0xc) * 0x10 + 0x138);
          goto LAB_05c469d4;
        }
        uVar34 = uVar34 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar34 != 0);
    }
    puVar35 = (undefined8 *)
              FUN_02d87540(plVar33,*(long *)Method_System_Linq_Enumerable_ElementAt<Column>__,0xc);
LAB_05c469d4:
    (*(code *)*puVar35)(plVar33,1,puVar35[1]);
    puVar14 = 
    Method_UnityEngine_UIElements_PanelEventHandler_UpdatePointerEventTarget<PointerMoveEvent>__;
    lVar30 = *(long *)
              Method_UnityEngine_UIElements_PanelEventHandler_UpdatePointerEventTarget<PointerMoveEvent>__
    ;
    if (*(int *)(lVar30 + 0xe4) == 0) {
      thunk_FUN_02dabd98();
      lVar30 = *(long *)puVar14;
    }
    puVar35 = *(undefined8 **)(lVar30 + 0xb8);
    lVar31 = puVar35[0x17];
    if (lVar31 == 0) {
      if (*(int *)(lVar30 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        puVar35 = *(undefined8 **)(*(long *)puVar14 + 0xb8);
      }
      uVar32 = *puVar35;
      lVar31 = thunk_FUN_02d8a638(*(undefined8 *)
                                   Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateFacebook__);
      FUN_045acfb0(lVar31,uVar32,
                   *(undefined8 *)Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateNintendo__,0);
      plVar36 = (long *)(*(long *)(*(long *)puVar14 + 0xb8) + 0xb8);
      *plVar36 = lVar31;
      thunk_FUN_02dc1ef0(plVar36,lVar31);
    }
    if (plVar33 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d4dee8();
    }
    lVar30 = *plVar33;
    lVar40 = *(long *)Method_PlayFab_PlayFabAddonAPI_CreateOrUpdateGoogle__;
    uVar34 = (ulong)*(ushort *)(lVar30 + 0x12e);
    if (uVar34 != 0) {
      piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
      do {
        if (*(long *)(piVar39 + -2) == *(long *)(lVar40 + 0x20)) {
          lVar30 = lVar30 + (long)(int)(*piVar39 + (uint)*(ushort *)(lVar40 + 0x50)) * 0x10 + 0x138;
          goto LAB_05c46ac8;
        }
        uVar34 = uVar34 - 1;
        piVar39 = piVar39 + 4;
      } while (uVar34 != 0);
    }
    lVar30 = FUN_02d87540(plVar33);
LAB_05c46ac8:
    lVar30 = thunk_FUN_02d6c7a8(*(undefined8 *)(lVar30 + 8),lVar40);
    (**(code **)(lVar30 + 8))(plVar33,lVar31,lVar30);
    if (plVar33 != (long *)0x0) {
      lVar30 = *plVar33;
      uVar34 = (ulong)*(ushort *)(lVar30 + 0x12e);
      if (uVar34 != 0) {
        piVar39 = (int *)(*(long *)(lVar30 + 0xb0) + 8);
        do {
          if (*(long *)(piVar39 + -2) == *(long *)PTR_DAT_066479a8) {
            puVar35 = (undefined8 *)(lVar30 + (long)*piVar39 * 0x10 + 0x138);
            goto LAB_05c46b50;
          }
          uVar34 = uVar34 - 1;
          piVar39 = piVar39 + 4;
        } while (uVar34 != 0);
      }
      puVar35 = (undefined8 *)FUN_02d87540(plVar33,*(long *)PTR_DAT_066479a8,0);
LAB_05c46b50:
      (*(code *)*puVar35)(plVar33,puVar35[1]);
    }
    if (uVar23 != 0) {
      FUN_05c3c454();
    }
    if (iVar29 == 2) {
      FUN_05c3c910();
    }
    if (uVar25 != 0) {
      FUN_05c3f134();
    }
    if ((uVar26 & 1) != 0) {
      if ((uVar26 & uVar28 & 1) == 0) {
        FUN_05c41548();
      }
      else {
        FUN_05c41680();
      }
    }
    if (bVar2) {
      FUN_05c41958();
    }
    if (((uVar27 ^ 1 | uVar22) & 1) == 0) {
      FUN_05c40e8c();
    }
    puVar14 = Method_UnityEngine_Component_TryGetComponent<UIRenderer>__;
    auVar10._8_8_ = in_stack_00000128;
    auVar10._0_8_ = in_stack_00000120;
    auVar3._8_8_ = in_stack_00000128;
    auVar3._0_8_ = in_stack_00000120;
    if ((*(long *)(unaff_x24 + 0x1b0) != 0) &&
       (lVar30 = *(long *)(*(long *)(unaff_x24 + 0x1b0) + 0x78), auVar3 = auVar10, lVar30 != 0)) {
      thunk_FUN_05eb63c4(lVar30,0,0);
      if (*(int *)(*(long *)puVar14 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
      }
      FUN_05b8e8e0(&stack0x000000a0,&stack0x00000230,unaff_x25,0);
      memcpy(&stack0x00000130,&stack0x000000a0,0x80);
      if (DAT_06a5718b == '\0') {
        FUN_02d4dc40(Method_UnityEngine_Component_TryGetComponent<UIRenderer>__);
        DAT_06a5718b = '\x01';
      }
      lVar30 = *(long *)puVar14;
      if (*(int *)(lVar30 + 0xe4) == 0) {
        thunk_FUN_02dabd98();
        lVar30 = *(long *)puVar14;
      }
      pauVar38 = *(undefined1 (**) [16])(lVar30 + 0xb8);
      in_stack_00000128 = *(undefined8 *)(*pauVar38 + 8);
      in_stack_00000120 = *(undefined8 *)*pauVar38;
      auVar3 = *pauVar38;
      if (*(long *)(unaff_x24 + 0x1e0) != 0) {
        uVar34 = FUN_05c1d4d8(*(long *)(unaff_x24 + 0x1e0),0);
        if ((cVar37 != '\0') || ((uVar34 & 1) != 0)) {
          FUN_05c3e3b8();
          if (cVar37 != '\0') {
            FUN_05c3e210();
            iVar29 = FUN_05c3e2b0();
            auVar11._8_8_ = in_stack_00000128;
            auVar11._0_8_ = in_stack_00000120;
            auVar3._8_8_ = in_stack_00000128;
            auVar3._0_8_ = in_stack_00000120;
            if ((*(long *)(unaff_x24 + 0x1e0) == 0) ||
               (plVar33 = *(long **)(*(long *)(unaff_x24 + 0x1e0) + 0x78), auVar3 = auVar11,
               plVar33 == (long *)0x0)) goto LAB_05c470f0;
            iVar24 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
            auVar12._8_8_ = in_stack_00000128;
            auVar12._0_8_ = in_stack_00000120;
            auVar3._8_8_ = in_stack_00000128;
            auVar3._0_8_ = in_stack_00000120;
            uVar22 = iVar29 - 1;
            if (iVar24 < 0) {
              iVar24 = iVar24 + 1;
            }
            uVar23 = uVar22;
            if (iVar24 >> 1 <= (int)uVar22) {
              uVar23 = iVar24 >> 1;
            }
            uVar25 = 0;
            if (-1 < (int)uVar22) {
              uVar25 = uVar23;
            }
            if ((*(long *)(unaff_x24 + 0x1d0) == 0) ||
               (plVar33 = *(long **)(*(long *)(unaff_x24 + 0x1d0) + 0x48), auVar3 = auVar12,
               plVar33 == (long *)0x0)) goto LAB_05c470f0;
            uVar23 = (**(code **)(*plVar33 + 0x218))(plVar33,*(undefined8 *)(*plVar33 + 0x220));
            auVar13._8_8_ = in_stack_00000128;
            auVar13._0_8_ = in_stack_00000120;
            auVar3._8_8_ = in_stack_00000128;
            auVar3._0_8_ = in_stack_00000120;
            uVar22 = uVar23;
            if ((int)uVar25 <= (int)uVar23) {
              uVar22 = uVar25;
            }
            uVar25 = 0;
            if (-1 < (int)uVar23) {
              uVar25 = uVar22;
            }
            if (*(long *)(unaff_x24 + 0x158) == 0) goto LAB_05c470f0;
            if (*(uint *)(*(long *)(unaff_x24 + 0x158) + 0x18) <= uVar25) {
LAB_05c46e30:
                    /* WARNING: Subroutine does not return */
              FUN_02d4def0();
            }
            if (iVar29 == 1) {
              auVar3 = auVar13;
              if (*(long *)(unaff_x24 + 0x160) == 0) goto LAB_05c470f0;
              if (*(int *)(*(long *)(unaff_x24 + 0x160) + 0x18) == 0) goto LAB_05c46e30;
            }
            _in_stack_00000120 = FUN_05c42d84();
          }
          auVar3 = _in_stack_00000120;
          if (*(long *)(unaff_x24 + 0x1b0) == 0) goto LAB_05c470f0;
          FUN_05c3dcc8();
        }
        if (cVar41 != '\0') {
          FUN_05c42158();
          FUN_05c42734();
        }
        auVar3 = _in_stack_00000120;
        if (*(long *)(unaff_x24 + 0x1b0) != 0) {
          FUN_05c39cb4();
          auVar3 = _in_stack_00000120;
          if (*(long *)(unaff_x24 + 0x1b0) != 0) {
            FUN_05c39fb0();
            auVar3 = _in_stack_00000120;
            if (*(long *)(unaff_x24 + 0x1b0) != 0) {
              FUN_05c3a0a4();
              auVar3 = _in_stack_00000120;
              if (*(long *)(unaff_x24 + 0x1b0) != 0) {
                FUN_05c3a650();
                auVar3 = _in_stack_00000120;
                if (*(long *)(unaff_x24 + 0x1b0) != 0) {
                  TMPro_TMP_TextUtilities__HexToInt();
                  uVar34 = FUN_05c1fcc0(param_1,0);
                  if (((uVar34 & 1) != 0) && (*(char *)(unaff_x24 + 0x256) != '\0')) {
                    auVar3 = _in_stack_00000120;
                    if ((*(long *)(unaff_x24 + 0x1b0) == 0) ||
                       (lVar30 = *(long *)(*(long *)(unaff_x24 + 0x1b0) + 0x78), lVar30 == 0))
                    goto LAB_05c470f0;
                    uVar34 = FUN_05eb5004(lVar30,*(undefined8 *)
                                                  Method_System_Collections_Specialized_OrderedDictionary_Remove__
                                          ,0);
                  }
                  if (*(char *)(unaff_x24 + 599) != '\0') {
                    auVar3 = _in_stack_00000120;
                    if ((*(long *)(unaff_x24 + 0x1b0) == 0) ||
                       (lVar30 = *(long *)(*(long *)(unaff_x24 + 0x1b0) + 0x78), lVar30 == 0))
                    goto LAB_05c470f0;
                    uVar34 = FUN_05eb5004(lVar30,*(undefined8 *)
                                                  Method_Mono_Security_Cryptography_PKCS1_HashNameFromOid__
                                          ,0);
                  }
                  uVar34 = FUN_05c36f54(uVar34,param_1);
                  if ((uVar34 & 1) != 0) {
                    FUN_05c1fff4(param_1,0);
                    FUN_05c200ec(param_1,0);
                    auVar3 = _in_stack_00000120;
                    if (*(long *)(unaff_x24 + 0x1b0) == 0) goto LAB_05c470f0;
                    FUN_05c2017c(param_1,0);
                    FUN_05c3a79c();
                  }
                  if (*(int *)(*(long *)PTR_DAT_06648568 + 0xe4) == 0) {
                    thunk_FUN_02dabd98();
                  }
                  FUN_05c0c7d8(param_1,0);
                  FUN_05c454f0();
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
  _in_stack_00000120 = auVar3;
                    /* WARNING: Subroutine does not return */
  FUN_02d4dee8();
}


