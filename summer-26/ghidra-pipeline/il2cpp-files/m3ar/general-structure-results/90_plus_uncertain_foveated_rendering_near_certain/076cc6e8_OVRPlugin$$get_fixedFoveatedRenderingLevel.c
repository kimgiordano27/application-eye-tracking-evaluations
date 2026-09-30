/*
FUNCTION_NAME: OVRPlugin$$get_fixedFoveatedRenderingLevel
ENTRY_POINT: 076cc6e8
PROGRAM: m3ar-libil2cpp.so
SCORE: 98
LABEL: uncertain_foveated_rendering_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: foveated_rendering
MODULES: eye_source;weak_source_state;validity_gate;foveation_rendering
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_foveation_hits_2;functionality_foveated_rendering
*/


long OVRPlugin__get_fixedFoveatedRenderingLevel(code *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 unaff_w19;
  long lVar4;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000008;
  
  uVar1 = (*param_1)(param_2,unaff_w19);
  if ((uVar1 & 1) == 0) {
    lVar4 = *(long *)PTR_DAT_08fadca0;
    lVar3 = *(long *)(lVar4 + 0x38);
    if (lVar3 == 0) {
      FUN_0406ab48(lVar4);
      lVar3 = *(long *)(lVar4 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0408f364();
    }
    lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_0406aaec();
    }
    in_stack_00000008 = **(undefined8 **)(lVar3 + 0xb8);
  }
  uVar2 = thunk_FUN_0406deb8(*unaff_x23);
  FUN_057d4cdc(uVar2,in_stack_00000008,*unaff_x22);
  lVar3 = thunk_FUN_0406deb8(*unaff_x21);
  FUN_075273c0(lVar3,0);
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  return lVar3;
}


