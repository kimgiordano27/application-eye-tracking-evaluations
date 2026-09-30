/*
FUNCTION_NAME: Unity.Collections.FixedList512Bytes<uint>$$Initialize
ENTRY_POINT: 042589e8
PROGRAM: Waifu-libil2cpp.so
SCORE: 80
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_FixedList512Bytes<uint>__Initialize(long param_1)

{
  int iVar1;
  bool in_ZR;
  int in_w8;
  long in_x9;
  long in_x10;
  undefined8 *puVar2;
  long unaff_x20;
  int unaff_w21;
  long *plVar3;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (in_ZR) {
    in_x10 = in_x9;
  }
  if (in_w8 == 0) {
    plVar3 = (long *)(param_1 + 0x10);
    if (*plVar3 != 0) {
      Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
                (plVar3,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80));
    }
    FUN_04d920e4();
    *(undefined8 *)(param_1 + 0x18) = 0;
    *plVar3 = 0;
    *(int *)(param_1 + 0x24) = unaff_w21;
  }
  else {
    iVar1 = *(int *)(param_1 + in_x10) + unaff_w21;
    if (in_w8 < iVar1) {
      FUN_04d920e4(&stack0x00000010,iVar1,4,1,
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x18));
      puVar2 = (undefined8 *)(param_1 + 0x10);
      FUN_04d92c58(*puVar2,*(undefined8 *)(param_1 + 0x18),in_stack_00000010,in_stack_00000018,
                   *(undefined4 *)(param_1 + 0x20),
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x110));
      Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
                (puVar2,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x80));
      *(int *)(param_1 + 0x24) = iVar1;
      *(undefined8 *)(param_1 + 0x18) = in_stack_00000018;
      *puVar2 = in_stack_00000010;
    }
  }
  return;
}


