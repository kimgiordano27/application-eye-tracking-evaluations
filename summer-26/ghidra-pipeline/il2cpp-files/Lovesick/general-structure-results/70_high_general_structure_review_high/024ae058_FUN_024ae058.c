/*
FUNCTION_NAME: FUN_024ae058
ENTRY_POINT: 024ae058
PROGRAM: Lovesick-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;telemetry_or_network_hits_2;frame_or_lifecycle_behavior;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_024ae058(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = Method_Unity_Collections_NativeSlice<Vertex>__ctor__;
  if ((DAT_0378269a & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_Obi_ObiPathDataChannel<ObiWingedPoint,_Vector3>_EvaluateSecondDerivative__
                      );
    thunk_FUN_00d48444(Method_System_ValueTuple<float,_Vector3>__ctor__);
    thunk_FUN_00d48444(
                      Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
                      );
    thunk_FUN_00d48444(Method_Unity_Collections_NativeSlice<Vertex>__ctor__);
    thunk_FUN_00d48444(Sirenix_Serialization_DebugContext_TypeInfo);
    DAT_0378269a = 1;
  }
  lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
  puVar1 = Method_Obi_ObiPathDataChannel<ObiWingedPoint,_Vector3>_EvaluateSecondDerivative__;
  if (lVar2 != 0) {
    FUN_024ae15c();
    *(long *)(param_1 + 0x130) = lVar2;
    lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
    puVar1 = 
    Method_System_Runtime_CompilerServices_AsyncTaskMethodBuilder_Start<WebRequestStream_<SetHeadersAsync>d__37>__
    ;
    if (lVar2 != 0) {
      FUN_024ae1dc();
      *(long *)(param_1 + 0x138) = lVar2;
      *(undefined4 *)(param_1 + 0x140) = 0x3e19999a;
      lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
      puVar1 = Sirenix_Serialization_DebugContext_TypeInfo;
      if (lVar2 != 0) {
        FUN_01320e50(lVar2,*(undefined8 *)Method_System_ValueTuple<float,_Vector3>__ctor__);
        *(long *)(param_1 + 0x158) = lVar2;
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_02872a4c(param_1,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


