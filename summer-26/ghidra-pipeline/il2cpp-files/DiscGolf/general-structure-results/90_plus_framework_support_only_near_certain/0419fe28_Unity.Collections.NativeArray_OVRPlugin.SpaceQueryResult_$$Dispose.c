/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Dispose
ENTRY_POINT: 0419fe28
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Dispose(void)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x19;
  int unaff_w20;
  
  FUN_055097d4();
  iVar1 = *(int *)(unaff_x19 + 0x18) + -1;
  *(int *)(unaff_x19 + 0x18) = iVar1;
  if (iVar1 - unaff_w20 != 0 && unaff_w20 <= iVar1) {
    FUN_0550b264(*(undefined8 *)(unaff_x19 + 0x10),unaff_w20 + 1,*(undefined8 *)(unaff_x19 + 0x10),
                 unaff_w20,iVar1 - unaff_w20,0);
  }
  lVar3 = *(long *)(unaff_x19 + 0x10);
  if (lVar3 != 0) {
    if (*(uint *)(unaff_x19 + 0x18) < *(uint *)(lVar3 + 0x18)) {
      lVar3 = lVar3 + (long)(int)*(uint *)(unaff_x19 + 0x18) * 0x10;
      puVar2 = (undefined8 *)(lVar3 + 0x20);
      *puVar2 = 0;
      *(undefined8 *)(lVar3 + 0x28) = 0;
      LeanTween__value(puVar2,0);
      *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_02d96868();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


