/*
FUNCTION_NAME: Meta.Voice.NLPAudioRequest<object,-object,-object,-object>$$CompleteEarly
ENTRY_POINT: 031c1534
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 159
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x031c16b0) */
/* WARNING: Removing unreachable block (ram,0x031c16ac) */
/* WARNING: Removing unreachable block (ram,0x031c16f0) */

void Meta_Voice_NLPAudioRequest<object,_object,_object,_object>__CompleteEarly(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x23;
  long unaff_x24;
  long *plVar6;
  
  plVar6 = *(long **)(unaff_x24 + 0xe08);
  do {
    lVar2 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == *plVar6) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_031c1584;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031c1584:
    uVar4 = (*(code *)*puVar1)();
    if ((uVar4 & 1) == 0) break;
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
                    /* try { // try from 031c15a0 to 032c15a3 has its CatchHandler @ 031c15c4 */
                    /* try { // try from 031c15a4 to 032c15ab has its CatchHandler @ 031c15c8 */
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
                    /* try { // try from 031c15ac to 032c15af has its CatchHandler @ 031c130c */
      lVar2 = FUN_01ecaf44(lVar2);
                    /* try { // try from 031c15b0 to 032c15b3 has its CatchHandler @ 031c15bc */
    }
                    /* try { // try from 031c15b4 to 032c15e7 has its CatchHandler @ 031c130c */
    lVar3 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031c15b0 with catch @ 031c15bc
                        */
    if (uVar4 != 0) {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031c14ec with catch @ 031c15c0
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031c15a0 with catch @ 031c15c4
                        */
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031c15a4 with catch @ 031c15c8
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031c1420 with catch @ 031c15cc
                        */
                    /* catch(type#1 @ 042b3198) { ... } // from try @ 031c1460 with catch @ 031c15d0
                        */
        if (*(long *)(piVar5 + -2) == lVar2) {
                    /* catch() { ... } // from try @ 031c15e8 with catch @ 031c15f8 */
          puVar1 = (undefined8 *)(lVar3 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_031c15fc;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
                    /* try { // try from 031c15e8 to 032c15eb has its CatchHandler @ 031c15f8 */
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031c15fc:
    (*(code *)*puVar1)();
    FUN_031c1020();
                    /* try { // try from 031c1630 to 032c1657 has its CatchHandler @ 031c166c */
  } while( true );
  if (unaff_x23 != (long *)0x0) {
    lVar2 = *unaff_x23;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_031c1694;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031c1694:
    (*(code *)*puVar1)();
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


