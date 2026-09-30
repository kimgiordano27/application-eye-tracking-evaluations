/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector4f>$$Copy
ENTRY_POINT: 04d6662c
PROGRAM: Waifu-libil2cpp.so
SCORE: 86
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector4f>__Copy(long param_1)

{
  ulong uVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long unaff_x21;
  undefined8 unaff_x22;
  long *unaff_x23;
  
  *(undefined8 *)(param_1 + 8) = unaff_x22;
  lVar5 = *(long *)(unaff_x21 + 0x20);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0338f618();
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x30);
  if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
    lVar5 = FUN_0338f618();
  }
                    /* try { // try from 04d66658 to 04e6667f has its CatchHandler @ 04d66838 */
  if (DAT_08908cd0 != 0) {
    uVar1 = *(long *)(lVar5 + 0xb8) + 8;
    puVar2 = &DAT_0873ccb0 + (uVar1 >> 0x12 & 0x7fff);
    do {
                    /* try { // try from 04d66698 to 04e666fb has its CatchHandler @ 04d66840 */
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *puVar2 = *puVar2 | 1L << (uVar1 >> 0xc & 0x3f);
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_040f3dc0();
                    /* WARNING: Could not recover jumptable at 0x04d666dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x23 + 0x188))();
  return;
}


