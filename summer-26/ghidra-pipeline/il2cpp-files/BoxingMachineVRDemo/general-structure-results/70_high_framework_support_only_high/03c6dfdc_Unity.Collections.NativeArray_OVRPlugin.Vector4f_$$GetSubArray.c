/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$GetSubArray
ENTRY_POINT: 03c6dfdc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_8;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03c6e094) */

undefined4
Unity_Collections_NativeArray<OVRPlugin_Vector4f>__GetSubArray
          (long param_1,undefined4 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lStack0000000000000000;
  char cStack000000000000000c;
  
  lStack0000000000000000 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  cStack000000000000000c = '\0';
  FUN_0506ac34(uVar2,&stack0x0000000c,0);
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d60ae8();
  }
  uVar1 = FUN_047cc89c(*(long *)(param_1 + 0x18),param_2);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    *param_3 = 0;
  }
  else {
    if (lStack0000000000000000 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d60ae8();
    }
    *param_3 = *(undefined8 *)(lStack0000000000000000 + 0x18);
    thunk_FUN_02dd37b4(param_3);
    uVar3 = 1;
  }
  if (cStack000000000000000c != '\0') {
    thunk_FUN_02d6ec70(uVar2,0);
  }
  return uVar3;
}


