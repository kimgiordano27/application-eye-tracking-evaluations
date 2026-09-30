/*
FUNCTION_NAME: FUN_05d3f008
ENTRY_POINT: 05d3f008
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 78
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_21;telemetry_or_network_hits_3
*/


void FUN_05d3f008(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  if (unaff_x20 == 0) {
    if (*(int *)(param_1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      param_1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(param_1 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VectorImageManager>_Add__);
    FUN_04d6eaa0(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DebugOccluderStats>_Dispose__,0)
    ;
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1f0) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x1f0,uVar1);
  }
  FUN_03343bc8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x1f8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_GetEnumerator__);
    FUN_04d6eb54(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeList<DebugOccluderStats>_get_IsCreated__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x1f8) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x1f8,uVar1);
  }
  FUN_03343efc();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x200) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UnityEvent>_set_Item__);
    FUN_04d6ad58(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DebugOccluderStats>_get_Item__,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x200) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x200,uVar1);
  }
  FUN_0333b540();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x208) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_get_Count__)
    ;
    FUN_04d6b190(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DebugOccluderStats>_get_Length__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x208) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x208,uVar1);
  }
  FUN_0333c878();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x210) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_Sort__
                              );
    FUN_04d6af74(uVar1,uVar3,*(undefined8 *)Method_Unity_Collections_NativeList<DrawBatch>__ctor__,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x210) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x210,uVar1);
  }
  FUN_0333bedc();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x218) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_get_Item__);
    FUN_04d6b2f8(uVar1,uVar3,*(undefined8 *)Method_Unity_Collections_NativeList<DrawBatch>_Add__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x218) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x218,uVar1);
  }
  FUN_0333cee0();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x220) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector2>_ToArray__);
    FUN_04d6b028(uVar1,uVar3,*(undefined8 *)Method_Unity_Collections_NativeList<DrawBatch>_Dispose__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x220) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x220,uVar1);
  }
  FUN_0333c210();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x228) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<URPProfileId>_Clear__);
    FUN_04d6b3ac(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DrawBatch>_ElementAt__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x228) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x228,uVar1);
  }
  FUN_0333d214();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x230) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueOutput>_get_Item__);
    FUN_04d6b0dc(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DrawBatch>_RemoveAtSwapBack__,0)
    ;
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x230) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x230,uVar1);
  }
  FUN_0333c544();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x238) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_set_Capacity__
                              );
    FUN_04d6b244(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DrawBatch>_get_Item__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x238) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x238,uVar1);
  }
  FUN_0333cbac();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x240) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Value>__ctor__)
    ;
    FUN_04d6ae0c(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DrawBatch>_get_Length__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x240) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x240,uVar1);
  }
  FUN_0333b874();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x248) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<User>__ctor__);
    FUN_04d6aec0(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DrawInstance>__ctor__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x248) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x248,uVar1);
  }
  FUN_0333bba8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x250) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>__ctor__
                              );
    FUN_04d6f1a8(uVar1,uVar3,*(undefined8 *)Method_Unity_Collections_NativeList<DrawInstance>_Add__,
                 0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x250) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x250,uVar1);
  }
  FUN_03345bd0();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 600) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UserCapability>_Add__);
    FUN_04d6f694(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DrawInstance>_Dispose__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 600) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 600,uVar1);
  }
  FUN_0334723c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x260) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_IndexOf__);
    FUN_04d6f748(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DrawInstance>_ElementAt__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x260) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x260,uVar1);
  }
  FUN_03347570();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x268) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>__ctor__);
    FUN_04d6f7fc(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeList<DrawInstance>_ResizeUninitialized__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x268) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x268,uVar1);
  }
  FUN_033478a4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x270) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_Add__);
    FUN_04d6f5e0(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DrawInstance>_get_IsCreated__,0)
    ;
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x270) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x270,uVar1);
  }
  FUN_03346f08();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x278) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VectorImageManager>_Remove__)
    ;
    FUN_04d6f25c(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DrawInstance>_get_IsEmpty__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x278) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x278,uVar1);
  }
  FUN_03345f04();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x280) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_get_Count__);
    FUN_04d6f310(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DrawInstance>_get_Length__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x280) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x280,uVar1);
  }
  FUN_03346238();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x288) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_AddRange__);
    FUN_04d6d4f0(uVar1,uVar3,*(undefined8 *)Method_Unity_Collections_NativeList<DrawRange>_Add__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x288) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x288,uVar1);
  }
  FUN_0333f550();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x290) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_GetEnumerator__
                              );
    FUN_04d6d874(uVar1,uVar3,*(undefined8 *)Method_Unity_Collections_NativeList<DrawRange>_Dispose__
                 ,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x290) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x290,uVar1);
  }
  FUN_03340554();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x298) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Insert__);
    FUN_04d6d658(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DrawRange>_ElementAt__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x298) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x298,uVar1);
  }
  FUN_0333fbb8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2a0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_get_Count__);
    FUN_04d6db44(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DrawRange>_RemoveAtSwapBack__,0)
    ;
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2a0) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x2a0,uVar1);
  }
  FUN_03340bbc();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2a8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_get_Item__);
    FUN_04d6d70c(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DrawRange>_get_IsCreated__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2a8) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x2a8,uVar1);
  }
  FUN_0333feec();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2b0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>_AddRange__);
    FUN_04d6dbf8(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DrawRange>_get_Item__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2b0) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x2b0,uVar1);
  }
  FUN_03340ef0();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2b8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<uint>_Add__);
    FUN_04d6d7c0(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<DrawRange>_get_Length__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2b8) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x2b8,uVar1);
  }
  Unity_Jobs_IJobExtensions__Schedule<NativeStreamDisposeJob>();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2c0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_04d6dcac(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeList<GPUInstanceComponentDesc>__ctor__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2c0) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x2c0,uVar1);
  }
  FUN_03341224();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2c8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<ValueInput>__ctor__);
    FUN_04d6d9dc(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<GPUInstanceComponentDesc>_Add__,
                 0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2c8) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x2c8,uVar1);
  }
  FUN_03340888();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2d0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_GetEnumerator__
                              );
    FUN_04d6d5a4(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeList<GPUInstanceComponentDesc>_Dispose__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2d0) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x2d0,uVar1);
  }
  FUN_0333f884();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2d8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Clear__);
    FUN_04d68d00(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeList<GPUInstanceComponentDesc>_get_Item__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2d8) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x2d8,uVar1);
  }
  FUN_033328e4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2e0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Add__);
    FUN_04d69084(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeList<GPUInstanceComponentDesc>_get_Length__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2e0) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x2e0,uVar1);
  }
  FUN_033338e8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2e8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector2>__ctor__);
    FUN_04d68e68(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<GPUInstanceIndex>__ctor__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2e8) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x2e8,uVar1);
  }
  FUN_03332f4c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2f0) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>__ctor__);
    FUN_04d69138(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<GPUInstanceIndex>_Add__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2f0) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x2f0,uVar1);
  }
  FUN_03333c1c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x2f8) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_set_Capacity__);
    FUN_04d68f1c(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<GPUInstanceIndex>_Dispose__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x2f8) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x2f8,uVar1);
  }
  FUN_03333280();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x300) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_get_Count__);
    FUN_04d691ec(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeList<GPUInstanceIndex>_ResizeUninitialized__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x300) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x300,uVar1);
  }
  FUN_03333f50();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x308) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Value>_GetEnumerator__);
    FUN_04d68fd0(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<GPUInstanceIndex>_get_Item__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x308) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x308,uVar1);
  }
  FUN_033335b4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x310) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>__ctor__);
    FUN_04d692a0(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<GPUInstanceIndex>_get_Length__,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x310) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x310,uVar1);
  }
  FUN_03334284();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x318) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_GetEnumerator__
                              );
    FUN_04d68db4(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<IndirectBufferContext>__ctor__,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x318) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x318,uVar1);
  }
  FUN_03332c18();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 800) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_Add__
                              );
    FUN_04d69354(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeList<IndirectBufferContext>_Add__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 800) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 800,uVar1);
  }
  FUN_033345b8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x328) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Value>_Clear__)
    ;
    FUN_04d696d8(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<XRSaveAnchorResult>_Dispose__,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x328) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x328,uVar1);
  }
  FUN_0333652c();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x330) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_GetEnumerator__);
    FUN_04d694bc(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<XRShareAnchorResult>__ctor__,0)
    ;
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x330) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x330,uVar1);
  }
  FUN_03335b90();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x338) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_ToArray__);
    FUN_04d69840(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<XRShareAnchorResult>_GetEnumerator__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x338) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x338,uVar1);
  }
  FUN_03336b94();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x340) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_GetEnumerator__
                              );
    FUN_04d69570(uVar1,uVar3,
                 *(undefined8 *)Method_Unity_Collections_NativeArray<XRTextureDescriptor>__ctor__,0)
    ;
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x340) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x340,uVar1);
  }
  FUN_03335ec4();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x348) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Contains__);
    FUN_04d698f4(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<XrCompositionLayerProjectionView>__ctor__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x348) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x348,uVar1);
  }
  FUN_03336ec8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x350) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>__ctor__);
    FUN_04d69624(uVar1,uVar3,
                 *(undefined8 *)
                  Method_Unity_Collections_NativeArray<XrCompositionLayerProjectionView>_Dispose__,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x350) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x350,uVar1);
  }
  FUN_033361f8();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x358) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_ToArray__
                              );
    FUN_04d699a8(uVar1,uVar3,*(undefined8 *)Method_Unity_Collections_NativeArray<float2>__ctor__,0);
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x358) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x358,uVar1);
  }
  FUN_033371fc();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x360) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>__ctor__
                              );
    FUN_04d6978c(uVar1,uVar3,*(undefined8 *)Method_Unity_Collections_NativeArray<float2>_Dispose__,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x360) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x360,uVar1);
  }
  FUN_03336860();
  lVar2 = *unaff_x22;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar2 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar2 + 0xb8) + 0x368) == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar2 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar2 + 0xb8);
    uVar1 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VariantCheckpoint>_GetEnumerator__
                              );
    FUN_04d69408(uVar1,uVar3,*(undefined8 *)Method_Unity_Collections_NativeArray<float2>_Dispose__,0
                );
    lVar2 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar2 + 0x368) = uVar1;
    thunk_FUN_02dd37b4(lVar2 + 0x368,uVar1);
  }
  FUN_0333585c();
  return;
}


