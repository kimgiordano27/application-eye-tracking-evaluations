/*
FUNCTION_NAME: Oculus.Interaction.HandTrackingConfidenceProvider$$InjectInteractor
ENTRY_POINT: 018b46f4
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: confirmed_gaze_retrieval_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: weak_source_state;validity_gate;pose_vector;frame_behavior;active_gaze_retrieval
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;frame_or_lifecycle_behavior;active_gaze_state_retrieval_with_validity_and_pose;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


undefined1  [16] Oculus_Interaction_HandTrackingConfidenceProvider__InjectInteractor(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if ((*(byte *)(unaff_x20 + 0x90e) & 1) == 0) {
    thunk_FUN_00d48444(System_ComponentModel_ListBindableAttribute_TypeInfo);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__);
    thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
                      );
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_JsonTextReader_<ReadCharsAsync>d__14>__
                      );
    *(undefined1 *)(unaff_x20 + 0x90e) = 1;
  }
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
  ;
  if (param_1 != 0) {
                    /* try { // try from 018b4748 to 019b474b has its CatchHandler @ 018b4844 */
                    /* try { // try from 018b4758 to 019b4763 has its CatchHandler @ 018b4848 */
    if (*(int *)(*(long *)
                  Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
                + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    lVar5 = FUN_018b16cc(param_1);
    if (lVar5 == 0) {
LAB_018b487c:
      thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
      FUN_00acb0a4();
      uVar8 = FUN_01731954(0);
      thunk_FUN_00d48444(
                        Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
                        );
      FUN_00acb0a4();
      uVar10 = FUN_018b17e4(param_1);
      uVar11 = thunk_FUN_00d48444(StringLiteral_4553);
      uVar8 = FUN_018651d4(uVar11,uVar8,uVar10,0);
      thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
      uVar10 = thunk_FUN_00d62348();
      FUN_00ac2be8();
      FUN_016f2f28(uVar10,uVar8,0);
      uVar8 = thunk_FUN_00d48444(
                                Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<JArray>_GetResult__
                                );
                    /* WARNING: Subroutine does not return */
      FUN_00da5038(uVar10,uVar8);
    }
    lVar6 = *(long *)puVar2;
    if (*(int *)(lVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      lVar6 = *(long *)puVar2;
    }
    uVar7 = FUN_018b18d8(lVar5,*(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x10),1);
    puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
    puVar3 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_JsonTextReader_<ReadCharsAsync>d__14>__
    ;
    puVar2 = System_ComponentModel_ListBindableAttribute_TypeInfo;
    if ((uVar7 & 1) == 0) goto LAB_018b487c;
    plVar12 = *(long **)(lVar5 + 0x38);
    if (plVar12 != (long *)0x0) {
      if (*plVar12 == *(long *)System_ComponentModel_ListBindableAttribute_TypeInfo) {
        puVar9 = (undefined8 *)thunk_FUN_00d624a0(plVar12);
        uVar8 = *puVar9;
        uVar10 = puVar9[1];
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00000018 = FUN_01e19db8(uVar8,uVar10,0);
      }
      else {
        if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        uVar8 = FUN_01731954(0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar4);
        }
        in_stack_00000018 = FUN_016ff5a8(plVar12,uVar8,0);
      }
      in_stack_00000008 = 0;
      in_stack_00000010 = 0;
      FUN_01347274(&stack0x00000008,&stack0x00000018,*(undefined8 *)puVar3);
      goto Oculus_Interaction_ActiveStateUnityEventWrapper__Start;
    }
  }
  in_stack_00000008 = 0;
  in_stack_00000010 = 0;
Oculus_Interaction_ActiveStateUnityEventWrapper__Start:
  auVar1._8_8_ = in_stack_00000010;
  auVar1._0_8_ = in_stack_00000008;
  return auVar1;
}


