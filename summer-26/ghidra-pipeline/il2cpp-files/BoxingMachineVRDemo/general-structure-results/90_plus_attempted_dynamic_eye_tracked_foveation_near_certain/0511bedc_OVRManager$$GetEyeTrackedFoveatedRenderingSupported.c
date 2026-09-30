/*
FUNCTION_NAME: OVRManager$$GetEyeTrackedFoveatedRenderingSupported
ENTRY_POINT: 0511bedc
PROGRAM: BoxingMachineVRDemo-libil2cpp.so
SCORE: 131
LABEL: attempted_dynamic_eye_tracked_foveation_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: attempted_or_possible_dynamic_eye_tracked_foveation
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering;attempted_eye_tracked_foveated_rendering
MODULES: eye_source;weak_source_state;foveation_rendering;attempted_use;dynamic_foveation_possible
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_4;strong_foveation_hits_2;attempted_eye_tracking_permission_or_feature_enable;attempted_eye_tracking_with_foveated_rendering_path;functionality_foveated_rendering
*/


undefined8 OVRManager__GetEyeTrackedFoveatedRenderingSupported(ulong param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x21;
  long *unaff_x22;
  
  if ((param_1 & 1) == 0) {
    FUN_02d6084c(PTR_DAT_06780528);
    FUN_02d6084c(PTR_DAT_067680d0);
    *(undefined1 *)(unaff_x21 + 0xbd6) = 1;
  }
  if (*(int *)(*unaff_x22 + 0xe4) == 0) {
    thunk_FUN_02dbd7b4();
  }
  plVar2 = (long *)FUN_051427c8();
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    plVar4 = (long *)0x0;
  }
  else {
    lVar5 = *(long *)PTR_DAT_06780528;
    bVar1 = *(byte *)(lVar5 + 0x130);
    if (*(byte *)(*plVar2 + 0x130) < bVar1) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = plVar2;
      if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
        plVar4 = (long *)0x0;
      }
    }
    *(long **)(param_2 + 0x30) = plVar4;
    if (*(byte *)(*plVar2 + 0x130) < bVar1) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = plVar2;
      if (*(long *)(*(long *)(*plVar2 + 200) + (ulong)bVar1 * 8 + -8) != lVar5) {
        plVar4 = (long *)0x0;
      }
    }
  }
  thunk_FUN_02dd37b4(param_2 + 0x30,plVar4);
  uVar3 = FUN_0511d858(param_2,plVar2);
  FUN_0511dc04(param_2,uVar3);
  return uVar3;
}


