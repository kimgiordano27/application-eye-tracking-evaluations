/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$CopyFrom
ENTRY_POINT: 05f19950
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint Unity_Collections_NativeArray<OVRPlugin_Vector2f>__CopyFrom(code *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  uint unaff_w19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  uint unaff_w24;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000180;
  undefined8 in_stack_00000188;
  undefined8 in_stack_00000190;
  undefined8 in_stack_00000198;
  undefined8 in_stack_000001a0;
  undefined8 in_stack_000001a8;
  undefined8 uStack00000000000001c0;
  undefined8 uStack00000000000001c8;
  undefined8 uStack00000000000001d0;
  undefined8 uStack00000000000001d8;
  undefined8 uStack00000000000001e0;
  undefined8 uStack00000000000001e8;
  
  while( true ) {
    uStack00000000000001c8 = in_stack_00000008;
    uStack00000000000001c0 = in_stack_00000000;
    uStack00000000000001d8 = in_stack_00000018;
    uStack00000000000001d0 = in_stack_00000010;
    uStack00000000000001e8 = in_stack_00000028;
    uStack00000000000001e0 = in_stack_00000020;
    iVar1 = (*param_1)(param_2,&stack0x00000200,&stack0x000001c0,*(undefined8 *)(unaff_x22 + 0x28));
    if (-1 < iVar1) {
                    /* try { // try from 05f1997c to 06019983 has its CatchHandler @ 05f19a28 */
      if ((int)unaff_w24 <= (int)unaff_w19) {
        lVar2 = *(long *)(unaff_x21 + 0x20);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_04481fb8();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
        if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_04481fb8();
        }
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        FUN_05f19238();
        return unaff_w19;
      }
      lVar2 = *(long *)(unaff_x21 + 0x20);
                    /* try { // try from 05f19984 to 060199ff has its CatchHandler @ 05f19758 */
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04481fb8();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_04481fb8();
      }
      if (*(int *)(lVar2 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
        FUN_04481fb8();
      }
      FUN_05f19238();
      do {
        unaff_w19 = unaff_w19 + 1;
        if (*(uint *)(unaff_x20 + 0x18) <= unaff_w19) goto LAB_05f19a40;
        if (unaff_x22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_04447e44();
        }
        if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
          FUN_04481fb8();
        }
        uStack00000000000001c8 = in_stack_00000188;
        uStack00000000000001c0 = in_stack_00000180;
        uStack00000000000001d8 = in_stack_00000198;
        uStack00000000000001d0 = in_stack_00000190;
        uStack00000000000001e8 = in_stack_000001a8;
        uStack00000000000001e0 = in_stack_000001a0;
        iVar1 = (**(code **)(unaff_x22 + 0x18))
                          (*(undefined8 *)(unaff_x22 + 0x40),&stack0x00000200,&stack0x000001c0,
                           *(undefined8 *)(unaff_x22 + 0x28));
      } while (iVar1 < 0);
    }
    unaff_w24 = unaff_w24 - 1;
    if (*(uint *)(unaff_x20 + 0x18) <= unaff_w24) break;
    lVar2 = unaff_x20 + (long)(int)unaff_w24 * 0x40;
    in_stack_00000028 = *(undefined8 *)(lVar2 + 0x48);
    in_stack_00000020 = *(undefined8 *)(lVar2 + 0x40);
    in_stack_00000008 = *(undefined8 *)(lVar2 + 0x28);
    in_stack_00000000 = *(undefined8 *)(lVar2 + 0x20);
    in_stack_00000018 = *(undefined8 *)(lVar2 + 0x38);
    in_stack_00000010 = *(undefined8 *)(lVar2 + 0x30);
    if ((*(byte *)(*(long *)(unaff_x21 + 0x20) + 0x135) & 1) == 0) {
      FUN_04481fb8();
    }
    param_1 = *(code **)(unaff_x22 + 0x18);
    param_2 = *(undefined8 *)(unaff_x22 + 0x40);
  }
LAB_05f19a40:
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


