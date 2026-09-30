/*
FUNCTION_NAME: System.Collections.Generic.List<OVRPlugin.Qpl.Annotation.Builder.Entry>$$ToArray
ENTRY_POINT: 04c53ed4
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


int System_Collections_Generic_List<OVRPlugin_Qpl_Annotation_Builder_Entry>__ToArray
              (long param_1,undefined1 param_2 [16],undefined1 param_3 [16])

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long in_x9;
  undefined8 in_x10;
  long in_x11;
  long lVar5;
  long unaff_x21;
  
  lVar5 = param_1 + in_x9 * in_x11;
  *(undefined8 *)(lVar5 + 0x40) = in_x10;
  *(long *)(lVar5 + 0x28) = param_2._8_8_;
  *(long *)(lVar5 + 0x20) = param_2._0_8_;
  *(long *)(lVar5 + 0x38) = param_3._8_8_;
  *(long *)(lVar5 + 0x30) = param_3._0_8_;
  if (DAT_08908cd0 != 0) {
    uVar1 = param_1 + in_x9 * 0x28 + 0x38;
    puVar2 = &DAT_0873ccb0 + (uVar1 >> 0x12 & 0x7fff);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = *puVar2 | 1L << (uVar1 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  return *(int *)(unaff_x21 + 0x18) + -1;
}


