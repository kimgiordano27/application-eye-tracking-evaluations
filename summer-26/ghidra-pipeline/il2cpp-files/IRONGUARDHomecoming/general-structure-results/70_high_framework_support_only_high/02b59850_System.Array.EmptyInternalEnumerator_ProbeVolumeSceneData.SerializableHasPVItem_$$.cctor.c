/*
FUNCTION_NAME: System.Array.EmptyInternalEnumerator<ProbeVolumeSceneData.SerializableHasPVItem>$$.cctor
ENTRY_POINT: 02b59850
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_4;functionality_eye_api_context_without_clear_sink_hits_1
*/


void System_Array_EmptyInternalEnumerator<ProbeVolumeSceneData_SerializableHasPVItem>___cctor(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long *unaff_x21;
  
                    /* catch() { ... } // from try @ 02b597e8 with catch @ 02b59850 */
                    /* catch() { ... } // from try @ 02b59754 with catch @ 02b59854 */
  lVar2 = *unaff_x21;
                    /* catch() { ... } // from try @ 02b59774 with catch @ 02b59858 */
                    /* catch() { ... } // from try @ 02b597e0 with catch @ 02b5985c */
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
                    /* try { // try from 02b59874 to 02c59877 has its CatchHandler @ 02b598a4 */
                    /* try { // try from 02b59878 to 02c598ab has its CatchHandler @ 02b59648 */
      if (*(long *)(piVar4 + -2) ==
          *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
        puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_02b598a4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_01ecb238();
LAB_02b598a4:
                    /* catch() { ... } // from try @ 02b59874 with catch @ 02b598a4 */
                    /* try { // try from 02b598ac to 02c598b7 has its CatchHandler @ 02b598cc */
  (*(code *)*puVar1)();
  if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02b598b8 to 02c598c3 has its CatchHandler @ 02b59648 */
    FUN_01fbfd14();
  }
                    /* WARNING: Subroutine does not return */
  FUN_01eed990();
}


