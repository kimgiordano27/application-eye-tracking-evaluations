/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$set_Item
ENTRY_POINT: 054dc14c
PROGRAM: MRTraveler-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__set_Item
               (undefined8 param_1,long param_2,uint param_3,uint param_4,long param_5)

{
  int iVar1;
  uint in_w8;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  if (param_3 < in_w8) {
    lVar4 = unaff_x20 + (long)(int)param_3 * 0x18;
    uVar3 = *(undefined8 *)(lVar4 + 0x30);
    uVar8 = *(undefined8 *)(lVar4 + 0x28);
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
    if (param_4 < in_w8) {
      lVar5 = unaff_x20 + (long)(int)param_4 * 0x18;
      uVar2 = *(undefined8 *)(lVar5 + 0x30);
      uVar9 = *(undefined8 *)(lVar5 + 0x28);
      uVar7 = *(undefined8 *)(lVar5 + 0x20);
      if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03c8fb30();
      }
      if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
        FUN_03cf1244();
      }
      in_stack_000000a0 = uVar7;
      in_stack_000000a8 = uVar9;
      in_stack_000000b0 = uVar2;
      in_stack_000000c0 = uVar6;
      in_stack_000000c8 = uVar8;
      in_stack_000000d0 = uVar3;
      iVar1 = (**(code **)(param_2 + 0x18))
                        (*(undefined8 *)(param_2 + 0x40),&stack0x000000c0,&stack0x000000a0,
                         *(undefined8 *)(param_2 + 0x28));
      if (iVar1 < 1) {
        return;
      }
      if (param_3 < *(uint *)(unaff_x20 + 0x18)) {
        in_stack_000000d0 = *(undefined8 *)(lVar4 + 0x30);
        in_stack_000000c8 = *(undefined8 *)(lVar4 + 0x28);
        in_stack_000000c0 = *(undefined8 *)(lVar4 + 0x20);
        if (param_4 < *(uint *)(unaff_x20 + 0x18)) {
          uVar6 = *(undefined8 *)(lVar5 + 0x28);
          uVar3 = *(undefined8 *)(lVar5 + 0x20);
          *(undefined8 *)(lVar4 + 0x30) = *(undefined8 *)(lVar5 + 0x30);
          *(undefined8 *)(lVar4 + 0x28) = uVar6;
          *(undefined8 *)(lVar4 + 0x20) = uVar3;
          if (param_4 < *(uint *)(unaff_x20 + 0x18)) {
            *(undefined8 *)(lVar5 + 0x30) = in_stack_000000d0;
            *(undefined8 *)(lVar5 + 0x28) = in_stack_000000c8;
            *(undefined8 *)(lVar5 + 0x20) = in_stack_000000c0;
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03c8fb38();
}


