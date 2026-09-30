/*
FUNCTION_NAME: Unity.Services.Multiplayer.BaseSessionOptions$$set_Type
ENTRY_POINT: 05f6bb14
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


void Unity_Services_Multiplayer_BaseSessionOptions__set_Type(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  void *pvVar6;
  long unaff_x19;
  ulong unaff_x20;
  long unaff_x21;
  long *plVar7;
  undefined8 in_stack_00000000;
  undefined1 *in_stack_00000008;
  long in_stack_00000090;
  undefined8 in_stack_00000098;
  long in_stack_000000a0;
  undefined8 in_stack_000000a8;
  long in_stack_000000b0;
  undefined8 in_stack_000000b8;
  long in_stack_000000c0;
  undefined8 in_stack_000000c8;
  long in_stack_000000d0;
  undefined8 in_stack_000000d8;
  undefined8 in_stack_000000e0;
  undefined8 in_stack_000000e8;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  undefined8 in_stack_00000118;
  undefined8 in_stack_00000120;
  undefined8 in_stack_00000128;
  undefined8 in_stack_00000130;
  undefined8 in_stack_00000138;
  undefined8 in_stack_00000140;
  undefined8 in_stack_00000148;
  undefined8 in_stack_00000150;
  undefined8 in_stack_00000158;
  
  *(undefined1 *)(unaff_x21 + 0x426) = 1;
  puVar1 = PTR_DAT_06a00dd8;
  memset(&stack0x00000160,0,0x90);
  in_stack_000000d0 = 0;
  in_stack_000000d8 = 0;
  plVar7 = (long *)(unaff_x19 + 0x10);
  in_stack_000000c0 = 0;
  in_stack_000000c8 = 0;
  in_stack_000000b0 = 0;
  in_stack_000000b8 = 0;
  in_stack_000000a0 = 0;
  in_stack_000000a8 = 0;
  in_stack_000000e8 = 0;
  in_stack_000000e0 = 0;
  in_stack_000000f8 = 0;
  in_stack_000000f0 = 0;
  in_stack_00000108 = 0;
  in_stack_00000100 = 0;
  in_stack_00000118 = 0;
  in_stack_00000110 = 0;
  in_stack_00000128 = 0;
  in_stack_00000120 = 0;
  in_stack_00000138 = 0;
  in_stack_00000130 = 0;
  in_stack_00000148 = 0;
  in_stack_00000140 = 0;
  in_stack_00000158 = 0;
  in_stack_00000150 = 0;
  in_stack_00000090 = 0;
  in_stack_00000098 = 0;
  if (*plVar7 != 0) {
    FUN_0422c8ec(plVar7,*(undefined8 *)puVar1);
    *plVar7 = 0;
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
    if ((*(long *)(unaff_x19 + 0x40) == 0) ||
       (lVar4 = FUN_04f108d0(*(long *)(unaff_x19 + 0x40),
                             *(undefined8 *)
                              Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRPointCloud>__ctor__
                            ),
       puVar2 = Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRTrackedImage>__ctor__,
       puVar3 = Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XRRaycast>__ctor__, lVar4 == 0))
    goto LAB_05f6bd98;
    FUN_049d8f64(lVar4,*(undefined8 *)
                        Method_UnityEngine_XR_ARSubsystems_TrackingSubsystem<BoundedPlane,_XRPlaneSubsystem,_XRPlaneSubsystemDescriptor,_XRPlaneSubsystem_Provider>__ctor__
                );
    memcpy(&stack0x00000160,&stack0x00000000,0x90);
    in_stack_00000000 = 0;
    in_stack_00000008 = &stack0x00000160;
    while (uVar5 = FUN_0523f9c4(&stack0x00000160,*(undefined8 *)puVar2), (uVar5 & 1) != 0) {
      pvVar6 = memcpy(&stack0x000000e0,&stack0x00000170,0x80);
      FUN_05f6b8e4(pvVar6,&stack0x000000e0);
    }
    FUN_0523f9c0(&stack0x00000160,*(undefined8 *)puVar3);
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
  in_stack_000000d0 = *(long *)(unaff_x19 + 0x48);
  in_stack_000000d8 = *(undefined8 *)(unaff_x19 + 0x50);
  if (in_stack_000000d0 != 0) {
    FUN_042b1aa0(&stack0x000000d0,
                 *(undefined8 *)
                  Method_UnityEngine_XR_ARFoundation_TrackableCollection<ARPlane>_get_count__);
    in_stack_000000d0 = 0;
    in_stack_000000d8 = 0;
    *(long *)(unaff_x19 + 0x48) = 0;
    *(undefined8 *)(unaff_x19 + 0x50) = 0;
  }
  in_stack_000000c0 = *(long *)(unaff_x19 + 0x20);
  in_stack_000000c8 = *(undefined8 *)(unaff_x19 + 0x28);
  if (in_stack_000000c0 != 0) {
    FUN_0426f794(&stack0x000000c0,
                 *(undefined8 *)
                  Method_UnityEngine_XR_ARSubsystems_TrackableChanges<XREnvironmentProbe>_get_removed__
                );
    in_stack_000000c0 = 0;
    in_stack_000000c8 = 0;
    *(long *)(unaff_x19 + 0x20) = 0;
    *(undefined8 *)(unaff_x19 + 0x28) = 0;
  }
  in_stack_000000b0 = *(long *)(unaff_x19 + 0x30);
  in_stack_000000b8 = *(undefined8 *)(unaff_x19 + 0x38);
  if (in_stack_000000b0 != 0) {
    FUN_0422c8ec(&stack0x000000b0,*(undefined8 *)puVar1);
    in_stack_000000b0 = 0;
    in_stack_000000b8 = 0;
    *(long *)(unaff_x19 + 0x30) = 0;
    *(undefined8 *)(unaff_x19 + 0x38) = 0;
  }
  puVar3 = UnityEngine_InputSystem_LowLevel_IInputUpdateCallbackReceiver_TypeInfo;
  in_stack_000000a0 = *(long *)(unaff_x19 + 0x58);
  in_stack_000000a8 = *(undefined8 *)(unaff_x19 + 0x60);
  if (in_stack_000000a0 != 0) {
    FUN_0427396c(&stack0x000000a0,
                 *(undefined8 *)
                  UnityEngine_InputSystem_LowLevel_IInputUpdateCallbackReceiver_TypeInfo);
    in_stack_000000a0 = 0;
    in_stack_000000a8 = 0;
    *(long *)(unaff_x19 + 0x58) = 0;
    *(undefined8 *)(unaff_x19 + 0x60) = 0;
  }
  puVar2 = UnityEngine_UIElements_StyleValuePropertyBag<StyleTranslate,_Translate>_TypeInfo;
  in_stack_00000090 = *(long *)(unaff_x19 + 0x68);
  in_stack_00000098 = *(undefined8 *)(unaff_x19 + 0x70);
  if (in_stack_00000090 != 0) {
    FUN_0426a408(&stack0x00000090,
                 *(undefined8 *)
                  UnityEngine_UIElements_StyleValuePropertyBag<StyleTranslate,_Translate>_TypeInfo);
    *(long *)(unaff_x19 + 0x68) = 0;
    *(undefined8 *)(unaff_x19 + 0x70) = 0;
  }
  in_stack_00000090 = *(long *)(unaff_x19 + 0x88);
  in_stack_00000098 = *(undefined8 *)(unaff_x19 + 0x90);
  if (in_stack_00000090 != 0) {
    FUN_0426a408(&stack0x00000090,*(undefined8 *)puVar2);
    in_stack_00000090 = 0;
    in_stack_00000098 = 0;
    *(long *)(unaff_x19 + 0x88) = 0;
    *(undefined8 *)(unaff_x19 + 0x90) = 0;
  }
  in_stack_000000b0 = *(long *)(unaff_x19 + 0x98);
  in_stack_000000b8 = *(undefined8 *)(unaff_x19 + 0xa0);
  if (in_stack_000000b0 != 0) {
    FUN_0422c8ec(&stack0x000000b0,*(undefined8 *)puVar1);
    in_stack_000000b0 = 0;
    in_stack_000000b8 = 0;
    *(long *)(unaff_x19 + 0x98) = 0;
    *(undefined8 *)(unaff_x19 + 0xa0) = 0;
  }
  in_stack_000000a0 = *(long *)(unaff_x19 + 0x78);
  in_stack_000000a8 = *(undefined8 *)(unaff_x19 + 0x80);
  if (in_stack_000000a0 != 0) {
    FUN_0427396c(&stack0x000000a0,*(undefined8 *)puVar3);
    *(long *)(unaff_x19 + 0x78) = 0;
    *(undefined8 *)(unaff_x19 + 0x80) = 0;
  }
  return;
}


