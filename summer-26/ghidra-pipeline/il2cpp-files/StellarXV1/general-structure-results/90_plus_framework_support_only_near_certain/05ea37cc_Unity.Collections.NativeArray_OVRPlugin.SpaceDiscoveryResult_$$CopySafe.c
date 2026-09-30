/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 05ea37cc
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 115
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_10;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe
               (long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  lVar5 = *(long *)(param_2 + 0x28);
  iVar1 = FUN_064c43e8(param_2,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x10));
  if (iVar1 < lVar5) {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if (lVar5 == 0) goto LAB_05ea38f0;
    lVar6 = *(long *)(lVar5 + 0x28);
    iVar1 = FUN_064c43e8(lVar5,*(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x10)
                        );
    *(long *)(unaff_x19 + 0x10) = lVar6 - iVar1;
  }
  if (*(long *)(unaff_x19 + 0x20) != 0) {
    uVar2 = FUN_064c4400(*(long *)(unaff_x19 + 0x20),*(undefined8 *)(unaff_x19 + 0x10),
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38));
    *(undefined4 *)(unaff_x19 + 0x18) = uVar2;
    if (*(long *)(unaff_x19 + 0x20) != 0) {
      uVar7 = *(long *)(*(long *)(unaff_x19 + 0x20) + 0x28) - *(long *)(unaff_x19 + 0x10);
      uVar3 = FUN_05ea357c();
      iVar1 = (int)uVar7;
      if ((0 < iVar1) && ((uVar3 & 1) != 0)) {
        if (unaff_x21 == 0) goto LAB_05ea38f0;
        if (0 < (int)*(ulong *)(unaff_x21 + 0x18)) {
          uVar3 = 0;
          uVar4 = *(ulong *)(unaff_x21 + 0x18) & 0xffffffff;
          do {
            if (uVar4 <= uVar3) {
                    /* WARNING: Subroutine does not return */
              FUN_04077838();
            }
            if (*(long *)(unaff_x19 + 0x20) == 0) goto LAB_05ea38f0;
            FUN_064c46a4(*(long *)(unaff_x19 + 0x20),*(undefined8 *)(unaff_x21 + 0x20 + uVar3 * 8),
                         (long)*(int *)(unaff_x19 + 0x18),uVar7 & 0xffffffff,
                         *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x48));
            uVar4 = (ulong)*(uint *)(unaff_x21 + 0x18);
            uVar3 = uVar3 + 1;
          } while ((long)uVar3 < (long)(int)*(uint *)(unaff_x21 + 0x18));
        }
      }
      lVar5 = *(long *)(unaff_x19 + 0x10) + (long)iVar1;
      *(long *)(unaff_x19 + 0x10) = lVar5;
      if (*(long *)(unaff_x19 + 0x20) != 0) {
        uVar2 = FUN_064c4400(*(long *)(unaff_x19 + 0x20),lVar5,
                             *(undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x38));
        *(undefined4 *)(unaff_x19 + 0x18) = uVar2;
        return;
      }
    }
  }
LAB_05ea38f0:
                    /* WARNING: Subroutine does not return */
  FUN_04077830();
}


