/*
FUNCTION_NAME: OVRPlugin.OVRP_1_49_0$$ovrp_GetHmdColorDesc
ENTRY_POINT: 0697457c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_49_0__ovrp_GetHmdColorDesc(ulong param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  code *in_x9;
  long unaff_x19;
  uint unaff_w20;
  int unaff_w21;
  long *unaff_x22;
  long unaff_x23;
  undefined8 *unaff_x24;
  float fVar2;
  float fVar3;
  float fVar4;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float fVar5;
  float unaff_s12;
  float unaff_s13;
  float unaff_s14;
  float fVar6;
  
  do {
    (*in_x9)(param_1,param_2,param_3);
    param_2 = unaff_x22;
    do {
                    /* catch() { ... } // from try @ 06974570 with catch @ 06974580 */
                    /* try { // try from 06974584 to 06a7458b has its CatchHandler @ 06974594 */
      if (*(char *)(unaff_x23 + 0x11) != '\0') {
        fVar6 = *(float *)(unaff_x19 + 0xbc);
        fVar5 = *(float *)(unaff_x19 + 0xc0);
                    /* try { // try from 0697458c to 06a74597 has its CatchHandler @ 069743e8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06974584 with catch @ 06974594
                        */
        fVar3 = (float)FUN_06926524();
        fVar3 = fVar3 * unaff_s13;
        fVar2 = unaff_s14;
        if (fVar3 <= unaff_s14) {
          fVar2 = fVar3;
        }
        fVar4 = 0.0;
        if (0.0 <= fVar3) {
          fVar4 = fVar2;
        }
        (**(code **)(*param_2 + 0x1f8))
                  (*(float *)(unaff_x19 + 0xd0) * (fVar6 + (fVar5 - fVar6) * fVar4),param_2,
                   *(undefined8 *)(*param_2 + 0x200));
      }
      lVar1 = *(long *)(unaff_x19 + 200);
      unaff_w21 = unaff_w21 + 1;
      if (lVar1 == 0) {
LAB_069745e0:
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
      if (*(int *)(lVar1 + 0x18) <= unaff_w21) {
        return;
      }
      unaff_x23 = FUN_04de82e0(lVar1,unaff_w21,*unaff_x24);
      if ((unaff_x23 == 0) || (param_2 = *(long **)(unaff_x23 + 0x18), param_2 == (long *)0x0))
      goto LAB_069745e0;
      (**(code **)(*param_2 + 0x1a8))(0,param_2,*(undefined8 *)(*param_2 + 0x1b0));
      (**(code **)(*param_2 + 0x188))(0,param_2,*(undefined8 *)(*param_2 + 400));
      if (*(char *)(unaff_x23 + 0x12) != '\0' && ((unaff_w20 ^ 0xffffffff) & 1) == 0) {
        (**(code **)(*param_2 + 0x1a8))
                  (*(undefined4 *)(unaff_x19 + 0xb4),param_2,*(undefined8 *)(*param_2 + 0x1b0));
      }
      fVar2 = (float)FUN_06926538();
      if (((fVar2 < unaff_s9) && (fVar2 = *(float *)(unaff_x19 + 0xdc), unaff_s10 < fVar2)) ||
         ((fVar2 = (float)FUN_06926538(), unaff_s8 < fVar2 &&
          (fVar2 = *(float *)(unaff_x19 + 0xdc), fVar2 < unaff_s12)))) {
        (**(code **)(*param_2 + 0x1a8))
                  (*(float *)(unaff_x19 + 0xb4) * ABS(fVar2),param_2,
                   *(undefined8 *)(*param_2 + 0x1b0));
      }
    } while ((((*(char *)(unaff_x23 + 0x10) == '\0') ||
              (fVar2 = (float)FUN_06926538(), fVar2 < -0.5)) ||
             (fVar2 = *(float *)(unaff_x19 + 0xdc), fVar2 <= unaff_s10)) &&
            ((fVar2 = (float)FUN_06926538(), 0.5 < fVar2 ||
             (fVar2 = *(float *)(unaff_x19 + 0xdc), unaff_s12 <= fVar2))));
    param_1 = (ulong)(uint)(*(float *)(unaff_x19 + 0xb8) * fVar2);
    in_x9 = *(code **)(*param_2 + 0x188);
    param_3 = *(undefined8 *)(*param_2 + 400);
    unaff_x22 = param_2;
  } while( true );
}


