/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 02342650
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 97
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


int Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
              (long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long in_x9;
  undefined8 uVar3;
  long lVar4;
  long unaff_x19;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_1 != in_x9) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7df0c();
  }
  puVar2 = (undefined8 *)thunk_FUN_01de290c();
  uVar3 = puVar2[6];
  uVar8 = puVar2[3];
  uVar7 = puVar2[2];
  uVar6 = puVar2[5];
  uVar5 = puVar2[4];
  uVar10 = puVar2[1];
  uVar9 = *puVar2;
  lVar4 = *(long *)(unaff_x19 + 0x10);
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  if (lVar4 != 0) {
    uVar1 = *(uint *)(unaff_x19 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x19 + 0x18) = uVar1 + 1;
      lVar4 = lVar4 + (long)(int)uVar1 * 0x38;
      *(undefined8 *)(lVar4 + 0x38) = uVar8;
      *(undefined8 *)(lVar4 + 0x30) = uVar7;
      *(undefined8 *)(lVar4 + 0x48) = uVar6;
      *(undefined8 *)(lVar4 + 0x40) = uVar5;
      *(undefined8 *)(lVar4 + 0x50) = uVar3;
      *(undefined8 *)(lVar4 + 0x28) = uVar10;
      *(undefined8 *)(lVar4 + 0x20) = uVar9;
      thunk_FUN_01e10808(lVar4 + 0x20,0);
    }
    else {
      FUN_02342528();
    }
    return *(int *)(unaff_x19 + 0x18) + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db70();
}


