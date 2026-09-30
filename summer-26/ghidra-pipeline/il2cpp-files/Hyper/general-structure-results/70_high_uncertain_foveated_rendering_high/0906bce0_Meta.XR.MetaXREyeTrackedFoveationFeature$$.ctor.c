/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$.ctor
ENTRY_POINT: 0906bce0
PROGRAM: Hyper-libil2cpp.so
SCORE: 82
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 Meta_XR_MetaXREyeTrackedFoveationFeature___ctor(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_0ac09788;
  if ((DAT_0b3300ba & 1) == 0) {
    FUN_04947ee4(PTR_DAT_0ac09788);
    FUN_04947ee4(PTR_DAT_0ac09810);
    DAT_0b3300ba = 1;
  }
  lVar2 = *(long *)puVar1;
  if (param_2 != (long *)0x0) {
    if (*(byte *)(*param_2 + 0x130) < *(byte *)(lVar2 + 0x130)) {
      param_2 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(lVar2 + 0x130) * 8 + -8) !=
             lVar2) {
      param_2 = (long *)0x0;
    }
  }
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_049a583c();
  }
  uVar3 = FUN_0a17b398(param_2,0,0);
  if ((uVar3 & 1) == 0) {
    return *(undefined8 *)PTR_DAT_0ac09810;
  }
  if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0494818c();
  }
  uVar4 = thunk_FUN_0a180a20(param_2,0);
  return uVar4;
}


