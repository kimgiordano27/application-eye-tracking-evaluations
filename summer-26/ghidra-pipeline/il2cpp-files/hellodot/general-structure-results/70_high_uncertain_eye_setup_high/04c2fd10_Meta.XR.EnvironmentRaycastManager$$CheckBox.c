/*
FUNCTION_NAME: Meta.XR.EnvironmentRaycastManager$$CheckBox
ENTRY_POINT: 04c2fd10
PROGRAM: hellodot-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_EnvironmentRaycastManager__CheckBox(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *unaff_x19;
  long *unaff_x25;
  undefined1 auVar5 [16];
  
                    /* catch() { ... } // from try @ 04c2fa00 with catch @ 04c2fd14 */
  lVar1 = FUN_04c2d5f8(param_2,param_1);
                    /* catch() { ... } // from try @ 04c2fa40 with catch @ 04c2fd18 */
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02ce7c7c();
  }
  auVar5 = FUN_0404bcb8(lVar1,0,*(undefined8 *)PTR_DAT_065e1898);
                    /* try { // try from 04c2fd30 to 04d2fd33 has its CatchHandler @ 04c2fd40 */
                    /* catch() { ... } // from try @ 04c2fd30 with catch @ 04c2fd40 */
  uVar2 = FUN_044a8fc8();
  if ((uVar2 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0xc) = auVar5;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_02cd038c();
    }
                    /* try { // try from 04c2fd80 to 04d2fda7 has its CatchHandler @ 04c2fdbc */
    FUN_0309f664(unaff_x19 + 2);
    return;
  }
  thunk_FUN_02c7737c(PTR_DAT_065e18a0);
  uVar3 = FUN_044a9014();
  uVar4 = thunk_FUN_02c7737c(PTR_DAT_065e62b8);
                    /* WARNING: Subroutine does not return */
  FUN_02ce7b54(uVar3,uVar4);
}


