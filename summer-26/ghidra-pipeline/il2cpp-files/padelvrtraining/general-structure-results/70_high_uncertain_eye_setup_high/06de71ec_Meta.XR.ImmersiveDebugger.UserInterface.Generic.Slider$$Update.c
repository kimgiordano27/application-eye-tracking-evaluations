/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Slider$$Update
ENTRY_POINT: 06de71ec
PROGRAM: padelvrtraining-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_1;ui_or_gameplay_sink_hits_2;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Slider__Update(undefined8 param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long unaff_x19;
  int unaff_w21;
  ulong unaff_x24;
  int iVar3;
  ulong uVar4;
  
  uVar4 = unaff_x24 >> 1 & 0x7fffffff;
  do {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03d8f26c();
    }
    if (*(int *)(lVar2 + 0xe0) == 0) {
      thunk_FUN_03db619c();
    }
    if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
      FUN_03d8f26c();
    }
    FUN_06de7314(param_1,uVar4,unaff_x24 & 0xffffffff,param_2);
    iVar3 = (int)uVar4;
    uVar1 = iVar3 - 1;
    uVar4 = (ulong)uVar1;
  } while (uVar1 != 0 && 0 < iVar3);
  if (1 < (int)unaff_x24) {
    do {
      lVar2 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03d8f26c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03d8f26c();
      }
      if (*(int *)(lVar2 + 0xe0) == 0) {
        thunk_FUN_03db619c();
      }
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03d8f26c();
      }
      FUN_06de6a80(param_1,param_2,unaff_w21);
      if ((*(byte *)(*(long *)(unaff_x19 + 0x20) + 0x135) & 1) == 0) {
        FUN_03d8f26c();
      }
      FUN_06de7314(param_1,1,-param_2 + unaff_w21,param_2);
      unaff_w21 = unaff_w21 + -1;
    } while (2 < -param_2 + unaff_w21 + 2);
  }
  return;
}


