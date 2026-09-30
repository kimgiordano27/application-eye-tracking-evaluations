/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$ToArray
ENTRY_POINT: 02342558
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_8;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ToArray(void)

{
  long lVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined4 unaff_w21;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  FUN_02342cc0();
  *(undefined4 *)(unaff_x20 + 0x18) = unaff_w21;
  uVar7 = unaff_x19[3];
  uVar6 = unaff_x19[2];
  uVar3 = unaff_x19[5];
  uVar2 = unaff_x19[4];
  uVar5 = unaff_x19[1];
  uVar4 = *unaff_x19;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01d7db70();
  }
  if ((uint)unaff_x22 < *(uint *)(lVar1 + 0x18)) {
    lVar1 = lVar1 + unaff_x22 * 0x38;
    *(undefined8 *)(lVar1 + 0x50) = unaff_x19[6];
    *(undefined8 *)(lVar1 + 0x38) = uVar7;
    *(undefined8 *)(lVar1 + 0x30) = uVar6;
    *(undefined8 *)(lVar1 + 0x48) = uVar3;
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
    *(undefined8 *)(lVar1 + 0x28) = uVar5;
    *(undefined8 *)(lVar1 + 0x20) = uVar4;
    thunk_FUN_01e10808(lVar1 + 0x20,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01d7db78();
}


