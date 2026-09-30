/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 017d13a0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 100
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(void)

{
  int iVar1;
  int in_w8;
  int iVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  ulong uVar4;
  
  if (0 < in_w8) {
    iVar1 = *(int *)(unaff_x20 + 0x1c);
    uVar4 = 0;
    iVar2 = iVar1;
    do {
      if (iVar1 != iVar2) break;
      lVar3 = *(long *)(unaff_x20 + 0x10);
      if (lVar3 == 0) {
LAB_017d142c:
                    /* WARNING: Subroutine does not return */
        FUN_00fdc534();
      }
      if (*(uint *)(lVar3 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00fdc53c();
      }
      if (unaff_x19 == 0) goto LAB_017d142c;
      (**(code **)(unaff_x19 + 0x18))
                (*(undefined8 *)(unaff_x19 + 0x40),*(undefined8 *)(lVar3 + uVar4 * 8 + 0x20),
                 *(undefined8 *)(unaff_x19 + 0x28));
      iVar2 = *(int *)(unaff_x20 + 0x1c);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)*(int *)(unaff_x20 + 0x18));
    if (iVar1 != iVar2) {
      FUN_01d69138(0);
      return;
    }
  }
  return;
}


