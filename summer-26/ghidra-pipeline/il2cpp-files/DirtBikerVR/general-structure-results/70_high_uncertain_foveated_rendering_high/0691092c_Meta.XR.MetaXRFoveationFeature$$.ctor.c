/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$.ctor
ENTRY_POINT: 0691092c
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 83
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature___ctor(void)

{
  long lVar1;
  undefined4 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  int iVar2;
  long unaff_x22;
  long *unaff_x23;
  int iStack0000000000000010;
  
  *(undefined8 *)(&stack0x00000000 + unaff_x22 * 8) = unaff_x21;
  iVar2 = (int)unaff_x22;
  iStack0000000000000010 = iVar2 + 1;
  __cxa_end_catch();
  lVar1 = thunk_FUN_03af1434(PTR_DAT_08486be8);
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07c45688();
  iStack0000000000000010 = iVar2;
  if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
                    /* try { // try from 06910888 to 06a10893 has its CatchHandler @ 06910b7c */
  FUN_0690e9c4();
  lVar1 = *unaff_x23;
                    /* try { // try from 06910898 to 06a108a3 has its CatchHandler @ 06910b78 */
  *unaff_x19 = 0xfffffffe;
  if (*(int *)(lVar1 + 0xe4) == 0) {
                    /* try { // try from 069108a8 to 06a108b3 has its CatchHandler @ 06910bb0 */
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(unaff_x19 + 2,0);
  return;
}


