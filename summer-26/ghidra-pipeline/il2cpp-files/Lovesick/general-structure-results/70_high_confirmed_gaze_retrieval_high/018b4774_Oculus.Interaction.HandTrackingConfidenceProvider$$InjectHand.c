/*
FUNCTION_NAME: Oculus.Interaction.HandTrackingConfidenceProvider$$InjectHand
ENTRY_POINT: 018b4774
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: confirmed_gaze_retrieval_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: active_eye_tracking_runtime_retrieval
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: validity_gate;pose_vector;active_gaze_retrieval
EVIDENCE: validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;active_gaze_state_retrieval_with_validity_and_pose
*/


undefined1  [16] Oculus_Interaction_HandTrackingConfidenceProvider__InjectHand(long param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long unaff_x20;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
                    /* try { // try from 018b4784 to 019b4787 has its CatchHandler @ 018b4844 */
                    /* try { // try from 018b4788 to 019b482f has its CatchHandler @ 018b46f0 */
  uVar5 = FUN_018b18d8();
  puVar4 = Method_Unity_Burst_Intrinsics_Arm_Neon_vpmaxqd_f64__;
  puVar3 = 
  Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder<bool>_AwaitUnsafeOnCompleted<ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<int>,_JsonTextReader_<ReadCharsAsync>d__14>__
  ;
  puVar2 = System_ComponentModel_ListBindableAttribute_TypeInfo;
  if ((uVar5 & 1) != 0) {
    plVar10 = *(long **)(unaff_x20 + 0x38);
    if (plVar10 == (long *)0x0) {
      in_stack_00000008 = 0;
      in_stack_00000010 = 0;
    }
    else {
      if (*plVar10 == *(long *)System_ComponentModel_ListBindableAttribute_TypeInfo) {
        puVar7 = (undefined8 *)thunk_FUN_00d624a0(plVar10);
        uVar6 = *puVar7;
        uVar8 = puVar7[1];
        if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        in_stack_00000018 = FUN_01e19db8(uVar6,uVar8,0);
      }
      else {
        if (*(int *)(*(long *)Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__ + 0xe0) == 0)
        {
          thunk_FUN_00d32864();
        }
        uVar6 = FUN_01731954(0);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_00d32864(*(long *)puVar4);
        }
        in_stack_00000018 = FUN_016ff5a8(plVar10,uVar6,0);
      }
      in_stack_00000008 = 0;
      in_stack_00000010 = 0;
      FUN_01347274(&stack0x00000008,&stack0x00000018,*(undefined8 *)puVar3);
    }
    auVar1._8_8_ = in_stack_00000010;
    auVar1._0_8_ = in_stack_00000008;
    return auVar1;
  }
  thunk_FUN_00d48444(Method_System_Xml_XmlSqlBinaryReader_ScanOverAnyValue__);
  FUN_00acb0a4();
                    /* try { // try from 018b4890 to 019b48a7 has its CatchHandler @ 018b48bc */
  uVar6 = FUN_01731954(0);
  thunk_FUN_00d48444(
                    Method_System_Collections_Generic_List_Enumerator<ProbeVolumeSceneData_SerializablePVBakeSettings>_get_Current__
                    );
  FUN_00acb0a4();
                    /* try { // try from 018b48a8 to 019b48b3 has its CatchHandler @ 018b46f0 */
  uVar8 = FUN_018b17e4();
                    /* try { // try from 018b48b4 to 019b48bb has its CatchHandler @ 018b48bc */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 018b4890 with catch @ 018b48bc
                       catch(type#2 @ 00000000) { ... } // from try @ 018b48b4 with catch @ 018b48bc
                        */
  uVar9 = thunk_FUN_00d48444(StringLiteral_4553);
                    /* try { // try from 018b48c0 to 019b490f has its CatchHandler @ 018b48c0
                       catch() { ... } // from try @ 018b48c0 with catch @ 018b48c0
                       catch() { ... } // from try @ 018b492c with catch @ 018b48c0
                       catch() { ... } // from try @ 018b4998 with catch @ 018b48c0
                       catch() { ... } // from try @ 018b49f8 with catch @ 018b48c0 */
  uVar6 = FUN_018651d4(uVar9,uVar6,uVar8,0);
  thunk_FUN_00d48444(Method_OVRLocatable_TrackingSpacePose_ComputeWorldRotation__);
  uVar8 = thunk_FUN_00d62348();
  FUN_00ac2be8();
  FUN_016f2f28(uVar8,uVar6,0);
  uVar6 = thunk_FUN_00d48444(
                            Method_System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiter<JArray>_GetResult__
                            );
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 018b4910 to 019b4913 has its CatchHandler @ 018b499c */
  FUN_00da5038(uVar8,uVar6);
}


