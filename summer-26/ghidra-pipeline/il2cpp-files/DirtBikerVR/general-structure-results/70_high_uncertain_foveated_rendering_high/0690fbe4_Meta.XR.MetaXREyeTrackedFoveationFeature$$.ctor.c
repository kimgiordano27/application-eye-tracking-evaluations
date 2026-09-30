/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$.ctor
ENTRY_POINT: 0690fbe4
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature___ctor(long param_1)

{
  long lVar1;
  undefined4 *unaff_x19;
  undefined8 unaff_x20;
  int iVar2;
  long unaff_x21;
  long *unaff_x23;
  int iStack0000000000000010;
  
  *(undefined8 *)(param_1 + unaff_x21 * 8) = unaff_x20;
  iVar2 = (int)unaff_x21;
  iStack0000000000000010 = iVar2 + 1;
  __cxa_end_catch();
  lVar1 = thunk_FUN_03af1434(PTR_DAT_08486be8);
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_07c45688();
  lVar1 = *unaff_x23;
  *unaff_x19 = 0xfffffffe;
  iStack0000000000000010 = iVar2;
  if (*(int *)(lVar1 + 0xe4) == 0) {
    thunk_FUN_03ae8be4();
  }
  FUN_0666d184(unaff_x19 + 2,0);
  return;
}


