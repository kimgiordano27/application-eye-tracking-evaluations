/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Inspector$$UpdateInstanceState
ENTRY_POINT: 05aabf0c
PROGRAM: vandalizer-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_2;validity_or_gating_hits_3;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Inspector__UpdateInstanceState(ulong param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *unaff_x19;
  int unaff_w20;
  long *unaff_x21;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_1 & 1) == 0) {
    FUN_0322bef4();
  }
  if (*unaff_x21 == 0) {
    Oculus_Interaction_TransformExtensions_<>c__DisplayClass3_0___ctor(0x32,0);
  }
  if ((unaff_w20 < 0) || (*(int *)((long)unaff_x21 + 0xc) <= unaff_w20)) {
    FUN_05e22bd8(0);
  }
  lVar2 = *unaff_x21;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar1 = (int)unaff_x21[1] + unaff_w20;
  if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2398();
  }
  lVar2 = lVar2 + (long)(int)uVar1 * 0x20;
  uVar5 = *(undefined8 *)(lVar2 + 0x20);
  uVar4 = *(undefined8 *)(lVar2 + 0x38);
  uVar3 = *(undefined8 *)(lVar2 + 0x30);
  unaff_x19[1] = *(undefined8 *)(lVar2 + 0x28);
  *unaff_x19 = uVar5;
  unaff_x19[3] = uVar4;
  unaff_x19[2] = uVar3;
  return;
}


