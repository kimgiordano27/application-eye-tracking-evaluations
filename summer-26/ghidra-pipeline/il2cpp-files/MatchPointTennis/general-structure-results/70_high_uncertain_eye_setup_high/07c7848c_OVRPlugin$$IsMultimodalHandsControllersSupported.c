/*
FUNCTION_NAME: OVRPlugin$$IsMultimodalHandsControllersSupported
ENTRY_POINT: 07c7848c
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 77
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x07c786d8) */

float OVRPlugin__IsMultimodalHandsControllersSupported
                (undefined1 param_1 [16],float param_2,float param_3)

{
  undefined *puVar1;
  long *unaff_x20;
  float fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float unaff_s10;
  float fVar6;
  float unaff_s11;
  float unaff_s12;
  float fStack0000000000000004;
  undefined8 in_stack_00000010;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  float fStack0000000000000024;
  float fStack000000000000002c;
  
  fStack0000000000000024 = param_2;
  fVar2 = (float)FUN_09516eb8();
  fVar5 = unaff_s12 * fStack0000000000000024;
  fVar6 = unaff_s10 * fStack0000000000000024;
  fStack000000000000002c = unaff_s12;
  if (DAT_0a51bf42 == '\0') {
    FUN_04447ba8(PTR_DAT_09f1e748);
    DAT_0a51bf42 = '\x01';
  }
  puVar1 = PTR_DAT_09f1e748;
  fVar5 = unaff_s11 * param_3 - fVar5;
  fVar4 = unaff_s12 * fVar2 - unaff_s10 * param_3;
  fVar6 = fVar6 - unaff_s11 * fVar2;
  if (*(int *)(*(long *)PTR_DAT_09f1e748 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  fVar5 = SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4);
  if (fVar5 <= DAT_01c7607c) {
    if (DAT_0a51bf43 == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e740);
      DAT_0a51bf43 = '\x01';
    }
    fVar4 = *(float *)(*(long *)(*unaff_x20 + 0xb8) + 4);
  }
  else {
    fVar4 = fVar4 / fVar5;
  }
  fStack0000000000000004 = fVar4;
  fVar5 = (float)FUN_0770668c(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_,
                              0);
  fStack0000000000000004 = fVar4;
  fVar6 = (float)FUN_0770668c(uStack000000000000001c,uStack0000000000000018,in_stack_00000010._4_4_,
                              fVar2,fStack0000000000000024,param_3,0);
  if (((0.0 <= fVar5) || (fVar4 = 1.0, 0.0 <= fVar6)) &&
     ((fVar5 <= 0.0 || (fVar4 = 0.0, fVar6 <= 0.0)))) {
    if (DAT_0a51bf3f == '\0') {
      FUN_04447ba8(PTR_DAT_09f1e748);
      DAT_0a51bf3f = '\x01';
    }
    fVar6 = fStack000000000000002c * fStack000000000000002c;
    fVar4 = fStack0000000000000024 * fStack0000000000000024;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_044a54b4();
    }
    fVar6 = SQRT((fVar6 + unaff_s10 * unaff_s10 + unaff_s11 * unaff_s11) *
                 (param_3 * param_3 + fVar2 * fVar2 + fVar4));
    fVar4 = 0.0;
    if (DAT_01c75bcc <= fVar6) {
      fVar6 = (fStack000000000000002c * param_3 +
              unaff_s10 * fVar2 + unaff_s11 * fStack0000000000000024) / fVar6;
      if (fVar6 < -1.0) {
        fVar6 = -1.0;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_044a54b4();
      }
      dVar3 = acos((double)fVar6);
      fVar4 = (float)dVar3 * DAT_01c768e0;
    }
    fVar4 = ABS(fVar5) / fVar4;
  }
  return fVar4;
}


