/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$.ctor
ENTRY_POINT: 05ea3cd0
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>___ctor(int param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  int iVar4;
  long unaff_x22;
  ulong uVar5;
  
  *(long *)(unaff_x19 + 0x10) = unaff_x22 - param_1;
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38))
                      (*(long *)(unaff_x19 + 0x20),*(undefined8 *)(unaff_x19 + 0x10));
    *(undefined4 *)(unaff_x19 + 0x18) = uVar1;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      uVar5 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28) - *(long *)(unaff_x19 + 0x10);
      uVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x20))();
      iVar4 = (int)uVar5;
      if ((0 < iVar4) && ((uVar2 & 1) != 0)) {
        if (unaff_x21 == 0) goto LAB_05ea3dd0;
        if (0 < (int)*(ulong *)(unaff_x21 + 0x18)) {
          uVar2 = 0;
          uVar3 = *(ulong *)(unaff_x21 + 0x18) & 0xffffffff;
          do {
            if (uVar3 <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05ea3dd0;
            (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48))
                      (*(long *)(unaff_x19 + 0x20),*(undefined8 *)(unaff_x21 + 0x20 + uVar2 * 8),
                       (long)*(int *)(unaff_x19 + 0x18),uVar5 & 0xffffffff);
            uVar3 = (ulong)*(uint *)(unaff_x21 + 0x18);
            uVar2 = uVar2 + 1;
          } while ((long)uVar2 < (long)(int)*(uint *)(unaff_x21 + 0x18));
        }
      }
      *(long *)(unaff_x19 + 0x10) = *(long *)(unaff_x19 + 0x10) + (long)iVar4;
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        uVar1 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38))()
        ;
        *(undefined4 *)(unaff_x19 + 0x18) = uVar1;
        return;
      }
    }
  }
LAB_05ea3dd0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


