/*
FUNCTION_NAME: OVRPlugin.Media$$SetPlatformCameraMode
ENTRY_POINT: 06aeefb8
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__SetPlatformCameraMode
               (long param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  float *pfVar4;
  int in_w9;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long unaff_x21;
  long unaff_x23;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  (**(code **)(param_1 + (long)(in_w9 + 1) * 0x10 + 0x138))();
  if ((unaff_x20 != 0) && (FUN_06aed8c4(), unaff_x21 != 0)) {
    FUN_07a18dcc();
    lVar5 = *(long *)(unaff_x19 + 0x48);
    if (lVar5 != 0) {
      if (DAT_086edcb8 == (code *)0x0) {
        DAT_086edcb8 = (code *)FUN_033d1b68("UnityEngine.Renderer::get_enabled()");
      }
                    /* try { // try from 06aef018 to 06bef01b has its CatchHandler @ 06aef024 */
      uVar1 = (*DAT_086edcb8)(lVar5);
                    /* try { // try from 06aef01c to 06bef01f has its CatchHandler @ 06aef020 */
      if ((uVar1 & 1) == 0) {
        return;
      }
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06aef01c with catch @ 06aef020
                       try { // try from 06aef020 to 06bef03b has its CatchHandler @ 06aeedc4 */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06aef018 with catch @ 06aef024
                        */
      if (*(long *)(unaff_x19 + 0x50) != 0) {
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06aeef3c with catch @ 06aef028
                        */
                    /* catch(type#1 @ 07e8c608) { ... } // from try @ 06aeef84 with catch @ 06aef02c
                        */
        fVar6 = (float)FUN_07a18d2c(*(long *)(unaff_x19 + 0x50),0);
        pcVar3 = *(code **)(unaff_x23 + 0x188);
                    /* try { // try from 06aef03c to 06bef03f has its CatchHandler @ 06aef080 */
                    /* try { // try from 06aef040 to 06bef087 has its CatchHandler @ 06aeedc4 */
        fVar10 = param_3;
        fVar8 = param_4;
        if (pcVar3 == (code *)0x0) {
          pcVar3 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
          *(code **)(unaff_x23 + 0x188) = pcVar3;
        }
        lVar5 = (*pcVar3)();
        if (lVar5 != 0) {
          fVar7 = (float)FUN_07a18d2c(lVar5,0);
                    /* catch() { ... } // from try @ 06aef03c with catch @ 06aef080 */
          if (DAT_086d7cc3 == '\0') {
            FUN_0335b6c8(&DAT_083ce8b0,1);
            DataMemoryBarrier(2,3);
            DAT_086d7cc3 = '\x01';
          }
          fVar6 = fVar6 - fVar7;
          param_3 = param_3 - fVar10;
          param_4 = param_4 - fVar8;
          if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
            FUN_033b9870();
          }
          fVar7 = param_4 * param_4;
          fVar8 = SQRT(fVar7 + fVar6 * fVar6 + param_3 * param_3);
          fVar10 = DAT_012edb5c;
          if (fVar8 <= DAT_012edb5c) {
            if (DAT_086d7cc6 == '\0') {
              FUN_0335b6c8(&DAT_083d2c90,1);
              DataMemoryBarrier(2,3);
              DAT_086d7cc6 = '\x01';
            }
            pfVar4 = *(float **)(DAT_083d2c90 + 0xb8);
            fVar6 = *pfVar4;
            param_3 = pfVar4[1];
            param_4 = pfVar4[2];
          }
          else {
            fVar6 = fVar6 / fVar8;
            param_3 = param_3 / fVar8;
            param_4 = param_4 / fVar8;
          }
          pcVar3 = *(code **)(unaff_x23 + 0x188);
          if (pcVar3 == (code *)0x0) {
            pcVar3 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
            *(code **)(unaff_x23 + 0x188) = pcVar3;
          }
          lVar5 = (*pcVar3)();
          pcVar3 = *(code **)(unaff_x23 + 0x188);
          if (pcVar3 == (code *)0x0) {
            pcVar3 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
            *(code **)(unaff_x23 + 0x188) = pcVar3;
          }
          lVar2 = (*pcVar3)();
          if (lVar2 != 0) {
            fVar8 = (float)FUN_07a18d2c(lVar2,0);
            if (DAT_086d7c56 == '\0') {
              FUN_0335b6c8(&DAT_083d2c90,1);
              DataMemoryBarrier(2,3);
              DAT_086d7c56 = '\x01';
            }
            if (lVar5 != 0) {
              fVar10 = fVar10 - param_3;
              fVar7 = fVar7 - param_4;
              lVar2 = *(long *)(DAT_083d2c90 + 0xb8);
              FUN_07a1a680(fVar8 - fVar6,fVar10,fVar7,*(undefined4 *)(lVar2 + 0x18),
                           *(undefined4 *)(lVar2 + 0x1c),*(undefined4 *)(lVar2 + 0x20),lVar5);
              if (*(char *)(unaff_x19 + 0x60) == '\0') {
                return;
              }
              pcVar3 = *(code **)(unaff_x23 + 0x188);
              if (pcVar3 == (code *)0x0) {
                pcVar3 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
                *(code **)(unaff_x23 + 0x188) = pcVar3;
              }
              lVar5 = (*pcVar3)();
              if (lVar5 != 0) {
                fVar8 = (float)FUN_07a18d2c(lVar5,0);
                if (*(long *)(unaff_x19 + 0x50) != 0) {
                  fVar6 = fVar10;
                  fVar11 = fVar7;
                  fVar9 = (float)FUN_07a18d2c(*(long *)(unaff_x19 + 0x50),0);
                  if (DAT_086d7ff6 == '\0') {
                    FUN_0335b6c8(&DAT_083ce8b0,1);
                    DataMemoryBarrier(2,3);
                    DAT_086d7ff6 = '\x01';
                  }
                  if (*(int *)(DAT_083ce8b0 + 0xe0) == 0) {
                    FUN_033b9870();
                  }
                  lVar5 = *(long *)(unaff_x19 + 0x48);
                  if (lVar5 != 0) {
                    pcVar3 = *(code **)(unaff_x23 + 0x188);
                    if (pcVar3 == (code *)0x0) {
                      pcVar3 = (code *)FUN_033d1b68("UnityEngine.Component::get_transform()");
                      *(code **)(unaff_x23 + 0x188) = pcVar3;
                    }
                    lVar5 = (*pcVar3)(lVar5);
                    if (lVar5 != 0) {
                      fVar10 = SQRT((fVar7 - fVar11) * (fVar7 - fVar11) +
                                    (fVar8 - fVar9) * (fVar8 - fVar9) +
                                    (fVar10 - fVar6) * (fVar10 - fVar6));
                      FUN_07a19820(fVar10 * *(float *)(unaff_x19 + 100),
                                   fVar10 * *(float *)(unaff_x19 + 0x68),
                                   fVar10 * *(float *)(unaff_x19 + 0x6c),lVar5,0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_033d1d3c();
}


