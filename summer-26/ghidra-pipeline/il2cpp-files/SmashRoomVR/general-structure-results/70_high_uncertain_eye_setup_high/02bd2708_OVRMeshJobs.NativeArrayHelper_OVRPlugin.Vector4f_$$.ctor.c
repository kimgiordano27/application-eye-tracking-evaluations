/*
FUNCTION_NAME: OVRMeshJobs.NativeArrayHelper<OVRPlugin.Vector4f>$$.ctor
ENTRY_POINT: 02bd2708
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong OVRMeshJobs_NativeArrayHelper<OVRPlugin_Vector4f>___ctor
                (long param_1,uint param_2,int param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(uint *)(param_1 + 0x18) < param_2) {
    FUN_03061140(0);
  }
                    /* try { // try from 02bd2738 to 02cd273b has its CatchHandler @ 02bd275c */
                    /* try { // try from 02bd273c to 02cd2743 has its CatchHandler @ 02bd2760 */
                    /* try { // try from 02bd2744 to 02cd2747 has its CatchHandler @ 02bd249c */
                    /* try { // try from 02bd2748 to 02cd274b has its CatchHandler @ 02bd2754 */
  if ((param_3 < 0) || (*(int *)(param_1 + 0x18) - param_3 < (int)param_2)) {
                    /* try { // try from 02bd274c to 02cd277f has its CatchHandler @ 02bd249c */
    FUN_0306116c(0);
  }
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 02bd2748 with catch @ 02bd2754
                        */
  if (param_4 == 0) {
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 02bd2680 with catch @ 02bd2758
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 02bd2738 with catch @ 02bd275c
                        */
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 02bd273c with catch @ 02bd2760
                        */
    FUN_03051bf4(8,0);
  }
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 02bd25b0 with catch @ 02bd2764
                        */
                    /* catch(type#1 @ 03b4f5b8) { ... } // from try @ 02bd25f0 with catch @ 02bd2768
                        */
  if ((int)param_2 < (int)(param_3 + param_2)) {
    uVar3 = (ulong)(int)param_2;
    do {
      lVar2 = *(long *)(param_1 + 0x10);
      if (lVar2 == 0) {
LAB_02bd27d0:
                    /* WARNING: Subroutine does not return */
        FUN_01b48178();
      }
                    /* try { // try from 02bd2780 to 02cd2783 has its CatchHandler @ 02bd2790 */
      if (*(uint *)(lVar2 + 0x18) <= (uint)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_01b48180();
      }
      if (param_4 == 0) goto LAB_02bd27d0;
      uVar1 = (**(code **)(param_4 + 0x18))
                        (*(undefined8 *)(param_4 + 0x40),*(undefined8 *)(lVar2 + uVar3 * 8 + 0x20),
                         *(undefined8 *)(param_4 + 0x28));
      if ((uVar1 & 1) != 0) goto LAB_02bd27bc;
      uVar3 = uVar3 + 1;
    } while ((long)(int)(param_3 + param_2) != uVar3);
  }
  uVar3 = 0xffffffff;
LAB_02bd27bc:
  return uVar3 & 0xffffffff;
}


