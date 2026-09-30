/*
FUNCTION_NAME: Unity.Services.Multiplayer.BaseSessionOptions$$.ctor
ENTRY_POINT: 05f6bb34
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_11;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Unity_Services_Multiplayer_BaseSessionOptions___ctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  void *pvVar5;
  long unaff_x19;
  ulong unaff_x20;
  long *plVar6;
  undefined8 *unaff_x22;
  undefined8 in_stack_00000000;
  undefined1 *in_stack_00000008;
  long lStack0000000000000090;
  undefined8 uStack0000000000000098;
  long lStack00000000000000a0;
  undefined8 uStack00000000000000a8;
  long lStack00000000000000b0;
  undefined8 uStack00000000000000b8;
  long lStack00000000000000c0;
  undefined8 uStack00000000000000c8;
  long lStack00000000000000d0;
  undefined8 uStack00000000000000d8;
  undefined8 uStack00000000000000e0;
  undefined8 uStack00000000000000e8;
  undefined8 uStack00000000000000f0;
  undefined8 uStack00000000000000f8;
  undefined8 uStack0000000000000100;
  undefined8 uStack0000000000000108;
  undefined8 uStack0000000000000110;
  undefined8 uStack0000000000000118;
  undefined8 uStack0000000000000120;
  undefined8 uStack0000000000000128;
  undefined8 uStack0000000000000130;
  undefined8 uStack0000000000000138;
  undefined8 uStack0000000000000140;
  undefined8 uStack0000000000000148;
  undefined8 uStack0000000000000150;
  undefined8 uStack0000000000000158;
  
  lStack00000000000000d0 = 0;
  uStack00000000000000d8 = 0;
  plVar6 = (long *)(unaff_x19 + 0x10);
  lStack00000000000000c0 = 0;
  uStack00000000000000c8 = 0;
  lStack00000000000000b0 = 0;
  uStack00000000000000b8 = 0;
  lStack00000000000000a0 = 0;
  uStack00000000000000a8 = 0;
  uStack00000000000000e8 = 0;
  uStack00000000000000e0 = 0;
  uStack00000000000000f8 = 0;
  uStack00000000000000f0 = 0;
  uStack0000000000000108 = 0;
  uStack0000000000000100 = 0;
  uStack0000000000000118 = 0;
  uStack0000000000000110 = 0;
  uStack0000000000000128 = 0;
  uStack0000000000000120 = 0;
  uStack0000000000000138 = 0;
  uStack0000000000000130 = 0;
  uStack0000000000000148 = 0;
  uStack0000000000000140 = 0;
  uStack0000000000000158 = 0;
  uStack0000000000000150 = 0;
  lStack0000000000000090 = 0;
  uStack0000000000000098 = 0;
  if (*plVar6 != 0) {
    FUN_0422c8ec(plVar6,*unaff_x22);
    *plVar6 = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar3 = FUN_04f108d0(*(long *)(unaff_x19 + 0x40),
                             *(undefined8 *)
                              Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRPointCloud>__ctor__
                            ),
       puVar1 = Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRTrackedImage>__ctor__,
       puVar2 = Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRRaycast>__ctor__, lVar3 == 0))
    goto LAB_05f6bd98;
    FUN_049d8f64(lVar3,*(undefined8 *)
                        Method_UnityEngine_XR_ARSubsystems_TrackingSubsystem<BoundedPlane,_XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider>__ctor__
                );
    memcpy(&stack0x00000160,&stack0x00000000,0x90);
    in_stack_00000000 = 0;
    in_stack_00000008 = &stack0x00000160;
    while (uVar4 = FUN_0523f9c4(&stack0x00000160,*(undefined8 *)puVar1), (uVar4 & 1) != 0) {
      pvVar5 = memcpy(&stack0x000000e0,&stack0x00000170,0x80);
      FUN_05f6b8e4(pvVar5,&stack0x000000e0);
    }
    FUN_0523f9c0(&stack0x00000160,*(undefined8 *)puVar2);
  }
  if ((unaff_x20 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x40) == 0) {
LAB_05f6bd98:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_04f10db0(*(long *)(unaff_x19 + 0x40),
                 *(undefined8 *)Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRFace>__ctor__)
    ;
  }
  lStack00000000000000d0 = *(long *)(unaff_x19 + 0x48);
  uStack00000000000000d8 = *(undefined8 *)(unaff_x19 + 0x50);
  if (lStack00000000000000d0 != 0) {
    FUN_042b1aa0(&stack0x000000d0,
                 *(undefined8 *)
                  Method_UnityEngine_XR_ARFoundation_TrackableCollection<ARPlane>_get_count__);
    lStack00000000000000d0 = 0;
    uStack00000000000000d8 = 0;
    *(long *)(unaff_x19 + 0x48) = 0;
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
  }
  lStack00000000000000c0 = *(long *)(unaff_x19 + 0x20);
  uStack00000000000000c8 = *(undefined8 *)(unaff_x19 + 0x28);
  if (lStack00000000000000c0 != 0) {
    FUN_0426f794(&stack0x000000c0,
                 *(undefined8 *)
                  Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XREnvironmentProbe>_get_removed__
                );
    lStack00000000000000c0 = 0;
    uStack00000000000000c8 = 0;
    *(long *)(unaff_x19 + 0x20) = 0;
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
  }
  lStack00000000000000b0 = *(long *)(unaff_x19 + 0x30);
  uStack00000000000000b8 = *(undefined8 *)(unaff_x19 + 0x38);
  if (lStack00000000000000b0 != 0) {
    FUN_0422c8ec(&stack0x000000b0,*unaff_x22);
    lStack00000000000000b0 = 0;
    uStack00000000000000b8 = 0;
    *(long *)(unaff_x19 + 0x30) = 0;
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
  }
  puVar2 = UnityEngine_InputSystem_LowLevel_IInputUpdateCallbackReceiver_TypeInfo;
  lStack00000000000000a0 = *(long *)(unaff_x19 + 0x58);
  uStack00000000000000a8 = *(undefined8 *)(unaff_x19 + 0x60);
  if (lStack00000000000000a0 != 0) {
    FUN_0427396c(&stack0x000000a0,
                 *(undefined8 *)
                  UnityEngine_InputSystem_LowLevel_IInputUpdateCallbackReceiver_TypeInfo);
    lStack00000000000000a0 = 0;
    uStack00000000000000a8 = 0;
    *(long *)(unaff_x19 + 0x58) = 0;
    *(undefined8 *)(unaff_x19 + 0x60) = 0;
  }
  puVar1 = UnityEngine_UIElements_StyleValuePropertyBag<StyleTranslate,_Translate>_TypeInfo;
  lStack0000000000000090 = *(long *)(unaff_x19 + 0x68);
  uStack0000000000000098 = *(undefined8 *)(unaff_x19 + 0x70);
  if (lStack0000000000000090 != 0) {
    FUN_0426a408(&stack0x00000090,
                 *(undefined8 *)
                  UnityEngine_UIElements_StyleValuePropertyBag<StyleTranslate,_Translate>_TypeInfo);
    *(long *)(unaff_x19 + 0x68) = 0;
    *(undefined8 *)(unaff_x19 + 0x70) = 0;
  }
  lStack0000000000000090 = *(long *)(unaff_x19 + 0x88);
  uStack0000000000000098 = *(undefined8 *)(unaff_x19 + 0x90);
  if (lStack0000000000000090 != 0) {
    FUN_0426a408(&stack0x00000090,*(undefined8 *)puVar1);
    lStack0000000000000090 = 0;
    uStack0000000000000098 = 0;
    *(long *)(unaff_x19 + 0x88) = 0;
    *(undefined8 *)(unaff_x19 + 0x90) = 0;
  }
  lStack00000000000000b0 = *(long *)(unaff_x19 + 0x98);
  uStack00000000000000b8 = *(undefined8 *)(unaff_x19 + 0xa0);
  if (lStack00000000000000b0 != 0) {
    FUN_0422c8ec(&stack0x000000b0,*unaff_x22);
    lStack00000000000000b0 = 0;
    uStack00000000000000b8 = 0;
    *(long *)(unaff_x19 + 0x98) = 0;
    *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  }
  lStack00000000000000a0 = *(long *)(unaff_x19 + 0x78);
  uStack00000000000000a8 = *(undefined8 *)(unaff_x19 + 0x80);
  if (lStack00000000000000a0 != 0) {
    FUN_0427396c(&stack0x000000a0,*(undefined8 *)puVar2);
    *(long *)(unaff_x19 + 0x78) = 0;
    *(undefined8 *)(unaff_x19 + 0x80) = 0;
  }
  return;
}


