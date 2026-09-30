/*
FUNCTION_NAME: Unity.Burst.Intrinsics.Arm.Neon$$vaddvq_f64
ENTRY_POINT: 0636aa04
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 87
LABEL: attempted_eye_tracking_permission_or_feature_high
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_1;validity_or_gating_hits_8;attempted_eye_tracking_permission_or_feature_enable;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Burst_Intrinsics_Arm_Neon__vaddvq_f64(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *unaff_x19;
  long *unaff_x20;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x21;
  undefined8 uVar6;
  long unaff_x24;
  long *unaff_x25;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  FUN_0636ae78();
  *unaff_x20 = unaff_x21;
  thunk_FUN_0333a630();
  if (*unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  lVar2 = FUN_0636aebc(*unaff_x20,*(undefined8 *)(unaff_x19 + 0x10),*(undefined8 *)(unaff_x19 + 0xe)
                      );
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
  _in_stack_00000030 = FUN_0599899c(lVar2,0,0);
  uVar3 = FUN_0584eb5c(&stack0x00000030,0);
  if ((uVar3 & 1) == 0) {
    *unaff_x19 = 0;
    *(undefined1 (*) [16])(unaff_x19 + 0x12) = _in_stack_00000030;
    thunk_FUN_0333a630(unaff_x19 + 0x12,0);
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    System_Array__InternalArray__ICollection_Remove<OVRPlugin_EyeGazeState>
              (unaff_x19 + 2,&stack0x00000030);
  }
  else {
    FUN_0584eb78(&stack0x00000030,0);
    if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(long *)(unaff_x24 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(char *)(*(long *)(unaff_x24 + 0x38) + 0x2c) == '\0') {
      uVar4 = 0;
    }
    else {
      if (*(long *)(unaff_x19 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      uVar4 = *(undefined8 *)(*(long *)(unaff_x19 + 10) + 0x10);
      uVar6 = *(undefined8 *)(unaff_x19 + 0x10);
      lVar2 = thunk_FUN_032a56a0(*(undefined8 *)Newtonsoft_Json_JsonSerializationException_TypeInfo)
      ;
      FUN_05ff78c0(lVar2,uVar4,uVar6,0);
      plVar5 = (long *)(unaff_x24 + 0x30);
      *plVar5 = lVar2;
      thunk_FUN_0333a630(plVar5,lVar2);
      if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      lVar2 = FUN_05ff79d4(*plVar5,*(undefined8 *)(unaff_x24 + 0x38),
                           *(undefined8 *)(unaff_x19 + 0xe),0);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      _in_stack_00000020 = FUN_04a4b83c(lVar2,0,*(undefined8 *)UnityEngine_Texture___TypeInfo);
      uVar3 = FUN_04ed58b8(&stack0x00000020,
                           *(undefined8 *)UnityEngine_TextCore_Text_TextProcessingElement___TypeInfo
                          );
      if ((uVar3 & 1) == 0) {
        *unaff_x19 = 1;
        *(undefined1 (*) [16])(unaff_x19 + 0x16) = _in_stack_00000020;
        thunk_FUN_0333a630(unaff_x19 + 0x16,0);
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
        }
        FUN_0354dcb8(unaff_x19 + 2,&stack0x00000020);
        return;
      }
      uVar4 = FUN_04ed5904(&stack0x00000020,
                           *(undefined8 *)UnityEngine_TextCore_Text_TextElementInfo___TypeInfo);
      if (unaff_x24 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      *(undefined8 *)(unaff_x24 + 0x20) = uVar4;
      thunk_FUN_0333a630();
      uVar4 = 1;
    }
    *unaff_x19 = 0xfffffffe;
    puVar1 = PTR_DAT_07286810;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_032cd7c0();
    }
    FUN_045ff158(unaff_x19 + 2,uVar4,*(undefined8 *)puVar1);
  }
  return;
}


