/*
FUNCTION_NAME: System.Linq.Expressions.Interpreter.LessThanInstruction.LessThanInt32$$Run
ENTRY_POINT: 03520a94
PROGRAM: gunraiders-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanInt32__Run(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  int in_w8;
  undefined8 unaff_x19;
  undefined4 unaff_w20;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x24;
  
  if (in_w8 == 0) {
    thunk_FUN_01c1d1e8();
    param_1 = *unaff_x24;
  }
  lVar1 = *(long *)(*(long *)(param_1 + 0xb8) + 8);
  if (lVar1 != 0) {
    uVar2 = FUN_0286ded0(lVar1,unaff_w20,
                         *(undefined8 *)
                          Method_Unity_Collections_NativeArray<AttachmentDescriptor>_Dispose__);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
    lVar1 = *unaff_x24;
    if (*(int *)(lVar1 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar1 = *unaff_x24;
    }
    if (**(long **)(lVar1 + 0xb8) != 0) {
      uVar2 = FUN_0290ca2c();
      if ((uVar2 & 1) != 0) {
        return 0;
      }
      lVar1 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__);
      FUN_03313b6c(lVar1,0);
      *(char *)(lVar1 + 0x10) = (char)unaff_w20;
      *(undefined8 *)(lVar1 + 0x18) = unaff_x19;
      *(undefined8 *)(lVar1 + 0x20) = unaff_x22;
      *(undefined8 *)(lVar1 + 0x28) = unaff_x21;
      lVar3 = *unaff_x24;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar3 = *unaff_x24;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if ((lVar3 != 0) &&
         (FUN_0286dcdc(lVar3,unaff_w20,lVar1,
                       *(undefined8 *)
                        Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__),
         **(long **)(*unaff_x24 + 0xb8) != 0)) {
        FUN_0290c838();
        return 1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


