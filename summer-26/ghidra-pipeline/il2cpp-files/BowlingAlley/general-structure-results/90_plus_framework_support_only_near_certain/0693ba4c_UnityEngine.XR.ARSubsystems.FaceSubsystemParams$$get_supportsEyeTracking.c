/*
FUNCTION_NAME: UnityEngine.XR.ARSubsystems.FaceSubsystemParams$$get_supportsEyeTracking
ENTRY_POINT: 0693ba4c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 98
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;ray_interaction;telemetry
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_11;ray_or_cast_sink_hits_1;telemetry_or_network_hits_1;functionality_data_collection_or_telemetry_hits_1
*/


void UnityEngine_XR_ARSubsystems_FaceSubsystemParams__get_supportsEyeTracking(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0xb8);
  *(undefined8 *)(lVar2 + 0x110) = unaff_x20;
  thunk_FUN_0333a630(lVar2 + 0x110);
  FUN_039420ac();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x118) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputAxis>_Add__);
    FUN_055e4e60(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRFingerShapeCondition>_get_Count__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x118) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x118,uVar1);
  }
  FUN_03943114();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x120) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InstanceHandle>_Remove__);
    FUN_055e4b90(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRFingerShapeCondition>_get_Item__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x120) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x120,uVar1);
  }
  FUN_039423f4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x128) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputBinding>_ToArray__);
    FUN_055e4f14(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRHandSubsystem>__ctor__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x128) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x128,uVar1);
  }
  FUN_0394345c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x130) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputAction>_ToArray__);
    FUN_055e4c44(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRHandSubsystem>_GetEnumerator__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x130) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x130,uVar1);
  }
  FUN_0394273c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x138) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<Instruction>_get_Item__);
    FUN_055e4fc8(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRHandSubsystem>_get_Count__,
                 0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x138) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x138,uVar1);
  }
  FUN_039437a4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x140) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InspectedData>_get_Item__);
    FUN_055e4dac(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRHandSubsystem>_get_Item__,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x140) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x140,uVar1);
  }
  FUN_03942dcc();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x148) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<IXRSelectInteractor>_RemoveAt__
                              );
    FUN_055e4974(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRHandSubsystemDescriptor>_get_Count__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x148) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x148,uVar1);
  }
  FUN_03941a1c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x150) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<IXRTargetPriorityInteractor>_GetEnumerator__
                              );
    FUN_055e4a28(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRHandSubsystemDescriptor>_get_Item__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x150) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x150,uVar1);
  }
  FUN_03941d64();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x158) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InspectedData>_get_Count__);
    FUN_055dfbdc(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRImageTrackingSubsystemDescriptor>__ctor__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x158) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x158,uVar1);
  }
  FUN_0391b9a0();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x160) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    FUN_06e3cba0(*(undefined8 *)(lVar2 + 0xb8));
    return;
  }
  FUN_0391cd50();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x168) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputDevice>_Clear__);
    FUN_055dfdf8(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRInputSubsystem>_GetEnumerator__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x168) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x168,uVar1);
  }
  FUN_0391c378();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x170) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputActionMap>_get_Item__);
    FUN_055e0398(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRInputSubsystem>_get_Count__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x170) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x170,uVar1);
  }
  FUN_0391d3e0();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x178) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputEventPtr>_Add__);
    FUN_055dff60(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRInputSubsystem>_get_Item__,
                 0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x178) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x178,uVar1);
  }
  FUN_0391c6c0();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x180) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<IXmlNode>__ctor__);
    FUN_055e044c(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRInputSubsystemDescriptor>__ctor__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x180) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x180,uVar1);
  }
  FUN_0391d728();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x188) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<IXRTargetPriorityInteractor>_AddRange__
                              );
    FUN_055e0014(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRInteractionManager>__ctor__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x188) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x188,uVar1);
  }
  FUN_0391ca08();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 400) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<IXmlNode>_get_Item__);
    FUN_055e02e4(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRInteractionManager>_Add__,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 400) = uVar1;
    thunk_FUN_0333a630(lVar2 + 400,uVar1);
  }
  FUN_0391d098();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x198) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<Index>_Remove__
                              );
    FUN_055dfc90(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRInteractionManager>_get_Count__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x198) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x198,uVar1);
  }
  FUN_0391bce8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1a0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputEventPtr>_Sort__);
    FUN_055dfd44(uVar1,uVar3,*(undefined8 *)Method_System_Collections_Generic_List<XRLoader>__ctor__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1a0) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x1a0,uVar1);
  }
  FUN_0391c030();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1a8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<int>_Add__);
    FUN_055e507c(uVar1,uVar3,*(undefined8 *)Method_System_Collections_Generic_List<XRLoader>__ctor__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1a8) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x1a8,uVar1);
  }
  FUN_03943aec();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1b0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputDevice>_Add__);
    FUN_055e54b4(uVar1,uVar3,*(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_Add__,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1b0) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x1b0,uVar1);
  }
  FUN_03944e9c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1b8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<Index>__ctor__)
    ;
    FUN_055e5298(uVar1,uVar3,*(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_Clear__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1b8) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x1b8,uVar1);
  }
  FUN_039444c4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1c0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<Index>_get_Count__);
    FUN_055e561c(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_Contains__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1c0) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x1c0,uVar1);
  }
  FUN_0394552c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1c8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<IXRSelectInteractor>_get_Item__
                              );
    FUN_055e534c(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_GetEnumerator__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1c8) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x1c8,uVar1);
  }
  FUN_0394480c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1d0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputEventPtr>_get_Count__);
    FUN_055e56d0(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_Insert__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1d0) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x1d0,uVar1);
  }
  FUN_03945874();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1d8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<Image>_Remove__
                              );
    FUN_055e5400(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_Remove__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1d8) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x1d8,uVar1);
  }
  FUN_03944b54();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1e0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputActionMap>_get_Count__);
    FUN_055e5784(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRLoader>_get_Count__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1e0) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x1e0,uVar1);
  }
  FUN_03945bbc();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1e8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<IXRTargetPriorityInteractor>__ctor__
                              );
    FUN_055e5568(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRNodeState>_Clear__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1e8) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x1e8,uVar1);
  }
  FUN_039451e4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1f0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InspectedHandle>__ctor__);
    FUN_055e5130(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRNodeState>_GetEnumerator__,
                 0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1f0) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x1f0,uVar1);
  }
  FUN_03943e34();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1f8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputDevice>_GetEnumerator__)
    ;
    FUN_055e51e4(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRNodeState>_get_Count__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1f8) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x1f8,uVar1);
  }
  FUN_0394417c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x200) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<Image>_GetEnumerator__);
    FUN_055e05b4(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRNodeState>_get_Item__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x200) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x200,uVar1);
  }
  FUN_0391da70();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x208) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<Index>__ctor__)
    ;
    FUN_055e09ec(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XROcclusionSubsystemDescriptor>__ctor__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x208) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x208,uVar1);
  }
  FUN_0391ee20();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x210) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InstalledApplication>__ctor__
                              );
    FUN_055e07d0(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRPlaneSubsystemDescriptor>__ctor__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x210) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x210,uVar1);
  }
  FUN_0391e448();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x218) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputAction>_Add__);
    FUN_055e0b54(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRPointCloudSubsystemDescriptor>__ctor__,0)
    ;
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x218) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x218,uVar1);
  }
  FUN_0391f4b0();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x220) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputDevice>_Add__);
    FUN_055e0884(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRRaycastSubsystemDescriptor>__ctor__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x220) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x220,uVar1);
  }
  FUN_0391e790();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x228) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<IXmlNode>_GetEnumerator__);
    FUN_055e0c08(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceImage>__ctor__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x228) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x228,uVar1);
  }
  FUN_0391f7f8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x230) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputAxis>__ctor__);
    FUN_055e0938(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRReferenceImage>_GetEnumerator__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x230) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x230,uVar1);
  }
  FUN_0391ead8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x238) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<int>__ctor__);
    FUN_055e0aa0(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceImage>_get_Count__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x238) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x238,uVar1);
  }
  FUN_0391f168();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x240) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputAction>_AddRange__);
    FUN_055e0668(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceImage>_get_Item__,
                 0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x240) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x240,uVar1);
  }
  FUN_0391ddb8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x248) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<Image>_RemoveAt__);
    FUN_055e071c(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceObject>__ctor__,0)
    ;
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x248) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x248,uVar1);
  }
  FUN_0391e100();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x250) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InspectedMember>__ctor__);
    FUN_055e5838(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceObject>_Add__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x250) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x250,uVar1);
  }
  FUN_03945f04();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 600) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<ImageCreateContext>__ctor__);
    FUN_055e5d24(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRReferenceObject>_GetEnumerator__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 600) = uVar1;
    thunk_FUN_0333a630(lVar2 + 600,uVar1);
  }
  FUN_039475fc();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x260) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<Instruction>_RemoveAt__);
    FUN_055e5dd8(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceObject>_IndexOf__,
                 0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x260) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x260,uVar1);
  }
  FUN_03947944();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x268) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputDevice>_get_Count__);
    FUN_055e5e8c(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRReferenceObject>_get_Count__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x268) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x268,uVar1);
  }
  FUN_03947c8c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x270) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<ImageCreateContext>_get_Item__
                              );
    FUN_055e5c70(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceObject>_get_Item__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x270) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x270,uVar1);
  }
  FUN_039472b4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x278) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InspectedHandle>_Add__);
    FUN_055e58ec(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRReferenceObjectEntry>__ctor__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x278) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x278,uVar1);
  }
  FUN_0394624c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x280) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputAction>__ctor__);
    FUN_055e59a0(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRReferenceObjectEntry>_Add__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x280) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x280,uVar1);
  }
  FUN_03946594();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x288) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<ImportAddon>__ctor__);
    FUN_055e38b0(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRSessionSubsystemDescriptor>__ctor__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x288) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x288,uVar1);
  }
  FUN_03921c10();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x290) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InspectedMember>_GetEnumerator__
                              );
    FUN_055e3ce8(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRTargetEvaluator>__ctor__,0)
    ;
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x290) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x290,uVar1);
  }
  FUN_03922c78();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x298) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<Instruction>_ToArray__);
    FUN_055e3acc(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRTargetEvaluator>_Add__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x298) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x298,uVar1);
  }
  FUN_039222a0();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2a0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)Method_System_Collections_Generic_List<int>__ctor__);
    FUN_055e3fb8(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRTargetEvaluator>_AddRange__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2a0) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x2a0,uVar1);
  }
  FUN_03940cfc();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2a8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InspectedData>__ctor__);
    FUN_055e3b80(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRTargetEvaluator>_Clear__,0)
    ;
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2a8) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x2a8,uVar1);
  }
  FUN_039225e8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2b0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<Index>_GetEnumerator__);
    FUN_055e406c(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRTargetEvaluator>_GetEnumerator__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2b0) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x2b0,uVar1);
  }
  FUN_03941044();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2b8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<IXRSelectInteractor>_get_Count__
                              );
    FUN_055e3c34(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRTargetEvaluator>_IndexOf__,
                 0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2b8) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x2b8,uVar1);
  }
  FUN_03922930();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2c0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputBinding>_Add__);
    FUN_055e4120(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRTargetEvaluator>_Insert__,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2c0) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x2c0,uVar1);
  }
  FUN_0394138c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2c8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputActionMap>__ctor__);
    FUN_055e3e50(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRTargetEvaluator>_RemoveAt__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2c8) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x2c8,uVar1);
  }
  Nova_InternalNamespace_0_InternalNamespace_5_InternalNamespace_6_InternalType_208__InternalMethod_1022<InternalType_418>
            ();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2d0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<Instruction>_Add__);
    FUN_055e3a18(uVar1,uVar3,
                 *(undefined8 *)
                  Method_System_Collections_Generic_List<XRTargetEvaluator>_get_Count__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2d0) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x2d0,uVar1);
  }
  FUN_03921f58();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2d8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InstanceHandle>_get_Item__);
    FUN_055de610(uVar1,uVar3,*(undefined8 *)Method_System_Collections_Generic_List<XRView>__ctor__,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2d8) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x2d8,uVar1);
  }
  FUN_03915a78();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2e0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InstanceHandle>_RemoveAt__);
    FUN_055de994(uVar1,uVar3,*(undefined8 *)Method_System_Collections_Generic_List<XRView>_Add__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2e0) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x2e0,uVar1);
  }
  FUN_03916ae0();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2e8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputBinding>__ctor__);
    FUN_055de778(uVar1,uVar3,*(undefined8 *)Method_System_Collections_Generic_List<XRView>_Clear__,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2e8) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x2e8,uVar1);
  }
  FUN_03916108();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2f0) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<ImageCreateContext>_get_Count__
                              );
    FUN_055dea48(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRView>_get_Count__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2f0) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x2f0,uVar1);
  }
  FUN_03916e28();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2f8) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<IXmlNode>__ctor__);
    FUN_055de82c(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRView>_get_Item__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2f8) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x2f8,uVar1);
  }
  FUN_03916450();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x300) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputEventPtr>_get_Item__);
    FUN_055deafc(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XRView>_set_Item__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x300) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x300,uVar1);
  }
  FUN_03917170();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x308) == 0) {
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_032a56a0(*(undefined8 *)
                                Method_System_Collections_Generic_List<InputActionDefinition>__ctor__
                              );
    FUN_055de8e0(uVar1,uVar3,
                 *(undefined8 *)Method_System_Collections_Generic_List<XmlQualifiedName>__ctor__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x308) = uVar1;
    thunk_FUN_0333a630(lVar2 + 0x308,uVar1);
  }
  FUN_03916798();
  if (*(int *)(*unaff_x22 + 0xe0) == 0) {
    thunk_FUN_032cd7c0();
  }
  FUN_06e3d158();
  return;
}


