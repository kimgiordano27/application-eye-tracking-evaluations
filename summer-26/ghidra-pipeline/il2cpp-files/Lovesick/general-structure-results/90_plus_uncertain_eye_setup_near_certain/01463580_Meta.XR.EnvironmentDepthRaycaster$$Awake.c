/*
FUNCTION_NAME: Meta.XR.EnvironmentDepthRaycaster$$Awake
ENTRY_POINT: 01463580
PROGRAM: Lovesick-libil2cpp.so
SCORE: 95
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;ray_or_cast_sink_hits_2;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


long * Meta_XR_EnvironmentDepthRaycaster__Awake(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  bool in_ZR;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long in_x9;
  uint in_w10;
  
  puVar2 = Method_System_Collections_Generic_List<MB3_AgglomerativeClustering_ClusterNode>_Remove__;
  if (!in_ZR) {
    bVar1 = *(byte *)(*param_1 + 300);
    if ((in_w10 < bVar1) || (*(long *)(*(long *)(in_x9 + 200) + (ulong)bVar1 * 8 + -8) != *param_1))
    {
      if (*(int *)(*(long *)StringLiteral_302 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_026610e4(*(undefined8 *)puVar2,0);
      return (long *)0x0;
    }
  }
  plVar3 = (long *)FUN_00da4fb8(*(undefined8 *)
                                 Method_UnityEngine_XR_ARFoundation_ARPlaneMeshVisualizer_SetRendererEnabled<LineRenderer>__
                                ,1);
  lVar4 = FUN_0268fd10();
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if ((lVar4 != 0) &&
     (lVar5 = thunk_FUN_00d6225c(lVar4,*(undefined8 *)(*plVar3 + 0x40)), lVar5 == 0)) {
    uVar6 = thunk_FUN_00d7a17c();
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar6,0);
  }
  if ((int)plVar3[3] != 0) {
    plVar3[4] = lVar4;
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da5194();
}


