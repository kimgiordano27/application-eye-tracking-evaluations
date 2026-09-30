/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$CopySafe
ENTRY_POINT: 017d11ec
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>__CopySafe(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  long lVar5;
  ulong unaff_x24;
  
  while (param_1 != 0) {
    if (*(uint *)(param_1 + 0x18) <= unaff_x24) {
LAB_017d128c:
                    /* WARNING: Subroutine does not return */
      FUN_00fdc53c();
    }
    if (unaff_x22 == 0) break;
    uVar3 = *(undefined8 *)(param_1 + unaff_x23 * 8);
    lVar4 = *(long *)(unaff_x22 + 0x10);
    *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    lVar5 = unaff_x23;
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      *(undefined8 *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
    }
    else {
      FUN_017d0a5c();
    }
    do {
      unaff_x23 = lVar5 + 1;
      if ((long)*(int *)(unaff_x21 + 0x18) <= lVar5 + -3) {
        return;
      }
      lVar4 = *(long *)(unaff_x21 + 0x10);
      if (lVar4 == 0) goto LAB_017d1288;
      unaff_x24 = lVar5 - 3;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x24) goto LAB_017d128c;
      if (unaff_x20 == 0) goto LAB_017d1288;
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar4 + unaff_x23 * 8),
                         *(undefined8 *)(unaff_x20 + 0x28));
      lVar5 = unaff_x23;
    } while ((uVar2 & 1) == 0);
    param_1 = *(long *)(unaff_x21 + 0x10);
  }
LAB_017d1288:
                    /* WARNING: Subroutine does not return */
  FUN_00fdc534();
}


