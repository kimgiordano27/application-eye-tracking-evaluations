/*
FUNCTION_NAME: OVRPlugin.OVRP_1_54_0$$.cctor
ENTRY_POINT: 033f418c
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x033f427c) */

undefined8 OVRPlugin_OVRP_1_54_0___cctor(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *unaff_x19;
  long unaff_x21;
  char cStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_01d7d918(StringLiteral_5312);
    *(undefined1 *)(unaff_x21 + 0xba4) = 1;
  }
  uVar1 = FUN_033f42e8(param_2);
  lVar3 = thunk_FUN_01de27b8(*unaff_x19);
  FUN_033f9fdc(lVar3,uVar1 & 1,1,0);
  thunk_FUN_01da0934();
  lVar4 = FUN_01d996c0((long *)(param_2 + 0x18),lVar3,0);
  if (lVar4 == 0) {
    uVar2 = FUN_033f42e8(param_2);
    if ((uVar1 & 1) != (uVar2 & 1)) {
      cStack000000000000000c = '\0';
      FUN_033f4894(lVar3,&stack0x0000000c);
      lVar4 = *(long *)(param_2 + 0x18);
      thunk_FUN_01da0934();
      if (lVar4 == lVar3) {
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01d7db70();
        }
        FUN_033f48b4(lVar3);
      }
      if (cStack000000000000000c != '\0') {
        FUN_01dccd6c(lVar3);
      }
    }
    uVar5 = 1;
  }
  else {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01d7db70();
    }
    FUN_03401470(lVar3,0);
    uVar5 = 0;
  }
  return uVar5;
}


