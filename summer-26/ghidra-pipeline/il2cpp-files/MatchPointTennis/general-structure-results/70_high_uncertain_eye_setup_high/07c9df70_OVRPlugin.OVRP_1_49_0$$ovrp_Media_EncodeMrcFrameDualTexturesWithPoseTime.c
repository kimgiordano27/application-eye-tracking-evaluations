/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime
ENTRY_POINT: 07c9df70
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin_OVRP_1_49_0__ovrp_Media_EncodeMrcFrameDualTexturesWithPoseTime(void)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  puVar2 = PTR_DAT_09f4e7b0;
  if ((DAT_0a5269b8 & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f29870);
    FUN_04447ba8(PTR_DAT_09f4e7b0);
    DAT_0a5269b8 = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  lVar3 = FUN_07c9de44();
  if (**(long **)(*(long *)puVar2 + 0xb8) == 0) {
LAB_07c9e0ac:
                    /* WARNING: Subroutine does not return */
    FUN_04447e44();
  }
                    /* catch() { ... } // from try @ 07c9d844 with catch @ 07c9dfdc */
                    /* catch() { ... } // from try @ 07c9d7a8 with catch @ 07c9dfe0 */
  lVar4 = FUN_04447c90(*(undefined8 *)PTR_DAT_09f29870,
                       *(undefined4 *)(**(long **)(*(long *)puVar2 + 0xb8) + 0x18));
                    /* catch() { ... } // from try @ 07c9d8c0 with catch @ 07c9dfe4 */
                    /* catch() { ... } // from try @ 07c9ded8 with catch @ 07c9dfe8 */
  lVar5 = *(long *)puVar2;
                    /* catch() { ... } // from try @ 07c9d7e4 with catch @ 07c9dfec */
  uVar7 = 0;
  while( true ) {
                    /* catch() { ... } // from try @ 07c9d884 with catch @ 07c9dff0 */
                    /* catch() { ... } // from try @ 07c9d778 with catch @ 07c9dff4 */
    if (*(int *)(lVar5 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 07c9ded4 with catch @ 07c9dff8 */
      thunk_FUN_044a54b4();
                    /* catch() { ... } // from try @ 07c9d73c with catch @ 07c9dffc */
      lVar5 = *(long *)puVar2;
    }
                    /* catch() { ... } // from try @ 07c9d6c8 with catch @ 07c9e000 */
                    /* catch() { ... } // from try @ 07c9d70c with catch @ 07c9e004 */
    if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_07c9e0ac;
    if (*(int *)(**(long **)(lVar5 + 0xb8) + 0x18) <= (int)uVar7) {
      return lVar4;
    }
                    /* try { // try from 07c9e01c to 07d9e01f has its CatchHandler @ 07c9e048 */
    if (*(int *)(lVar5 + 0xe4) == 0) {
                    /* try { // try from 07c9e020 to 07d9e057 has its CatchHandler @ 07c9c908 */
      thunk_FUN_044a54b4();
      lVar5 = *(long *)puVar2;
    }
    lVar6 = **(long **)(lVar5 + 0xb8);
    if (lVar6 == 0) goto LAB_07c9e0ac;
    if (*(uint *)(lVar6 + 0x18) <= uVar7) break;
    if (lVar3 == 0) goto LAB_07c9e0ac;
    uVar1 = *(uint *)(lVar6 + (long)(int)uVar7 * 4 + 0x20);
    if (*(uint *)(lVar3 + 0x18) <= uVar1) break;
    if (lVar4 == 0) goto LAB_07c9e0ac;
    if (*(uint *)(lVar4 + 0x18) <= uVar7) break;
    lVar6 = (long)(int)uVar7;
    uVar7 = uVar7 + 1;
    *(bool *)(lVar4 + lVar6 + 0x20) =
         uVar1 != 3 && *(int *)(lVar3 + (long)(int)uVar1 * 4 + 0x20) < 2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_04447e4c();
}


