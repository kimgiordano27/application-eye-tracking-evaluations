/*
FUNCTION_NAME: Unity.XR.CoreUtils.XROrigin$$GetCameraOriginPose
ENTRY_POINT: 02470a50
PROGRAM: Lovesick-libil2cpp.so
SCORE: 147
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: gaze_retrieval
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_3;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_3;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_gaze_retrieval_or_extraction
*/


void Unity_XR_CoreUtils_XROrigin__GetCameraOriginPose(undefined4 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  bool in_ZR;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 uVar5;
  long unaff_x26;
  long *unaff_x27;
  long *unaff_x28;
  undefined4 unaff_s9;
  undefined8 in_stack_00000250;
  long in_stack_000004d8;
  
                    /* try { // try from 02470a50 to 02570a6b has its CatchHandler @ 02470bf8 */
  if (in_ZR) {
    param_1 = unaff_s9;
  }
  if (in_ZR) {
    unaff_s9 = 0;
  }
  if (*(int *)(param_2 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
                    /* try { // try from 02470a78 to 02570a83 has its CatchHandler @ 02470bec */
                    /* try { // try from 02470a84 to 02570b87 has its CatchHandler @ 02470618 */
  FUN_026a991c(param_1,unaff_s9,param_1,0x3f800000);
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026b6dc8(&stack0x00000250);
  FUN_026a8aa4();
  if (unaff_x20[0x2c] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  FUN_0241b984(&stack0x00000258);
  memcpy(&stack0x00000398,&stack0x00000258,0x13c);
  memcpy(&stack0x00000018,unaff_x20,0x218);
  lVar3 = FUN_0241cc10();
  puVar2 = 
  Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_get_Current__
  ;
  if (lVar3 == 0) {
    uVar5 = *unaff_x20;
    uVar1 = unaff_x20[1];
    if (*(int *)(*unaff_x28 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_026b68dc(&stack0x00000250,uVar5,uVar1,&stack0x00000398,&stack0x00000230,unaff_x21 + 0xf0,0);
  }
  else {
    lVar4 = *(long *)
             Method_System_Collections_Generic_List_Enumerator<JsonSerializerInternalReader_CreatorPropertyContext>_get_Current__
    ;
    if (*(int *)(lVar4 + 0xe0) == 0) {
      thunk_FUN_00d32864(lVar4);
      lVar4 = *(long *)puVar2;
    }
    if (*(long *)(*(long *)(lVar4 + 0xb8) + 8) == 0) {
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_00d32864(lVar4);
        lVar4 = *(long *)puVar2;
      }
      uVar5 = **(undefined8 **)(lVar4 + 0xb8);
      lVar4 = thunk_FUN_00d62348(*(undefined8 *)Method_OVRPlugin_<>c_<_cctor>b__796_52__);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      FUN_0240fb6c(lVar4,uVar5,
                   *(undefined8 *)RotationalVelocitySoundSpawner_<SoundOnCorourtine>d__17_TypeInfo,0
                  );
      *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8) = lVar4;
    }
    FUN_0240edb8(lVar3,in_stack_00000250);
  }
  FUN_023ae3b0(&stack0x00000248,0);
  if (*(int *)(*unaff_x28 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_026b6dc8(&stack0x00000250);
  if (*(int *)(*unaff_x27 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  FUN_023a1000();
  if (*(long *)(unaff_x26 + 0x28) == in_stack_000004d8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


