/*
FUNCTION_NAME: System.Array$$InternalArray__get_Item<OVRPlugin.BoneCapsule>
ENTRY_POINT: 0102e5f0
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 * System_Array__InternalArray__get_Item<OVRPlugin_BoneCapsule>(long param_1)

{
  uint uVar1;
  short sVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 *unaff_x20;
  ulong uVar5;
  long in_stack_00000008;
  undefined8 in_stack_00000010;
  ushort uStack0000000000000018;
  undefined2 uStack000000000000001a;
  
  if (param_1 == 0) {
    unaff_x20 = malloc(0x20);
    *(undefined2 *)(unaff_x20 + 2) = uStack000000000000001a;
    *(uint *)((long)unaff_x20 + 0x14) = (uint)uStack0000000000000018;
    *unaff_x20 = 0;
    unaff_x20[1] = in_stack_00000010;
    if (in_stack_00000008 != 0) {
      uVar3 = FUN_00ffb010();
      *unaff_x20 = uVar3;
    }
    sVar2 = FUN_00ffb230();
    uVar1 = (uint)sVar2;
    pvVar4 = malloc(-(ulong)(uVar1 + 1 >> 0x1f) & 0xfffffff800000000 | (ulong)(uVar1 + 1) << 3);
    unaff_x20[3] = pvVar4;
    if (0 < (int)uVar1) {
      uVar5 = 0;
      do {
        uVar3 = FUN_00ffb100();
        uVar3 = FUN_0102b0e0(uVar3,1);
        *(undefined8 *)(unaff_x20[3] + uVar5 * 8) = uVar3;
        uVar5 = uVar5 + 1;
      } while (uVar1 != uVar5);
      pvVar4 = (void *)unaff_x20[3];
    }
    *(undefined8 *)((long)pvVar4 + (long)(int)uVar1 * 8) = 0;
    FUN_010440a0();
  }
  return unaff_x20;
}


