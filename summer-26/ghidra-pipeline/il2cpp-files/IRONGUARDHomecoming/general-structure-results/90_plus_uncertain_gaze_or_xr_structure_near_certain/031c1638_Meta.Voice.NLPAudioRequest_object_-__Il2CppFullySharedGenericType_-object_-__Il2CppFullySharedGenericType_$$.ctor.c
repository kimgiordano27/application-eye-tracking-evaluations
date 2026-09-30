/*
FUNCTION_NAME: Meta.Voice.NLPAudioRequest<object,-__Il2CppFullySharedGenericType,-object,-__Il2CppFullySharedGenericType>$$.ctor
ENTRY_POINT: 031c1638
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 156
LABEL: uncertain_gaze_or_xr_structure_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;telemetry;structure_combo
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_2;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;functionality_data_collection_or_telemetry_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x031c16ac) */
/* WARNING: Removing unreachable block (ram,0x031c16b0) */

void Meta_Voice_NLPAudioRequest<object,___Il2CppFullySharedGenericType,_object,___Il2CppFullySharedGenericType>___ctor
               (void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x21;
  long *unaff_x23;
  
  if (unaff_x23 != (long *)0x0) {
    lVar2 = *unaff_x23;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
                    /* try { // try from 031c1658 to 032c1663 has its CatchHandler @ 031c130c */
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
                    /* try { // try from 031c1664 to 032c166b has its CatchHandler @ 031c166c */
        if (*(long *)(piVar4 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_031c1694;
        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 031c1630 with catch @ 031c166c
                       catch(type#2 @ 00000000) { ... } // from try @ 031c1664 with catch @ 031c166c
                        */
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_031c1694:
    (*(code *)*puVar1)();
  }
  if (unaff_x21 == 0) {
    *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01eed990();
}


