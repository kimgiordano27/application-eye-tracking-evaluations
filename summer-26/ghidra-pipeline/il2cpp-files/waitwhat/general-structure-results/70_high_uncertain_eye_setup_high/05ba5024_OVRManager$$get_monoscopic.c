/*
FUNCTION_NAME: OVRManager$$get_monoscopic
ENTRY_POINT: 05ba5024
PROGRAM: waitwhat-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_monoscopic
               (float param_1,float param_2,float param_3,undefined4 param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x19;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_s8;
  float fVar12;
  float unaff_s10;
  float unaff_s15;
  
  fVar12 = param_2;
  if (0.0 <= param_1) {
    fVar12 = param_1;
  }
                    /* catch(type#1 @ 06cdc248) { ... } // from try @ 05ba4fe8 with catch @ 05ba5034
                        */
  if ((param_5 != 0) && (lVar2 = FUN_069d3a80(param_5,0), lVar2 != 0)) {
    fVar5 = (float)FUN_069e6fbc(lVar2,0);
                    /* try { // try from 05ba5050 to 05ca5053 has its CatchHandler @ 05ba522c */
                    /* try { // try from 05ba5054 to 05ca522f has its CatchHandler @ 05ba4cbc */
    if ((*(long *)(unaff_x19 + 0x20) != 0) &&
       (fVar8 = param_2, fVar10 = param_3, lVar2 = FUN_069d3a80(*(long *)(unaff_x19 + 0x20),0),
       lVar2 != 0)) {
      fVar6 = (float)FUN_069e6fbc(lVar2,0);
      if ((*(long *)(unaff_x19 + 0x20) != 0) &&
         (fVar9 = fVar8, fVar11 = fVar10, lVar2 = FUN_069d3a80(*(long *)(unaff_x19 + 0x20),0),
         puVar1 = PTR_DAT_070c1b68, lVar2 != 0)) {
        uVar7 = FUN_069e5200(lVar2,0);
        uVar4 = *(undefined8 *)(unaff_x19 + 0x40);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar3 = FUN_069d69b8(uVar4,0,0);
        if ((uVar3 & 1) != 0) {
          if ((*(long *)(unaff_x19 + 0x40) == 0) ||
             (lVar2 = FUN_069d3a80(*(long *)(unaff_x19 + 0x40),0), lVar2 == 0)) goto LAB_05ba51ac;
          FUN_069e7c88(unaff_s15 * fVar12 + fVar5,unaff_s8 * fVar12 + param_2,
                       unaff_s10 * fVar12 + param_3,uVar7,fVar9,fVar11,param_4,lVar2,0);
        }
        uVar4 = *(undefined8 *)(unaff_x19 + 0x48);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_031e5338();
        }
        uVar3 = FUN_069d69b8(uVar4,0,0);
        if ((uVar3 & 1) == 0) {
          return;
        }
        if ((*(long *)(unaff_x19 + 0x48) != 0) &&
           (lVar2 = FUN_069d3a80(*(long *)(unaff_x19 + 0x48),0), lVar2 != 0)) {
          FUN_069e7c88(fVar6 - unaff_s15 * fVar12,fVar8 - unaff_s8 * fVar12,
                       fVar10 - unaff_s10 * fVar12,uVar7,fVar9,fVar11,param_4,lVar2,0);
          return;
        }
      }
    }
  }
LAB_05ba51ac:
                    /* WARNING: Subroutine does not return */
  FUN_03188cd8();
}


