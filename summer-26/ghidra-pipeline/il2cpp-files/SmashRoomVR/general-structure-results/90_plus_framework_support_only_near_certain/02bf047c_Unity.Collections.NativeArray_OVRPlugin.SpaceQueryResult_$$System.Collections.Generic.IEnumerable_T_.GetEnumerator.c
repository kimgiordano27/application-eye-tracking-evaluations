/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 02bf047c
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


long Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
               (long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  ulong uVar8;
  
  FUN_02bef4b0(param_2,*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x110));
  if (0 < *(int *)(unaff_x21 + 0x18)) {
    lVar7 = 0;
    uVar8 = 0;
    do {
      lVar5 = *(long *)(unaff_x21 + 0x10);
      if (lVar5 == 0) goto LAB_02bf0578;
      if (*(uint *)(lVar5 + 0x18) <= uVar8) {
LAB_02bf057c:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      if (unaff_x20 == 0) goto LAB_02bf0578;
      uVar4 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar5 + lVar7 + 0x20),
                         *(undefined8 *)(lVar5 + lVar7 + 0x28),*(undefined8 *)(unaff_x20 + 0x28));
      if ((uVar4 & 1) != 0) {
        lVar5 = *(long *)(unaff_x21 + 0x10);
        if (lVar5 == 0) goto LAB_02bf0578;
        if (*(uint *)(lVar5 + 0x18) <= uVar8) goto LAB_02bf057c;
        if (param_2 == 0) {
LAB_02bf0578:
                    /* WARNING: Subroutine does not return */
          FUN_01b48178();
        }
        uVar1 = *(undefined8 *)(lVar5 + lVar7 + 0x20);
        uVar2 = *(undefined8 *)(lVar5 + lVar7 + 0x28);
        lVar5 = *(long *)(param_2 + 0x10);
        lVar6 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x80);
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar5 == 0) goto LAB_02bf0578;
        uVar3 = *(uint *)(param_2 + 0x18);
        if (uVar3 < *(uint *)(lVar5 + 0x18)) {
          lVar5 = lVar5 + (long)(int)uVar3 * 0x10;
          *(uint *)(param_2 + 0x18) = uVar3 + 1;
          *(undefined8 *)(lVar5 + 0x20) = uVar1;
          *(undefined8 *)(lVar5 + 0x28) = uVar2;
        }
        else {
          FUN_02befd18(param_2,uVar1,uVar2,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
      }
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((long)uVar8 < (long)*(int *)(unaff_x21 + 0x18));
  }
  return param_2;
}


