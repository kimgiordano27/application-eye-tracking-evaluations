/*
FUNCTION_NAME: System.Array$$InternalArray__Insert<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 057ca2c4
PROGRAM: Hyper-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__InternalArray__Insert<OVRPlugin_SpaceDiscoveryResult>
               (undefined8 *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  undefined8 uStack0000000000000020;
  undefined8 uStack0000000000000028;
  undefined8 uStack0000000000000030;
  
  uStack0000000000000030 = 0;
  uStack0000000000000018 = 0;
  uStack0000000000000010 = 0;
  uStack0000000000000028 = 0;
  uStack0000000000000020 = 0;
  uStack0000000000000008 = 0;
  uStack0000000000000000 = 0;
  uVar1 = FUN_08d948e8(param_2,0);
  if (param_3 < uVar1) {
    memcpy(&stack0x00000000,
           (void *)((long)param_2 + (ulong)*(uint *)(*param_2 + 0x104) * (long)(int)param_3 + 0x20),
           (ulong)*(uint *)(*param_2 + 0x104));
    param_1[5] = uStack0000000000000028;
    param_1[4] = uStack0000000000000020;
    param_1[1] = uStack0000000000000008;
    *param_1 = uStack0000000000000000;
    param_1[3] = uStack0000000000000018;
    param_1[2] = uStack0000000000000010;
    param_1[6] = uStack0000000000000030;
    return;
  }
  thunk_FUN_049ae08c(&DAT_0ae8ed80);
  uVar2 = thunk_FUN_04983f60();
  uVar3 = thunk_FUN_049ae08c(&DAT_0af5c5a0);
  FUN_08cc57b4(uVar2,uVar3,0);
                    /* WARNING: Subroutine does not return */
  FUN_04948050(uVar2,param_4);
}


