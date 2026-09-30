/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<InteractableGroup.InteractableLimits>$$.cctor
ENTRY_POINT: 02b56410
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 72
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_4;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x02b564e4) */

void System_Array_EmptyInternalEnumerator<InteractableGroup_InteractableLimits>___cctor
               (undefined8 param_1,undefined1 param_2 [16])

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long *unaff_x21;
  undefined8 *unaff_x22;
  long *unaff_x23;
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000008 = param_2._8_8_;
  uStack0000000000000000 = param_2._0_8_;
  do {
    uStack0000000000000010 = param_1;
                    /* try { // try from 02b5641c to 02c5641f has its CatchHandler @ 02b56494 */
                    /* try { // try from 02b56424 to 02c56427 has its CatchHandler @ 02b56488 */
                    /* try { // try from 02b5642c to 02c5642f has its CatchHandler @ 02b56484 */
                    /* try { // try from 02b56434 to 02c56437 has its CatchHandler @ 02b56470 */
    FUN_02b57444();
    lVar2 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 02b5643c to 02c5643f has its CatchHandler @ 02b5646c */
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *unaff_x23) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02b56370;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02b56370:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) break;
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x98);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02b563e8;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02b563e8:
    (*(code *)*puVar1)();
    uStack0000000000000008 = unaff_x22[1];
    uStack0000000000000000 = *unaff_x22;
    param_1 = unaff_x22[2];
  } while( true );
                    /* try { // try from 02b56444 to 02c56447 has its CatchHandler @ 02b56464 */
  if (unaff_x21 != (long *)0x0) {
                    /* try { // try from 02b5644c to 02c5644f has its CatchHandler @ 02b5645c */
    lVar2 = *unaff_x21;
                    /* try { // try from 02b56454 to 02c56457 has its CatchHandler @ 02b5647c */
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
                    /* try { // try from 02b56458 to 02c564b3 has its CatchHandler @ 02b560ac */
                    /* catch() { ... } // from try @ 02b5644c with catch @ 02b5645c */
    if (uVar4 != 0) {
                    /* catch() { ... } // from try @ 02b56330 with catch @ 02b56460 */
                    /* catch() { ... } // from try @ 02b56444 with catch @ 02b56464 */
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 02b5631c with catch @ 02b56468 */
                    /* catch() { ... } // from try @ 02b5643c with catch @ 02b5646c */
                    /* catch() { ... } // from try @ 02b56434 with catch @ 02b56470 */
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
                    /* catch() { ... } // from try @ 02b561f8 with catch @ 02b56490 */
                    /* catch() { ... } // from try @ 02b5641c with catch @ 02b56494 */
                    /* catch() { ... } // from try @ 02b562f8 with catch @ 02b56498 */
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_02b5649c;
        }
                    /* catch() { ... } // from try @ 02b563ac with catch @ 02b56474 */
        uVar4 = uVar4 - 1;
                    /* catch() { ... } // from try @ 02b563a4 with catch @ 02b56478 */
        piVar5 = piVar5 + 4;
                    /* catch() { ... } // from try @ 02b5636c with catch @ 02b5647c
                       catch() { ... } // from try @ 02b56454 with catch @ 02b5647c */
      } while (uVar4 != 0);
    }
                    /* catch() { ... } // from try @ 02b56344 with catch @ 02b56480 */
                    /* catch() { ... } // from try @ 02b5642c with catch @ 02b56484 */
                    /* catch() { ... } // from try @ 02b56424 with catch @ 02b56488 */
    puVar1 = (undefined8 *)FUN_01ecb238();
                    /* catch() { ... } // from try @ 02b56210 with catch @ 02b5648c */
LAB_02b5649c:
                    /* catch() { ... } // from try @ 02b56288 with catch @ 02b5649c */
    (*(code *)*puVar1)();
  }
                    /* try { // try from 02b564b4 to 02c564b7 has its CatchHandler @ 02b5651c */
                    /* try { // try from 02b564b8 to 02c56527 has its CatchHandler @ 02b560ac */
  return;
}


