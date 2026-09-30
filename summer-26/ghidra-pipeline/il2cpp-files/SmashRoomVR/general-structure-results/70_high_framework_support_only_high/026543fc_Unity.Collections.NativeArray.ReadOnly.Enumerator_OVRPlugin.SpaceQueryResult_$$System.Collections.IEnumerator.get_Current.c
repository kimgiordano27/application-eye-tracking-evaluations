/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly.Enumerator<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerator.get_Current
ENTRY_POINT: 026543fc
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray_ReadOnly_Enumerator<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerator_get_Current
               (void)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x22;
  ulong unaff_x23;
  long unaff_x24;
  ulong unaff_x25;
  undefined8 *unaff_x26;
  undefined8 *puVar5;
  undefined8 uStack0000000000000030;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000040;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000050;
  
  do {
                    /* try { // try from 02654408 to 0275446b has its CatchHandler @ 026541f4 */
    uStack0000000000000050 = 0;
    uStack0000000000000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000048 = 0;
    uStack0000000000000040 = 0;
    FUN_02a9e1d8(unaff_x26[2],unaff_x26[3],unaff_x26[4],&stack0x00000030,*unaff_x26,
                 *(undefined4 *)(unaff_x26 + 1),
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x140));
    lVar2 = thunk_FUN_01afa70c(*(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xa8)
                              );
    if (unaff_x22 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
                    /* try { // try from 0265446c to 0275447b has its CatchHandler @ 0265447c */
    if ((lVar2 != 0) &&
       (lVar3 = thunk_FUN_01afa9e0(lVar2,*(undefined8 *)(*unaff_x22 + 0x40)), lVar3 == 0)) {
      uVar4 = thunk_FUN_01b154cc();
                    /* WARNING: Subroutine does not return */
      FUN_01b48050(uVar4,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_01b48180();
    }
    unaff_x22[(long)(int)unaff_w20 + 4] = lVar2;
    thunk_FUN_01b4f09c(unaff_x22 + (long)(int)unaff_w20 + 4,lVar2);
    unaff_w20 = unaff_w20 + 1;
    puVar5 = unaff_x26;
    do {
      unaff_x25 = unaff_x25 + 1;
      unaff_x26 = puVar5 + 6;
      if (unaff_x23 == unaff_x25) {
        return;
      }
      if (*(uint *)(unaff_x24 + 0x18) <= unaff_x25) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      piVar1 = (int *)(puVar5 + 5);
      puVar5 = unaff_x26;
    } while (*piVar1 < 0);
  } while( true );
}


