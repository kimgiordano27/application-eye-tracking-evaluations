/*
FUNCTION_NAME: Obi.ObiRopeLineRenderer$$OnEnable
ENTRY_POINT: 0184f184
PROGRAM: Lovesick-libil2cpp.so
SCORE: 166
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;gaze_interaction
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;frame_behavior;structure_combo
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_gaze_retrieval_or_extraction;functionality_gaze_interaction_hits_2
*/


long Obi_ObiRopeLineRenderer__OnEnable(ulong param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000028;
  
  if ((param_1 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__
                      );
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_DynamicArray<__Il2CppFullySharedGenericType>_RemoveAt__
                      );
    thunk_FUN_00d48444(StringLiteral_3045);
    thunk_FUN_00d48444(Method_OVRPlugin_<>c_<_cctor>b__796_5__);
    *(undefined1 *)(unaff_x22 + 0x60b) = 1;
  }
  if (param_2 == 0) {
    if (*(int *)(*(long *)
                  Method_UnityEngine_Rendering_DynamicArray<__Il2CppFullySharedGenericType>_RemoveAt__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    uVar2 = FUN_0184f0c8();
    if ((uVar2 & 1) != 0) {
      return 0;
    }
  }
  else {
    thunk_FUN_00d93c64(param_2,0);
    if (unaff_x19 == (long *)0x0) {
LAB_0184f2d0:
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar2 = (**(code **)(*unaff_x19 + 0x2c8))();
    puVar1 = Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__;
    if ((uVar2 & 1) != 0) {
      return param_2;
    }
    lVar3 = *(long *)
             Method_System_Collections_Generic_List<IntegratedSubsystemDescriptor>_GetEnumerator__;
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    FUN_013b2b50();
    if (lVar3 == 0) goto LAB_0184f2d0;
    in_stack_00000010 = 0;
    in_stack_00000018 = 0;
    FUN_013c9004(lVar3,&stack0x00000010,&stack0x00000028,
                 *(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_5__);
    if (in_stack_00000028 != 0) {
      (**(code **)(in_stack_00000028 + 0x18))
                (*(undefined8 *)(in_stack_00000028 + 0x40),param_2,&stack0x00000010,
                 *(undefined8 *)(in_stack_00000028 + 0x28));
      return in_stack_00000010;
    }
  }
  lVar3 = thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
  if (*(int *)(lVar3 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  uVar4 = FUN_01731954(0);
  uVar5 = thunk_FUN_00d48444(
                            Method_Unity_Jobs_IJobExtensions_Schedule<RoomMeshAnchor_GetTriangleMeshJob>__
                            );
  if (unaff_x20 != (long *)0x0) {
    uVar5 = thunk_FUN_00d48444(
                              Method_Unity_Jobs_IJobExtensions_Schedule<RoomMeshAnchor_GetTriangleMeshJob>__
                              );
    lVar3 = (**(code **)(*unaff_x20 + 0x168))();
    if (lVar3 != 0) goto LAB_0184f348;
  }
  lVar3 = thunk_FUN_00d48444(System_Reflection_AmbiguousMatchException_TypeInfo);
LAB_0184f348:
  uVar4 = FUN_018652e8(uVar5,uVar4,lVar3);
  thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
  uVar5 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_016f2f28(uVar5,uVar4,0);
  uVar4 = thunk_FUN_00d48444(OVR_OpenVR_CVRSystem__PollNextEventPacked_TypeInfo);
                    /* WARNING: Subroutine does not return */
  FUN_00da5038(uVar5,uVar4);
}


