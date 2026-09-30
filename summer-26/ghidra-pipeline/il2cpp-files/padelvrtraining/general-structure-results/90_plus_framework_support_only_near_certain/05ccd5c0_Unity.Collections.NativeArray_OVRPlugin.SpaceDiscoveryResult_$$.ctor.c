/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.SpaceDiscoveryResult>$$.ctor
ENTRY_POINT: 05ccd5c0
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


void Unity_Collections_NativeArray<OVRPlugin_SpaceDiscoveryResult>___ctor(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  byte unaff_w22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 uStack0000000000000060;
  
  puVar2 = PTR_DAT_091fcb48;
  uStack0000000000000060 = param_1;
  if (unaff_x20 != 0) {
    *(undefined8 *)(unaff_x20 + 0xc0) = param_1;
    *(undefined8 *)(unaff_x20 + 0xb8) = in_stack_00000058;
    *(undefined8 *)(unaff_x20 + 0xb0) = in_stack_00000050;
    thunk_FUN_03d1023c(unaff_x20 + 0xb0,0);
    uVar5 = unaff_x23[1];
    uVar4 = *unaff_x23;
    puVar1 = (undefined8 *)(unaff_x20 + 0xf0);
    *(undefined8 *)(unaff_x20 + 0x100) = unaff_x23[2];
    *(undefined8 *)(unaff_x20 + 0xf8) = uVar5;
    *(undefined8 *)(unaff_x20 + 0xf0) = uVar4;
    thunk_FUN_03d1023c(puVar1,0);
    uVar3 = FUN_06093334(puVar1,*(undefined8 *)puVar2);
    if ((uVar3 & 1) != 0) {
      uStack0000000000000060 = *(undefined8 *)(unaff_x20 + 0x100);
      in_stack_00000058 = *(undefined8 *)(unaff_x20 + 0xf8);
      in_stack_00000050 = *puVar1;
      FUN_060921c8(&stack0x00000038,&stack0x00000050,*unaff_x24);
      FUN_07f094ec();
    }
    *(undefined8 *)(unaff_x20 + 0x108) = unaff_x21;
    thunk_FUN_03d1023c(unaff_x20 + 0x108);
    *(byte *)(unaff_x20 + 0x110) = unaff_w22 & 1;
    *(undefined8 *)(unaff_x20 + 0x118) = unaff_x19;
    thunk_FUN_03d1023c(unaff_x20 + 0x118);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03d2d548();
}


