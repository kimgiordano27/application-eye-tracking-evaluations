/*
FUNCTION_NAME: OVRPlugin$$GetPassthroughCapabilityFlags
ENTRY_POINT: 090a15bc
PROGRAM: Hyper-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__GetPassthroughCapabilityFlags
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long *unaff_x19;
  long unaff_x22;
  long lVar2;
  undefined4 uVar3;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined8 in_stack_00000018;
  
  *(undefined1 *)(unaff_x22 + 0x10) = 0;
  uVar3 = FUN_090a1648();
  *(undefined4 *)(unaff_x22 + 0x3c) = uVar3;
  *(undefined4 *)(unaff_x22 + 0x40) = param_2;
  *(undefined4 *)(unaff_x22 + 0x44) = param_3;
  lVar2 = *unaff_x19;
  FUN_0904d4ec(&stack0x00000000 + 4,param_7,&stack0x00000020,0);
  if (lVar2 != 0) {
    *(ulong *)(lVar2 + 0x28) = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
    *(undefined8 *)(lVar2 + 0x20) = in_stack_00000000._4_8_;
    *(undefined8 *)(lVar2 + 0x34) = in_stack_00000018;
    *(ulong *)(lVar2 + 0x2c) = CONCAT44(uStack0000000000000014,uStack0000000000000010);
    if ((*(char *)(param_4 + 0x38) == '\0') || (lVar2 = *(long *)(param_4 + 0x48), lVar2 == 0)) {
      return;
    }
    lVar1 = *unaff_x19;
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x10) = 1;
      if (*(long *)(lVar1 + 0x18) != 0) {
        FUN_0909b49c(*(long *)(lVar1 + 0x18),lVar2,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


