/*
FUNCTION_NAME: OVRManager$$add_HMDLost
ENTRY_POINT: 0907eea4
PROGRAM: Hyper-libil2cpp.so
SCORE: 84
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__add_HMDLost
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x19;
  undefined8 uVar4;
  undefined4 uVar5;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s12;
  float unaff_s13;
  float unaff_s15;
  float fStack0000000000000008;
  float fStack000000000000000c;
  float in_stack_00000010;
  
  puVar1 = PTR_DAT_0ac09788;
  if (param_5 != 0) {
    uVar5 = FUN_0a1884ac(param_5,0);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x40);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar2 = FUN_0a17b398(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(unaff_x19 + 0x40) == 0) ||
         (lVar3 = FUN_0a17834c(*(long *)(unaff_x19 + 0x40),0), lVar3 == 0)) goto LAB_0907efcc;
      FUN_0a18aea0(unaff_s15 * unaff_s9 + unaff_s11,unaff_s8 * unaff_s9 + unaff_s12,
                   unaff_s10 * unaff_s9 + unaff_s13,uVar5,param_2,param_3,param_4,lVar3,0);
    }
    uVar4 = *(undefined8 *)(unaff_x19 + 0x48);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_049a583c();
    }
    uVar2 = FUN_0a17b398(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if ((*(long *)(unaff_x19 + 0x48) != 0) &&
       (lVar3 = FUN_0a17834c(*(long *)(unaff_x19 + 0x48),0), lVar3 != 0)) {
      FUN_0a18aea0(in_stack_00000010 - unaff_s15 * unaff_s9,
                   fStack000000000000000c - unaff_s8 * unaff_s9,
                   fStack0000000000000008 - unaff_s10 * unaff_s9,uVar5,param_2,param_3,param_4,lVar3
                   ,0);
      return;
    }
  }
LAB_0907efcc:
                    /* WARNING: Subroutine does not return */
  FUN_0494818c();
}


