/*
FUNCTION_NAME: UnityEngine.XR.ARFoundation.UpdatableCubemap$$System.IDisposable.Dispose
ENTRY_POINT: 05d21970
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: 
MODULES: weak_source_state;pose_vector;telemetry
EVIDENCE: weak_xr_or_state_hits_3;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_3
*/


void UnityEngine_XR_ARFoundation_UpdatableCubemap__System_IDisposable_Dispose(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  FUN_03333280();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x300) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>_get_Count__);
    FUN_04d691ec(uVar2,uVar3,
                 *(undefined8 *)
                  Method_Oculus_Platform_Message<MicrophoneAvailabilityState>_get_Data__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x300) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x300,uVar2);
  }
  FUN_03333f50();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x308) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Value>_GetEnumerator__);
    FUN_04d68fd0(uVar2,uVar3,
                 *(undefined8 *)Method_Oculus_Platform_Message<NetSyncConnection>__ctor__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x308) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x308,uVar2);
  }
  FUN_033335b4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x310) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VFXBinderBase>__ctor__);
    FUN_04d692a0(uVar2,uVar3,
                 *(undefined8 *)Method_Oculus_Platform_Message<NetSyncConnection>_get_Data__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x310) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x310,uVar2);
  }
  FUN_03334284();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x318) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<UxmlObjectAsset>_GetEnumerator__
                              );
    FUN_04d68db4(uVar2,uVar3,
                 *(undefined8 *)Method_Oculus_Platform_Message<NetSyncSessionList>__ctor__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x318) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x318,uVar2);
  }
  FUN_03332c18();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 800) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectControlPlayableBehaviour>_Add__
                              );
    FUN_04d69354(uVar2,uVar3,
                 *(undefined8 *)Method_Oculus_Platform_Message<NetSyncSessionList>_get_Data__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 800) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 800,uVar2);
  }
  FUN_033345b8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x328) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)Method_System_Collections_Generic_List<Value>_Clear__)
    ;
    FUN_04d696d8(uVar2,uVar3,*(undefined8 *)Method_System_Memory<byte>_get_Length__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x328) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x328,uVar2);
  }
  FUN_0333652c();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x330) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<uint>_GetEnumerator__);
    FUN_04d694bc(uVar2,uVar3,*(undefined8 *)Method_System_Memory<byte>_get_Span__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x330) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x330,uVar2);
  }
  FUN_03335b90();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x338) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector3>_ToArray__);
    FUN_04d69840(uVar2,uVar3,*(undefined8 *)Method_System_Memory<byte>_op_Implicit__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x338) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x338,uVar2);
  }
  FUN_03336b94();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x340) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualEffectPlayableSerializedEvent>_GetEnumerator__
                              );
    FUN_04d69570(uVar2,uVar3,*(undefined8 *)Method_System_Memory<byte>_op_Implicit__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x340) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x340,uVar2);
  }
  FUN_03335ec4();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x348) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<VisualElement>_Contains__);
    FUN_04d698f4(uVar2,uVar3,*(undefined8 *)Method_System_Memory<char>__ctor__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x348) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x348,uVar2);
  }
  FUN_03336ec8();
  lVar1 = *unaff_x22;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
    lVar1 = *unaff_x22;
  }
  if (*(long *)(*(long *)(lVar1 + 0xb8) + 0x350) == 0) {
    if (*(int *)(lVar1 + 0xe4) == 0) {
      thunk_FUN_02dbd7b4();
      lVar1 = *unaff_x22;
    }
    uVar3 = **(undefined8 **)(lVar1 + 0xb8);
    uVar2 = thunk_FUN_02d9d534(*(undefined8 *)
                                Method_System_Collections_Generic_List<Vector4>__ctor__);
    FUN_04d69624(uVar2,uVar3,*(undefined8 *)Method_System_Memory<char>_get_Length__,0);
    lVar1 = *(long *)(*unaff_x22 + 0xb8);
    *(undefined8 *)(lVar1 + 0x350) = uVar2;
    thunk_FUN_02dd37b4(lVar1 + 0x350,uVar2);
  }
  FUN_033361f8();
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  FUN_0638a0f4();
  return;
}


