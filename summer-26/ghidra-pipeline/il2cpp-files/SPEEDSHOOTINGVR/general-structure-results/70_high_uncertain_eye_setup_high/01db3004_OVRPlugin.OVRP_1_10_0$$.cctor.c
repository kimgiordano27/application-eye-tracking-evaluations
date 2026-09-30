/*
FUNCTION_NAME: OVRPlugin.OVRP_1_10_0$$.cctor
ENTRY_POINT: 01db3004
PROGRAM: SPEEDSHOOTINGVR-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 OVRPlugin_OVRP_1_10_0___cctor(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong unaff_x19;
  long unaff_x21;
  long unaff_x23;
  int unaff_w24;
  undefined8 in_stack_00000008;
  
  puVar2 = PTR_DAT_0235a4a8;
  puVar1 = PTR_DAT_0235a4a0;
  puVar5 = PTR_DAT_0234c6a8;
  if (unaff_x23 == 0) {
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar3 = thunk_FUN_010400dc();
    puVar5 = PTR_DAT_0235a4b0;
  }
  else {
    if (unaff_x21 != 0) {
      if (-2 < unaff_w24) {
        in_stack_00000008 = 0;
        FUN_01d5f2f0(&stack0x00000008,0,0,0,0,unaff_w24,0);
        uVar3 = thunk_FUN_010400dc(*(undefined8 *)puVar2);
        FUN_01db3160();
        uVar4 = thunk_FUN_010400dc(*(undefined8 *)puVar5);
        FUN_01daf23c(uVar4,uVar3,*(undefined8 *)puVar1);
        if ((unaff_x19 & 1) == 0) {
          FUN_01db3258(uVar4,0);
        }
        else {
          FUN_01daf344();
        }
        return uVar3;
      }
      thunk_FUN_010303a8(PTR_DAT_0234ba68);
      uVar3 = thunk_FUN_010400dc();
      uVar4 = thunk_FUN_010303a8(PTR_DAT_0235a4b8);
      FUN_01d45cb4(uVar3,uVar4,0);
      goto LAB_01db3148;
    }
    thunk_FUN_010303a8(PTR_DAT_0234bbe8);
    uVar3 = thunk_FUN_010400dc();
    puVar5 = PTR_DAT_0234c6b0;
  }
  uVar4 = thunk_FUN_010303a8(puVar5);
  FUN_01c5e120(uVar3,uVar4,0);
LAB_01db3148:
  uVar4 = thunk_FUN_010303a8(PTR_DAT_0235a4c0);
                    /* WARNING: Subroutine does not return */
  FUN_00fdc400(uVar3,uVar4);
}


