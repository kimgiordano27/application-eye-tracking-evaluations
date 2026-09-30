/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$AsReadOnly
ENTRY_POINT: 05ea7e28
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__AsReadOnly(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long in_x9;
  int in_w10;
  long unaff_x19;
  undefined8 uVar3;
  long unaff_x22;
  uint uStack000000000000001c;
  
  uVar3 = *(undefined8 *)(in_x9 + 0x70);
  if (in_w10 == 0) {
    thunk_FUN_040d65a8(param_1);
  }
  plVar1 = (long *)FUN_0768890c(uVar3,0);
  if (plVar1 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
    uStack000000000000001c = *(uint *)(unaff_x19 + 0xc) & 0x7fffffff;
    uVar2 = thunk_FUN_040b4b34(*(undefined8 *)(unaff_x22 + 0x48),&stack0x0000001c);
    FUN_074e74a4(*(undefined8 *)PTR_DAT_092ba5f8,uVar3,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


