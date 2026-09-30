/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_0$$ovrp_GetSkeleton2
ENTRY_POINT: 06974f7c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_55_0__ovrp_GetSkeleton2(void)

{
  uint in_w8;
  long in_x9;
  long in_x10;
  long in_x11;
  long unaff_x19;
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = *(float *)(in_x9 + 0xb8c);
                    /* try { // try from 06974f80 to 06a74f8b has its CatchHandler @ 06975278 */
  fVar7 = *(float *)(in_x10 + 0xa64);
  fVar8 = *(float *)(in_x11 + 0xac0);
  lVar2 = 0;
                    /* try { // try from 06974f8c to 06a74feb has its CatchHandler @ 06974cec */
  while( true ) {
    if (in_w8 <= (uint)lVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    plVar1 = *(long **)(unaff_x19 + 0x20 + lVar2 * 8);
    if (plVar1 == (long *)0x0) break;
    fVar3 = (float)(**(code **)(*plVar1 + 0x358))(plVar1,*(undefined8 *)(*plVar1 + 0x360));
    fVar4 = (float)(**(code **)(*plVar1 + 0x358))(plVar1,*(undefined8 *)(*plVar1 + 0x360));
    (**(code **)(*plVar1 + 0x368))(fVar3 + fVar4 * fVar6,plVar1,*(undefined8 *)(*plVar1 + 0x370));
                    /* try { // try from 06974fec to 06a74ff7 has its CatchHandler @ 06975234 */
    fVar4 = (float)(**(code **)(*plVar1 + 0x358))(plVar1,*(undefined8 *)(*plVar1 + 0x360));
    fVar3 = fVar7;
    if (fVar4 <= fVar7) {
      fVar3 = fVar4;
    }
    fVar5 = fVar8;
    if (fVar8 <= fVar4) {
      fVar5 = fVar3;
    }
    (**(code **)(*plVar1 + 0x368))(fVar5,plVar1,*(undefined8 *)(*plVar1 + 0x370));
    in_w8 = *(uint *)(unaff_x19 + 0x18);
    lVar2 = lVar2 + 1;
    if ((int)in_w8 <= (int)lVar2) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


