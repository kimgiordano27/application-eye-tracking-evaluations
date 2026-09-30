/*
FUNCTION_NAME: Meta.XR.MetaXRFoveationFeature$$get_useDynamicFoveatedRendering
ENTRY_POINT: 020fabb8
PROGRAM: vrfs-libil2cpp.so
SCORE: 75
LABEL: uncertain_foveated_rendering_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;foveation_rendering
EVIDENCE: strong_eye_source_hits_1;strong_foveation_hits_4;functionality_foveated_rendering
*/


undefined8 Meta_XR_MetaXRFoveationFeature__get_useDynamicFoveatedRendering(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_06d9fd78;
  if ((DAT_0722e1a5 & 1) == 0) {
    thunk_FUN_0159f088(PTR_DAT_06d9fd78);
    DAT_0722e1a5 = 1;
  }
  uVar3 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
    thunk_FUN_016466fc();
  }
  uVar2 = FUN_051d2ac0(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = param_1[1];
    if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    uVar2 = FUN_051d2ac0(uVar3,0,0);
    if ((uVar2 & 1) != 0) {
      uVar3 = param_1[2];
      if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
        thunk_FUN_016466fc();
      }
      uVar2 = FUN_051d2ac0(uVar3,0,0);
      if ((uVar2 & 1) != 0) {
        uVar3 = param_1[3];
        if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
          thunk_FUN_016466fc();
        }
        uVar3 = FUN_051d2ac0(uVar3,0,0);
        return uVar3;
      }
    }
  }
  return 0;
}


