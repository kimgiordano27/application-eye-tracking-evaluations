/*
FUNCTION_NAME: OVREyeGaze$$.ctor
ENTRY_POINT: 02c44f70
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 75
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;ui_interaction;attempted_use
EVIDENCE: strong_eye_source_hits_2;ui_or_gameplay_sink_hits_6;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze___ctor(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  Il2CppObject *pIVar3;
  long unaff_x29;
  undefined8 *in_stack_00000020;
  undefined8 *in_stack_00000028;
  undefined4 uStack0000000000000034;
  byte bStack0000000000000046;
  byte bStack0000000000000047;
  undefined4 uStack000000000000004c;
  
  uVar2 = TurnerEventBroadcaster_get_Interactor_m63F881DCFE524A4D0D9F7816D8BEEBEFF4D64116_inline
                    (*(TurnerEventBroadcaster_t55E5674A6D84397CFFAAF98C179F3B79EC52704E **)
                      (unaff_x29 + -8),(MethodInfo *)0x0);
  *(undefined8 *)(unaff_x29 + -0x50) = uVar2;
  NullCheck(*(void **)(unaff_x29 + -0x50));
  uVar1 = InterfaceFuncInvoker0<int>::Invoke
                    (6,(Il2CppClass *)*in_stack_00000028,*(Il2CppObject **)(unaff_x29 + -0x50));
  *(undefined4 *)(unaff_x29 + -0x54) = uVar1;
  if (*(int *)(unaff_x29 + -0x54) == 2) {
    if (*(int *)(*(long *)(unaff_x29 + -8) + 0x40) == 1) {
      pIVar3 = (Il2CppObject *)
               TurnerEventBroadcaster_get_Axis_mD5A0D80DDA967FDFD1C3CE29BFA45162DDEED9F9_inline
                         (*(TurnerEventBroadcaster_t55E5674A6D84397CFFAAF98C179F3B79EC52704E **)
                           (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pIVar3);
      uStack000000000000004c =
           InterfaceFuncInvoker0<float>::Invoke(0,(Il2CppClass *)*in_stack_00000020,pIVar3);
      TurnerEventBroadcaster_ProcessSmoothTurn_m5108DB2F38573BE0FD27EE01E592BBF18C6EE1AA
                (uStack000000000000004c,*(undefined8 *)(unaff_x29 + -8),0);
    }
    else if (((*(int *)(*(long *)(unaff_x29 + -8) + 0x40) == 0) &&
             (bStack0000000000000047 = *(byte *)(*(long *)(unaff_x29 + -8) + 0x50) & 1,
             bStack0000000000000047 == 0)) &&
            (bStack0000000000000046 = *(byte *)(*(long *)(unaff_x29 + -8) + 0x60) & 1,
            bStack0000000000000046 == 0)) {
      *(undefined1 *)(*(long *)(unaff_x29 + -8) + 0x60) = 1;
      pIVar3 = (Il2CppObject *)
               TurnerEventBroadcaster_get_Axis_mD5A0D80DDA967FDFD1C3CE29BFA45162DDEED9F9_inline
                         (*(TurnerEventBroadcaster_t55E5674A6D84397CFFAAF98C179F3B79EC52704E **)
                           (unaff_x29 + -8),(MethodInfo *)0x0);
      NullCheck(pIVar3);
      uStack0000000000000034 =
           InterfaceFuncInvoker0<float>::Invoke(0,(Il2CppClass *)*in_stack_00000020,pIVar3);
      TurnerEventBroadcaster_ProcessSnapTurn_m53F6C762811BEBFCE03E60A6D717B57C74A960A6
                (uStack0000000000000034,*(undefined8 *)(unaff_x29 + -8),0);
    }
  }
  return;
}


