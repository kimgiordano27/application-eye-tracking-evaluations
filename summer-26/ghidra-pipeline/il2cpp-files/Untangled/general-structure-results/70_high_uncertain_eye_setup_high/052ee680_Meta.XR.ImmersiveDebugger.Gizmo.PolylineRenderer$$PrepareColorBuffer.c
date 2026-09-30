/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$PrepareColorBuffer
ENTRY_POINT: 052ee680
PROGRAM: Untangled-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__PrepareColorBuffer
               (undefined1 param_1 [16],float param_2,float param_3,long *param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
                    /* try { // try from 052ee684 to 053ee6e3 has its CatchHandler @ 052ee7a8 */
  fVar5 = *(float *)((long)param_4 + 0x44);
  fVar6 = *(float *)(param_4 + 9);
  fVar7 = *(float *)((long)param_4 + 0x4c);
  lVar1 = FUN_066c67b0(param_4,0);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02f080c0();
  }
  fVar4 = (float)FUN_066d3ed0(lVar1,0);
  if (DAT_071babf8 == '\0') {
    FUN_02f07e70(PTR_DAT_06d03010);
    DAT_071babf8 = '\x01';
  }
  fVar5 = fVar5 - fVar4;
  fVar7 = fVar7 - param_3;
                    /* try { // try from 052ee6f8 to 053ee707 has its CatchHandler @ 052ee7a0 */
  if (*(int *)(*(long *)PTR_DAT_06d03010 + 0xe0) == 0) {
    thunk_FUN_02f12b58();
  }
                    /* try { // try from 052ee708 to 053ee78f has its CatchHandler @ 052ee538 */
  fVar7 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + (fVar6 - param_2) * (fVar6 - param_2));
  if ((char)param_4[10] == '\0') {
    if (fVar7 < *(float *)((long)param_4 + 0x3c)) goto LAB_052ee764;
    *(undefined1 *)(param_4 + 10) = 1;
    pcVar3 = *(code **)(*param_4 + 0x188);
    uVar2 = *(undefined8 *)(*param_4 + 400);
  }
  else {
    if (*(float *)(param_4 + 8) <= fVar7) goto LAB_052ee764;
    *(undefined1 *)(param_4 + 10) = 0;
    pcVar3 = *(code **)(*param_4 + 0x198);
    uVar2 = *(undefined8 *)(*param_4 + 0x1a0);
  }
  (*pcVar3)(param_4,uVar2);
LAB_052ee764:
  FUN_052ee784(param_4);
  return;
}


