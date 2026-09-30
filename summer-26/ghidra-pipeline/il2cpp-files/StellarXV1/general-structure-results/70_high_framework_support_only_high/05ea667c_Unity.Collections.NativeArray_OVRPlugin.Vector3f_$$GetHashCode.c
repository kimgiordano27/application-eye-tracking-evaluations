/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$GetHashCode
ENTRY_POINT: 05ea667c
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>__GetHashCode(ulong param_1)

{
  long lVar1;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long *plVar2;
  long unaff_x23;
  
  plVar2 = (long *)*unaff_x20;
  if ((((param_1 & 1) == 0) || (plVar2 == (long *)0x0)) || (*plVar2 != *(long *)(unaff_x23 + 0x90)))
  {
    lVar1 = *(long *)(unaff_x21 + 0x20);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_040b1acc();
    }
    lVar1 = **(long **)(lVar1 + 0xc0);
    if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
      lVar1 = FUN_040b1acc(lVar1);
    }
    lVar1 = thunk_FUN_040b4e00(plVar2,lVar1);
    if (lVar1 == 0) {
      *unaff_x19 = 0;
      unaff_x19[1] = 0;
      unaff_x19[2] = 0;
      return;
    }
    if (-1 < *(int *)((long)unaff_x20 + 0xc)) {
      FUN_0758dc78(lVar1,3,0);
    }
    unaff_x19[2] = 0;
    *unaff_x19 = 0;
  }
  else {
    FUN_0758dc78(plVar2,3,0);
    FUN_074e3264(plVar2,0);
    unaff_x19[2] = 0;
    *unaff_x19 = 0;
  }
  unaff_x19[1] = 0;
  FUN_0762127c();
  return;
}


