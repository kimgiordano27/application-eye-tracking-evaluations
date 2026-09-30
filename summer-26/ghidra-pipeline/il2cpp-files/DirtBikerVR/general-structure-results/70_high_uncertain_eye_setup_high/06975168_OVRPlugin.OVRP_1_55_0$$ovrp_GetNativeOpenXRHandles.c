/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_0$$ovrp_GetNativeOpenXRHandles
ENTRY_POINT: 06975168
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_55_0__ovrp_GetNativeOpenXRHandles(void)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
                    /* try { // try from 06975168 to 06a7516b has its CatchHandler @ 06975210 */
                    /* try { // try from 0697516c to 06a7516f has its CatchHandler @ 06975284 */
                    /* try { // try from 06975170 to 06a75173 has its CatchHandler @ 06975268 */
  lVar2 = FUN_06974a28();
                    /* try { // try from 06975174 to 06a75177 has its CatchHandler @ 06975280 */
  if (lVar2 != 0) {
                    /* try { // try from 06975178 to 06a7517b has its CatchHandler @ 0697525c */
    uVar1 = *(uint *)(lVar2 + 0x18);
                    /* try { // try from 0697517c to 06a7517f has its CatchHandler @ 0697527c */
                    /* try { // try from 06975180 to 06a75183 has its CatchHandler @ 0697523c */
                    /* try { // try from 06975184 to 06a75187 has its CatchHandler @ 06975228 */
    if (0 < (int)uVar1) {
                    /* try { // try from 06975188 to 06a7518b has its CatchHandler @ 0697522c */
      lVar4 = 0;
                    /* try { // try from 06975198 to 06a7519b has its CatchHandler @ 0697520c */
      do {
                    /* try { // try from 069751a0 to 06a751b3 has its CatchHandler @ 06975208 */
        if (uVar1 <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_03a8a9c8();
        }
        plVar3 = *(long **)(lVar2 + 0x20 + lVar4 * 8);
        if (plVar3 == (long *)0x0) goto LAB_06975210;
                    /* try { // try from 069751b4 to 06a751d7 has its CatchHandler @ 06975204 */
        fVar5 = (float)(**(code **)(*plVar3 + 0x318))(plVar3,*(undefined8 *)(*plVar3 + 800));
        fVar5 = fVar5 + 2.0;
                    /* try { // try from 069751d8 to 06a751ff has its CatchHandler @ 06975200 */
        fVar7 = 8.0;
        if (fVar5 <= 8.0) {
          fVar7 = fVar5;
        }
        fVar6 = -8.0;
        if (-8.0 <= fVar5) {
          fVar6 = fVar7;
        }
        (**(code **)(*plVar3 + 0x328))(fVar6,plVar3,*(undefined8 *)(*plVar3 + 0x330));
        uVar1 = *(uint *)(lVar2 + 0x18);
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < (int)uVar1);
    }
    return;
  }
LAB_06975210:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


