/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.Qpl.Annotation.Builder.Entry>$$Dispose
ENTRY_POINT: 05e86430
PROGRAM: Waifu-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8
System_Array_EmptyInternalEnumerator<OVRPlugin_Qpl_Annotation_Builder_Entry>__Dispose(void)

{
  long lVar1;
  ulong *puVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  int *in_x13;
  int unaff_w19;
  undefined4 unaff_w20;
  undefined8 unaff_x21;
  undefined4 unaff_w24;
  long unaff_x29;
  undefined8 in_stack_00000010;
  
  lVar1 = unaff_x29 + (long)unaff_w19 * 0x20;
  *(undefined4 *)(lVar1 + 0x20) = unaff_w24;
  iVar3 = *in_x13;
  puVar6 = (undefined8 *)(lVar1 + 0x38);
  *puVar6 = in_stack_00000010;
  *(undefined8 *)(lVar1 + 0x28) = unaff_x21;
  *(undefined4 *)(lVar1 + 0x30) = unaff_w20;
  *(int *)(lVar1 + 0x24) = iVar3 + -1;
  if (DAT_08908cd0 != 0) {
    puVar2 = &DAT_0873ccb0 + ((ulong)puVar6 >> 0x12 & 0x7fff);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar5) {
        *puVar2 = *puVar2 | 1L << ((ulong)puVar6 >> 0xc & 0x3f);
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  *in_x13 = unaff_w19 + 1;
  return 1;
}


