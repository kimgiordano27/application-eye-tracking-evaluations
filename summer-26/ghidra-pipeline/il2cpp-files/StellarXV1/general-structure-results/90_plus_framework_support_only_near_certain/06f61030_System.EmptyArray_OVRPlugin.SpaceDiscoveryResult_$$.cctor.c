/*
FUNCTION_NAME: System.EmptyArray<OVRPlugin.SpaceDiscoveryResult>$$.cctor
ENTRY_POINT: 06f61030
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 94
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_EmptyArray<OVRPlugin_SpaceDiscoveryResult>___cctor(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  long unaff_x26;
  undefined4 *unaff_x27;
  undefined4 *puVar4;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  do {
    uStack0000000000000008 = in_stack_00000028;
    uStack0000000000000000 = in_stack_00000020;
    uStack0000000000000010 = in_stack_00000030;
    lVar1 = thunk_FUN_040b4b34(*(undefined8 *)(*(long *)(param_1 + 0xc0) + 0xa8));
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_04077830();
    }
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_040b4e00(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
      uVar3 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
      FUN_040776f4(uVar3,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_04077838();
    }
    unaff_x22[(long)(int)unaff_w20 + 4] = lVar1;
    thunk_FUN_040ec700(unaff_x26 + (long)(int)unaff_w20 * 8,lVar1);
    unaff_w20 = unaff_w20 + 1;
    do {
      puVar4 = unaff_x27;
      unaff_x25 = unaff_x25 + 1;
      unaff_x27 = puVar4 + 8;
      if (unaff_x23 == unaff_x25) {
        return;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_04077838();
      }
    } while ((int)puVar4[1] < 0);
    in_stack_00000020 = 0;
    in_stack_00000028 = 0;
    in_stack_00000030 = 0;
    FUN_059fa038(puVar4[5],puVar4[6],puVar4[7],*unaff_x27,&stack0x00000020,
                 *(undefined8 *)(puVar4 + 3),
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x150));
    param_1 = *(long *)(unaff_x19 + 0x20);
  } while( true );
}


