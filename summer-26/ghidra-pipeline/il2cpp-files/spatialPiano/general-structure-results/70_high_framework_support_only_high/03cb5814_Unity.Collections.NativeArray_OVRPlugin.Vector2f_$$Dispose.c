/*
FUNCTION_NAME: Unity.Collections.NativeArray<OVRPlugin.Vector2f>$$Dispose
ENTRY_POINT: 03cb5814
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Collections_NativeArray<OVRPlugin_Vector2f>__Dispose(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  int unaff_w22;
  long *unaff_x23;
  
  lVar1 = FUN_02f41e9c();
  lVar3 = *unaff_x23;
  uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar4 != 0) {
    piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar5 + -2) == lVar1) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 5) * 0x10 + 0x138);
        goto LAB_03cb58a8;
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 4;
    } while (uVar4 != 0);
  }
                    /* try { // try from 03cb5848 to 03db58a7 has its CatchHandler @ 03cb59b4 */
  puVar2 = (undefined8 *)FUN_02f421d0();
LAB_03cb58a8:
  (*(code *)*puVar2)();
                    /* try { // try from 03cb58bc to 03db58c7 has its CatchHandler @ 03cb59a4 */
  *(int *)(unaff_x19 + 0x18) = *(int *)(unaff_x19 + 0x18) + unaff_w22;
                    /* try { // try from 03cb58c8 to 03db598f has its CatchHandler @ 03cb54d8 */
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


