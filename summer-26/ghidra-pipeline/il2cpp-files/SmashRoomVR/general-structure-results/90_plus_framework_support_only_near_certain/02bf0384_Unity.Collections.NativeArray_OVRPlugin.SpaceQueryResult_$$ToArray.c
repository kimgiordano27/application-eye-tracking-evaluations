/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 02bf0384
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined1  [16]
Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ToArray(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03051bf4(8);
  }
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 == 0) goto LAB_02bf042c;
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_02bf0430:
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      if (param_2 == 0) {
LAB_02bf042c:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      uVar1 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),*(undefined8 *)(lVar4 + lVar5 + 0x20),
                         *(undefined8 *)(lVar4 + lVar5 + 0x28),*(undefined8 *)(param_2 + 0x28));
      if ((uVar1 & 1) != 0) {
        lVar4 = *(long *)(param_1 + 0x10);
        if (lVar4 == 0) goto LAB_02bf042c;
        if (*(uint *)(lVar4 + 0x18) <= (uint)uVar6) goto LAB_02bf0430;
        uVar2 = *(undefined8 *)(lVar4 + lVar5 + 0x20);
        uVar3 = *(undefined8 *)(lVar4 + lVar5 + 0x28);
        goto LAB_02bf041c;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while ((long)uVar6 < (long)*(int *)(param_1 + 0x18));
  }
  uVar2 = 0;
  uVar3 = 0;
LAB_02bf041c:
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = uVar2;
  return auVar7;
}


