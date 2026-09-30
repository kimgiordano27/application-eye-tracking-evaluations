/*
FUNCTION_NAME: OVRPlugin.OVRP_1_57_0$$ovrp_Media_SetPlatformCameraMode
ENTRY_POINT: 06aef084
PROGRAM: Waifu-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_57_0__ovrp_Media_SetPlatformCameraMode(void)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  code *pcVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x23;
  float fVar5;
  float fVar6;
  float fVar7;
  float unaff_s8;
  float fVar8;
  float unaff_s9;
  float fVar9;
  float unaff_s10;
  float unaff_s11;
  float fVar10;
  float unaff_s12;
  float unaff_s13;
  
                    /* try { // try from 06aef088 to 06bef08f has its CatchHandler @ 06aef090 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 06aef088 with catch @ 06aef090
                        */
  FUN_0335b6c8(&DAT_083ce8b0,1);
  DataMemoryBarrier(2,3);
  *(undefined1 *)(unaff_x20 + 0xcc3) = 1;
  fVar10 = unaff_s8 - unaff_s11;
  fVar9 = unaff_s9 - unaff_s12;
  fVar8 = unaff_s10 - unaff_s13;
  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
    FUN_033b9870();
  }
  fVar7 = fVar8 * fVar8;
  fVar5 = SQRT(fVar7 + fVar10 * fVar10 + fVar9 * fVar9);
  fVar6 = DAT_012edb5c;
  if (fVar5 <= DAT_012edb5c) {
    if (DAT_086d7cc6 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7cc6 = '\x01';
    }
    pfVar3 = *(float **)(DAT_083d2c90 + 0xb8);
    fVar10 = *pfVar3;
    fVar9 = pfVar3[1];
    fVar8 = pfVar3[2];
  }
  else {
    fVar10 = fVar10 / fVar5;
    fVar9 = fVar9 / fVar5;
    fVar8 = fVar8 / fVar5;
  }
  pcVar4 = *(code **)(unaff_x23 + 0x188);
  if (pcVar4 == (code *)0x0) {
    pcVar4 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    *(code **)(unaff_x23 + 0x188) = pcVar4;
  }
  lVar1 = (*pcVar4)();
  pcVar4 = *(code **)(unaff_x23 + 0x188);
  if (pcVar4 == (code *)0x0) {
    pcVar4 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
    *(code **)(unaff_x23 + 0x188) = pcVar4;
  }
  lVar2 = (*pcVar4)();
  if (lVar2 != 0) {
    fVar5 = (float)FUN_07a18d2c(lVar2,0);
    if (DAT_086d7c56 == '\0') {
      FUN_0335b6c8(&DAT_083d2c90,1);
      DataMemoryBarrier(2,3);
      DAT_086d7c56 = '\x01';
    }
    if (lVar1 != 0) {
      fVar6 = fVar6 - fVar9;
      fVar7 = fVar7 - fVar8;
      lVar2 = *(long *)(DAT_083d2c90 + 0xb8);
      FUN_07a1a680(fVar5 - fVar10,fVar6,fVar7,*(undefined4 *)(lVar2 + 0x18),
                   *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),lVar1);
      if (*(char *)(unaff_x19 + 0x60) == '\0') {
        return;
      }
      pcVar4 = *(code **)(unaff_x23 + 0x188);
      if (pcVar4 == (code *)0x0) {
        pcVar4 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
        *(code **)(unaff_x23 + 0x188) = pcVar4;
      }
      lVar1 = (*pcVar4)();
      if (lVar1 != 0) {
        fVar8 = (float)FUN_07a18d2c(lVar1,0);
        if (*(long *)(unaff_x19 + 0x50) != 0) {
          fVar9 = fVar6;
          fVar10 = fVar7;
          fVar5 = (float)FUN_07a18d2c(*(long *)(unaff_x19 + 0x50),0);
          if (DAT_086d7ff6 == '\0') {
            FUN_0335b6c8(&DAT_083ce8b0,1);
            DataMemoryBarrier(2,3);
            DAT_086d7ff6 = '\x01';
          }
          if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
            FUN_033b9870();
          }
          lVar1 = *(long *)(unaff_x19 + 0x48);
          if (lVar1 != 0) {
            pcVar4 = *(code **)(unaff_x23 + 0x188);
            if (pcVar4 == (code *)0x0) {
              pcVar4 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
              *(code **)(unaff_x23 + 0x188) = pcVar4;
            }
            lVar1 = (*pcVar4)(lVar1);
            if (lVar1 != 0) {
              fVar8 = SQRT((fVar7 - fVar10) * (fVar7 - fVar10) +
                           (fVar8 - fVar5) * (fVar8 - fVar5) + (fVar6 - fVar9) * (fVar6 - fVar9));
              FUN_07a19820(fVar8 * *(float *)(unaff_x19 + 100),fVar8 * *(float *)(unaff_x19 + 0x68),
                           fVar8 * *(float *)(unaff_x19 + 0x6c),lVar1,0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


