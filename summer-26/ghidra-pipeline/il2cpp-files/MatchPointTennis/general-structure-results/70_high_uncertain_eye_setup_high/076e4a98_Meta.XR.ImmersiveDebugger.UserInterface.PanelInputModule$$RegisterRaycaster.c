/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.PanelInputModule$$RegisterRaycaster
ENTRY_POINT: 076e4a98
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ray_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ray_or_cast_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


undefined8 Meta_XR_ImmersiveDebugger_UserInterface_PanelInputModule__RegisterRaycaster(void)

{
  int in_w8;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long *unaff_x23;
  float fVar1;
  double in_stack_00000010;
  
  if (1 < in_w8) {
    fVar1 = *(float *)(unaff_x20 + 0x24);
    if (*(char *)(unaff_x22 + 0x7a1) == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      *(undefined1 *)(unaff_x22 + 0x7a1) = 1;
    }
    if (*(int *)(*unaff_x23 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    modf((double)fVar1,&stack0x00000010);
    FUN_094cd468();
    if (2 < *(int *)(unaff_x20 + 0x18)) {
      fVar1 = *(float *)(unaff_x20 + 0x28);
      if (*(char *)(unaff_x22 + 0x7a1) == '\0') {
        FUN_04447ba8(PTR_DAT_09f1e748);
        *(undefined1 *)(unaff_x22 + 0x7a1) = 1;
      }
      if (*(int *)(*unaff_x23 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      modf((double)fVar1,&stack0x00000010);
      FUN_094cd4c0();
      if (3 < *(int *)(unaff_x20 + 0x18)) {
        fVar1 = *(float *)(unaff_x20 + 0x2c);
        if (*(char *)(unaff_x22 + 0x7a1) == '\0') {
          FUN_04447ba8(PTR_DAT_09f1e748);
          *(undefined1 *)(unaff_x22 + 0x7a1) = 1;
        }
        if (*(int *)(*unaff_x23 + 0xe4) == 0) {
          thunk_FUN_044a54b4();
        }
        modf((double)fVar1,&stack0x00000010);
        FUN_094cd518();
      }
    }
  }
  *unaff_x19 = unaff_x21;
  thunk_FUN_044bb4b4();
  return 1;
}


