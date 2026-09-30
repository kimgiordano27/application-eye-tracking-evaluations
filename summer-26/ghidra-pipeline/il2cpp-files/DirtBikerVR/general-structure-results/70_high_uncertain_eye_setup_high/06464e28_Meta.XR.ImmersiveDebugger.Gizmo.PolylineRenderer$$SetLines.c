/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Gizmo.PolylineRenderer$$SetLines
ENTRY_POINT: 06464e28
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Gizmo_PolylineRenderer__SetLines(long param_1)

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
  long in_stack_00000298;
  
code_r0x06464e28:
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xc0) + 0x70);
  memcpy(&stack0x000001c0,&stack0x000000e8,0xd8);
  FUN_04e3e040(unaff_x21,&stack0x000001c0,uVar4);
  do {
    unaff_w24 = unaff_w24 + 1;
    if (in_stack_00000000._4_4_ <= unaff_w24) {
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000298) {
        return;
      }
      goto LAB_06464ea0;
    }
    FUN_0453d9a4(&stack0x00000008,&stack0x00000010,
                 *(undefined8 *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x60));
    unaff_x21 = *(long *)(unaff_x20 + 0x10);
    if (unaff_x21 == 0) {
LAB_06464e8c:
      if (*(long *)(unaff_x23 + 0x28) == in_stack_00000298) {
                    /* WARNING: Subroutine does not return */
        FUN_03a8a9c0();
      }
LAB_06464ea0:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    memcpy(&stack0x000000e8,&stack0x00000010,0xd8);
    lVar2 = *(long *)(unaff_x21 + 0x10);
    lVar3 = *(long *)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x68);
    *(int *)(unaff_x21 + 0x1c) = *(int *)(unaff_x21 + 0x1c) + 1;
    if (lVar2 == 0) goto LAB_06464e8c;
    uVar1 = *(uint *)(unaff_x21 + 0x18);
    if (*(uint *)(lVar2 + 0x18) <= uVar1) break;
    *(uint *)(unaff_x21 + 0x18) = uVar1 + 1;
    memcpy((void *)(lVar2 + (long)(int)uVar1 * (long)unaff_w25 + 0x20),&stack0x000000e8,0xd8);
  } while( true );
  param_1 = *(long *)(lVar3 + 0x20);
  goto code_r0x06464e28;
}


