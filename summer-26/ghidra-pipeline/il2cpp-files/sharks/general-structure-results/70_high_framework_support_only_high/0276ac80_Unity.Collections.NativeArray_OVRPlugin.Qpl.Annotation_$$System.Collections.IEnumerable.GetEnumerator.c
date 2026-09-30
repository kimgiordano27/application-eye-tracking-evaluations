/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Qpl.Annotation>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 0276ac80
PROGRAM: sharks-libil2cpp.so
SCORE: 83
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
               (undefined1 param_1 [16],undefined8 param_2,long param_3,undefined8 param_4,
               uint param_5,long param_6)

{
  int iVar1;
  uint in_w8;
  undefined8 uVar2;
  undefined8 in_x9;
  long unaff_x19;
  uint unaff_w20;
  uint unaff_w21;
  long unaff_x24;
  long unaff_x25;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack0000000000000080;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined8 in_stack_000000d0;
  
  uVar5 = param_1._0_8_;
  uStack0000000000000080 = uVar5;
  if (param_5 < in_w8) {
    lVar3 = unaff_x19 + (long)(int)unaff_w20 * 0x18;
    uVar2 = *(undefined8 *)(lVar3 + 0x30);
    uVar6 = *(undefined8 *)(lVar3 + 0x28);
    uVar4 = *(undefined8 *)(lVar3 + 0x20);
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_017fc5a8();
    }
    if ((*(byte *)(*(long *)(param_6 + 0x20) + 0x135) & 1) == 0) {
      FUN_0185daa4();
    }
    in_stack_000000a0 = uVar4;
    in_stack_000000a8 = uVar6;
    in_stack_000000b0 = uVar2;
    in_stack_000000c0 = uVar5;
    in_stack_000000c8 = param_1._8_8_;
    in_stack_000000d0 = in_x9;
    iVar1 = (**(code **)(param_3 + 0x18))
                      (*(undefined8 *)(param_3 + 0x40),&stack0x000000c0,&stack0x000000a0,
                       *(undefined8 *)(param_3 + 0x28));
    if (iVar1 < 1) {
      return;
    }
    if (unaff_w21 < *(uint *)(unaff_x19 + 0x18)) {
      in_stack_000000d0 = *(undefined8 *)(unaff_x25 + 0x30);
      in_stack_000000c8 = *(undefined8 *)(unaff_x25 + 0x28);
      in_stack_000000c0 = *(undefined8 *)(unaff_x25 + 0x20);
      if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
        uVar2 = *(undefined8 *)(lVar3 + 0x28);
        uVar5 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 *)(unaff_x25 + 0x30) = *(undefined8 *)(lVar3 + 0x30);
        *(undefined8 *)(unaff_x25 + 0x28) = uVar2;
        *(undefined8 *)(unaff_x25 + 0x20) = uVar5;
        thunk_FUN_0188fd20(unaff_x19 + unaff_x24 * 0x18 + 0x20,0);
        if (unaff_w20 < *(uint *)(unaff_x19 + 0x18)) {
          *(undefined8 *)(lVar3 + 0x30) = in_stack_000000d0;
          *(undefined8 *)(lVar3 + 0x28) = in_stack_000000c8;
          *(undefined8 *)(lVar3 + 0x20) = in_stack_000000c0;
          thunk_FUN_0188fd20(unaff_x19 + (long)(int)unaff_w20 * 0x18 + 0x20,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_017fc5b0();
}


