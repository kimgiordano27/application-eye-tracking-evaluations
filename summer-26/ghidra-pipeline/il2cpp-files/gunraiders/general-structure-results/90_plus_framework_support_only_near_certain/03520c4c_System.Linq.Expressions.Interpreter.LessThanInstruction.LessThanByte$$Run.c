/*
FUNCTION_NAME: System.Linq.Expressions.Interpreter.LessThanInstruction.LessThanByte$$Run
ENTRY_POINT: 03520c4c
PROGRAM: gunraiders-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_12;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8
System_Linq_Expressions_Interpreter_LessThanInstruction_LessThanByte__Run
          (ulong param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x21;
  undefined8 unaff_x22;
  long unaff_x23;
  long *unaff_x24;
  
  if ((param_1 & 1) == 0) {
    FUN_01c5d288(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__);
    FUN_01c5d288(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    FUN_01c5d288(Method_Unity_Collections_NativeArray<AttachmentDescriptor>__ctor__);
    FUN_01c5d288(Method_Unity_Collections_NativeArray<AttachmentDescriptor>_Dispose__);
    FUN_01c5d288(Method_Unity_Collections_NativeArray<BezierCurve>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Message<bool>__ctor__);
    *(undefined1 *)(unaff_x23 + 0x71f) = 1;
  }
  lVar1 = *unaff_x24;
  if (*(int *)(lVar1 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar1 = *unaff_x24;
  }
  lVar1 = *(long *)(*(long *)(lVar1 + 0xb8) + 8);
  if (lVar1 != 0) {
    uVar2 = FUN_0286ded0(lVar1,param_3,
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
      uVar2 = FUN_0290ca2c(**(long **)(lVar1 + 0xb8),param_2,
                           *(undefined8 *)Method_Unity_Collections_NativeArray<BezierCurve>__ctor__)
      ;
      if ((uVar2 & 1) != 0) {
        return 0;
      }
      lVar1 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__);
      FUN_03313b6c(lVar1,0);
      *(undefined8 *)(lVar1 + 0x18) = param_2;
      *(char *)(lVar1 + 0x10) = (char)param_3;
      *(undefined8 *)(lVar1 + 0x30) = unaff_x22;
      *(undefined8 *)(lVar1 + 0x38) = unaff_x21;
      lVar3 = *unaff_x24;
      if (*(int *)(lVar3 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar3 = *unaff_x24;
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 8);
      if (lVar3 != 0) {
        FUN_0286dcdc(lVar3,param_3,lVar1,
                     *(undefined8 *)
                      Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
        if (**(long **)(*unaff_x24 + 0xb8) != 0) {
          FUN_0290c838(**(long **)(*unaff_x24 + 0xb8),param_2,lVar1,
                       *(undefined8 *)
                        Method_Unity_Collections_NativeArray<AttachmentDescriptor>__ctor__);
          return 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01c5d4a4();
}


