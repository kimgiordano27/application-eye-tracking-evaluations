/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$Reset
ENTRY_POINT: 026543dc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 92
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__Reset(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  
  if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01b48178();
  }
  uVar4 = 0;
  puVar5 = (undefined8 *)(unaff_x24 + 0x28);
  do {
    if (*(uint *)(unaff_x24 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    if (-1 < *(int *)(puVar5 + -1)) {
      in_stack_00000050 = 0;
      in_stack_00000038 = 0;
      in_stack_00000030 = 0;
      in_stack_00000048 = 0;
      in_stack_00000040 = 0;
      FUN_02a9e1d8(puVar5[2],puVar5[3],puVar5[4],&stack0x00000030,*puVar5,
                   *(undefined4 *)(puVar5 + 1),
                   *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140));
      lVar1 = thunk_FUN_01afa70c(*(undefined8 *)
                                  (*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8));
      if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
      if ((lVar1 != 0) &&
         (lVar2 = thunk_FUN_01afa9e0(lVar1,*(undefined8 *)(*unaff_x22 + 0x40)), lVar2 == 0)) {
        uVar3 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
        FUN_01b48050(uVar3,0);
      }
      if (*(uint *)(unaff_x22 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      unaff_x22[(long)(int)unaff_w20 + 4] = lVar1;
      thunk_FUN_01b4f09c(unaff_x22 + (long)(int)unaff_w20 + 4,lVar1);
      unaff_w20 = unaff_w20 + 1;
    }
    uVar4 = uVar4 + 1;
    puVar5 = puVar5 + 6;
    if (unaff_x23 == uVar4) {
      return;
    }
  } while( true );
}


