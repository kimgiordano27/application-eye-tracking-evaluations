/*
FUNCTION_NAME: FUN_03520c24
ENTRY_POINT: 03520c24
PROGRAM: gunraiders-libil2cpp.so
SCORE: 111
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_12;functionality_eye_api_context_without_clear_sink_hits_4
*/


undefined8 FUN_03520c24(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  puVar1 = Method_Oculus_Platform_Message<bool>__ctor__;
  if ((DAT_0453771f & 1) == 0) {
    FUN_01c5d288(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__);
    FUN_01c5d288(Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
    FUN_01c5d288(Method_Unity_Collections_NativeArray<AttachmentDescriptor>__ctor__);
    FUN_01c5d288(Method_Unity_Collections_NativeArray<AttachmentDescriptor>_Dispose__);
    FUN_01c5d288(Method_Unity_Collections_NativeArray<BezierCurve>__ctor__);
    FUN_01c5d288(Method_Oculus_Platform_Message<bool>__ctor__);
    DAT_0453771f = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe0) == 0) {
    thunk_FUN_01c1d1e8();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
  if (lVar2 != 0) {
    uVar3 = FUN_0286ded0(lVar2,param_2,
                         *(undefined8 *)
                          Method_Unity_Collections_NativeArray<AttachmentDescriptor>_Dispose__);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
    lVar2 = *(long *)puVar1;
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_01c1d1e8();
      lVar2 = *(long *)puVar1;
    }
    if (**(long **)(lVar2 + 0xb8) != 0) {
      uVar3 = FUN_0290ca2c(**(long **)(lVar2 + 0xb8),param_1,
                           *(undefined8 *)Method_Unity_Collections_NativeArray<BezierCurve>__ctor__)
      ;
      if ((uVar3 & 1) != 0) {
        return 0;
      }
      lVar2 = thunk_FUN_01c496e0(*(undefined8 *)
                                  Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>__ctor__);
      FUN_03313b6c(lVar2,0);
      *(undefined8 *)(lVar2 + 0x18) = param_1;
      *(char *)(lVar2 + 0x10) = (char)param_2;
      *(undefined8 *)(lVar2 + 0x30) = param_3;
      *(undefined8 *)(lVar2 + 0x38) = param_4;
      lVar4 = *(long *)puVar1;
      if (*(int *)(lVar4 + 0xe0) == 0) {
        thunk_FUN_01c1d1e8();
        lVar4 = *(long *)puVar1;
      }
      lVar4 = *(long *)(*(long *)(lVar4 + 0xb8) + 8);
      if (lVar4 != 0) {
        FUN_0286dcdc(lVar4,param_2,lVar2,
                     *(undefined8 *)
                      Method_OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4s>_Dispose__);
        if (**(long **)(*(long *)puVar1 + 0xb8) != 0) {
          FUN_0290c838(**(long **)(*(long *)puVar1 + 0xb8),param_1,lVar2,
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


