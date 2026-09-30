/*
FUNCTION_NAME: System.ReadOnlySpan<OVRPlugin.Vector4f>$$ToArray
ENTRY_POINT: 04ec70c4
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 System_ReadOnlySpan<OVRPlugin_Vector4f>__ToArray(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 *unaff_x19;
  long *unaff_x21;
  
  if (param_1 == (long *)0x0) {
    uVar2 = thunk_FUN_0322f148(*(undefined8 *)PTR_DAT_0759f770);
    FUN_05e44034(uVar2,0);
    FUN_0322b90c();
  }
  else {
    lVar3 = *param_1;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x21) {
          puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 2) * 0x10 + 0x138);
          goto LAB_04ec714c;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_0322c1e8(param_1,*unaff_x21,2);
LAB_04ec714c:
    uVar2 = (*(code *)*puVar1)(param_1,puVar1[1]);
    *unaff_x19 = uVar2;
    thunk_FUN_0329bf60();
  }
  return *unaff_x19;
}


