/*
FUNCTION_NAME: OVRPlugin.OVRP_1_55_1$$.cctor
ENTRY_POINT: 056a12e8
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_OVRP_1_55_1___cctor(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar1 = *(long *)(*(long *)(param_4 + 0xb8) + 8);
                    /* try { // try from 056a12f0 to 057a1307 has its CatchHandler @ 056a1460 */
  if ((lVar1 != 0) && (lVar1 = FUN_05660db8(lVar1,0), lVar1 != 0)) {
    lVar1 = FUN_0634bbcc(lVar1,0);
    *unaff_x22 = lVar1;
                    /* try { // try from 056a1310 to 057a1317 has its CatchHandler @ 056a14c8 */
    LeanTween__value();
    if (*unaff_x21 != 0) {
                    /* try { // try from 056a1320 to 057a13ab has its CatchHandler @ 056a14b4 */
      lVar1 = *unaff_x20;
      fVar3 = (float)FUN_0635d920(*unaff_x21,0);
      if (*unaff_x20 != 0) {
        fVar6 = param_2;
        fVar8 = param_3;
        fVar4 = (float)FUN_0635d920(*unaff_x20,0);
        if ((*unaff_x22 != 0) &&
           (fVar7 = fVar6, fVar9 = fVar8, lVar2 = FUN_0634ee08(*unaff_x22,0), lVar2 != 0)) {
          FUN_0635be14(lVar2,0);
          uVar5 = FUN_0633fd20(0);
          FUN_0633fa1c(fVar3 - fVar4,param_2 - fVar6,param_3 - fVar8,uVar5,fVar7,fVar9,0);
          if (lVar1 != 0) {
            FUN_0635dba8(lVar1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
}


