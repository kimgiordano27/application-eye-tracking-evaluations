/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.DebugGizmos$$get_Renderer
ENTRY_POINT: 06464748
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_DebugGizmos__get_Renderer(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar4;
  long unaff_x23;
  int unaff_w24;
  int unaff_w25;
  undefined8 in_stack_00000000;
  long in_stack_00000118;
  
  while( true ) {
    lVar2 = *(long *)(unaff_x21 + 0x10);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar2 == 0) break;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (uVar1 < *(uint *)(lVar2 + 0x18)) {
      *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
      memcpy((void *)(lVar2 + (long)(int)uVar1 * (long)unaff_w25 + 0x20),&stack0x00000068,0x58);
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
      memcpy(&stack0x000000c0,&stack0x00000068,0x58);
      FUN_04df9f10(unaff_x21,&stack0x000000c0,uVar4);
    }
    unaff_w24 = unaff_w24 + 1;
    if (in_stack_00000000._4_4_ <= unaff_w24) {
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000118) {
        return;
      }
      goto LAB_06464814;
    }
    FUN_0453d900(&stack0x00000008,&stack0x00000010,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60));
    unaff_x21 = *(long *)(unaff_x20 + 0x10);
    if (unaff_x21 == 0) break;
    memcpy(&stack0x00000068,&stack0x00000010,0x58);
  }
  if (*(long *)(unaff_x23 + 0x28) == in_stack_00000118) {
                    /* WARNING: Subroutine does not return */
    FUN_03a8a9c0();
  }
LAB_06464814:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


