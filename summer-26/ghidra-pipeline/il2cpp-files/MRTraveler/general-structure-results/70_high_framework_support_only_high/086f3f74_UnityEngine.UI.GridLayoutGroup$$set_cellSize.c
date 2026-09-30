/*
FUNCTION_NAME: UnityEngine.UI.GridLayoutGroup$$set_cellSize
ENTRY_POINT: 086f3f74
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: data_collection_or_telemetry;possible_biometrics
MODULES: eye_source;weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;telemetry_or_network_hits_3;frame_or_lifecycle_behavior;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_data_collection_or_telemetry_hits_2;functionality_possible_biometrics_hits_2
*/


void UnityEngine_UI_GridLayoutGroup__set_cellSize(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long unaff_x19;
  undefined8 *unaff_x20;
  long *unaff_x21;
  long lVar12;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  long unaff_x25;
  undefined8 *puVar13;
  undefined8 *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined4 in_stack_00000028;
  uint uStack000000000000002c;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined4 uStack0000000000000050;
  
  puVar13 = *(undefined8 **)(unaff_x25 + 0xb8);
  uStack0000000000000050 = 0;
  uStack000000000000002c = 0;
  uStack0000000000000038 = 0;
  uStack0000000000000030 = 0;
  uStack0000000000000048 = 0;
  uStack0000000000000040 = 0;
  lVar12 = *(long *)(unaff_x19 + 0x110);
  uVar11 = 0x43800000;
  if (lVar12 != 0) {
    uVar11 = 0x43be0000;
  }
  if (*(int *)(*unaff_x21 + 0xe0) == 0) {
    thunk_FUN_03cd7500();
  }
  FUN_0861a7e0(0x41a00000,0x42200000,0x43480000,uVar11,*unaff_x24,0);
  uVar10 = FUN_0711e408(unaff_x19 + 0x88,0);
  uVar10 = FUN_06f683f8(*unaff_x23,uVar10,0);
  FUN_0861a2cc(0x41f00000,0x42700000,0x447a0000,0x42c80000,uVar10,0);
  uVar10 = FUN_0711e408(unaff_x19 + 0x8c,0);
  uVar10 = FUN_06f683f8(*unaff_x22,uVar10,0);
  FUN_0861a2cc(0x41f00000,0x42900000,0x447a0000,0x42c80000,uVar10,0);
  uVar10 = FUN_0711e408(unaff_x19 + 0xdc,0);
  uVar10 = FUN_06f683f8(*unaff_x20,uVar10,0);
  FUN_0861a2cc(0x41f00000,0x42a80000,0x447a0000,0x42c80000,uVar10,0);
  uVar10 = FUN_0711e408(unaff_x19 + 0xd8,0);
  uVar10 = FUN_06f683f8(*unaff_x29,uVar10,0);
  FUN_0861a2cc(0x41f00000,0x42c00000,0x447a0000,0x42c80000,uVar10,0);
  uVar10 = FUN_0711e408(unaff_x19 + 0x90,0);
  uVar10 = FUN_06f683f8(*unaff_x28,uVar10,0);
  FUN_0861a2cc(0x41f00000,0x42d80000,0x447a0000,0x42c80000,uVar10,0);
  uVar10 = FUN_0711e408(unaff_x19 + 0x94,0);
  uVar10 = FUN_06f683f8(*unaff_x27,uVar10,0);
  FUN_0861a2cc(0x41f00000,0x42f00000,0x447a0000,0x42c80000,uVar10,0);
  uVar10 = FUN_0711e408(unaff_x19 + 0xa4,0);
  uVar10 = FUN_06f683f8(*unaff_x26,uVar10,0);
  FUN_0861a2cc(0x41f00000,0x43040000,0x447a0000,0x42c80000,uVar10,0);
  uVar10 = FUN_0711e408(unaff_x19 + 0xa8,0);
  uVar10 = FUN_06f683f8(*puVar13,uVar10,0);
  FUN_0861a2cc(0x41f00000,0x43100000,0x447a0000,0x42c80000,uVar10,0);
  uVar10 = FUN_0711e408(unaff_x19 + 0xac,0);
  uVar10 = FUN_06f683f8(*(undefined8 *)OVRPlugin_Vector3f_var,uVar10,0);
  FUN_0861a2cc(0x41f00000,0x431c0000,0x447a0000,0x42c80000,uVar10,0);
  uVar10 = FUN_0711e408(unaff_x19 + 0x9c,0);
  uVar10 = FUN_06f683f8(*(undefined8 *)OVRPassthroughLayer_DeferredPassthroughMeshAddition_var,
                        uVar10,0);
  FUN_0861a2cc(0x41f00000,0x43280000,0x447a0000,0x42c80000,uVar10,0);
  uVar10 = FUN_0711e408(unaff_x19 + 0xa0,0);
  uVar10 = FUN_06f683f8(*(undefined8 *)OVRPassthroughLayer_Settings_var,uVar10,0);
  FUN_0861a2cc(0x41f00000,0x43340000,0x447a0000,0x42c80000,uVar10,0);
  uVar10 = FUN_0711e408(unaff_x19 + 0xcc,0);
  uVar10 = FUN_06f683f8(*(undefined8 *)OVRFaceExpressions_FaceExpression_var,uVar10,0);
  FUN_0861a2cc(0x41f00000,0x43400000,0x447a0000,0x42c80000,uVar10,0);
  uVar10 = FUN_0711e408(unaff_x19 + 0xd0,0);
  uVar10 = FUN_06f683f8(*(undefined8 *)Unity_Netcode_NetworkUpdateLoop_NetworkEarlyUpdate_var,uVar10
                        ,0);
  FUN_0861a2cc(0x41f00000,0x434c0000,0x447a0000,0x42c80000,uVar10,0);
  uVar10 = FUN_0711e408(unaff_x19 + 200,0);
  uVar10 = FUN_06f683f8(*(undefined8 *)Unity_Netcode_NetworkUpdateLoop_NetworkPreUpdate_var,uVar10,0
                       );
  FUN_0861a2cc(0x41f00000,0x43580000,0x447a0000,0x42c80000,uVar10,0);
  uVar10 = FUN_0711e408(unaff_x19 + 0xd4,0);
  uVar10 = FUN_06f683f8(*(undefined8 *)
                         Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_TriggerUpdate_var
                        ,uVar10,0);
  FUN_0861a2cc(0x41f00000,0x43640000,0x447a0000,0x42c80000,uVar10,0);
  uVar10 = FUN_0711e408(unaff_x19 + 0xb8,0);
  uVar10 = FUN_06f683f8(*(undefined8 *)Unity_Netcode_NetworkUpdateLoop_NetworkFixedUpdate_var,uVar10
                        ,0);
  FUN_0861a2cc(0x41f00000,0x43700000,0x447a0000,0x42c80000,uVar10,0);
  uVar10 = FUN_0711e408(unaff_x19 + 0xbc,0);
  uVar10 = FUN_06f683f8(*(undefined8 *)Unity_Netcode_NetworkUpdateLoop_NetworkPostLateUpdate_var,
                        uVar10,0);
  FUN_0861a2cc(0x41f00000,0x437c0000,0x447a0000,0x42c80000,uVar10,0);
  uVar10 = FUN_0711e408(unaff_x19 + 0xc0,0);
  uVar10 = FUN_06f683f8(*(undefined8 *)Unity_Netcode_NetworkUpdateLoop_NetworkPreLateUpdate_var,
                        uVar10,0);
  FUN_0861a2cc(0x41f00000,0x43840000,0x447a0000,0x42c80000,uVar10,0);
  uVar10 = FUN_0711e408(unaff_x19 + 0xc4,0);
  uVar10 = FUN_06f683f8(*(undefined8 *)Unity_Netcode_NetworkMessageManager_MessageWithHandler_var,
                        uVar10,0);
  FUN_0861a2cc(0x41f00000,0x438a0000,0x447a0000,0x42c80000,uVar10,0);
  uVar10 = FUN_0711e408(unaff_x19 + 0xe0,0);
  uVar10 = FUN_06f683f8(*(undefined8 *)
                         Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_ParameterUpdate_var
                        ,uVar10,0);
  FUN_0861a2cc(0x41f00000,0x43900000,0x447a0000,0x42c80000,uVar10,0);
  puVar9 = OVRPassthroughLayer_SerializedSurfaceGeometry_var;
  puVar8 = OVRLocatable_TrackingSpacePose_var;
  puVar7 = OVRAnchor_FetchTaskData_var;
  puVar6 = OVRAnchor_FetchOptions_var;
  puVar5 = Unity_Netcode_NetworkUpdateLoop_NetworkUpdate_var;
  puVar4 = Unity_Netcode_NetworkUpdateLoop_NetworkPostScriptLateUpdate_var;
  puVar3 = Unity_Netcode_NetworkUpdateLoop_NetworkInitialization_var;
  puVar2 = Unity_Netcode_NetworkObject_SceneObject_var;
  puVar1 = Unity_Netcode_Components_NetworkAnimatorStateChangeHandler_AnimationUpdate_var;
  if (lVar12 != 0) {
    if (*(long *)(unaff_x19 + 0x110) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03c8fb30();
    }
    FUN_08703178(&stack0x00000008,*(long *)(unaff_x19 + 0x110),0);
    uStack0000000000000038 = in_stack_00000010;
    uStack0000000000000030 = in_stack_00000008;
    uStack0000000000000048 = in_stack_00000020;
    uStack0000000000000040 = in_stack_00000018;
    uStack0000000000000050 = in_stack_00000028;
    uVar10 = FUN_070fde54(&stack0x00000030,0);
    uVar10 = FUN_06f683f8(*(undefined8 *)puVar8,uVar10,0);
    if (*(int *)(*(long *)PTR_DAT_08e715d8 + 0xe0) == 0) {
      thunk_FUN_03cd7500(*(long *)PTR_DAT_08e715d8);
    }
    FUN_0861a2cc(0x41f00000,0x439c0000,0x447a0000,0x42c80000,uVar10,0);
    uVar10 = FUN_0711e408((ulong)&stack0x00000030 | 8,0);
    uVar10 = FUN_06f683f8(*(undefined8 *)puVar7,uVar10,0);
    FUN_0861a2cc(0x41f00000,0x43a20000,0x447a0000,0x42c80000,uVar10,0);
    uVar10 = FUN_0711e408((ulong)&stack0x00000030 | 0xc,0);
    uVar10 = FUN_06f683f8(*(undefined8 *)puVar9,uVar10,0);
    FUN_0861a2cc(0x41f00000,0x43a80000,0x447a0000,0x42c80000,uVar10,0);
    uVar10 = FUN_0711e408((undefined1 *)((long)register0x00000008 + 0x44),0);
    uVar10 = FUN_06f683f8(*(undefined8 *)puVar1,uVar10,0);
    FUN_0861a2cc(0x41f00000,0x43ae0000,0x447a0000,0x42c80000,uVar10,0);
    uVar10 = FUN_0711e408(&stack0x00000048,0);
    uVar10 = FUN_06f683f8(*(undefined8 *)puVar5,uVar10,0);
    FUN_0861a2cc(0x41f00000,0x43b40000,0x447a0000,0x42c80000,uVar10,0);
    uVar10 = FUN_0711e408(&stack0x00000040,0);
    uVar10 = FUN_06f683f8(*(undefined8 *)puVar2,uVar10,0);
    FUN_0861a2cc(0x41f00000,0x43ba0000,0x447a0000,0x42c80000,uVar10,0);
    uVar10 = FUN_0711e408(&stack0x00000050,0);
    uVar10 = FUN_06f683f8(*(undefined8 *)puVar4,uVar10,0);
    FUN_0861a2cc(0x41f00000,0x43c00000,0x447a0000,0x42c80000,uVar10,0);
    uVar10 = FUN_0711e408((undefined1 *)((long)register0x00000008 + 0x4c),0);
    uVar10 = FUN_06f683f8(*(undefined8 *)puVar6,uVar10,0);
    FUN_0861a2cc(0x41f00000,0x43c60000,0x447a0000,0x42c80000,uVar10,0);
    uStack000000000000002c = uStack0000000000000030._4_4_ / 3;
    uVar10 = FUN_0711e408(&stack0x0000002c,0);
    uVar10 = FUN_06f683f8(*(undefined8 *)puVar3,uVar10,0);
    FUN_0861a2cc(0x41f00000,0x43cc0000,0x447a0000,0x42c80000,uVar10,0);
  }
  return;
}


