/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$set_useDynamicFoveatedRendering
ENTRY_POINT: 04f2ce78
PROGRAM: vrealmfunverse-libil2cpp.so
SCORE: 88
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;strong_foveation_hits_4;functionality_foveated_rendering
*/


void Meta_XR_MetaXRFoveationFeature__set_useDynamicFoveatedRendering
               (long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  undefined8 uVar2;
  
  if ((DAT_066c9939 & 1) == 0) {
    FUN_02b3c81c(System_Collections_Generic_Dictionary<Hand,_Climbable>_TypeInfo);
    DAT_066c9939 = 1;
  }
  *(undefined8 *)(param_1 + 0x58) = param_2;
  thunk_FUN_02bb0e9c((undefined8 *)(param_1 + 0x58),param_2);
  *(undefined1 *)(param_1 + 0x81) = 1;
  if (((*(long *)(param_1 + 0x20) != 0) && (param_4 != 0)) &&
     (plVar1 = *(long **)(*(long *)(param_1 + 0x20) + 0x50), plVar1 != (long *)0x0)) {
    uVar2 = (**(code **)(*plVar1 + 0x188))
                      (plVar1,param_3,*(undefined4 *)(param_4 + 0x14),*(undefined8 *)(*plVar1 + 400)
                      );
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    thunk_FUN_02bb0e9c();
    *(long *)(param_1 + 0x78) = param_4;
    *(undefined4 *)(param_1 + 0x70) = param_3;
    thunk_FUN_02bb0e9c((long *)(param_1 + 0x78),param_4);
    *(undefined1 *)(param_1 + 0x80) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02b3cac4();
}


