/*
FUNCTION_NAME: Mono.CSharp.CSharpParser$$case_24
ENTRY_POINT: 023584bc
PROGRAM: vrlegs-libil2cpp.so
SCORE: 81
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_6;weak_xr_or_state_hits_6;validity_or_gating_hits_6;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_6
*/


/* WARNING: Removing unreachable block (ram,0x023583a0) */
/* WARNING: Removing unreachable block (ram,0x023585a8) */

void Mono_CSharp_CSharpParser__case_24(undefined8 param_1,int param_2)

{
  long *plVar1;
  undefined8 *unaff_x19;
  long unaff_x20;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 unaff_x21;
  long lVar4;
  int unaff_w24;
  int unaff_w25;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  undefined8 *unaff_x29;
  undefined1 auVar5 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  long in_stack_00000020;
  undefined8 in_stack_00000028;
  
  if (param_2 != 1) {
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01b3fef0(param_1);
  }
  plVar1 = (long *)__cxa_begin_catch(param_1);
  lVar4 = *plVar1;
  __cxa_end_catch();
  while( true ) {
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(unaff_x21,0);
    }
    if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01a28d1c(lVar4);
    }
    unaff_w25 = unaff_w25 + 1;
    if (unaff_w24 <= unaff_w25) {
      return;
    }
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    in_stack_00000008._4_1_ = '\0';
    FUN_027e0bd8(uVar3,(long)&stack0x00000008 + 4,0);
    if (*(long *)(unaff_x20 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    FUN_022661a4(*(long *)(unaff_x20 + 0x18),&stack0x00000020,*(undefined8 *)PTR_DAT_03ce1498);
    lVar4 = in_stack_00000020;
    if (in_stack_00000008._4_1_ != '\0') {
      OVRManager_<>c__<InitOVRManager>b__424_0(uVar3,0);
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    auVar5 = FUN_01fb4a38(*unaff_x19,unaff_x19[1],*(int *)(unaff_x20 + 0x10) * unaff_w25,
                          *(undefined4 *)(lVar4 + 0x18),*(undefined8 *)PTR_DAT_03ce1478);
    _in_stack_00000010 = auVar5;
    if (0 < *(int *)(lVar4 + 0x18)) {
      uVar2 = 0;
      do {
        FUN_02233354(&stack0x00000010,uVar2 & 0xffffffff,(long)&stack0x00000028 + 4,*unaff_x28);
        if (*(uint *)(lVar4 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c44();
        }
        in_stack_00000028._4_4_ = in_stack_00000028._4_4_ + *(float *)(lVar4 + 0x20 + uVar2 * 4);
        FUN_02233490(&stack0x00000010,uVar2 & 0xffffffff,(long)&stack0x00000028 + 4,*unaff_x29);
        uVar2 = uVar2 + 1;
      } while ((long)uVar2 < (long)*(int *)(lVar4 + 0x18));
    }
    in_stack_00000028._4_4_ = 0.0;
    FUN_01f22fa0(lVar4,(long)&stack0x00000028 + 4,*(undefined8 *)PTR_DAT_03ce1468);
    unaff_x21 = *(undefined8 *)(unaff_x20 + 0x20);
    in_stack_00000008._4_1_ = '\0';
    FUN_027e0bd8(unaff_x21,(long)&stack0x00000008 + 4,0);
    if (*(long *)(unaff_x20 + 0x20) == 0) break;
    FUN_022492b8(*(long *)(unaff_x20 + 0x20),lVar4,*unaff_x26);
    lVar4 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01ab6c3c();
}


