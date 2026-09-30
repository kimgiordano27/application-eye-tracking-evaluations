/*
FUNCTION_NAME: Meta.XR.MetaXRFeature$$OnSessionExiting
ENTRY_POINT: 069104cc
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 86
LABEL: uncertain_gaze_or_xr_structure_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: data_collection_or_telemetry
MODULES: eye_source;validity_gate;telemetry
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;telemetry_or_network_hits_2;functionality_data_collection_or_telemetry_hits_2
*/


void Meta_XR_MetaXRFeature__OnSessionExiting(void)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x21;
  undefined8 in_stack_00000018;
  
                    /* try { // try from 069104d4 to 06a104df has its CatchHandler @ 0691052c */
  uVar3 = FUN_0666e8e0(&stack0x00000018,0);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined8 *)(unaff_x19 + 0xc) = in_stack_00000018;
                    /* try { // try from 069104ec to 06a1050b has its CatchHandler @ 06910534 */
    thunk_FUN_03afed3c(unaff_x19 + 0xc,0);
    if (*(int *)(*unaff_x21 + 0xe4) == 0) {
      thunk_FUN_03ae8be4();
    }
    FUN_040001e0(unaff_x19 + 2,&stack0x00000018);
                    /* try { // try from 06910520 to 06a10523 has its CatchHandler @ 06910554 */
  }
  else {
                    /* catch() { ... } // from try @ 0691048c with catch @ 06910538 */
                    /* catch() { ... } // from try @ 069103d0 with catch @ 0691053c */
                    /* catch() { ... } // from try @ 069103c0 with catch @ 06910540 */
    FUN_0666e9a8(&stack0x00000018,0);
    puVar2 = PTR_DAT_084ada30;
                    /* catch() { ... } // from try @ 06910528 with catch @ 06910544 */
    if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0691058c to 06a105f3 has its CatchHandler @ 06910318 */
      FUN_03a8a9c0();
    }
                    /* catch() { ... } // from try @ 069104a4 with catch @ 06910548 */
                    /* catch() { ... } // from try @ 06910438 with catch @ 0691054c */
                    /* catch() { ... } // from try @ 06910428 with catch @ 06910550 */
                    /* catch() { ... } // from try @ 06910520 with catch @ 06910554 */
                    /* catch() { ... } // from try @ 06910410 with catch @ 06910558
                       catch() { ... } // from try @ 06910524 with catch @ 06910558 */
    uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
                    /* catch() { ... } // from try @ 069103e0 with catch @ 0691055c
                       catch() { ... } // from try @ 06910448 with catch @ 0691055c */
    iVar1 = *(int *)(*unaff_x21 + 0xe4);
    *unaff_x19 = 0xfffffffe;
    if (iVar1 == 0) {
      thunk_FUN_03ae8be4();
    }
                    /* try { // try from 06910574 to 06a1058b has its CatchHandler @ 06910604 */
    FUN_05338ae8(unaff_x19 + 2,uVar4,*(undefined8 *)puVar2);
  }
  return;
}


