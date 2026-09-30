/*
FUNCTION_NAME: OVRPlugin$$get_useDynamicFixedFoveatedRendering
ENTRY_POINT: 06387f70
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 113
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;paired_field_refs_with_eye_source;strong_foveation_hits_2;functionality_foveated_rendering
*/


undefined8 OVRPlugin__get_useDynamicFixedFoveatedRendering(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar3 = *(long *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar3 == 0) goto LAB_0638802c;
    *(long *)(param_1 + 0x30) = *(long *)(lVar3 + 0x20);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
LAB_0638802c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    plVar1 = *(long **)(lVar4 + 0x10);
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    uVar2 = (**(code **)(*plVar1 + 0x278))(plVar1,*(undefined8 *)(*plVar1 + 0x280));
    *(undefined8 *)(param_1 + 0x30) = uVar2;
  }
  thunk_FUN_037aeb94();
  plVar1 = (long *)(param_1 + 0x30);
  lVar3 = *plVar1;
  if ((lVar3 != lVar4) && (lVar3 != 0)) {
    *(long *)(param_1 + 0x18) = lVar3;
    thunk_FUN_037aeb94((long *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
  *plVar1 = 0;
  thunk_FUN_037aeb94(plVar1,0);
  return 0;
}


