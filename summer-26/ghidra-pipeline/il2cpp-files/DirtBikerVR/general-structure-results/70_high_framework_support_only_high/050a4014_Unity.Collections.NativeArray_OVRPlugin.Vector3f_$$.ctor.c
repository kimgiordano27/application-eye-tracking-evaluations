/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector3f>$$.ctor
ENTRY_POINT: 050a4014
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector3f>___ctor(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x19;
  long *unaff_x20;
  
  if (unaff_x20 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
  uVar2 = (ulong)*(ushort *)(*unaff_x20 + 0x12e);
  if (uVar2 != 0) {
    lVar1 = *(long *)(*unaff_x20 + 0xb0) + 8;
    do {
      if (*(long *)(lVar1 + -8) == param_2) goto LAB_050a4060;
      uVar2 = uVar2 - 1;
      lVar1 = lVar1 + 0x10;
    } while (uVar2 != 0);
  }
  FUN_03ac43c4();
LAB_050a4060:
  FUN_05d3e064();
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x48);
  if ((*(ushort *)(lVar1 + 0x135) & 1) == 0) {
    lVar1 = FUN_03ac4090();
  }
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_050a4950();
  return;
}


