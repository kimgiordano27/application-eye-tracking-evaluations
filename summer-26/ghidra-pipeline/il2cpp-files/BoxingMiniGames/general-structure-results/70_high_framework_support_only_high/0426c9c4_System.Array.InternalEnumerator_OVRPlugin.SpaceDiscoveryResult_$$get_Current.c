/*
FUNCTION_NAME: System.Array.InternalEnumerator<OVRPlugin.SpaceDiscoveryResult>$$get_Current
ENTRY_POINT: 0426c9c4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array_InternalEnumerator<OVRPlugin_SpaceDiscoveryResult>__get_Current(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  long unaff_x20;
  
                    /* catch() { ... } // from try @ 0426c534 with catch @ 0426c9c4
                       catch() { ... } // from try @ 0426c898 with catch @ 0426c9c4 */
                    /* catch() { ... } // from try @ 0426c4ec with catch @ 0426c9c8
                       catch() { ... } // from try @ 0426c838 with catch @ 0426c9c8 */
                    /* catch() { ... } // from try @ 0426c4a0 with catch @ 0426c9cc
                       catch() { ... } // from try @ 0426c808 with catch @ 0426c9cc */
                    /* catch() { ... } // from try @ 0426c404 with catch @ 0426c9d0
                       catch() { ... } // from try @ 0426c7a8 with catch @ 0426c9d0 */
                    /* catch() { ... } // from try @ 0426c3d4 with catch @ 0426c9d4
                       catch() { ... } // from try @ 0426c528 with catch @ 0426c9d4
                       catch() { ... } // from try @ 0426c880 with catch @ 0426c9d4 */
                    /* catch() { ... } // from try @ 0426c38c with catch @ 0426c9d8
                       catch() { ... } // from try @ 0426c3f8 with catch @ 0426c9d8
                       catch() { ... } // from try @ 0426c790 with catch @ 0426c9d8 */
  puVar1 = (undefined8 *)thunk_FUN_036a1ed0();
  plVar6 = (long *)*puVar1;
                    /* catch() { ... } // from try @ 0426c5c0 with catch @ 0426c9e0
                       catch() { ... } // from try @ 0426c8c8 with catch @ 0426c9e0 */
  if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03642c18();
  }
                    /* catch() { ... } // from try @ 0426c4f0 with catch @ 0426c9e4
                       catch() { ... } // from try @ 0426c850 with catch @ 0426c9e4 */
  lVar2 = *(long *)(unaff_x20 + 0x20);
                    /* catch() { ... } // from try @ 0426c4a4 with catch @ 0426c9e8
                       catch() { ... } // from try @ 0426c820 with catch @ 0426c9e8 */
                    /* catch() { ... } // from try @ 0426c458 with catch @ 0426c9ec
                       catch() { ... } // from try @ 0426c7f0 with catch @ 0426c9ec */
                    /* catch() { ... } // from try @ 0426c454 with catch @ 0426c9f0
                       catch() { ... } // from try @ 0426c7c0 with catch @ 0426c9f0 */
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
                    /* catch() { ... } // from try @ 0426c748 with catch @ 0426c9f4 */
    lVar2 = FUN_0367c9fc();
  }
                    /* catch() { ... } // from try @ 0426c028 with catch @ 0426c9f8 */
                    /* catch() { ... } // from try @ 0426c718 with catch @ 0426c9fc */
  lVar2 = **(long **)(lVar2 + 0xc0);
                    /* catch() { ... } // from try @ 0426c700 with catch @ 0426ca00 */
                    /* catch() { ... } // from try @ 0426c23c with catch @ 0426ca04 */
                    /* catch() { ... } // from try @ 0426c0a8 with catch @ 0426ca08 */
  if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_0367c9fc(lVar2);
  }
  lVar3 = *plVar6;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 0426ca20 to 0436ca37 has its CatchHandler @ 0426cb60 */
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar2) {
                    /* try { // try from 0426ca54 to 0436ca57 has its CatchHandler @ 0426cb4c */
                    /* try { // try from 0426ca60 to 0436ca7b has its CatchHandler @ 0426cb58 */
        puVar1 = (undefined8 *)(lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138);
        goto LAB_0426ca64;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
  puVar1 = (undefined8 *)FUN_0367cd30(plVar6,lVar2,1);
LAB_0426ca64:
                    /* WARNING: Could not recover jumptable at 0x0426ca74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar6,puVar1[1]);
  return;
}


