/*
FUNCTION_NAME: Meta.XR.MetaXREyeTrackedFoveationFeature$$.ctor
ENTRY_POINT: 05fdae80
PROGRAM: vandalizer-libil2cpp.so
SCORE: 101
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_3;validity_or_gating_hits_3;strong_foveation_hits_2;functionality_foveated_rendering
*/


void Meta_XR_MetaXREyeTrackedFoveationFeature___ctor(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if ((DAT_07a467cf & 1) == 0) {
    FUN_031f20f4(PTR_DAT_075f3f40);
    DAT_07a467cf = 1;
  }
  plVar4 = (long *)(param_1 + 0xa8);
  lVar2 = FUN_05e47444(*plVar4,param_2,0);
  puVar1 = PTR_DAT_075f3f40;
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)PTR_DAT_075f3f40;
    lVar3 = thunk_FUN_0322f04c(lVar2,uVar5);
    if (lVar3 != 0) {
      *plVar4 = lVar3;
      uVar5 = *(undefined8 *)puVar1;
      lVar3 = thunk_FUN_0322f04c(lVar2,uVar5);
      if (lVar3 != 0) goto LAB_05fdaf10;
    }
                    /* WARNING: Subroutine does not return */
    FUN_031f2730(lVar2,uVar5);
  }
  lVar3 = 0;
  *plVar4 = 0;
LAB_05fdaf10:
  thunk_FUN_0329bf60(plVar4,lVar3);
  return;
}


