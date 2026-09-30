/*
FUNCTION_NAME: Meta.XR.MultiplayerBlocks.Colocation.Fusion.FusionAnchor$$GetAnchor
ENTRY_POINT: 052f80c8
PROGRAM: Untangled-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_7;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MultiplayerBlocks_Colocation_Fusion_FusionAnchor__GetAnchor
               (undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x19;
  long *unaff_x20;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  
  uVar1 = FUN_03a862a4(param_2,*param_1);
  *(undefined8 *)(unaff_x19 + 0x48) = uVar1;
  thunk_FUN_02f411dc();
  lVar2 = *(long *)(unaff_x19 + 0x40);
  if ((lVar2 != 0) && (*(long *)(unaff_x19 + 0x48) != 0)) {
    FUN_067440c0(*(undefined4 *)(lVar2 + 0x80),*(undefined4 *)(lVar2 + 0x84),
                 *(undefined4 *)(lVar2 + 0x88),*(long *)(unaff_x19 + 0x48),0);
    lVar2 = *(long *)(unaff_x19 + 0x40);
    if (lVar2 != 0) {
      lVar3 = *(long *)(unaff_x19 + 0x48);
      FUN_0528b5b0(*(undefined4 *)(lVar2 + 0x80),*(undefined4 *)(lVar2 + 0x84),
                   *(undefined4 *)(lVar2 + 0x88),0);
      if (lVar3 != 0) {
        FUN_06745500(lVar3,0);
        FUN_0529a6c0(*unaff_x20,0);
        if (*unaff_x20 != 0) {
          FUN_06743fdc(*unaff_x20,*(undefined8 *)(unaff_x19 + 0x20),0);
          if (*(long *)(unaff_x19 + 0x40) != 0) {
            *(undefined4 *)(unaff_x19 + 0x50) = *(undefined4 *)(*(long *)(unaff_x19 + 0x40) + 0x7c);
            uVar4 = NEON_fminnm(*(undefined4 *)(unaff_x19 + 0x58),0x43310000);
            FUN_0529a3d8(uVar4,0,0,*(undefined8 *)(unaff_x19 + 0x48),0);
            if (177.0 <= *(float *)(unaff_x19 + 0x54)) {
              fVar5 = -177.0;
            }
            else {
              fVar5 = -*(float *)(unaff_x19 + 0x54);
            }
            FUN_0529a348(fVar5,0,0,*(undefined8 *)(unaff_x19 + 0x48),0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f080c0();
}


