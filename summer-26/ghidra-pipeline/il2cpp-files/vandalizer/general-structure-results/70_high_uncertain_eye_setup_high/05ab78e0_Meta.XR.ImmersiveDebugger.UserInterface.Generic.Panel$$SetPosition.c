/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Panel$$SetPosition
ENTRY_POINT: 05ab78e0
PROGRAM: vandalizer-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_UserInterface_Generic_Panel__SetPosition(void)

{
  uint uVar1;
  long lVar2;
  int unaff_w19;
  void *unaff_x20;
  long *unaff_x21;
  long lVar3;
  
  FUN_05e22bd8(0);
  lVar3 = *unaff_x21;
  lVar2 = unaff_x21[1];
  memcpy(&stack0x00000070,unaff_x20,0x70);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_031f2390();
  }
  uVar1 = (int)lVar2 + unaff_w19;
  memcpy(&stack0x00000000,&stack0x00000070,0x70);
  if (uVar1 < *(uint *)(lVar3 + 0x18)) {
    memcpy((void *)(lVar3 + (long)(int)uVar1 * 0x70 + 0x20),&stack0x00000000,0x70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_031f2398();
}


