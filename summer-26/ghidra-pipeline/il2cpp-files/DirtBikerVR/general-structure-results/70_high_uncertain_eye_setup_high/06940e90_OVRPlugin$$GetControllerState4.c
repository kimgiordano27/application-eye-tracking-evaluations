/*
FUNCTION_NAME: OVRPlugin$$GetControllerState4
ENTRY_POINT: 06940e90
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


uint OVRPlugin__GetControllerState4(long param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((DAT_0897cfa8 & 1) == 0) {
    FUN_03a8a718(PTR_DAT_084b6298);
    FUN_03a8a718(PTR_DAT_08488700);
    FUN_03a8a718(PTR_DAT_0848a9f8);
    DAT_0897cfa8 = 1;
  }
                    /* try { // try from 06940edc to 06a40edf has its CatchHandler @ 069413cc */
                    /* try { // try from 06940ee0 to 06a40eef has its CatchHandler @ 069413e8 */
  uVar1 = FUN_0693d3f4(param_1,param_2 & 1);
  if ((uVar1 & 1) != 0) {
                    /* try { // try from 06940efc to 06a40f07 has its CatchHandler @ 069413e0 */
    if ((((*(long *)(param_1 + 0x10) != 0) &&
         (lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0xe8), lVar3 != 0)) &&
        (lVar3 = *(long *)(lVar3 + 0x40), lVar3 != 0)) &&
       (lVar3 = *(long *)(lVar3 + 0x88), lVar3 != 0)) {
                    /* try { // try from 06940f14 to 06a40f1f has its CatchHandler @ 069413fc */
      lVar3 = *(long *)(lVar3 + 0x28);
      uVar2 = thunk_FUN_03ac74bc(*(undefined8 *)PTR_DAT_08488700);
      FUN_059f4b7c(uVar2,param_1,*(undefined8 *)PTR_DAT_084b6298,0);
      if (lVar3 != 0) {
        FUN_059f8a40(lVar3,uVar2,*(undefined8 *)PTR_DAT_0848a9f8);
        goto LAB_06940f5c;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_06940f5c:
                    /* try { // try from 06940f60 to 06a40f67 has its CatchHandler @ 069413ec */
  return uVar1 & 1;
}


