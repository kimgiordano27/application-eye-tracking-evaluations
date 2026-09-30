/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$get_Length
ENTRY_POINT: 05f185e8
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__get_Length
               (long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 *puVar4;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w23;
  int unaff_w24;
  uint unaff_w25;
  undefined8 unaff_x26;
  uint uVar5;
  undefined8 uVar6;
  int unaff_w28;
  int unaff_w29;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  do {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if ((*(byte *)(param_2 + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    uVar1 = (**(code **)(unaff_x22 + 0x18))
                      (*(undefined8 *)(unaff_x22 + 0x40),unaff_x26,uVar6,
                       *(undefined8 *)(unaff_x22 + 0x28));
    unaff_w25 = unaff_w25 | uVar1 >> 0x1f;
    uVar1 = unaff_w23;
    do {
      unaff_w23 = unaff_w25;
      uVar5 = unaff_w28 + unaff_w23;
      if (*(uint *)(unaff_x19 + 0x18) <= uVar5) goto LAB_05f186d8;
      puVar4 = (undefined8 *)(unaff_x19 + (long)(int)uVar5 * 8 + 0x20);
      uVar6 = *puVar4;
      if (unaff_x22 == 0) goto LAB_05f186dc;
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      iVar2 = (**(code **)(unaff_x22 + 0x18))
                        (*(undefined8 *)(unaff_x22 + 0x40),in_stack_00000008,uVar6,
                         *(undefined8 *)(unaff_x22 + 0x28));
      if (-1 < iVar2) {
        uVar5 = unaff_w28 + uVar1;
LAB_05f1869c:
        if (uVar5 < *(uint *)(unaff_x19 + 0x18)) {
          puVar4 = (undefined8 *)(unaff_x19 + (long)(int)uVar5 * 8 + 0x20);
          *puVar4 = in_stack_00000008;
          thunk_FUN_044bb4b4(puVar4,0);
          return;
        }
        goto LAB_05f186d8;
      }
      if ((*(uint *)(unaff_x19 + 0x18) <= uVar5) ||
         (*(uint *)(unaff_x19 + 0x18) <= unaff_w28 + uVar1)) goto LAB_05f186d8;
      puVar3 = (undefined8 *)(unaff_x19 + (long)(int)(unaff_w28 + uVar1) * 8 + 0x20);
      *puVar3 = *puVar4;
      thunk_FUN_044bb4b4(puVar3,0);
      if (unaff_w29 < (int)unaff_w23) goto LAB_05f1869c;
      unaff_w25 = unaff_w23 * 2;
      uVar1 = unaff_w23;
    } while (unaff_w24 <= (int)unaff_w25);
    uVar1 = unaff_w25 + in_stack_00000000._4_4_;
    if ((*(uint *)(unaff_x19 + 0x18) <= uVar1 - 1) || (*(uint *)(unaff_x19 + 0x18) <= uVar1)) {
LAB_05f186d8:
                    /* WARNING: Subroutine does not return */
      FUN_04447e4c();
    }
    if (unaff_x22 == 0) {
LAB_05f186dc:
                    /* WARNING: Subroutine does not return */
      FUN_04447e44();
    }
    param_2 = *(long *)(unaff_x21 + 0x20);
    param_1 = unaff_x19 + (long)(int)uVar1 * 8;
    unaff_x26 = *(undefined8 *)(unaff_x19 + (long)(int)(uVar1 - 1) * 8 + 0x20);
  } while( true );
}


