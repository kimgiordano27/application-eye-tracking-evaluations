/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.SceneDecorator.SceneDecorator$$Start
ENTRY_POINT: 072e95a8
PROGRAM: StellarXV1-libil2cpp.so
SCORE: 78
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs;frame_behavior
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_6;paired_field_refs_with_eye_source;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_SceneDecorator_SceneDecorator__Start(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  long unaff_x21;
  undefined8 uVar4;
  long unaff_x24;
  undefined8 *unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  undefined8 in_stack_000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined8 in_stack_000000b8;
  undefined8 in_stack_000000c0;
  
  FUN_072e415c();
  uVar4 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar1 = FUN_072e86a8();
  lVar2 = FUN_04077674(*unaff_x27,4);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_04077830();
  }
  if ((unaff_x29 != 0) && (lVar3 = thunk_FUN_040b4e00(), lVar3 == 0)) {
LAB_072e9730:
    uVar1 = thunk_FUN_040c2a64();
                    /* WARNING: Subroutine does not return */
    FUN_040776f4(uVar1,0);
  }
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(long *)(lVar2 + 0x20) = unaff_x29;
    thunk_FUN_040ec700();
    if ((unaff_x28 != 0) && (lVar3 = thunk_FUN_040b4e00(), lVar3 == 0)) goto LAB_072e9730;
    if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
      *(long *)(lVar2 + 0x28) = unaff_x28;
      thunk_FUN_040ec700();
      if ((unaff_x24 != 0) && (lVar3 = thunk_FUN_040b4e00(), lVar3 == 0)) goto LAB_072e9730;
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(long *)(lVar2 + 0x30) = unaff_x24;
        thunk_FUN_040ec700();
        if ((unaff_x21 != 0) && (lVar3 = thunk_FUN_040b4e00(), lVar3 == 0)) goto LAB_072e9730;
        if ((*(uint *)(lVar2 + 0x18) & 0xfffffffc) != 0) {
          *(long *)(lVar2 + 0x38) = unaff_x21;
          thunk_FUN_040ec700();
          in_stack_000000c0 = 0;
          in_stack_000000a8 = 0;
          in_stack_000000a0 = 0;
          in_stack_000000b8 = 0;
          in_stack_000000b0 = 0;
          in_stack_00000088 = 0;
          in_stack_00000080 = 0;
          in_stack_00000098 = 0;
          in_stack_00000090 = 0;
          in_stack_00000078 = 0;
          in_stack_00000070 = 0;
          FUN_072e2d7c(&stack0x00000070,uVar4,2,uVar1);
          memcpy(&stack0x00000018,&stack0x00000070,0x58);
          FUN_072e8ec4();
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_04077838();
}


