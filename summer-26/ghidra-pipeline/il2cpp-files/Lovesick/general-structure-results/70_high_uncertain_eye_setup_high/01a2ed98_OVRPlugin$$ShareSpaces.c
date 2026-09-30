/*
FUNCTION_NAME: OVRPlugin$$ShareSpaces
ENTRY_POINT: 01a2ed98
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__ShareSpaces(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3)

{
  int in_w8;
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 in_stack_000000f0;
  undefined4 uStack00000000000000f4;
  undefined4 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_000001a8;
  undefined4 uStack00000000000001b0;
  undefined4 uStack00000000000001b4;
  undefined4 in_stack_000001b8;
  
  if (in_w8 == 0) {
    thunk_FUN_00d32864();
  }
  uVar3 = FUN_01a2eff0(&stack0x000000f0,&stack0x00000160,&stack0x00000120);
  uVar2 = in_stack_000001b8;
  uStack00000000000000f4 = uStack00000000000001b0;
  if (DAT_037750c4 == '\0') {
    thunk_FUN_00d48444(
                      Method_UnityEngine_UIElements_StylePropertyAnimationSystem_ValuesFloat_IsSame__
                      );
    DAT_037750c4 = '\x01';
  }
  lVar1 = *(long *)(*unaff_x21 + 0xb8);
  in_stack_000000f0 =
       FUN_02699088(in_stack_000001a8._4_4_,uStack00000000000000f4,uStack00000000000001b4,uVar2,
                    *(undefined4 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x1c),
                    *(undefined4 *)(lVar1 + 0x20),0);
  uVar2 = FUN_01a2eff0(&stack0x000000f0,&stack0x00000160,&stack0x00000120);
  uStack00000000000001b4 = param_3;
  in_stack_000001a8._4_4_ = FUN_02698e08(uVar3,0);
  in_stack_000001b8 = uVar2;
  uStack00000000000001b0 = param_2;
  in_stack_00000108 = *(undefined8 *)(unaff_x20 + 0x38);
  in_stack_00000100 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x3c);
  *(undefined8 *)(unaff_x24 + 0x84) = *(undefined8 *)(unaff_x20 + 0x44);
  *(undefined8 *)(unaff_x24 + 0x7c) = uVar3;
  if (*(long *)(unaff_x19 + 0x68) != 0) {
    FUN_019a7844(&stack0x00000100,&stack0x000001a0,*(long *)(unaff_x19 + 0x68) + 0x14,0);
    if (*(long *)(unaff_x19 + 0x48) != 0) {
      lVar1 = *(long *)(unaff_x19 + 0x68);
      uVar2 = FUN_0269fcf8(*(long *)(unaff_x19 + 0x48),0);
      if (lVar1 != 0) {
        *(undefined4 *)(lVar1 + 0x70) = uVar2;
        if (*(long *)(unaff_x19 + 0x68) != 0) {
          *(undefined4 *)(*(long *)(unaff_x19 + 0x68) + 0x30) = 2;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


