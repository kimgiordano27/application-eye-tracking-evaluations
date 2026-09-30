/*
FUNCTION_NAME: System.Span<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 04a23000
PROGRAM: waitwhat-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long System_Span<OVRPlugin_SpaceQueryResult>__ToArray(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  undefined4 unaff_w21;
  
  lVar2 = *(long *)(param_1 + 0x88);
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_031c09d4();
  }
  lVar2 = FUN_03188b1c(lVar2,unaff_w21);
  if (lVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x20);
    uVar4 = *unaff_x19;
    iVar1 = *(int *)(unaff_x19 + 1);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_031c09d4();
    }
    FUN_03a1fa04(lVar2 + 0x20,uVar4,(long)iVar1,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x68));
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


