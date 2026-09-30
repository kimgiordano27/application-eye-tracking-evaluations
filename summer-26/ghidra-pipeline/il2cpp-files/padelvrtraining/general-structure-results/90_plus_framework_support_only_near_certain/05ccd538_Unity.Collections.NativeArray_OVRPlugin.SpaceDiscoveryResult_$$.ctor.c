/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 05ccd538
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor
               (long param_1,undefined8 *param_2,undefined8 param_3,byte param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  
  puVar2 = PTR_DAT_091f9360;
  if ((DAT_0983d4e4 & 1) == 0) {
    FUN_03d2d2b0(PTR_DAT_091fcb48);
    FUN_03d2d2b0(PTR_DAT_091f9360);
    DAT_0983d4e4 = 1;
  }
  in_stack_00000060 = param_2[2];
  in_stack_00000058 = param_2[1];
  in_stack_00000050 = *param_2;
  FUN_060921c8(&stack0x00000038,&stack0x00000050,*(undefined8 *)puVar2);
  puVar3 = PTR_DAT_091fcb48;
  in_stack_00000058 = in_stack_00000040;
  in_stack_00000050 = in_stack_00000038;
  in_stack_00000060 = in_stack_00000048;
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0xc0) = in_stack_00000048;
    *(undefined8 *)(param_1 + 0xb8) = in_stack_00000040;
    *(undefined8 *)(param_1 + 0xb0) = in_stack_00000038;
    thunk_FUN_03d1023c(param_1 + 0xb0,0);
    uVar6 = param_2[1];
    uVar5 = *param_2;
    puVar1 = (undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0x100) = param_2[2];
    *(undefined8 *)(param_1 + 0xf8) = uVar6;
    *(undefined8 *)(param_1 + 0xf0) = uVar5;
    thunk_FUN_03d1023c(puVar1,0);
    uVar4 = FUN_06093334(puVar1,*(undefined8 *)puVar3);
    if ((uVar4 & 1) != 0) {
      in_stack_00000060 = *(undefined8 *)(param_1 + 0x100);
      in_stack_00000058 = *(undefined8 *)(param_1 + 0xf8);
      in_stack_00000050 = *puVar1;
      FUN_060921c8(&stack0x00000038,&stack0x00000050,*(undefined8 *)puVar2);
      FUN_07f094ec();
    }
    *(undefined8 *)(param_1 + 0x108) = param_3;
    thunk_FUN_03d1023c(param_1 + 0x108,param_3);
    *(byte *)(param_1 + 0x110) = param_4 & 1;
    *(undefined8 *)(param_1 + 0x118) = param_5;
    thunk_FUN_03d1023c(param_1 + 0x118,param_5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


