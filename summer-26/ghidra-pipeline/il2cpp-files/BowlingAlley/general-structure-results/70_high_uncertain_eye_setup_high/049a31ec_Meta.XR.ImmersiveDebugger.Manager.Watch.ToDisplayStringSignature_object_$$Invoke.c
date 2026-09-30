/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<object>$$Invoke
ENTRY_POINT: 049a31ec
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 71
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_3;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<object>__Invoke
               (long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  void *__src;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x19;
  void *unaff_x21;
  size_t unaff_x22;
  long unaff_x27;
  long unaff_x29;
  
  plVar1 = (long *)thunk_FUN_032cddd4(param_2,*(long *)(*(long *)(*(long *)(param_1 + 0xc0) + 0x10)
                                                       + 0x80) + 0x400);
  if (*plVar1 != 0) {
    FUN_063d4c04();
    lVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108))();
    if (lVar2 != 0) {
      lVar2 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108))();
      __src = (void *)thunk_FUN_032cddd4();
      memcpy(unaff_x21,__src,unaff_x22);
      if (lVar2 == 0) goto LAB_049a3310;
      puVar4 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118);
      uVar3 = *puVar4;
      *(void **)(unaff_x29 + -0x10) = unaff_x21;
      (*(code *)puVar4[2])(uVar3,puVar4,lVar2,unaff_x29 + -0x10,unaff_x29 + -0x20);
      (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120))();
    }
    (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe0))();
    if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_049a3310:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


