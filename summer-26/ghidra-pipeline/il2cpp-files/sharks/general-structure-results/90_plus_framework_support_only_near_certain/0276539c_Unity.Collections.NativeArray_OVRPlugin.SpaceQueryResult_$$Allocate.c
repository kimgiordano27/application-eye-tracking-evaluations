/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceQueryResult>$$Allocate
ENTRY_POINT: 0276539c
PROGRAM: sharks-libil2cpp.so
SCORE: 103
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__Allocate
               (undefined8 param_1,long param_2,undefined8 param_3,uint param_4,long param_5)

{
  int iVar1;
  uint in_w8;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x19;
  uint unaff_w21;
  long unaff_x24;
  long unaff_x25;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack0000000000000080;
  undefined8 uStack0000000000000088;
  undefined8 uStack0000000000000090;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  uVar3 = *(undefined8 *)(unaff_x25 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x25 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x25 + 0x20);
  uStack0000000000000080 = uVar5;
  uStack0000000000000088 = uVar7;
  uStack0000000000000090 = uVar3;
  if (param_4 < in_w8) {
    lVar4 = unaff_x19 + (long)(int)param_4 * 0x18;
    uVar2 = *(undefined8 *)(lVar4 + 0x30);
    uVar8 = *(undefined8 *)(lVar4 + 0x28);
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if ((*(byte *)(*(long *)(param_5 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    in_stack_000000a0 = uVar6;
    in_stack_000000a8 = uVar8;
    in_stack_000000b0 = uVar2;
    in_stack_000000c0 = uVar5;
    in_stack_000000c8 = uVar7;
    in_stack_000000d0 = uVar3;
    iVar1 = (**(code **)(param_2 + 0x18))
                      (*(undefined8 *)(param_2 + 0x40),&stack0x000000c0,&stack0x000000a0,
                       *(undefined8 *)(param_2 + 0x28));
    if (iVar1 < 1) {
      return;
    }
    if (unaff_w21 < *(uint *)(unaff_x19 + 0x18)) {
      in_stack_000000d0 = *(undefined8 *)(unaff_x25 + 0x30);
      in_stack_000000c8 = *(undefined8 *)(unaff_x25 + 0x28);
      in_stack_000000c0 = *(undefined8 *)(unaff_x25 + 0x20);
      if (param_4 < *(uint *)(unaff_x19 + 0x18)) {
        uVar5 = *(undefined8 *)(lVar4 + 0x28);
        uVar3 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 *)(unaff_x25 + 0x30) = *(undefined8 *)(lVar4 + 0x30);
        *(undefined8 *)(unaff_x25 + 0x28) = uVar5;
        *(undefined8 *)(unaff_x25 + 0x20) = uVar3;
        thunk_FUN_0188fd20(unaff_x19 + unaff_x24 * 0x18 + 0x20,0);
        if (param_4 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(lVar4 + 0x30) = in_stack_000000d0;
          *(undefined8 *)(lVar4 + 0x28) = in_stack_000000c8;
          *(undefined8 *)(lVar4 + 0x20) = in_stack_000000c0;
          thunk_FUN_0188fd20(unaff_x19 + (long)(int)param_4 * 0x18 + 0x20,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


