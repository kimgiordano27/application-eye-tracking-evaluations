/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceQueryResult>$$get_Current
ENTRY_POINT: 0566f478
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceQueryResult>__get_Current
               (undefined8 param_1,int param_2)

{
  int in_w8;
  long lVar1;
  int *unaff_x19;
  long unaff_x20;
  int unaff_w21;
  int iVar2;
  
  iVar2 = unaff_w21;
  if (param_2 < in_w8) {
    do {
      if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + 0x135) & 1) == 0) {
        FUN_03d8f26c();
      }
      FUN_0566f1c0();
      iVar2 = iVar2 + 1;
    } while (iVar2 < *unaff_x19);
  }
  *unaff_x19 = unaff_w21;
  if (1 < unaff_w21) {
    lVar1 = *(long *)(unaff_x19 + 0xc);
    if ((lVar1 == 0) || (*(int *)(lVar1 + 0x18) < unaff_w21 + -1)) {
      lVar1 = *(long *)(unaff_x20 + 0x20);
      if ((*(byte *)(lVar1 + 0x135) & 1) == 0) {
        lVar1 = FUN_03d8f26c();
      }
      FUN_04dcc924(unaff_x19 + 0xc,unaff_w21 + -1,*(undefined8 *)(*(long *)(lVar1 + 0xc0) + 0x60));
      return;
    }
  }
  return;
}


