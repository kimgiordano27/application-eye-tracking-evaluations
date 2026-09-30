/*
FUNCTION_NAME: OVRPlugin.OVRP_1_53_0$$.cctor
ENTRY_POINT: 06974e6c
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


void OVRPlugin_OVRP_1_53_0___cctor(void)

{
  float fVar1;
  uint in_w8;
  long in_x9;
  long in_x10;
  long unaff_x19;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = DAT_015c58e4;
                    /* try { // try from 06974e70 to 06a74e77 has its CatchHandler @ 0697527c */
  fVar7 = *(float *)(in_x9 + 0xb8c);
  fVar8 = *(float *)(in_x10 + 0x758);
  lVar3 = 0;
  while( true ) {
                    /* try { // try from 06974e88 to 06a74e8f has its CatchHandler @ 06975258 */
    if (in_w8 <= (uint)lVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    plVar2 = *(long **)(unaff_x19 + 0x20 + lVar3 * 8);
    if (plVar2 == (long *)0x0) break;
                    /* try { // try from 06974ea0 to 06a74eab has its CatchHandler @ 06975254 */
    fVar4 = (float)(**(code **)(*plVar2 + 0x338))(plVar2,*(undefined8 *)(*plVar2 + 0x340));
                    /* try { // try from 06974ebc to 06a74ec3 has its CatchHandler @ 06975274 */
    fVar5 = (float)(**(code **)(*plVar2 + 0x338))(plVar2,*(undefined8 *)(*plVar2 + 0x340));
                    /* try { // try from 06974ed8 to 06a74edb has its CatchHandler @ 0697526c */
    (**(code **)(*plVar2 + 0x348))(fVar4 + fVar5 * fVar7,plVar2,*(undefined8 *)(*plVar2 + 0x350));
    fVar5 = (float)(**(code **)(*plVar2 + 0x338))(plVar2,*(undefined8 *)(*plVar2 + 0x340));
                    /* try { // try from 06974ef0 to 06a74f0f has its CatchHandler @ 06975288 */
    fVar4 = fVar8;
    if (fVar5 <= fVar8) {
      fVar4 = fVar5;
    }
    fVar6 = fVar1;
    if (fVar1 <= fVar5) {
      fVar6 = fVar4;
    }
    (**(code **)(*plVar2 + 0x348))(fVar6,plVar2,*(undefined8 *)(*plVar2 + 0x350));
    in_w8 = *(uint *)(unaff_x19 + 0x18);
    lVar3 = lVar3 + 1;
    if ((int)in_w8 <= (int)lVar3) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


