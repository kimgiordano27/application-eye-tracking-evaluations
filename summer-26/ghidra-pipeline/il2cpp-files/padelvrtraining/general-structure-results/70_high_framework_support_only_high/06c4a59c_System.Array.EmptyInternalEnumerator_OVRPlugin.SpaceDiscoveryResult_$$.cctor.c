/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$.cctor
ENTRY_POINT: 06c4a59c
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_EmptyInternalEnumerator<OVRPlugin_SpaceDiscoveryResult>___cctor
               (undefined8 param_1,undefined8 param_2,ulong param_3)

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
  uint *unaff_x26;
  uint *puVar4;
  undefined8 uStack0000000000000010;
  undefined8 uStack0000000000000018;
  
  do {
    uStack0000000000000010 = 0;
    uStack0000000000000018 = 0;
    FUN_058198f4(&stack0x00000010,param_2,param_3,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x158));
                    /* try { // try from 06c4a5b4 to 06d4a617 has its CatchHandler @ 06c4a704 */
    lVar1 = thunk_FUN_03d2eb70(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8)
                              );
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d548();
    }
    if ((lVar1 != 0) &&
       (lVar2 = thunk_FUN_03d2ee44(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
                    /* try { // try from 06c4a64c to 06d4a65b has its CatchHandler @ 06c4a6fc */
      uVar3 = thunk_FUN_03d3c630();
                    /* WARNING: Subroutine does not return */
      FUN_03d2d414(uVar3,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_03d2d550();
    }
    unaff_x22[(long)(int)unaff_w20 + 4] = lVar1;
    thunk_FUN_03d1023c(unaff_x22 + (long)(int)unaff_w20 + 4,lVar1);
    unaff_w20 = unaff_w20 + 1;
    do {
      puVar4 = unaff_x26;
      unaff_x25 = unaff_x25 + 1;
      unaff_x26 = puVar4 + 6;
      if (unaff_x23 == unaff_x25) {
        return;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_03d2d550();
      }
    } while ((int)puVar4[2] < 0);
    param_2 = *(undefined8 *)(puVar4 + 4);
    param_3 = (ulong)*unaff_x26;
  } while( true );
}


