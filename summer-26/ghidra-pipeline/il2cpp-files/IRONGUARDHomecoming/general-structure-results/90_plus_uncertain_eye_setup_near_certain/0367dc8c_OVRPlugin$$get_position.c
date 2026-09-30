/*
FUNCTION_NAME: OVRPlugin$$get_position
ENTRY_POINT: 0367dc8c
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 90
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_1;strong_pose_or_ray_construction_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


long OVRPlugin__get_position(code *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 in_stack_00000008;
  
  uVar1 = (*param_1)();
  if ((uVar1 & 1) == 0) {
    lVar4 = *(long *)Method_Unity_VisualScripting_MultiplicationHandler_<>c_<_ctor>b__0_74__;
    lVar3 = *(long *)(lVar4 + 0x38);
    if (lVar3 == 0) {
      FUN_01ecafa0(lVar4);
      lVar3 = *(long *)(lVar4 + 0x38);
    }
    lVar3 = *(long *)(lVar3 + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    if (*(int *)(lVar3 + 0xe0) == 0) {
      thunk_FUN_01ee6d7c();
    }
    lVar3 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01ecaf44();
    }
    in_stack_00000008 = **(undefined8 **)(lVar3 + 0xb8);
  }
  uVar2 = thunk_FUN_01f117cc(*unaff_x23);
  FUN_030f24a8(uVar2,in_stack_00000008,*unaff_x22);
  lVar3 = thunk_FUN_01f117cc(*unaff_x21);
  FUN_035ac8e8(lVar3,0);
  *(undefined8 *)(lVar3 + 0x10) = uVar2;
  thunk_FUN_01f51358((undefined8 *)(lVar3 + 0x10),uVar2);
  return lVar3;
}


