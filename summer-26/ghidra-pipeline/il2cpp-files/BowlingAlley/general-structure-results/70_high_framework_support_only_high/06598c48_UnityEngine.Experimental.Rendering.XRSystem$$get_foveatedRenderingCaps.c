/*
FUNCTION_NAME: UnityEngine.Experimental.Rendering.XRSystem$$get_foveatedRenderingCaps
ENTRY_POINT: 06598c48
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: foveated_rendering
MODULES: weak_source_state;validity_gate;ray_interaction;foveation_rendering;frame_behavior;keyword_support
EVIDENCE: weak_xr_or_state_hits_1;validity_or_gating_hits_5;ray_or_cast_sink_hits_5;strong_foveation_hits_2;frame_or_lifecycle_behavior;eye_or_gaze_keyword_boost_only;negative_framework_support_context_without_confirmed_app_level_gaze_flow;framework_foveation_support_not_confirmed_dynamic_eye_tracking;functionality_foveated_rendering
*/


void UnityEngine_Experimental_Rendering_XRSystem__get_foveatedRenderingCaps(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long *plVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long *unaff_x21;
  long unaff_x22;
  ulong unaff_x23;
  long lVar31;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 uVar32;
  long in_stack_00000010;
  long in_stack_00000018;
  long in_stack_00000020;
  long *in_stack_00000028;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined4 uStack00000000000000e8;
  undefined4 uStack00000000000000ec;
  
  while (unaff_x23 < param_1) {
    *in_stack_00000028 = unaff_x22;
    thunk_FUN_0333a630(in_stack_00000028,unaff_x22);
    unaff_x23 = unaff_x23 + 1;
    in_stack_00000020 = in_stack_00000020 + 0xd0;
    if (in_stack_00000010 == in_stack_00000020) {
      return;
    }
    if (*(uint *)(in_stack_00000018 + 0x18) <= unaff_x23) break;
    lVar17 = in_stack_00000018 + in_stack_00000020;
    uVar15 = *(undefined8 *)(lVar17 + 0x40);
    uVar3 = *(undefined8 *)(lVar17 + 0x48);
    uVar24 = *(undefined8 *)(lVar17 + 0x68);
    uVar18 = *(undefined8 *)(lVar17 + 0x70);
    uVar14 = *(undefined8 *)(lVar17 + 0x20);
    uVar4 = *(undefined8 *)(lVar17 + 0x28);
    uVar30 = *(undefined8 *)(lVar17 + 0x30);
    uVar5 = *(undefined8 *)(lVar17 + 0x38);
    uVar1 = *(undefined8 *)(lVar17 + 0x58);
    uVar6 = *(undefined8 *)(lVar17 + 0x60);
    uVar25 = *(undefined8 *)(lVar17 + 0x78);
    uVar19 = *(undefined8 *)(lVar17 + 0x80);
    uVar32 = *(undefined8 *)(lVar17 + 0xa8);
    uVar26 = *(undefined8 *)(lVar17 + 0x88);
    uVar20 = *(undefined8 *)(lVar17 + 0x90);
    uVar27 = *(undefined8 *)(lVar17 + 0x98);
    uVar21 = *(undefined8 *)(lVar17 + 0xa0);
    uVar8 = *(undefined4 *)(lVar17 + 0xb0);
    uVar9 = *(undefined4 *)(lVar17 + 0xb4);
    uVar10 = *(uint *)(lVar17 + 0xb8);
    uVar28 = *(undefined8 *)(lVar17 + 0xc0);
    uStack00000000000000ec = *(undefined4 *)(lVar17 + 0xbc);
    uVar22 = *(undefined8 *)(lVar17 + 200);
    uVar29 = *(undefined8 *)(lVar17 + 0xd0);
    uVar23 = *(undefined8 *)(lVar17 + 0xd8);
    uVar2 = *(undefined8 *)(lVar17 + 0xe0);
    uVar7 = *(undefined8 *)(lVar17 + 0xe8);
    unaff_x22 = thunk_FUN_032a56a0(*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>__ctor__
                                  );
    FUN_059660a0(unaff_x22,0);
    *(undefined8 *)(unaff_x22 + 0x40) = 0xffffffffffffffff;
    uVar14 = FUN_064d02f4(uVar14,uVar4,0);
    *(undefined8 *)(unaff_x22 + 0x10) = uVar14;
    thunk_FUN_0333a630();
    uVar14 = FUN_064d02f4(uVar30,uVar5,0);
    *(undefined8 *)(unaff_x22 + 0x18) = uVar14;
    thunk_FUN_0333a630();
    uVar15 = FUN_064d02f4(uVar15,uVar3,0);
    *(undefined8 *)(unaff_x22 + 0x20) = uVar15;
    thunk_FUN_0333a630();
    *(undefined8 *)(unaff_x22 + 0x80) = uVar1;
    thunk_FUN_0333a630((undefined8 *)(unaff_x22 + 0x80),uVar1);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar6;
    thunk_FUN_0333a630((undefined8 *)(unaff_x22 + 0x88),uVar6);
    *(undefined8 *)(unaff_x22 + 0x40) = uVar32;
    *(undefined4 *)(unaff_x22 + 0x48) = uVar8;
    uStack00000000000000e8 = uVar9;
    uVar15 = FUN_064d83fc(&stack0x000000e8,0);
    *(undefined8 *)(unaff_x22 + 0x50) = uVar15;
    thunk_FUN_0333a630();
    in_stack_000000c0 = uVar26;
    in_stack_000000c8 = uVar20;
    uVar15 = thunk_FUN_032a52d0(*(undefined8 *)
                                 Oculus_Avatar2_OvrAvatarManager_PuppeteerInfo_CheckAnimationDelegate_TypeInfo
                                ,&stack0x000000c0);
    lVar17 = *unaff_x26;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar17);
      lVar17 = *unaff_x26;
    }
    puVar12 = 
    UnityEngine_XR_OpenXR_Features_Extensions_PerformanceSettings_XrPerformanceSettingsFeature_NativeApi_XrPerformanceNotificationDelegate_TypeInfo
    ;
    puVar11 = PTR_DAT_07289040;
    lVar31 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x18);
    uVar14 = *unaff_x27;
    if (lVar31 == 0) {
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar17);
        lVar17 = *unaff_x26;
      }
      uVar30 = **(undefined8 **)(lVar17 + 0xb8);
      lVar31 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Oculus_Avatar2_OvrAvatarComputeSkinnedPrimitive_VertexBufferInfo_<OnVertexBufferCreation>d__15_TypeInfo
                                 );
      FUN_055d0ee4(lVar31,uVar30,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>_set_Item__
                   ,0);
      plVar16 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 0x18);
      *plVar16 = lVar31;
      thunk_FUN_0333a630(plVar16,lVar31);
    }
    uVar15 = FUN_03998fac(uVar15,lVar31,
                          *(undefined8 *)
                           OVRVirtualKeyboard_InteractorRootTransformOverride_<RevertInteractorOverrides>d__6_TypeInfo
                         );
    uVar15 = FUN_039a43e4(uVar15,*(undefined8 *)puVar11);
    uVar15 = FUN_057aba40(uVar14,uVar15,0);
    *(undefined8 *)(unaff_x22 + 0x70) = uVar15;
    thunk_FUN_0333a630();
    in_stack_000000c0 = uVar27;
    in_stack_000000c8 = uVar21;
    uVar15 = thunk_FUN_032a52d0(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>_TryGetValue__
                                ,&stack0x000000c0);
    lVar17 = *unaff_x26;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar17);
      lVar17 = *unaff_x26;
    }
    uVar14 = *unaff_x27;
    lVar31 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x20);
    if (lVar31 == 0) {
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar17);
        lVar17 = *unaff_x26;
      }
      uVar30 = **(undefined8 **)(lVar17 + 0xb8);
      lVar31 = thunk_FUN_032a56a0(*(undefined8 *)
                                   Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>_Remove__
                                 );
      FUN_055d01fc(lVar31,uVar30,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<IUnitValuePort,_object>__ctor__,0);
      plVar16 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 0x20);
      *plVar16 = lVar31;
      thunk_FUN_0333a630(plVar16,lVar31);
    }
    uVar15 = FUN_03998cb8(uVar15,lVar31,
                          *(undefined8 *)
                           Method_System_Collections_Generic_Dictionary<IUIInteractor,_TrackedDeviceGraphicRaycaster>_GetEnumerator__
                         );
    uVar15 = FUN_039a43e4(uVar15,*(undefined8 *)puVar11);
    uVar15 = FUN_057aba40(uVar14,uVar15,0);
    *(undefined8 *)(unaff_x22 + 0x78) = uVar15;
    thunk_FUN_0333a630();
    puVar13 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_Start<JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
    ;
    in_stack_000000c0 = uVar24;
    in_stack_000000c8 = uVar18;
    uVar15 = thunk_FUN_032a52d0(*(undefined8 *)
                                 Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<object>_Start<JsonTextReader_<ParseNumberNegativeInfinityAsync>d__28>__
                                ,&stack0x000000c0);
    lVar17 = *unaff_x26;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar17);
      lVar17 = *unaff_x26;
    }
    lVar31 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x28);
    if (lVar31 == 0) {
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar17);
        lVar17 = *unaff_x26;
      }
      uVar14 = **(undefined8 **)(lVar17 + 0xb8);
      lVar31 = thunk_FUN_032a56a0(*(undefined8 *)
                                   UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo
                                 );
      FUN_055cf308(lVar31,uVar14,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<IUnitValuePort,_object>_Add__,0);
      plVar16 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 0x28);
      *plVar16 = lVar31;
      thunk_FUN_0333a630(plVar16,lVar31);
    }
    uVar15 = FUN_039989c4(uVar15,lVar31,*(undefined8 *)puVar12);
    uVar15 = FUN_039a43e4(uVar15,*(undefined8 *)puVar11);
    *(undefined8 *)(unaff_x22 + 0x60) = uVar15;
    thunk_FUN_0333a630();
    in_stack_000000c0 = uVar25;
    in_stack_000000c8 = uVar19;
    uVar15 = thunk_FUN_032a52d0(*(undefined8 *)puVar13,&stack0x000000c0);
    lVar17 = *unaff_x26;
    if (*(int *)(lVar17 + 0xe0) == 0) {
      thunk_FUN_032cd7c0(lVar17);
      lVar17 = *unaff_x26;
    }
    lVar31 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x30);
    if (lVar31 == 0) {
      if (*(int *)(lVar17 + 0xe0) == 0) {
        thunk_FUN_032cd7c0(lVar17);
        lVar17 = *unaff_x26;
      }
      uVar14 = **(undefined8 **)(lVar17 + 0xb8);
      lVar31 = thunk_FUN_032a56a0(*(undefined8 *)
                                   UnityEngine_InputSystem_Layouts_InputControlLayout_Builder_ControlBuilder_<>c_TypeInfo
                                 );
      FUN_055cf308(lVar31,uVar14,
                   *(undefined8 *)
                    Method_System_Collections_Generic_Dictionary<IUnitValuePort,_object>_Clear__,0);
      plVar16 = (long *)(*(long *)(*unaff_x26 + 0xb8) + 0x30);
      *plVar16 = lVar31;
      thunk_FUN_0333a630(plVar16,lVar31);
    }
    uVar15 = FUN_039989c4(uVar15,lVar31,*(undefined8 *)puVar12);
    uVar15 = FUN_039a43e4(uVar15,*(undefined8 *)puVar11);
    *(undefined8 *)(unaff_x22 + 0x68) = uVar15;
    thunk_FUN_0333a630();
    uVar10 = uVar10 & 0xff;
    *(undefined4 *)(unaff_x22 + 0x58) = uStack00000000000000ec;
    *(byte *)(unaff_x22 + 0x90) = (byte)(uVar10 >> 1) & 1;
    *(byte *)(unaff_x22 + 0x92) = (byte)(uVar10 >> 2) & 1;
    *(byte *)(unaff_x22 + 0x91) = (byte)(uVar10 >> 4) & 1;
    in_stack_000000d0 = uVar28;
    in_stack_000000d8 = uVar22;
    uVar15 = FUN_064df8f8(&stack0x000000d0,0);
    *(undefined8 *)(unaff_x22 + 0x98) = uVar15;
    thunk_FUN_0333a630();
    in_stack_000000d0 = uVar29;
    in_stack_000000d8 = uVar23;
    uVar15 = FUN_064df8f8(&stack0x000000d0,0);
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar15;
    thunk_FUN_0333a630();
    in_stack_000000d0 = uVar2;
    in_stack_000000d8 = uVar7;
    uVar15 = FUN_064df8f8(&stack0x000000d0,0);
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar15;
    thunk_FUN_0333a630();
    if (unaff_x21 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    lVar17 = thunk_FUN_032a55a4(unaff_x22,*(undefined8 *)(*unaff_x21 + 0x40));
    if (lVar17 == 0) {
      uVar15 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar15,0);
    }
    in_stack_00000028 = in_stack_00000028 + 1;
    param_1 = (ulong)*(uint *)(unaff_x21 + 3);
  }
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


