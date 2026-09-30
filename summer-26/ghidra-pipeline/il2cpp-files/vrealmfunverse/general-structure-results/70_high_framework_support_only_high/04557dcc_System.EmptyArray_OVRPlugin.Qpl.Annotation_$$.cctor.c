/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.Qpl.Annotation>$$.cctor
ENTRY_POINT: 04557dcc
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_EmptyArray<OVRPlugin_Qpl_Annotation>___cctor(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  undefined8 *in_stack_00000008;
  
                    /* catch() { ... } // from try @ 04557d18 with catch @ 04557dcc
                       catch() { ... } // from try @ 04557dc0 with catch @ 04557dcc */
  __cxa_end_catch();
  plVar5 = (long *)*in_stack_00000008;
  if (plVar5 != (long *)0x0) {
    lVar2 = *plVar5;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_06312f78) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_04557d4c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02b7654c(plVar5,*(long *)PTR_DAT_06312f78,0);
LAB_04557d4c:
    (*(code *)*puVar1)(plVar5,puVar1[1]);
  }
  if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cabc();
}


