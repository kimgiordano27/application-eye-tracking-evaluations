/*
FUNCTION_NAME: FUN_0184f160
ENTRY_POINT: 0184f160
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_gaze_retrieval_or_extraction
*/


long FUN_0184f160(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  long local_38;
  
  if ((DAT_0377960b & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_DynamicArray<__Il2CppFullySharedGenericType>_RemoveAt__
                      );
    thunk_FUN_00d48444(StringLiteral_3045);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_5__);
    DAT_0377960b = 1;
  }
  if (param_1 == 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_Rendering_DynamicArray<__Il2CppFullySharedGenericType>_RemoveAt__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar4 = FUN_0184f0c8(param_3);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
  }
  else {
    uVar3 = thunk_FUN_00d93c64(param_1,0);
    if (param_3 == (long *)0x0) {
LAB_0184f2d0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar4 = (**(code **)(*param_3 + 0x2c8))(param_3,uVar3,*(undefined8 *)(*param_3 + 0x2d0));
    puVar2 = StringLiteral_3045;
    puVar1 = Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__;
    if ((uVar4 & 1) != 0) {
      return param_1;
    }
    lVar5 = *(long *)
             Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__;
    if (*(int *)(lVar5 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xb8) + 0x10);
    local_60 = 0;
    uStack_58 = 0;
    FUN_013b2b50(&local_60,uVar3,param_3,*(undefined8 *)puVar2);
    if (lVar5 == 0) goto LAB_0184f2d0;
    local_50 = local_60;
    uStack_48 = uStack_58;
    FUN_013c9004(lVar5,&local_50,&local_38,*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_5__);
    if (local_38 != 0) {
      (**(code **)(local_38 + 0x18))
                (*(undefined8 *)(local_38 + 0x40),param_1,&local_50,*(undefined8 *)(local_38 + 0x28)
                );
      return local_50;
    }
  }
  lVar5 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
  if (*(int *)(lVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_01731954(0);
  uVar6 = thunk_FUN_00d48444(
                            Method_Unity_Jobs_IJobExtensions_Schedule<RoomMeshAnchor_GetTriangleMeshJob>__
                            );
  if (param_2 != (long *)0x0) {
    uVar6 = thunk_FUN_00d48444(
                              Method_Unity_Jobs_IJobExtensions_Schedule<RoomMeshAnchor_GetTriangleMeshJob>__
                              );
    lVar5 = (**(code **)(*param_2 + 0x168))(param_2,*(undefined8 *)(*param_2 + 0x170));
    if (lVar5 != 0) goto LAB_0184f348;
  }
  lVar5 = thunk_FUN_00d48444(System_Reflection_AmbiguousMatchException_TypeInfo);
LAB_0184f348:
  uVar3 = FUN_018652e8(uVar6,uVar3,lVar5,param_3,0);
  thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
  uVar6 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_016f2f28(uVar6,uVar3,0);
  uVar3 = thunk_FUN_00d48444(OVR_OpenVR_CVRSystem__PollNextEventPacked_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar6,uVar3);
}


