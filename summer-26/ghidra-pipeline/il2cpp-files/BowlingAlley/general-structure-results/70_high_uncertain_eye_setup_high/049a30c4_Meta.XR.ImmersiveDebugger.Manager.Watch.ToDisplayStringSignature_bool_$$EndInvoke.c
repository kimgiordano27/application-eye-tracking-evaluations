/*
FUNCTION_NAME: Meta.XR.ImmersiveDebugger.Manager.Watch.ToDisplayStringSignature<bool>$$EndInvoke
ENTRY_POINT: 049a30c4
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 74
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_ImmersiveDebugger_Manager_Watch_ToDisplayStringSignature<bool>__EndInvoke
               (undefined8 param_1,void *param_2,long param_3)

{
  long *plVar1;
  void *__src;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x19;
  long *unaff_x20;
  undefined1 *__dest;
  ulong __n;
  void *unaff_x23;
  undefined1 *__dest_00;
  undefined8 uVar5;
  undefined1 *__src_00;
  long unaff_x27;
  long unaff_x29;
  
  __n = (ulong)*(uint *)(*(long *)(*(long *)(*(long *)(param_3 + 0x20) + 0xc0) + 0x98) + 0xfc);
  uVar4 = __n + 0xf & 0x1fffffff0;
  __dest = &stack0x00000000 + -uVar4;
  __src_00 = __dest + -uVar4;
  __dest_00 = __src_00 + -uVar4;
  memcpy(__dest,param_2,__n);
  if (unaff_x20 != (long *)0x0) {
    lVar3 = *unaff_x20;
    *(undefined1 **)(unaff_x29 + -0x20) = __dest;
    *(undefined1 **)(unaff_x29 + -0x18) = __src_00;
    (**(code **)(*(long *)(lVar3 + 0x9b0) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 0x9b0) + 8));
    memcpy(unaff_x23,__src_00,__n);
    memcpy(__dest_00,unaff_x23,__n);
    lVar3 = *unaff_x20;
    *(undefined1 **)(unaff_x29 + -0x10) = __dest_00;
    (**(code **)(*(long *)(lVar3 + 0x9e0) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 0x9e0) + 8));
    uVar5 = *(undefined8 *)(unaff_x29 + -0x20);
    memcpy(__dest_00 + -uVar4,unaff_x23,__n);
    FUN_032d5cbc();
    plVar1 = (long *)thunk_FUN_032cddd4();
    if (*plVar1 != 0) {
      FUN_063d4c04(*plVar1,uVar5,0);
      plVar1 = (long *)thunk_FUN_032cddd4();
      if (*plVar1 != 0) {
        FUN_063d4c04(*plVar1,uVar5,0);
        lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108))
                          ();
        if (lVar3 != 0) {
          lVar3 = (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x108)
                  )();
          __src = (void *)thunk_FUN_032cddd4();
          memcpy(__dest,__src,__n);
          if (lVar3 == 0) goto LAB_049a3310;
          puVar2 = *(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x118);
          uVar5 = *puVar2;
          *(undefined1 **)(unaff_x29 + -0x10) = __dest;
          (*(code *)puVar2[2])(uVar5,puVar2,lVar3,unaff_x29 + -0x10,unaff_x29 + -0x20);
          (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0x120))();
        }
        (*(code *)**(undefined8 **)(*(long *)(*(long *)(unaff_x19 + 0x20) + 0xc0) + 0xe0))();
        if (*(long *)(unaff_x27 + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
  }
LAB_049a3310:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


