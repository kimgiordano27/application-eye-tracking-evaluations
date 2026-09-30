/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$set_Item
ENTRY_POINT: 05f18654
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__set_Item
               (code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  int unaff_w24;
  uint unaff_w25;
  uint uVar4;
  undefined8 uVar5;
  uint unaff_w27;
  undefined8 uVar6;
  int unaff_w28;
  int unaff_w29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  while (uVar4 = unaff_w25, iVar2 = (*param_1)(param_2,param_3,param_4,param_5), iVar2 < 0) {
    if ((*(uint *)(unaff_x19 + 0x18) <= unaff_w27) ||
       (*(uint *)(unaff_x19 + 0x18) <= unaff_w28 + unaff_w23)) goto LAB_05f186d8;
    puVar3 = (undefined8 *)(unaff_x19 + (long)(int)(unaff_w28 + unaff_w23) * 8 + 0x20);
    *puVar3 = *unaff_x20;
    thunk_FUN_044bb4b4(puVar3,0);
    if (unaff_w29 < (int)uVar4) goto LAB_05f1869c;
    unaff_w25 = uVar4 * 2;
    if ((int)unaff_w25 < unaff_w24) {
      uVar1 = unaff_w25 + in_stack_00000000._4_4_;
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar1 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar1))
      goto LAB_05f186d8;
      if (unaff_x22 == 0) goto LAB_05f186dc;
      uVar5 = *(undefined8 *)(unaff_x19 + (long)(int)(uVar1 - 1) * 8 + 0x20);
      uVar6 = *(undefined8 *)(unaff_x19 + (long)(int)uVar1 * 8 + 0x20);
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      uVar1 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),uVar5,uVar6,
                         *(undefined8 *)(unaff_x22 + 0x28));
      unaff_w25 = unaff_w25 | uVar1 >> 0x1f;
    }
    unaff_w27 = unaff_w28 + unaff_w25;
    if (*(uint *)(unaff_x19 + 0x18) <= unaff_w27) goto LAB_05f186d8;
    unaff_x20 = (undefined8 *)(unaff_x19 + (long)(int)unaff_w27 * 8 + 0x20);
    param_4 = *unaff_x20;
    if (unaff_x22 == 0) {
LAB_05f186dc:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    param_1 = *(code **)(unaff_x22 + 0x18);
    param_2 = *(undefined8 *)(unaff_x22 + 0x40);
    param_5 = *(undefined8 *)(unaff_x22 + 0x28);
    param_3 = in_stack_00000008;
    unaff_w23 = uVar4;
  }
  unaff_w27 = unaff_w28 + unaff_w23;
LAB_05f1869c:
  if (unaff_w27 < *(uint *)(unaff_x19 + 0x18)) {
    puVar3 = (undefined8 *)(unaff_x19 + (long)(int)unaff_w27 * 8 + 0x20);
    *puVar3 = in_stack_00000008;
    thunk_FUN_044bb4b4(puVar3,0);
    return;
  }
LAB_05f186d8:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


