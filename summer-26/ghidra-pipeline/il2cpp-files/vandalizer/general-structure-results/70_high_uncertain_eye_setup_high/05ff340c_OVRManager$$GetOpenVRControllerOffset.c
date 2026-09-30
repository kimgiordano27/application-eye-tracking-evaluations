/*
FUNCTION_NAME: OVRManager$$GetOpenVRControllerOffset
ENTRY_POINT: 05ff340c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__GetOpenVRControllerOffset(undefined1 param_1 [16],float param_2,float param_3)

{
  int in_w8;
  float *pfVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  float fVar3;
  undefined4 unaff_s8;
  float unaff_s9;
  float fVar4;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  
                    /* try { // try from 05ff3410 to 060f3417 has its CatchHandler @ 05ff3418 */
  if (in_w8 == 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05ff33dc with catch @ 05ff3418
                       catch(type#2 @ 00000000) { ... } // from try @ 05ff3410 with catch @ 05ff3418
                        */
    FUN_031f20f4(PTR_DAT_0759b370);
    *(undefined1 *)(unaff_x20 + 0xa81) = 1;
  }
  fVar4 = unaff_s9 - unaff_s12;
  param_2 = unaff_s10 - param_2;
  param_3 = unaff_s11 - param_3;
  if (*(int *)(*(long *)PTR_DAT_0759b370 + 0xe4) == 0) {
    Best_HTTP_Hosts_Connections_HTTP2_FramesAsStreamView__get_CanWrite();
  }
  fVar3 = SQRT(param_3 * param_3 + fVar4 * fVar4 + param_2 * param_2);
  if (fVar3 <= DAT_014ba9b8) {
    if (DAT_07a3ca82 == '\0') {
      FUN_031f20f4(PTR_DAT_0759b378);
      DAT_07a3ca82 = '\x01';
    }
    pfVar1 = *(float **)(*(long *)PTR_DAT_0759b378 + 0xb8);
    fVar4 = *pfVar1;
    param_2 = pfVar1[1];
    param_3 = pfVar1[2];
  }
  else {
    fVar4 = fVar4 / fVar3;
    param_2 = param_2 / fVar3;
    param_3 = param_3 / fVar3;
  }
  if (*(long *)(unaff_x19 + 0x30) != 0) {
    FUN_06e547e8(*(long *)(unaff_x19 + 0x30),1,0);
    lVar2 = *(long *)(unaff_x19 + 0x30);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0x4c) = 1;
      *(float *)(lVar2 + 0x40) = fVar4;
      *(float *)(lVar2 + 0x44) = param_2;
      *(float *)(lVar2 + 0x48) = param_3;
      if (*(long *)(unaff_x19 + 0x30) != 0) {
        *(undefined4 *)(*(long *)(unaff_x19 + 0x30) + 0x74) = unaff_s8;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2390();
}


