/*
FUNCTION_NAME: OVRManager$$DeregisterEventListener
ENTRY_POINT: 01a02b58
PROGRAM: Lovesick-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__DeregisterEventListener(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x19;
  long unaff_x20;
  undefined8 *unaff_x21;
  undefined8 uVar4;
  
  thunk_FUN_00d48444(*(undefined8 *)(param_1 + 0xfd8));
  thunk_FUN_00d48444(System_Collections_Generic_Dictionary<InstanceHandle,_Inspector>_TypeInfo);
  thunk_FUN_00d48444(
                    System_Linq_Expressions_Interpreter_InitializeLocalInstruction_MutableBox_TypeInfo
                    );
  thunk_FUN_00d48444(Method_System_Threading_Tasks_Task_Run<string>__);
  thunk_FUN_00d48444(OVRTrackedKeyboard_<StartKeyboardTrackingCoroutine>d__93_TypeInfo);
  *(undefined1 *)(unaff_x20 + 0x8cd) = 1;
  lVar2 = thunk_FUN_00d62348(*unaff_x21);
  if (lVar2 != 0) {
    FUN_016f27fc();
    FUN_01954c14();
    if (*(long *)(unaff_x19 + 0xc0) != 0) {
      uVar3 = FUN_010c3404(*(long *)(unaff_x19 + 0xc0),
                           *(undefined8 *)
                            System_Collections_Generic_Dictionary<InstanceHandle,_Inspector>_TypeInfo
                          );
      *(undefined8 *)(unaff_x19 + 0x130) = uVar3;
      if (*(long *)(unaff_x19 + 0x118) == 0) {
        lVar2 = FUN_0268fd4c();
        if (lVar2 == 0) goto LAB_01a02c88;
        FUN_010e5800(lVar2,*(undefined8 *)Method_System_Threading_Tasks_Task_Run<string>__);
        FUN_01a02c8c();
      }
      puVar1 = OVRTrackedKeyboard_<StartKeyboardTrackingCoroutine>d__93_TypeInfo;
      if (*(long *)(unaff_x19 + 0xc0) != 0) {
        uVar4 = *(undefined8 *)(unaff_x19 + 0x128);
        uVar3 = FUN_0268fd10(*(long *)(unaff_x19 + 0xc0),0);
        lVar2 = thunk_FUN_00d62348(*(undefined8 *)puVar1);
        if (lVar2 != 0) {
          FUN_01a02d0c(lVar2,uVar4,uVar3);
          *(long *)(unaff_x19 + 0x138) = lVar2;
          FUN_01954cb8();
          return;
        }
      }
    }
  }
LAB_01a02c88:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


