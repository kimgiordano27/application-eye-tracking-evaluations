/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 02bf0508
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int in_w10;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  ulong unaff_x24;
  
  while( true ) {
    *(int *)(unaff_x22 + 0x1c) = in_w10;
    if (param_1 == 0) break;
    uVar1 = *(uint *)(unaff_x22 + 0x18);
    if (uVar1 < *(uint *)(param_1 + 0x18)) {
      param_1 = param_1 + (long)(int)uVar1 * 0x10;
      *(uint *)(unaff_x22 + 0x18) = uVar1 + 1;
      *(undefined8 *)(param_1 + 0x20) = param_3;
      *(undefined8 *)(param_1 + 0x28) = param_4;
    }
    else {
      FUN_02befd18();
    }
    do {
      unaff_x24 = unaff_x24 + 1;
      unaff_x23 = unaff_x23 + 0x10;
      if ((long)*(int *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
        return;
      }
      lVar3 = *(long *)(unaff_x21 + 0x10);
      if (lVar3 == 0) goto LAB_02bf0578;
      if (*(uint *)(lVar3 + 0x18) <= unaff_x24) goto LAB_02bf057c;
      if (unaff_x20 == 0) goto LAB_02bf0578;
      uVar2 = (**(code **)(unaff_x20 + 0x18))
                        (*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(lVar3 + unaff_x23 + 0x20)
                         ,*(undefined8 *)(lVar3 + unaff_x23 + 0x28),
                         *(undefined8 *)(unaff_x20 + 0x28));
    } while ((uVar2 & 1) == 0);
    lVar3 = *(long *)(unaff_x21 + 0x10);
    if (lVar3 == 0) break;
    if (*(uint *)(lVar3 + 0x18) <= unaff_x24) {
LAB_02bf057c:
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    if (unaff_x22 == 0) break;
    param_3 = *(undefined8 *)(lVar3 + unaff_x23 + 0x20);
    param_4 = *(undefined8 *)(lVar3 + unaff_x23 + 0x28);
    param_1 = *(long *)(unaff_x22 + 0x10);
    in_w10 = *(int *)(unaff_x22 + 0x1c) + 1;
  }
LAB_02bf0578:
                    /* WARNING: Subroutine does not return */
  FUN_01b48178();
}


