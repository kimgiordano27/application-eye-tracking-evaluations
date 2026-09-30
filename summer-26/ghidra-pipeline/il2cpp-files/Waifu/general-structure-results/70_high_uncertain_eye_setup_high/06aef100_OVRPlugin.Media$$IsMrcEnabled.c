/*
FUNCTION_NAME: OVRPlugin.Media$$IsMrcEnabled
ENTRY_POINT: 06aef100
PROGRAM: Waifu-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_Media__IsMrcEnabled(undefined1 param_1 [16],float param_2,float param_3)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  code *pcVar4;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long unaff_x23;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (*(char *)(unaff_x20 + 0xcc6) == '\0') {
    FUN_0335b6c8(&DAT_083d2c90,1);
    DataMemoryBarrier(2,3);
    *(undefined1 *)(unaff_x20 + 0xcc6) = 1;
  }
  pfVar3 = *(float **)(*(long *)(unaff_x22 + 0xc90) + 0xb8);
  fVar6 = *pfVar3;
  fVar7 = pfVar3[1];
  fVar8 = pfVar3[2];
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
      param_2 = param_2 - fVar7;
      param_3 = param_3 - fVar8;
      lVar2 = *(long *)(*(long *)(unaff_x22 + 0xc90) + 0xb8);
      FUN_07a1a680(fVar5 - fVar6,param_2,param_3,*(undefined4 *)(lVar2 + 0x18),
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
        fVar6 = (float)FUN_07a18d2c(lVar1,0);
        if (*(long *)(unaff_x19 + 0x50) != 0) {
          fVar7 = param_2;
          fVar8 = param_3;
          fVar5 = (float)FUN_07a18d2c(*(long *)(unaff_x19 + 0x50),0);
          if (DAT_086d7ff6 == '\0') {
            FUN_0335b6c8(&DAT_083ce8b0,1);
            DataMemoryBarrier(2,3);
            DAT_086d7ff6 = '\x01';
          }
          if (*(int *)(*(long *)(unaff_x21 + 0x8b0) + 0xe0) == 0) {
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
              fVar6 = SQRT((param_3 - fVar8) * (param_3 - fVar8) +
                           (fVar6 - fVar5) * (fVar6 - fVar5) + (param_2 - fVar7) * (param_2 - fVar7)
                          );
              FUN_07a19820(fVar6 * *(float *)(unaff_x19 + 100),fVar6 * *(float *)(unaff_x19 + 0x68),
                           fVar6 * *(float *)(unaff_x19 + 0x6c),lVar1,0);
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


